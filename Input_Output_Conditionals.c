#include <stdio.h>

int main() {
    // Different data types in C
    char initial;         // Single character
    char name[50];        // String (character array)
    int age;              // Integer number
    float rating;         // Floating-point number
    double distance;      // Double-precision floating-point number

    // Input values
    printf("Enter your first initial: ");
    scanf(" %c", &initial);  // Space before %c to handle newline issues

    printf("Enter your name: ");
    scanf("%49s", name); // Read name (avoiding buffer overflow)

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your tourist rating (1.0 - 5.0): ");
    scanf("%f", &rating);

    printf("Enter the distance you traveled (in km): ");
    scanf("%lf", &distance);

    // Print the collected information
    printf("\n--- Tourist Information ---\n");
    printf("Initial: %c\n", initial);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Rating: %.1f\n", rating);
    printf("Distance Traveled: %.2lf km\n", distance);

    return 0;
}

/*
Sample Output:
Enter your first initial: D
Enter your name: brent
Enter your age: 32
Enter your tourist rating (1.0 - 5.0): 2
Enter the distance you traveled (in km): 20

--- Tourist Information ---
Initial: D
Name: brent
Age: 32
Rating: 2.0
Distance Traveled: 20.00 km
*/
