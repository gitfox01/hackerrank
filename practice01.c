#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Function prototypes
void helloWorld(void);
int playingWithCharacters(void);
int sumDifferenceOfTwoNums(void);
int max_of_four(int a, int b, int c, int d);

int main()
{
    // helloWorld();
    //playingWithCharacters();
    //sumDifferenceOfTwoNums();
    printf("%d", max_of_four(1, 2, 3, 4));

    return 0;
}


// Function to print "Hello, World!" to stdout and then scan in a string from stdin. Then print the string to stdout.
void helloWorld(void) {
    char s[100];
    scanf("%[^\n]%*c", s);

    printf("Hello, World!\n");
    printf("%s\n", s);
}


// Function to scan in both a char and a string from stdin.
int playingWithCharacters(void) {
    char userChar;
    char userStr[100] = {0}; // Initialize string to null
    char userStrTwo[100] = {0}; // Initialize string to null

    // Get input char
    scanf("%c", &userChar);

    // Clear stdin
    scanf("%*c");

    // Get input string
    scanf("%[^\n]%*c", userStr);

    // Get input string 2
    scanf("%[^\n]%*c", userStrTwo);

    // Print output
    printf("%c\n%s\n%s", userChar, userStr, userStrTwo);

    return 0;
}

// Function to test addition and substraction of both integers and floats
int sumDifferenceOfTwoNums(void) {
    int varOne, varTwo;
    float varThree, varFour;

    scanf("%d %d", &varOne, &varTwo);
    scanf("%*c"); // Clear new line character
    scanf("%f %f", &varThree, &varFour);

    printf("%d %d\n", (varOne + varTwo), (varOne - varTwo));
    printf("%0.1f %0.1f\n", (varThree + varFour), (varThree - varFour));

    return 0;
}

int max_of_four(int a, int b, int c, int d) {
    if (a>b && a>c && a>d) {
        return a;
    }
    else if (b>a && b>c && b>d) {
        return b;
    }
    else if (c>b && c>a && c>d) {
        return c;
    }
    else if (d>b && d>c && d>a) {
        return d;
    }
    else {
        return -1;
    }
}