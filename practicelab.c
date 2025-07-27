#include <stdio.h>  
int main() {  
  int r, c, a[5][5], b[5][5], sum[5][5], i, j;  
  printf("Enter the number of rows (1-5): ");  
  scanf("%d", &r);  
  printf("Enter the number of columns (1-5): ");  
  scanf("%d", &c);  
  
  printf("\nEnter elements of Matrix 1:\n");  
  for (i = 0; i < r; ++i)  
    for (j = 0; j < c; ++j) {  
      printf("Enter element a%d%d: ", i + 1, j + 1);  
      scanf("%d", &a[i][j]);  
    }  
   printf("Enter elements of Matrix 2:\n");  
  for (i = 0; i < r; ++i)  
    for (j = 0; j < c; ++j) {  
      printf("Enter element b%d%d: ", i + 1, j + 1);  
      scanf("%d", &b[i][j]);  
    } 
     printf("matrix A:\n"); 
    for (i = 0; i < r; ++i) 
    {  
    for (j = 0; j < c; ++j)  
    {  
      printf("%d   ", a[i][j]);  
    } 
      printf("\n"); 
    } 
      printf("matrix B:\n"); 
      for (i = 0; i < r; ++i) 
      { 
       for (j = 0; j < c; ++j)  
       {  
      printf("%d   ", b[i][j]);  
       } 
      printf("\n"); 
      } 
  
  // adding two matrices  
  for (i = 0; i < r; ++i)  
    for (j = 0; j < c; ++j) {  
      sum[i][j] = a[i][j] + b[i][j];  
    }  
  
  // printing the result  
  printf("\nSum of the two matrices: \n");  
  for (i = 0; i < r; ++i)  
    for (j = 0; j < c; ++j) {  
      printf("%d   ", sum[i][j]);  
      if (j == c - 1) {  
       printf("\n\n");  
      }  
    }  
  
  return 0;  
}
