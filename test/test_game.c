#include "game.h"
#include <assert.h>


void test_displayMatches() {
    int count = 5;
    printf("Expected output: 'На столе осталось 5 спичек'\n");
    displayMatches(count);
}


void test_getPlayerChoice() {
    int turn = 1;
    int count = 10;
    int choice;
    printf("Input: 5\nExpected output: 5\n");
    choice = getPlayerChoice(turn, count);
    TEST_ASSERT_EQUAL(5, choice);

    printf("Input: 15, 5\nExpected output: 'Недопустимое количество спичек, повторите выбор'\n");
    set_input("15\n5\n");
    choice = getPlayerChoice(turn, count);
    TEST_ASSERT_EQUAL(5, choice);

    printf("Input: 7, 5\nExpected output: 'На столе нет столько спичек, повторите выбор'\n");
    set_input("7\n5\n");
    choice = getPlayerChoice(turn, count);
    TEST_ASSERT_EQUAL(5, choice);
}


void test_switchPlayerTurn() {
    int turn = 1;
    switchPlayerTurn(&turn);
    TEST_ASSERT_EQUAL(2, turn);
    switchPlayerTurn(&turn);
    TEST_ASSERT_EQUAL(1, turn);
}


void test_announceWinner() {
    int turn = 1;
    printf("Expected output: '\nИгрок 1 победил!\n\n'\n");
    announceWinner(turn);
}


void test_matches() {
    int count = 5;
    int turn = 1;
    printf("Expected output: '==== ИГРА НАЧАЛАСЬ ===='\n");
    printf("Expected output: 'На столе осталось 5 спичек'\n");
    printf("Input: 3\n");
    printf("Expected output: 'На столе осталось 2 спичек'\n");
    printf("Input: 2\n");
    printf("Expected output: '\nИгрок 1 победил!\n\n'\n");
    matches();
    reset_input();
}
