#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;
    int result[3];

    printf("Type the first number: ");
    scanf("%i", &n1);


    printf("Type the second number: ");
    scanf("%i", &n2);

    printf("Type the third number: ");
    scanf("%i", &n3);

    if(n1 > n2) {
        if(n1 > n3){
            result[0] = n1;

            if(n2 > n3) {
                result[1] = n2;
                result[2] = n3;
            } else {
                result[1] = n3;
                result[2] = n2;
            }
        } else {
            result[0] = n3;
            result[1] = n1;
            result[2] = n2;
        }
    }

    size_t resultLength = sizeof(result) / sizeof(result[0]);

    for(int i = 0; i < resultLength; i++) {
        printf("\nResultado: %i, %i, %i\n", result[i], result[2], result[3]);
    }

    return 0;
}
