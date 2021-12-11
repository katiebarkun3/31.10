#pragma once
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;


//=======заполнение массива случайными числами======
//===1===
void fill_randmas(int* mas, int n) {
	srand(time(0));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 41 - 20;   
	}
}


//=======заполнение массива случайными числами======
//===2===
void fill_randmas2(int* mas, int n) {
	srand(time(0));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 121 - 60;   
	}
}


//======заполнение матрицы======
//===3===
void fill_rand3(int** mas, int n) {
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			mas[i][j] = rand() % 31;  
		}
	}
}


//======заполнение матрицы======
//===4===
void fill_rand(int** mas, int n, int m) {
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = rand() % 81 - 40;    
		}
	}
}


//======вывод матрицы на экран======
//==1==2==
void print_matrix(int** mas, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << mas[i][j];
		}
		cout << endl;
	}
}


//======вывод массива на экран======
//==3==4==
void print_mas(int* mas, int n) {
	for (int i = 0; i < n; i++) {
			cout << mas[i] << ' ';
		}
		cout << endl;
	}



//======сумма элементов с нечётными номерами======
//===1===
int sum_nechot(int* mas, int n) {
	int sum = 0;
	for (int i = 1; i < n; i += 2) {
		sum += mas[i];
	}
	return sum;
}
	

//======находит произведение отрицательных элементов массива======
//===2===
int otr_pr(int* mas, int n) {
	int pr = 1;
	for (int i = 0; i < n; i ++) {
		if (mas[i] < 0) {
			pr *= mas[i];
		}
	}
	return pr;
}




//======среднее геометрическое главной диагонали======
//===3===
double sr_geom(int** mas, int n) {
	double a = 1, b = 0;
	for (int i = 0; i < n; i++) {
		a *= mas[i][i];
		b = sqrt(a);
	}
	return b;
}


//======количество положительных элементов в столбце======
//===4===
int col_pos(int** mas, int n, int m) {
	int k;
	cout << "enter st number\n";
	cin >> k;
	for (int p = 0; p < n; p++) {
		if (mas[p][k] > 0) k++;
	}
	return k;
}
