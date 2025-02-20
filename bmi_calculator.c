#include <stdio.h>

int main() {
    // Display greeting message
    printf("Hello, User!\n");

    // Declare variables for weight, height, and BMI
    float weight, height, BMI;
    char userChar;

    // Ask for weight and height
    printf("Enter your weight in kg: ");
    scanf("%f", &weight);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    // Display entered values
    puts("You entered:");
    printf("Weight: %f kg\n", weight);
    printf("Height: %f meters\n", height);

    // Calculate BMI
    BMI = weight / (height * height);
    printf("Your BMI is: %f\n", BMI);

    // Receive a character from user
    printf("Enter a character: ");
    getchar(); // Consume newline character from previous input
    userChar = getchar();

    // Display the character
    printf("You entered: ");
    putchar(userChar);
    printf("\n");

    // Display formatted text using escape sequences
    printf("Examples of programming languages:\n");
    printf("     1. Java\n     2. C++\n");
    printf("\"What other language do you know?\"\n");

    return 0;
}
