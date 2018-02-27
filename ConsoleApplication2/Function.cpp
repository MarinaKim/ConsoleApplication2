#include<stdio.h>
#include<iostream>
#include<locale>
#include<stdint.h>
#include<stdarg.h>

enum type_number { possitive, negative, all };

using namespace std;
unsigned i, j;

int sluch_number(type_number tn, int start, int end)
{

	switch (tn) {
	case possitive:
		return (start + rand() % end);
		break;
	case negative:
		return (start*(-1) + rand() % end);
		break;
	case all:
		return rand();
	}
}

void massiv(int *a, int r, int start, int end, type_number tn)
{
	for (i = 0; i < r; i++)
	{
		a[i] = sluch_number(tn, start, end);
	}

}

void print_massiv(int *a, int r)
{
	for (i = 0; i < r; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;
}

void sum_pr(int *a, int r, int *sum, int *pr)
{
	for (i = 0;i < r;i++)
	{
		*sum += a[i];
		*pr *= a[i];
	}
}

int numb(type_number tn, int start, int end)
{
	switch (tn)
	{
	case possitive:
		return start + rand() % end;
		break;
	case negative:
		return start*(-1) + rand() % end;
		break;
	case all:
		return rand();
		break;
	}
}

double numb(type_number tn, double start, int end)
{
	switch (tn)
	{
	case possitive:
		return (start + rand() % end) / (start + rand() % end);
		break;
	case negative:
		return (start*(-1) + rand() % end) / (start*(-1) + rand() % end);
		break;
	case all:
		return rand();
		break;
	}
}
#define colCount 5
void creatMatrix(int(*a)[colCount], int r, int start, int end, type_number tn)
{
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < colCount; j++)
		{
			a[i][j] = numb(tn, start, end);
		}
	}
}

void creatMatrix(short int(*a)[colCount], int r, short start, short int end, type_number tn)
{
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < colCount; j++)
		{
			a[i][j] = numb(tn, start, end);
		}
	}
}

void creatMatrix(double(*a)[colCount], int r, double start, int end, type_number tn)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < colCount; j++)
		{
			a[i][j] = round(numb(tn, start, end) * 100) / 100;
		}
	}
}

void printMatrix(double(*a)[colCount], int r)
{
	for (int i = 0; i < r; i++)
	{
		for (j = 0; j < colCount; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}
void printMatrix(int(*a)[colCount], int r)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < colCount; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}
void printMatrix(short int(*a)[colCount], int r)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < colCount; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}

void sum_prMatrix(int(*a)[colCount], int r, int *sum, int *pr)
{
	for (i = 0;i < r;i++)
	{
		for (int j = 0; j < colCount; j++)
		{
			*sum += a[i][j];
			*pr *= a[i][j];
		}
	}
}
void sum_prMatrix(double(*a)[colCount], int r, double *sum, double *pr)
{
	for (i = 0;i < r;i++)
	{
		for (j = 0; j < colCount; j++)
		{
			*sum += a[i][j];
			*pr *= a[i][j];
		}
	}
}
void sum_prMatrix(short int(*a)[colCount], short int r, short int *sum, short int *pr)
{
	for (i = 0;i < r;i++)
	{
		for (j = 0; j < colCount; j++)
		{
			*sum += a[i][j];
			*pr *= a[i][j];
		}
	}
}

void stick(char *m)
{
	int len = strlen(m);
	char name[25];
	cout << "¬ведите им€: ";
	cin >> name;
	strcat(m, name);
}

void sum_ch(int *a, int r, int begin, int end, int *sum)
{
	*sum += *a;
	a++;
	begin++;
	while (begin != end)
	{
		sum_ch(a, r, begin, end, sum);
	}
}