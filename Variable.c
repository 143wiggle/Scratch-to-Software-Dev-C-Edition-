Tourist Data Input: A C Variable Exercise.
#include <stdio.h>

int main() {
    // Declare variables
    char name[50];  // Array to store the name
    int age;

    // Prompt the user for input
    printf("Enter your name: ");
    scanf("%49s", name); // Read name (avoiding buffer overflow)

    printf("Enter your age: ");
    scanf("%d", &age);

    // Print the collected information
    printf("\n--- Tourist Information ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);

    return 0;
}
/*
Sample Output:
Enter your name: Wigonedy
Enter your age: 30

--- Tourist Information ---
Name: Wigonedy
Age: 30
*/
