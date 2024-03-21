#include <stdio.h>
#include <string.h>
#define A 100
int main() {
    char str1[A], str2[A], concatenated[A* 2];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; 
    int i, j;
    for (i = 0; str1[i] != '\0'; ++i) {
        concatenated[i] = str1[i];
    }
    for (j = 0; str2[j] != '\0'; ++j) {
        concatenated[i + j] = str2[j];
    }
    concatenated[i + j] = '\0';
    printf("Concatenated string: %s\n", concatenated);

    return 0;
}
