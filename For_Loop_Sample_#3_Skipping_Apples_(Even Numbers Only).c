#include <stdio.h>

int main() {
    int apples;

    // Ask the user for the number of apples
    printf("How many apples do you have? ");
    scanf("%d", &apples);

    // Loop to display only even-numbered apples
    printf("\nSkipping odd apples, counting only even ones:\n");
    for (int i = 2; i <= apples; i += 2) {
        printf("Apple #%d\n", i);
    }

    printf("All even apples counted!\n");

    return 0;
}

/*
Sample Output:
How many apples do you have? 7

Skipping odd apples, counting only even ones:
Apple #2
Apple #4
Apple #6
All even apples counted!
*/
