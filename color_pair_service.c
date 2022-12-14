#include <stdio.h>

#include "color_pair_config.h"
#include "color_pair_service.h"

void ColorPairToString(const ColorPair colorPair, char* buffer) {
    sprintf(buffer, "%s - %s",
        MajorColorNames[colorPair.majorColor],
        MinorColorNames[colorPair.minorColor]);
}

ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor =
        (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

int GetPairNumberFromColor(const ColorPair colorPair) {
    return colorPair.majorColor * numberOfMinorColors +
            colorPair.minorColor + 1;
}
