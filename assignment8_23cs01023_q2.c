#include <stdio.h>
int main() {
    int m, n, p, q;
    printf("Enter the dimensions of the first matrix (m*n): ");
    scanf("%d%d", &m, &n);
    printf("Enter the dimensions of the second matrix (p*q): ");
    scanf("%d%d", &p, &q);
    if (n != p) {
        printf("Error: Matrix dimensions are incompatible for multiplication.\n");
        return 1;
    }
    int a[m][n], b[p][q], c[m][q];
    int i, j, k;
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            c[i][j] = 0;
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Matrix multiplication result:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
