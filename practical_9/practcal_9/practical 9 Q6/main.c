#include <stdio.h>
#include <string.h>


void reverseString(char *strArray) {

    int length = strlen(strArray);
    char *first = strArray;
    char *last= strArray + length - 1;
    char word;


    while (first < last) {

        word = *first;
        *first = *last;
        *last = word;


        first++;
        last--;
    }
}

int main() {
    char strArray[100];


    printf("Enter a string: ");

    fgets(strArray, sizeof(strArray), stdin);




    strArray[strcspn(strArray, "\n")] = '\0';


    reverseString(strArray);


    printf("Reversed string: %s\n", strArray);

    return 0;
}
