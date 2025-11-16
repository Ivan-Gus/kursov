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


// Основная функция вычисления f(x)
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
		return NAN; // Неопределено
	}
}


int main() {
	setlocale(LC_CTYPE, "RUS");
	int c;
	double x;
	printf("Кусочная функция\n\n");
	printf("1. Значение функции в точке \n2. Таблица значений \n3. Поиск минимума/максимума \n4. Поиск X по Y \n5. Производная в точке \n0. Выход \n");
	printf("Введите команду: \n");
	scanf("%d", &c);
	switch (c) {
	case 1:
		printf("Введите x: ");
		scanf("%lf", &x);
		printf("f(%.2f) = %.6f\n", x, n_f(x));
		break;
	case 2:
		printf("| x | f(x) | \n");
		break;
	case 3:
		printf("Здесь будет поиск max/min \n");
		break;
	case 4:
		printf("Здесь можно будет ввести Y и найти X \n");
		break;
	case 5:
		printf("Здесь будет операция по нахождению производной в точке \n");
		break;
	case 0:
		printf("\n");
		break;
	}





	return 0;
}