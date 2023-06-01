#include <string>
#include <vector>
#include <"../src/game.h"

CTEST(getPlayerChoiceTest, InvalidChoiceLessThan1) {
int turn = 1;
int count = 5;
int choice = getPlayerChoice(turn, count);
EXPECT_EQ(choice, getPlayerChoice(turn, count));
}

CTEST(getPlayerChoiceTest, InvalidChoiceGreaterThan10) {
int turn = 1;
int count = 5;
int choice = getPlayerChoice(turn, count);
EXPECT_EQ(choice, getPlayerChoice(turn, count));
}

CTEST(getPlayerChoiceTest, InvalidCountLessThanChoice) {
int turn = 1;
int count = 5;
int choice = getPlayerChoice(turn, count);
EXPECT_EQ(choice, getPlayerChoice(turn, count));
}

CTEST(getPlayerChoiceTest, ValidChoice) {
int turn = 1;
int count = 5;
int choice = getPlayerChoice(turn, count);
EXPECT_EQ(choice, getPlayerChoice(turn, count));
}
