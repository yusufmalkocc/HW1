#include <stdio.h>

int computeHomeValue(int popularity, int size);

int main() {
    int popularity, size, homeValue;

    printf("Enter home popularity: ");
    scanf("%d", &popularity);

    printf("Enter home size: ");
    scanf("%d", &size);

    homeValue = computeHomeValue(popularity, size);
    printf("Home value (using function with return): %d\n", homeValue);

    return 0;
}

int computeHomeValue(int popularity, int size) {
    return popularity * size;
}

