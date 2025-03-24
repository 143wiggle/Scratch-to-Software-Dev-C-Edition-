
#include <stdio.h>

int main() {
    int apples;

    // Ask the user for the number of apples
    printf("How many apples do you have? ");
    scanf("%d", &apples);

    // Countdown loop
    printf("\nCounting down your apples:\n");
    for (int i = apples; i >= 1; i--) {
        printf("Apple #%d\n", i);
    }

    printf("No more apples left!\n");

    return 0;
}

/*
Sample Output:
How many apples do you have? 5

Counting down your apples:
Apple #5
Apple #4
Apple #3
Apple #2
Apple #1
No more apples left!
*/
