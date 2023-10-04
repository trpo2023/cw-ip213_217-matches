#include <ctest.h>
#include <ctype.h>
#include <libmatches/game.hpp>
#include <math.h>
#include <stdio.h>
#include <string.h>

CTEST(getPlayerChoiceTest1, InvalidChoiceLessThan1)
{
    int count = 20;
    int choice = getPlayerChoice1(count);
    ASSERT_TRUE(choice >= 1);
}

CTEST(getPlayerChoiceTest1, InvalidChoiceGreaterThan10)
{
    int count = 20;
    int choice = getPlayerChoice1(count);
    ASSERT_TRUE(choice <= 10);
}

CTEST(getPlayerChoiceTest1, InvalidCountLessThanChoice)
{
    int count = 20;
    int choice = getPlayerChoice1(count);
    ASSERT_TRUE(choice = !0);
}

CTEST(getPlayerChoiceTest1, ValidChoice)
{
    int count = 20;
    int choice = getPlayerChoice1(count);
    ASSERT_TRUE(choice >= 1 && choice <= 10 && choice <= count);
}