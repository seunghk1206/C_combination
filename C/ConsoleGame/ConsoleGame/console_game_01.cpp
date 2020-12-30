#include <stdio.h>
#include <stdlib.h>
#include "Console.h"

int main(void) {
	SetConsoleSize(30, 30);
	while (1) {
		printf("¤±");
		Sleep(50);
	}
	system("pause");
}