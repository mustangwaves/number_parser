#include<stdio.h>
#include<string.h>

void main() {

char input[1000];  // initialize vars
int length;

printf("Enter a number: "); // gets the num and stores it
scanf("%s",&input);

length = strlen(input); // gets length of the num

for (int i=0; i < length; i++)  { // loop to print out each term
    printf("Term %d is: %c\n", i+1, input[i]);

    }
}