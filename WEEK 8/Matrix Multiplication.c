#include <stdio.h>

int main() {
	int r1, c1, r2, c2;
	int A[100][100], B[100][100], C[100][100];

	// Read Matrix A dimensions
	scanf("%d %d", &r1, &c1);

	// Read Matrix A elements
	for(int i = 0; i < r1; i++) {
		for(int j = 0; j < c1; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	// Read Matrix B dimensions
	scanf("%d %d", &r2, &c2);

	// Check if matrix multiplication is possible
	if(c1 != r2) {
		printf("Invalid input\n");
		return 0;
	}

	// Read Matrix B elements (only if valid)
	for(int i = 0; i < r2; i++) {
		for(int j = 0; j < c2; j++) {
			scanf("%d", &B[i][j]);
		}
	}

	// Matrix Multiplication
	for(int i = 0; i < r1; i++) {
		for(int j = 0; j < c2; j++) {
			C[i][j] = 0;
			for(int k = 0; k < c1; k++) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}

	// Print Resulting Matrix with space after each number
	for(int i = 0; i < r1; i++) {
		for(int j = 0; j < c2; j++) {
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}

	return 0;
}
