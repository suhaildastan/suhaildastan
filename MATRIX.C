#include<stdio.h>
#include<conio.h>
int main()
{	int i, j, k, m, n, p, q;
	int A[50][50], B[50][50], C[50][50];
	clrscr();

	printf("\n Enter Number of rows and columns for Matrix A : ");
	scanf("%d %d", &m, &n);
	printf("\n Enter Number of rows and columns for Matrix B : ");
	scanf("%d %d", &p, &q);

	if(n != p )

	{	printf("\n Multiplication is not possible :");
		return 0;
	}

	for(i = 0; i < m; i++)

		for(j = 0; j < n; j++)

		{

		printf("\n Enter the Element [%d][%d] of A: ", i+1, j+1);
		scanf("\n%d", &A[i][j]);

		}

		for(i = 0; i < p; i++)
		for(j=0; j < q; j++)

		{

		printf("\n Enter the element [%d][%d] of B: ", i+1, j+1);
		scanf("\n%d", &B[i][j]);

		}

		for(i=0; i < m; i++)
		for(j = 0; j < q; j++)

		{
			C[i][j] = 0;
			for(k = 0; k < p; k++)
			C[i][j] = C[i][j] + A[i][k] * B[k][j];
		}
	printf("\n\t Product of the matrices is \n");
	for(i = 0; i < m; i++)
	{		for(j = 0; j < q; j++)
			printf("\t%d", C[i][j]);
		printf("\n");
	}
	getch();
 	return 0;
}
