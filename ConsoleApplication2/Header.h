
enum type_number { possitive, negative, all };
int sluch_number(type_number tn, int start, int end);
void massiv(int *a, int r, int start, int end, type_number tn);
void print_massiv(int *a, int r);
void sum_pr(int *a, int r, int *sum, int *pr);

#define colCount 5
void creatMatrix(int(*a)[colCount], int r, int start, int end, type_number tn);
void creatMatrix(double(*a)[colCount], int r, double start, int end, type_number tn);
void printMatrix(double(*a)[colCount], int r);
void printMatrix(int(*a)[colCount], int r);


void sum_prMatrix(int(*a)[colCount], int r, int *sum, int *pr);
void sum_prMatrix(double(*a)[colCount], int r, double *sum, double *pr);
void sum_prMatrix(short int(*a)[colCount], short int r, short int *sum, short int *pr);

void creatMatrix(short int(*a)[colCount], int r, short start, short int end, type_number tn);
void printMatrix(short int(*a)[colCount], int r);

int numb(type_number tn, int start, int end);
double numb(type_number tn, double start, int end);
void stick(char *m);

void sum_ch(int *a, int r, int begin, int end, int *sum);
