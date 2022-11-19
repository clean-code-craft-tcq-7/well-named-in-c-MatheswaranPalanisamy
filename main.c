#include <stdio.h>
#include "color_pair_config.h"
#include "color_pair_test_checker.h"
#include "color_code_documenter.h"

int main() {
    DocumentColorCode();

    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
