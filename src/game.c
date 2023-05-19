#include <stdio.h>
#include "game.h"

void matches() 
{
	int count = 100; 
	int turn = 1; 
	int choice; 
	printf("==== ИГРА НАЧАЛАСЬ ====\n");
	while (count > 0) { 
    		printf("На столе осталось %d спичек\n", count);
    		printf("Ход игрока %d\n", turn);
    		printf("Выберите от 1 до 10 спичек: ");
    		scanf("%d", &choice);
    	if (choice < 1 || choice > 10) { 
        	printf("Недопустимое количество спичек, повторите выбор\n");
    	} 
	else if (count < choice) {
        	printf("На столе нет столько спичек, повторите выбор\n"); 
	} 
      	else {
        	count -= choice; 
        	turn = 3 - turn; 
    	} }
	printf("\nИгрок %d победил!\n", turn);
	printf("\n");
}

void menu ()
{
	printf("==== ИГРА В 100 СПИЧЕК ====\n");
	printf("Описание игры:\n");
	printf("Из кучки, первоначально содержащей 100 спичек, два игрока поочередно берут по несколько спичек: не менее одной и не более десяти.\n");
	printf("Выиграет тот кто забрал последние спички.\n");
	printf("Брать можно с 1 до 10 спичек.\n");
	int a, p=0;
	while ( p<1 ){
		printf("MENU\n");
		printf("1) Начать игру\n");
		printf("2) Выйти\n");
		printf("-");
		scanf("%d", &a);
		if (a==1) { matches(); }
		if (a==2) { p=1;  }
		else { printf("Выбирите другую цифру\n");}
		}
	return 0;
}

