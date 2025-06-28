#include <stdio.h>

int main() {
    int k;
    int mapping[26];  // To store values for A to Z

    printf("Enter the starting value for A: ");
    scanf("%i", &k);

    printf("\nCharacter to Number Mapping:\n");

    for (int j = 'A', i = 0; j <= 'Z'; j++, i++, k++) {
        mapping[i] = k;
        printf("%c = %d\n", j, mapping[i]);
    }

    return 0;
}
