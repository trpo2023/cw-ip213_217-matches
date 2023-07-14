#pragma once
#ifndef GAME_H
#define GAME_H

void menu();
void matches();
void displayMatches(int count);
int getPlayerChoice(int count);
int getPlayerChoice1(int count);
void switchPlayerTurn(int* turn);
void announceWinner(int turn);

#endif