#include <stdio.h>
#include <stdlib.h>

int main() {
    char person[100];

    printf("Introdu numele persoanei: ");
    scanf("%s", person);

    printf("Salut, %s!\n", person);

    return 0;
}
