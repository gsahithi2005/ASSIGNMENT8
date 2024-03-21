#include <stdio.h>
void circularShift(int *x, int *y, int *z) {
    int temp = *z;
    *z = *y;
    *y = *x;
    *x = temp;
}
int main() {
    int a, b, c; 
    printf("Enter the value for a: ");
    scanf("%d", &a);
    printf("Enter the value for b: ");
    scanf("%d", &b);
    printf("Enter the value for c: ");
    scanf("%d", &c);  
    printf("Before circular shift: a = %d, b = %d, c = %d\n", a, b, c);
    circularShift(&a, &b, &c);
    printf("After circular shift: a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}
