#include <assert.h>
#include <stdio.h>
#include <math.h>
#include "streval.h"

#define EPSILON 1e-6

void test_se_strto8() {
    assert(se_strto8("127") == 127); 
    assert(se_strto8("-128") == -128);  
    assert(se_strto8("0") == 0); 
}

void test_se_strtou8() {
    assert(se_strtou8("255") == 255);
    assert(se_strtou8("0") == 0);
}

void test_se_strto16() {
    assert(se_strto16("32767") == 32767);
    assert(se_strto16("-32768") == -32768);
    assert(se_strto16("0") == 0);
}

void test_se_strtou16() {
    assert(se_strtou16("65535") == 65535);
    assert(se_strtou16("0") == 0);
}

void test_se_strto32() {
    assert(se_strto32("2147483647") == 2147483647);
    assert(se_strto32("-2147483648") == -2147483648);
    assert(se_strto32("0") == 0);
}

void test_se_strtou32() {
    assert(se_strtou32("4294967295") == 4294967295);
    assert(se_strtou32("0") == 0);
}

void test_se_strto64() {
    assert(se_strto64("9223372036854775807") == 9223372036854775807LL);
    assert(se_strto64("-9223372036854775807") == -9223372036854775807LL);
    assert(se_strto64("0") == 0);
}

void test_se_strtou64() {
    assert(se_strtou64("18446744073709551615") == 18446744073709551615ULL);
    assert(se_strtou64("0") == 0);
}

void test_se_strto32f() {
    assert(fabs(se_strto32f("3.14") - 3.14f)        < EPSILON);
    assert(fabs(se_strto32f("-3.14") - (-3.14f))    < EPSILON);
    assert(fabs(se_strto32f("0.0") - 0.0f)          < EPSILON);
}

void test_se_strto64f() {
    assert(se_strto64f("3.1415926535") == 3.1415926535);
    assert(se_strto64f("-3.1415926535") == -3.1415926535);
    assert(se_strto64f("0.0") == 0.0);
}

void test_se_bitsto8() {
    assert(se_bitsto8("11111111") == -1);
    assert(se_bitsto8("10000000") == -128);
    assert(se_bitsto8("00000000") == 0);
}

void test_se_bitstou8() {
    assert(se_bitstou8("11111111") == 255);
    assert(se_bitstou8("00000000") == 0);
}

void test_se_hexto8() {
    assert(se_hexto8("FF") == -1);
    assert(se_hexto8("80") == -128);
    assert(se_hexto8("00") == 0);
}

void test_se_hextou8() {
    assert(se_hextou8("FF") == 255);
    assert(se_hextou8("00") == 0);
}

int main() {
    test_se_strto8();
    test_se_strtou8();
    test_se_strto16();
    test_se_strtou16();
    test_se_strto32();
    test_se_strtou32();
    test_se_strto64();
    test_se_strtou64();
    test_se_strto32f();
    test_se_strto64f();
    test_se_bitsto8();
    test_se_bitstou8();
    test_se_hexto8();
    test_se_hextou8();

    printf("All tests passed successfully!\n");
    return 0;
}
