#include <ctest.h>
#include <ctype.h>
#include <libmatches/game.hpp>
#include <math.h>
#include <stdio.h>
#include <string.h>

CTEST(getPlayerChoiceTest, InvalidChoiceLessThan1) {
int count = 11;
int choice = getPlayerChoice1(count);
ASSERT_TRUE(choice >= 1);
}

CTEST( getPlayerChoiceTest, InvalidChoiceGreaterThan10) {
int count = 11;
int choice = getPlayerChoice1(count);
ASSERT_TRUE(choice <= 10);
}

CTEST(getPlayerChoiceTest, InvalidCountLessThanChoice) {
int count = 11;
int choice = getPlayerChoice1(count);
ASSERT_TRUE(choice =! 0);
}

CTEST( getPlayerChoiceTest, ValidChoice) {
int count = 11;
int choice = getPlayerChoice1(count);
ASSERT_TRUE(choice >= 1 && choice <= 10 && choice <= count);
}