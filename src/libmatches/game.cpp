#include <iostream>
#include <libmatches/game.hpp>

using namespace std;

void displayMatches(int count) {
cout << "На столе осталось " << count << " спичек" << endl;
}

void Playernumber (int turn){
    cout << "Ход игрока " << turn << endl;
}

int getPlayerChoice(int count) {
int choice;
cout << "Выберите от 1 до 10 спичек: ";
cin >> choice;
if (choice < 1 || choice > 10) {
cout << "Недопустимое количество спичек, повторите выбор" << endl;
return getPlayerChoice (count);
}
else if (count < choice) {
cout << "На столе нет столько спичек, повторите выбор" << endl;
return getPlayerChoice(count);
}
return choice;
}

int getPlayerChoice1(int count) {
int choice=5;
if (choice < 1 || choice > 10) {
cout << "Недопустимое количество спичек, повторите выбор" << endl;
return getPlayerChoice1 (count);
}
else if (count < choice) {
cout << "На столе нет столько спичек, повторите выбор" << endl;
return getPlayerChoice1(count);
}
return choice;
}

void switchPlayerTurn(int* turn) {
*turn = 3 - *turn;
}

void announceWinner(int turn) {
cout << endl << "Игрок " << turn << " победил!" << endl << endl;
}

void matches() {
int count = 100;
int turn = 1;
int choice;
cout << "==== ИГРА НАЧАЛАСЬ ====" << endl;
while (count > 0) {
displayMatches(count);
Playernumber(turn);
choice = getPlayerChoice(count);
count -= choice;
switchPlayerTurn(&turn);
}
announceWinner(3-turn);
}

void menu() {
cout << "==== ИГРА В 100 СПИЧЕК ====" << endl;
cout << "Описание игры:" << endl;
cout << "Из кучки, первоначально содержащей 100 спичек, два игрока поочередно берут по несколько спичек: не менее одной и не более десяти." << endl;
cout << "Выиграет тот кто забрал последние спички." << endl;
cout << "Брать можно с 1 до 10 спичек." << endl;
int a, p = 0;
while (p < 1) {
cout << "MENU" << endl;
cout << "1) Начать игру" << endl;
cout << "2) Выйти" << endl;
cout << "-";
cin >> a;
if (a == 1) { matches(); }
if (a == 2) { p = 1; }
else { cout << "Выбирите другую цифру" << endl; }
}
}