#pragma once

#include <algorithm>
#include <iostream>
#include <map>
#include <sstream>
#include <stdexcept>

namespace bssnrhstests {

template <typename T>
T convert_string(const std::string& s) {
    std::istringstream iss(s);
    T value;
    iss >> value;
    if (iss.fail() || !iss.eof()) {
        throw std::runtime_error("Invalid conversion from string'" + s +
                                 "' to type.");
    }

    return value;
}

template <>
inline std::string convert_string<std::string>(const std::string& s) {
    return s;
}

// true/false logic
template <>
inline bool convert_string<bool>(const std::string& s) {
    std::string lower_s = s;
    std::transform(lower_s.begin(), lower_s.end(), lower_s.begin(),
                   [](unsigned char c) {
                       return static_cast<unsigned char>(std::tolower(c));
                   });

    if (lower_s == "true" || lower_s == "t" || lower_s == "1") {
        return true;
    }
    if (lower_s == "false" || lower_s == "f" || lower_s == "0") {
        return false;
    }
    throw std::runtime_error("Invalid boolean value: '" + s);
}

inline std::map<std::string, std::string> parse_args(int argc, char* argv[]) {
    std::map<std::string, std::string> args_map;

    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];

        if (arg.length() > 1 && arg[0] == '-') {
            std::string key   = arg;
            std::string value = "";

            // remove leading hyphens
            if (key.length() > 2 && key[1] == '-') {
                key = key.substr(2);
            } else {
                key = key.substr(1);
            }

            size_t equals_position = key.find('=');
            // check if it's a '--key=value' pair, or '--key value' pair, if not
            // it's a "flag"
            if (equals_position != std::string::npos) {
                value = key.substr(equals_position + 1);
                key   = key.substr(0, equals_position);
            } else if (i + 1 < argc && argv[i + 1][0] != '-') {
                // this is when we don't use an equals sign and instead a space
                value = argv[++i];
            } else if (value.empty()) {
                value = "true";
            }

            args_map[key] = value;
        }
    }
    return args_map;
}

// get an argument by name
template <typename T>
T get_arg(const std::map<std::string, std::string>& args_map,
          const std::string& name, const T& default_value) {
    auto it = args_map.find(name);
    if (it != args_map.end()) {
        try {
            return convert_string<T>(it->second);
        } catch (const std::runtime_error& e) {
            std::cerr << "WARNING: coudn't convert value for --" << name
                      << ": into correct value type. Using default value: "
                      << default_value << " -- " << e.what() << std::endl;
            return default_value;
        }
    }
    // nothing found, return default anyway
    return default_value;
}

// get a required argument
template <typename T>
T get_required_arg(const std::map<std::string, std::string>& args_map,
                   const std::string& name, const T& default_value) {
    auto it = args_map.find(name);
    if (it != args_map.end()) {
        try {
            return convert_string<T>(it->second);
        } catch (const std::runtime_error& e) {
            throw std::runtime_error("Error: Value for --" + name +
                                     " is INVALID: " + e.what());
        }
    }
    // nothing found, error out
    throw std::runtime_error("ERROR: Required argument --" + name +
                             " not provided!");
}

// useful for checking a single argument
inline bool has_arg(const std::map<std::string, std::string> args_map,
                    const std::string& name) {
    return args_map.count(name) > 0;
}

}  // namespace bssnrhstests
