#include <stdio.h>

int main() {
    int integerData;
    char charData;

    printf("Enter an integer: ");
    scanf("%d", &integerData);

    while (getchar() != '\n');

    printf("Enter a character: ");
    scanf("%c", &charData);

    printf("You entered: \n");
    printf("Integer: %d\n", integerData);
    printf("Character: %c\n", charData);

    return 0;
}
