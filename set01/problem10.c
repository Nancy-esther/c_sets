#include <stdio.h>

// Function to input two strings
void input_two_strings(char *string1, char *string2) {
    printf("Enter the first string: ");
    scanf("%s", string1);

    printf("Enter the second string: ");
    scanf("%s", string2);
}

// Function to compare two strings character by character
int stringcompare(char *string1, char *string2) {
    while (*string1 != '\0' && *string2 != '\0') {
        if (*string1 != *string2) {
            return *string1 - *string2;
        }
        string1++;
        string2++;
    }
    return *string1 - *string2;
}

// Function to output the comparison result
void output(char *string1, char *string2, int result) {
    if (result == 0) {
        printf("The strings %s and %s are equal.\n", string1, string2);
    } else if (result < 0) {
        printf("The string %s is greater than %s.\n", string2, string1);
    } else {
        printf("The string %s is  lesser than %s.\n", string2, string1);
    }
}

int main() {
    char string1[100], string2[100];

    // Input two strings
    input_two_strings(string1, string2);

    // Compare strings character by character
    int result = stringcompare(string1, string2);

    // Output the result
    output(string1, string2, result);

    return 0;
}
