#include <iostream>
#include "../src/game.h"
#include "../thirdparty/ctest.h"

CTEST(int getPlayerChoiceTest,int InvalidChoiceLessThan1) {
int turn = 1;
int count = 5;
int choice = getPlayerChoice(turn, count);
ASSERT_TRUE(choice < 1);
}

CTEST(int getPlayerChoiceTest,int InvalidChoiceGreaterThan10) {
int turn = 1;
int count = 5;
int choice = getPlayerChoice(turn, count);
ASSERT_TRUE(choice > 10);
}

CTEST(int getPlayerChoiceTest,int InvalidCountLessThanChoice) {
int turn = 3;
int count = 2;
int choice = getPlayerChoice(turn, count);
ASSERT_TRUE(choice == 0);
}

CTEST(int getPlayerChoiceTest,int ValidChoice) {
int turn = 1;
int count = 5;
int choice = getPlayerChoice(turn, count);
ASSERT_TRUE(choice >= 1 && choice <= 10 && choice <= count);
}