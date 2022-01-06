#pragma once
#include <cstdint>
#include <unordered_map>

//Hashing funcs
constexpr uint64_t fnv1a_64(const char* s, size_t count) {
    uint64_t hash = 14695981039346656037ULL;
    for (uint32_t idx = 0; idx < count; ++idx) {
        hash = 1099511628211ULL * (hash ^ static_cast<unsigned char>(s[idx]));
    }
    return hash;
}

constexpr uint64_t operator"" _hash64(const char* s, size_t count) {
    return fnv1a_64(s, count - 1);
}

//Lookup table to decode fnv1a_64 hashed strings
extern std::unordered_map<int64_t, std::string> g_D2UIMessages;