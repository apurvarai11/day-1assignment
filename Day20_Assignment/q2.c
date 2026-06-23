#include <stdio.h>
int main()
{
    int n, i, j;
    int matrix[10][10];
    int symmetric = 1;
    printf("Enter order of matrix");
    scanf("%d", &n);
    printf("Enter matrix elements \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(matrix[i][j] != matrix[j][i])
            {
                symmetric = 0;
            }
        }
    }
    if(symmetric == 1)
    printf("Matrix is Symmetric");
    else
    printf("Matrix is Not Symmetric");
    return 0;
}