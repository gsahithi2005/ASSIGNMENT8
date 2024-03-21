#include <stdio.h>
void check(int *nums, int n) {
    int count[n + 1]; 
    for (int i = 0; i < n + 1; i++) {
        count[i] = 0;
    }
    printf("Duplicate elements: ");
    int found = 0; 
    for (int i = 0; i < n + 1; i++) {
        count[nums[i]]++;
        if (count[nums[i]] > 1) {
            printf("%d ", nums[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("None of the elements are repeated.");
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid input for size\n");
        return 1;
    }
    int nums[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            printf("Invalid input for element %d\n", i+1);
            return 1;
        }
    }

    check(nums, n - 1); 
    return 0;
}
