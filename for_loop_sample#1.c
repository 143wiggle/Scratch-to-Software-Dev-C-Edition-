#include <stdio.h>

int main() {
    int apples;

    // Prompt user for the number of apples
    printf("How many apples do you want? ");
    scanf("%d", &apples);

    // For loop to display apples
    for (int i = 1; i <= apples; i++) {
        printf("Apple #%d\n", i);
    }

    return 0;
}

/*
Sample Output:
How many apples do you want? 3
Apple #1
Apple #2
Apple #3
*/
