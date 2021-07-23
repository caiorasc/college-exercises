#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days, qtdDaysWithTempLowerThenAverage;
    days = 365;

    float temperatureVector[days];
    float higherTemperature, lowerTemperature, averageTemperature, sum;

    for(int i = 0; i < days; i++) {
        printf("Type the temperature of the day: ");
        scanf("%f",&temperatureVector[i]);

        if(i == 0) {
            higherTemperature = temperatureVector[i];
            lowerTemperature = temperatureVector[i];
            sum = temperatureVector[i];
        }
        else {
            if(temperatureVector[i] > higherTemperature) {
                higherTemperature = temperatureVector[i];
            }

            if(temperatureVector[i] < lowerTemperature) {
                lowerTemperature = temperatureVector[i];
            }

            sum = sum + temperatureVector[i];
        }
    }

    averageTemperature = sum / days;

    for(int i = 0; i < days; i++) {
        if(temperatureVector[i] < averageTemperature) {
            qtdDaysWithTempLowerThenAverage = qtdDaysWithTempLowerThenAverage + 1;
        }
    }

    printf("\nLower temperature of the year: %f \n", lowerTemperature);
    printf("Higher temperature of the year: %f \n", higherTemperature);
    printf("Average temperature of the year: %f \n", averageTemperature);
    printf("Number of Days with temperature lower then average: %i \n", qtdDaysWithTempLowerThenAverage);
}
