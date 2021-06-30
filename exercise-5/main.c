#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int firstGrade, secondGrade, result;
    char message[30];

    printf("Type your first partial grade: ");
    scanf("%i", &firstGrade);

    printf("Type your second partial grade: ");
    scanf("%i", &secondGrade);

    result = (firstGrade + secondGrade) / 2;

    if(result < 7){
        strcpy(message, "\nFailed\n\n");
    } else if(result == 10) {
        strcpy(message, "\nApproved with Honor!\n\n");
    } else {
        strcpy(message, "\nApproved\n\n");
    }

    puts(message);

    return 0;
}
