/* HeartSystem.c
   A text-based program based on a Zelda-like heart system.*/

#include <stdio.h>

int extraContainerAmount = 0;
int heartCount = 3;
int menuSelect = 0;
int containerGet;

int main(){
	
	if(menuSelect == 1 || menuSelect == 2 || menuSelect == 0){
		printf("Heart amount - %d\n\n1: Get hit\n2: Get a heart container\n", heartCount);
		printf("Choose a number: ");
		scanf("%d", &menuSelect);
		if(menuSelect == 1){
			printf("You got hit! You lost a heart.\n\n");
			heartCount--;
			if(heartCount == 0){
				printf("You lost all of your hearts!\nGoodbye.\n\n");
				return 0;
			} else {
				main();
			}
		} else if(menuSelect == 2){
			printf("You got a heart container!\n\n");
			extraContainerAmount++;
			switch(extraContainerAmount){
			case(1):{
				heartCount = 3 + 1;
				break;
			}
			case(2):{
				heartCount = 3 + 2;
				break;
			}
			case(3):{
				heartCount = 3 + 3;
				break;
			}
			default:{
				printf("Too many hearts.\n\n");
				break;
			}
			}
			main();
		}
	}
	
	
	return 0;
	
}