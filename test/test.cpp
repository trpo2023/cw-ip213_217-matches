#include <ctest.h>
#include <ctype.h>
#include <libmatches/game.hpp>
#include <math.h>
#include <stdio.h>
#include <string.h>

CTEST(getPlayerChoiceTest, InvalidChoiceLessThan1) {
int turn = 1;
int count = 5;
int choice = getPlayerChoice(turn, count);
ASSERT_TRUE(choice >= 1);
}

CTEST( getPlayerChoiceTest, InvalidChoiceGreaterThan10) {
int turn = 1;
int count = 5;
int choice = getPlayerChoice(turn, count);
ASSERT_TRUE(choice <= 10);
}

CTEST(getPlayerChoiceTest, InvalidCountLessThanChoice) {
int turn = 3;
int count = 2;
int choice = getPlayerChoice(turn, count);
ASSERT_TRUE(choice =! 0);
}

CTEST( getPlayerChoiceTest, ValidChoice) {
int turn = 1;
int count = 5;
int choice = getPlayerChoice(turn, count);
ASSERT_TRUE(choice >= 1 && choice <= 10 && choice <= count);
}