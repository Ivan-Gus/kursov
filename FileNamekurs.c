#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_DEPRECATE

double f1(double x) {
	return (tan(x * x) - 1) / x;
}

double f2(double x) {
	return (x * exp(-x / 2)) / log(2 + x * x);
}

double f3(double x) {
	return pow(1 + x * x * x, 0.25);
}


// Îñíîâíàÿ ôóíêöèÿ âû÷èñëåíèÿ f(x)
double n_f(double x) {
	if (x < -2) {
		return f1(x);
	}
	else if (x >= -2 & x < 3) {
		return f2(x);
	}
	else if (x >= 3) {
		return f3(x);
	}
	else {
		return NAN; // Íåîïðåäåëåíî
	}
}


int main() {
	setlocale(LC_CTYPE, "RUS");
	int c;
	double x;
	printf("Êóñî÷íàÿ ôóíêöèÿ\n\n");
	printf("1. Çíà÷åíèå ôóíêöèè â òî÷êå \n2. Òàáëèöà çíà÷åíèé \n3. Ïîèñê ìèíèìóìà/ìàêñèìóìà \n4. Ïîèñê X ïî Y \n5. Ïðîèçâîäíàÿ â òî÷êå \n0. Âûõîä \n");
	printf("Ââåäèòå êîìàíäó: \n");
	scanf("%d", &c);
	switch (c) {
	case 1:
		printf("Ââåäèòå x: ");
		scanf("%lf", &x);
		printf("f(%.2f) = %.6f\n", x, n_f(x));
		break;
	case 2:
		printf("| x | f(x) | \n");
		break;
	case 3:
		printf("Çäåñü áóäåò ïîèñê max/min \n");
		break;
	case 4:
		printf("Çäåñü ìîæíî áóäåò ââåñòè Y è íàéòè X \n");
		break;
	case 5:
		printf("Çäåñü áóäåò îïåðàöèÿ ïî íàõîæäåíèþ ïðîèçâîäíîé â òî÷êå \n");
		break;
	case 0:
		printf("\n");
		break;
	}





	return 0;
}
