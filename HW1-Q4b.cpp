#include <stdio.h>

void computeHomeValue(void);

int main() {
    computeHomeValue();
    return 0;
}

void computeHomeValue(void) {
    int popularity, size, homeValue;

    printf("Enter home popularity: ");
    scanf("%d", &popularity);

    printf("Enter home size: ");
    scanf("%d", &size);

    homeValue = popularity * size;
    printf("Home value (computed inside void function): %d\n", homeValue);
}

