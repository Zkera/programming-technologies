#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

#define N 50
#define M 60
void input(int*, int);
void output(int*, int);
double sums(int*, int, int);
int main()
{
 int X[N], A[M];
 srand(time(0));
 printf("1 massiv:\n\n");
 input(&X[0], N);
 output(&X[0], N);
 printf("2 massiv:\n\n");
 input(&A[0], M);
 output(&A[0], M);
 printf("S1 = %lf\nS2 = %lf\n", sums(X, N, 1), sums(A, M, -1));
 printf("\n\n\nSumma=%lf", (sums(X, N, 1) + sums(A, M, -1)) / 2);
 
}
void input(int* m, int n)
{
 int i;
 for (i = 0; i < n; i++)
  *(m + i) = -5 + rand() % 10;
}
void output(int* m, int n)
{
 int i;
 for (i = 0; i < n; i++)
  printf("%5d", *(m + i));
 printf("\n\n\n");
}
double sums(int* arr, int lenth, int positive) {
 int i, sum = 0;
 for (i = 0; i < lenth; i++) {
  sum += ~((*(arr + i) >> 7) & (positive >> 7))? *(arr + i) : 0;
 }
 return sum;
}