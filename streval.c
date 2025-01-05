#include "streval.h"

int8_t se_strto8(const char *str) {
    int8_t result = 0;
    int8_t sign = 1;
    int i = 0;

    if (str[i] == '-') {
        sign = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return sign * result;
}

uint8_t se_strtou8(const char *str) {
    uint8_t result = 0;
    int i = 0;

    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result;
}

int16_t se_strto16(const char *str) {
    int16_t result = 0;
    int8_t sign = 1;
    int i = 0;

    if (str[i] == '-') {
        sign = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return sign * result;
}

uint16_t se_strtou16(const char *str) {
    uint16_t result = 0;
    int i = 0;

    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result;
}

int32_t se_strto32(const char *str) {
    int32_t result = 0;
    int8_t sign = 1;
    int i = 0;

    if (str[i] == '-') {
        sign = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return sign * result;
}

uint32_t se_strtou32(const char *str) {
    uint32_t result = 0;
    int i = 0;

    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result;
}

int64_t se_strto64(const char *str) {
    int64_t result = 0;
    int8_t sign = 1;
    int i = 0;

    if (str[i] == '-') {
        sign = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return sign * result;
}

uint64_t se_strtou64(const char *str) {
    uint64_t result = 0;
    int i = 0;

    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result;
}

long long se_strtoll(const char *str) {
    long long result = 0;
    int8_t sign = 1;
    int i = 0;

    if (str[i] == '-') {
        sign = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return sign * result;
}

unsigned long long se_strtoull(const char *str) {
    unsigned long long result = 0;
    int i = 0;

    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result;
}

float se_strto32f(const char *str) {
    float result = 0.0f;
    int sign = 1;
    int i = 0;

    if (str[i] == '-') {
        sign = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10.0f + (str[i] - '0');
        i++;
    }

    if (str[i] == '.') {
        i++;
        float decimalPlace = 0.1f;
        while (str[i] >= '0' && str[i] <= '9') {
            result += (str[i] - '0') * decimalPlace;
            decimalPlace /= 10.0f;
            i++;
        }
    }

    return sign * result;
}

double se_strto64f(const char *str) {
    double result = 0.0;
    int sign = 1;
    int i = 0;

    if (str[i] == '-') {
        sign = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10.0 + (str[i] - '0');
        i++;
    }

    if (str[i] == '.') {
        i++;
        double decimalPlace = 0.1;
        while (str[i] >= '0' && str[i] <= '9') {
            result += (str[i] - '0') * decimalPlace;
            decimalPlace /= 10.0;
            i++;
        }
    }

    return sign * result;
}

long double se_strtold(const char *str) {
    long double result = 0.0L;
    int sign = 1;
    int i = 0;

    if (str[i] == '-') {
        sign = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10.0L + (str[i] - '0');
        i++;
    }

    if (str[i] == '.') {
        i++;
        long double decimalPlace = 0.1L;
        while (str[i] >= '0' && str[i] <= '9') {
            result += (str[i] - '0') * decimalPlace;
            decimalPlace /= 10.0L;
            i++;
        }
    }

    return sign * result;
}

int8_t se_bitsto8(const char *str) {
    int8_t result = 0;
    int i = 0;

    while (str[i] == '0' || str[i] == '1') {
        result = (result << 1) | (str[i] - '0');
        i++;
    }

    return result;
}

uint8_t se_bitstou8(const char *str) {
    uint8_t result = 0;
    int i = 0;

    while (str[i] == '0' || str[i] == '1') {
        result = (result << 1) | (str[i] - '0');
        i++;
    }

    return result;
}

int16_t se_bitsto16(const char *str) {
    int16_t result = 0;
    int i = 0;

    while (str[i] == '0' || str[i] == '1') {
        result = (result << 1) | (str[i] - '0');
        i++;
    }

    return result;
}

uint16_t se_bitstou16(const char *str) {
    uint16_t result = 0;
    int i = 0;

    while (str[i] == '0' || str[i] == '1') {
        result = (result << 1) | (str[i] - '0');
        i++;
    }

    return result;
}

int32_t se_bitsto32(const char *str) {
    int32_t result = 0;
    int i = 0;

    while (str[i] == '0' || str[i] == '1') {
        result = (result << 1) | (str[i] - '0');
        i++;
    }

    return result;
}

uint32_t se_bitstou32(const char *str) {
    uint32_t result = 0;
    int i = 0;

    while (str[i] == '0' || str[i] == '1') {
        result = (result << 1) | (str[i] - '0');
        i++;
    }

    return result;
}

int64_t se_bitsto64(const char *str) {
    int64_t result = 0;
    int i = 0;

    while (str[i] == '0' || str[i] == '1') {
        result = (result << 1) | (str[i] - '0');
        i++;
    }

    return result;
}

uint64_t se_bitstou64(const char *str) {
    uint64_t result = 0;
    int i = 0;

    while (str[i] == '0' || str[i] == '1') {
        result = (result << 1) | (str[i] - '0');
        i++;
    }

    return result;
}

long long se_bitstoll(const char *str) {
    long long result = 0;
    int i = 0;

    while (str[i] == '0' || str[i] == '1') {
        result = (result << 1) | (str[i] - '0');
        i++;
    }

    return result;
}

unsigned long long se_bitstoull(const char *str) {
    unsigned long long result = 0;
    int i = 0;

    while (str[i] == '0' || str[i] == '1') {
        result = (result << 1) | (str[i] - '0');
        i++;
    }

    return result;
}

int8_t se_hexto8(const char *str) {
    int8_t result = 0;
    int i = 0;

    while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'F') || (str[i] >= 'a' && str[i] <= 'f')) {
        result <<= 4; // Shift left by 4 bits (multiply by 16)
        
        if (str[i] >= '0' && str[i] <= '9') {
            result += (str[i] - '0');
        } else if (str[i] >= 'A' && str[i] <= 'F') {
            result += (str[i] - 'A' + 10);
        } else if (str[i] >= 'a' && str[i] <= 'f') {
            result += (str[i] - 'a' + 10);
        }
        i++;
    }

    return result;
}

uint8_t se_hextou8(const char *str) {
    uint8_t result = 0;
    int i = 0;

    while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'F') || (str[i] >= 'a' && str[i] <= 'f')) {
        result <<= 4; // Shift left by 4 bits (multiply by 16)
        
        if (str[i] >= '0' && str[i] <= '9') {
            result += (str[i] - '0');
        } else if (str[i] >= 'A' && str[i] <= 'F') {
            result += (str[i] - 'A' + 10);
        } else if (str[i] >= 'a' && str[i] <= 'f') {
            result += (str[i] - 'a' + 10);
        }
        i++;
    }

    return result;
}

int16_t se_hexto16(const char *str) {
    int16_t result = 0;
    int i = 0;

    while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'F') || (str[i] >= 'a' && str[i] <= 'f')) {
        result <<= 4; // Shift left by 4 bits (multiply by 16)
        
        if (str[i] >= '0' && str[i] <= '9') {
            result += (str[i] - '0');
        } else if (str[i] >= 'A' && str[i] <= 'F') {
            result += (str[i] - 'A' + 10);
        } else if (str[i] >= 'a' && str[i] <= 'f') {
            result += (str[i] - 'a' + 10);
        }
        i++;
    }

    return result;
}

uint16_t se_hextou16(const char *str) {
    uint16_t result = 0;
    int i = 0;

    while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'F') || (str[i] >= 'a' && str[i] <= 'f')) {
        result <<= 4; // Shift left by 4 bits (multiply by 16)
        
        if (str[i] >= '0' && str[i] <= '9') {
            result += (str[i] - '0');
        } else if (str[i] >= 'A' && str[i] <= 'F') {
            result += (str[i] - 'A' + 10);
        } else if (str[i] >= 'a' && str[i] <= 'f') {
            result += (str[i] - 'a' + 10);
        }
        i++;
    }

    return result;
}

int32_t se_hexto32(const char *str) {
    int32_t result = 0;
    int i = 0;

    while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'F') || (str[i] >= 'a' && str[i] <= 'f')) {
        result <<= 4; // Shift left by 4 bits (multiply by 16)
        
        if (str[i] >= '0' && str[i] <= '9') {
            result += (str[i] - '0');
        } else if (str[i] >= 'A' && str[i] <= 'F') {
            result += (str[i] - 'A' + 10);
        } else if (str[i] >= 'a' && str[i] <= 'f') {
            result += (str[i] - 'a' + 10);
        }
        i++;
    }

    return result;
}

uint32_t se_hextou32(const char *str) {
    uint32_t result = 0;
    int i = 0;

    while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'F') || (str[i] >= 'a' && str[i] <= 'f')) {
        result <<= 4; // Shift left by 4 bits (multiply by 16)
        
        if (str[i] >= '0' && str[i] <= '9') {
            result += (str[i] - '0');
        } else if (str[i] >= 'A' && str[i] <= 'F') {
            result += (str[i] - 'A' + 10);
        } else if (str[i] >= 'a' && str[i] <= 'f') {
            result += (str[i] - 'a' + 10);
        }
        i++;
    }

    return result;
}

int64_t se_hexto64(const char *str) {
    int64_t result = 0;
    int i = 0;

    while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'F') || (str[i] >= 'a' && str[i] <= 'f')) {
        result <<= 4; // Shift left by 4 bits (multiply by 16)
        
        if (str[i] >= '0' && str[i] <= '9') {
            result += (str[i] - '0');
        } else if (str[i] >= 'A' && str[i] <= 'F') {
            result += (str[i] - 'A' + 10);
        } else if (str[i] >= 'a' && str[i] <= 'f') {
            result += (str[i] - 'a' + 10);
        }
        i++;
    }

    return result;
}

uint64_t se_hextou64(const char *str) {
    uint64_t result = 0;
    int i = 0;

    while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'F') || (str[i] >= 'a' && str[i] <= 'f')) {
        result <<= 4; // Shift left by 4 bits (multiply by 16)
        
        if (str[i] >= '0' && str[i] <= '9') {
            result += (str[i] - '0');
        } else if (str[i] >= 'A' && str[i] <= 'F') {
            result += (str[i] - 'A' + 10);
        } else if (str[i] >= 'a' && str[i] <= 'f') {
            result += (str[i] - 'a' + 10);
        }
        i++;
    }

    return result;
}

long long hexstoll(const char *str) {
    long long result = 0;
    int i = 0;

    // Loop through each character of the hex string
    while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'F') || (str[i] >= 'a' && str[i] <= 'f')) {
        // result = result * 16; 
        result <<= 4; // Shift left by 4 bits (multiply by 16)
        
        if (str[i] >= '0' && str[i] <= '9') {
            result += (str[i] - '0');
        } else if (str[i] >= 'A' && str[i] <= 'F') {
            result += (str[i] - 'A' + 10);
        } else if (str[i] >= 'a' && str[i] <= 'f') {
            result += (str[i] - 'a' + 10);
        }
        i++;
    }

    return result;
}

unsigned long long hexstoull(const char *str) {
    unsigned long long result = 0;
    int i = 0;

    // Loop through each character of the hex string
    while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'F') || (str[i] >= 'a' && str[i] <= 'f')) {
        // result = result * 16; 
        result <<= 4; // Shift left by 4 bits (multiply by 16)
        
        if (str[i] >= '0' && str[i] <= '9') {
            result += (str[i] - '0');
        } else if (str[i] >= 'A' && str[i] <= 'F') {
            result += (str[i] - 'A' + 10);
        } else if (str[i] >= 'a' && str[i] <= 'f') {
            result += (str[i] - 'a' + 10);
        }
        i++;
    }

    return result;
}
