#define _CRT_SECURE_NO_WARNINGS

#include <catch.hpp>
#include "two_phase_sort.h"

TEST_CASE("Testing twoPhase function") {
    FILE* f = fopen("twoPhaseTest.txt", "w");
    int a[] = { 3, 2, 1, 67, 9, 0 };
    int b[] = { 0, 1, 2, 3, 9, 67 };
    for (int i = 0; i < 6; i++) {
        fprintf(f, "%d ", a[i]);
    }
    const char* name = "twoPhaseTest.txt";
    fclose(f);
    twoPhaseSort(name);
    fclose(f);
    f = fopen("twoPhaseTest.txt", "r");
    int r = 0;
    int c;
    for (int i = 0; i < 6; i++) {
        fscanf(f, "%d ", &c);
        if (c != b[i])
            r = 1;
    }
    REQUIRE(r == 0);
}