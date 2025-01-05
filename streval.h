/**
 * @file streval.h
 * @brief Functions for converting strings to various numeric types (integer and floating-point).
 * 
 * This file provides functions to convert string representations of integers in decimal, 
 * binary, and hexadecimal formats to corresponding numeric types, including both signed and 
 * unsigned integers of various sizes, as well as floating-point types.
 */

#if !defined(STREVAL_H)
#define STREVAL_H

#include <stdint.h>

/**
 * @typedef __int_max_t
 * @brief Signed 64-bit integer type.
 * 
 * This typedef represents a signed 64-bit integer type, used for maximum size integer conversions.
 */
typedef             long long   __int_max_t ;

/**
 * @typedef __int_umax_t
 * @brief Unsigned 64-bit integer type.
 * 
 * This typedef represents an unsigned 64-bit integer type, used for maximum size unsigned integer conversions.
 */
typedef unsigned    long long   __int_umax_t;

/**
 * @typedef __cstr_t
 * @brief Constant character string type.
 * 
 * This typedef represents a constant character pointer type (C-style string).
 */
typedef const       char        *__cstr_t ;

/**
 * @brief Converts a string to a signed 8-bit integer.
 * 
 * Converts a string representation of an integer to a signed 8-bit integer (`int8_t`).
 * 
 * @param str The string to convert, consisting of '0' or '1' characters.
 * @return The converted signed 8-bit integer value.
 */
int8_t              se_strto8      (const char *str);

/**
 * @brief Converts a string to an unsigned 8-bit integer.
 * 
 * Converts a string representation of an integer to an unsigned 8-bit integer (`uint8_t`).
 * 
 * @param str The string to convert, consisting of '0' or '1' characters.
 * @return The converted unsigned 8-bit integer value.
 */
uint8_t             se_strtou8     (const char *str);

/**
 * @brief Converts a string to a signed 16-bit integer.
 * 
 * Converts a string representation of an integer to a signed 16-bit integer (`int16_t`).
 * 
 * @param str The string to convert, consisting of '0' or '1' characters.
 * @return The converted signed 16-bit integer value.
 */
int16_t             se_strto16     (const char *str);

/**
 * @brief Converts a string to an unsigned 16-bit integer.
 * 
 * Converts a string representation of an integer to an unsigned 16-bit integer (`uint16_t`).
 * 
 * @param str The string to convert, consisting of '0' or '1' characters.
 * @return The converted unsigned 16-bit integer value.
 */
uint16_t            se_strtou16    (const char *str);

/**
 * @brief Converts a string to a signed 32-bit integer.
 * 
 * Converts a string representation of an integer to a signed 32-bit integer (`int32_t`).
 * 
 * @param str The string to convert, consisting of '0' or '1' characters.
 * @return The converted signed 32-bit integer value.
 */
int32_t             se_strto32     (const char *str);

/**
 * @brief Converts a string to an unsigned 32-bit integer.
 * 
 * Converts a string representation of an integer to an unsigned 32-bit integer (`uint32_t`).
 * 
 * @param str The string to convert, consisting of '0' or '1' characters.
 * @return The converted unsigned 32-bit integer value.
 */
uint32_t            se_strtou32    (const char *str);

/**
 * @brief Converts a string to a signed 64-bit integer.
 * 
 * Converts a string representation of an integer to a signed 64-bit integer (`int64_t`).
 * 
 * @param str The string to convert, consisting of '0' or '1' characters.
 * @return The converted signed 64-bit integer value.
 */
int64_t             se_strto64     (const char *str);

/**
 * @brief Converts a string to an unsigned 64-bit integer.
 * 
 * Converts a string representation of an integer to an unsigned 64-bit integer (`uint64_t`).
 * 
 * @param str The string to convert, consisting of '0' or '1' characters.
 * @return The converted unsigned 64-bit integer value.
 */
uint64_t            se_strtou64    (const char *str);

/**
 * @brief Converts a string to a signed long long integer.
 * 
 * Converts a string representation of an integer to a signed long long integer (`long long`).
 * 
 * @param str The string to convert, consisting of '0' or '1' characters.
 * @return The converted signed long long integer value.
 */
long long           se_strtoll     (const char *str);

/**
 * @brief Converts a string to an unsigned long long integer.
 * 
 * Converts a string representation of an integer to an unsigned long long integer (`unsigned long long`).
 * 
 * @param str The string to convert, consisting of '0' or '1' characters.
 * @return The converted unsigned long long integer value.
 */
unsigned long long  se_strtoull    (const char *str);

/**
 * @brief Converts a string to a floating-point 32-bit value.
 * 
 * Converts a string representation of a floating-point number to a 32-bit float (`float`).
 * 
 * @param str The string to convert.
 * @return The converted 32-bit floating-point value.
 */
float               se_strto32f    (const char *str);

/**
 * @brief Converts a string to a floating-point 64-bit value.
 * 
 * Converts a string representation of a floating-point number to a 64-bit double (`double`).
 * 
 * @param str The string to convert.
 * @return The converted 64-bit floating-point value.
 */
double              se_strto64f    (const char *str);

/**
 * @brief Converts a string to a long double floating-point value.
 * 
 * Converts a string representation of a floating-point number to a long double (`long double`).
 * 
 * @param str The string to convert.
 * @return The converted long double value.
 */
long double         se_strtold     (const char *str);

/**
 * @brief Converts a binary string to a signed 8-bit integer.
 * 
 * Converts a binary string (consisting of '0' and '1' characters) to a signed 8-bit integer (`int8_t`).
 * 
 * @param str The binary string to convert.
 * @return The converted signed 8-bit integer value.
 */
int8_t              se_bitsto8     (const char *str);

/**
 * @brief Converts a binary string to an unsigned 8-bit integer.
 * 
 * Converts a binary string (consisting of '0' and '1' characters) to an unsigned 8-bit integer (`uint8_t`).
 * 
 * @param str The binary string to convert.
 * @return The converted unsigned 8-bit integer value.
 */
uint8_t             se_bitstou8    (const char *str);

/**
 * @brief Converts a binary string to a signed 16-bit integer.
 * 
 * Converts a binary string (consisting of '0' and '1' characters) to a signed 16-bit integer (`int16_t`).
 * 
 * @param str The binary string to convert.
 * @return The converted signed 16-bit integer value.
 */
int16_t             se_bitsto16    (const char *str);

/**
 * @brief Converts a binary string to an unsigned 16-bit integer.
 * 
 * Converts a binary string (consisting of '0' and '1' characters) to an unsigned 16-bit integer (`uint16_t`).
 * 
 * @param str The binary string to convert.
 * @return The converted unsigned 16-bit integer value.
 */
uint16_t            se_bitstou16   (const char *str);

/**
 * @brief Converts a binary string to a signed 32-bit integer.
 * 
 * Converts a binary string (consisting of '0' and '1' characters) to a signed 32-bit integer (`int32_t`).
 * 
 * @param str The binary string to convert.
 * @return The converted signed 32-bit integer value.
 */
int32_t             se_bitsto32    (const char *str);

/**
 * @brief Converts a binary string to an unsigned 32-bit integer.
 * 
 * Converts a binary string (consisting of '0' and '1' characters) to an unsigned 32-bit integer (`uint32_t`).
 * 
 * @param str The binary string to convert.
 * @return The converted unsigned 32-bit integer value.
 */
uint32_t            se_bitstou32   (const char *str);

/**
 * @brief Converts a binary string to a signed 64-bit integer.
 * 
 * Converts a binary string (consisting of '0' and '1' characters) to a signed 64-bit integer (`int64_t`).
 * 
 * @param str The binary string to convert.
 * @return The converted signed 64-bit integer value.
 */
int64_t             se_bitsto64    (const char *str);

/**
 * @brief Converts a binary string to an unsigned 64-bit integer.
 * 
 * Converts a binary string (consisting of '0' and '1' characters) to an unsigned 64-bit integer (`uint64_t`).
 * 
 * @param str The binary string to convert.
 * @return The converted unsigned 64-bit integer value.
 */
uint64_t            se_bitstou64   (const char *str);

/**
 * @brief Converts a binary string to a signed long long integer.
 * 
 * Converts a binary string (consisting of '0' and '1' characters) to a signed long long integer (`long long`).
 * 
 * @param str The binary string to convert.
 * @return The converted signed long long integer value.
 */
long long           se_bitstoll    (const char *str);

/**
 * @brief Converts a binary string to an unsigned long long integer.
 * 
 * Converts a binary string (consisting of '0' and '1' characters) to an unsigned long long integer (`unsigned long long`).
 * 
 * @param str The binary string to convert.
 * @return The converted unsigned long long integer value.
 */
unsigned long long  se_bitstoull   (const char *str);

/**
 * @brief Converts a hexadecimal string to a signed 8-bit integer.
 * 
 * Converts a hexadecimal string to a signed 8-bit integer (`int8_t`).
 * 
 * @param str The hexadecimal string to convert.
 * @return The converted signed 8-bit integer value.
 */
int8_t              se_hexto8      (const char *str);

/**
 * @brief Converts a hexadecimal string to an unsigned 8-bit integer.
 * 
 * Converts a hexadecimal string to an unsigned 8-bit integer (`uint8_t`).
 * 
 * @param str The hexadecimal string to convert.
 * @return The converted unsigned 8-bit integer value.
 */
uint8_t             se_hextou8     (const char *str);

/**
 * @brief Converts a hexadecimal string to a signed 16-bit integer.
 * 
 * Converts a hexadecimal string to a signed 16-bit integer (`int16_t`).
 * 
 * @param str The hexadecimal string to convert.
 * @return The converted signed 16-bit integer value.
 */
int16_t             se_hexto16     (const char *str);

/**
 * @brief Converts a hexadecimal string to an unsigned 16-bit integer.
 * 
 * Converts a hexadecimal string to an unsigned 16-bit integer (`uint16_t`).
 * 
 * @param str The hexadecimal string to convert.
 * @return The converted unsigned 16-bit integer value.
 */
uint16_t            se_hextou16    (const char *str);

/**
 * @brief Converts a hexadecimal string to a signed 32-bit integer.
 * 
 * Converts a hexadecimal string to a signed 32-bit integer (`int32_t`).
 * 
 * @param str The hexadecimal string to convert.
 * @return The converted signed 32-bit integer value.
 */
int32_t             se_hexto32     (const char *str);

/**
 * @brief Converts a hexadecimal string to an unsigned 32-bit integer.
 * 
 * Converts a hexadecimal string to an unsigned 32-bit integer (`uint32_t`).
 * 
 * @param str The hexadecimal string to convert.
 * @return The converted unsigned 32-bit integer value.
 */
uint32_t            se_hextou32    (const char *str);

/**
 * @brief Converts a hexadecimal string to a signed 64-bit integer.
 * 
 * Converts a hexadecimal string to a signed 64-bit integer (`int64_t`).
 * 
 * @param str The hexadecimal string to convert.
 * @return The converted signed 64-bit integer value.
 */
int64_t             se_hexto64     (const char *str);

/**
 * @brief Converts a hexadecimal string to an unsigned 64-bit integer.
 * 
 * Converts a hexadecimal string to an unsigned 64-bit integer (`uint64_t`).
 * 
 * @param str The hexadecimal string to convert.
 * @return The converted unsigned 64-bit integer value.
 */
uint64_t            se_hextou64    (const char *str);

/**
 * @brief Converts a hexadecimal string to a signed long long integer.
 * 
 * Converts a hexadecimal string to a signed long long integer (`long long`).
 * 
 * @param str The hexadecimal string to convert.
 * @return The converted signed long long integer value.
 */
long long           hexstoll    (const char *str);

/**
 * @brief Converts a hexadecimal string to an unsigned long long integer.
 * 
 * Converts a hexadecimal string to an unsigned long long integer (`unsigned long long`).
 * 
 * @param str The hexadecimal string to convert.
 * @return The converted unsigned long long integer value.
 */
unsigned long long  hexstoull   (const char *str);

#endif // STREVAL_H
