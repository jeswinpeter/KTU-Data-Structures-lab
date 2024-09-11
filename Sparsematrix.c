//This code converts a sparse matrix into a sparse matrix representation
#include<stdio.h>
void main() {
int r,c,j,i,k;
int A[10][10],B[101][3];

printf("Enter the number of rows and columns (m X n)-> ");
scanf("%d%d",&r,&c);

	printf("Enter the elements of the Sparse matrix \n");
	//Loop to take values to the matrix
	for(i = 0; i < r; i++) {
		for(j = 0; j < c; j++) {
			scanf("%d",&A[i][j]);
		}
	}

	printf("The matrix you have entered is : \n");
	//Loop to Display the entered matrix
	for(i = 0; i < r; i++) {
		for(j = 0; j < c; j++) {
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}

	k = 1;
	for(i = 0; i < r; i++) {
		for(j = 0; j < c; j++) {
			if(A[i][j] != 0) { 
				B[k][0] = i;
				B[k][1] = j;
				B[k][2]	= A[i][j];
				k++;
			}
		}
	}

	B[0][0] = r;
	B[0][1] = c;
	B[0][2] = k - 1;

	printf("The Sparse Matrix is: \nRow \t column \t Value \n");
	for(i = 0; i < k; i++) {
	printf("%d \t %d \t %d \n",B[i][0], B[i][1], B[i][2]);
	}
}
