#include <stdio.h>

float millisecond_converter_tosec(float ms) {

    float seconds = (ms/1000);

    return seconds;
}

float millisecond_converter_tomin(float ms) {

    float minutes = (ms/60000);

    return minutes;
}

float millisecond_converter_tohr(float ms) {

    float hours = (ms/3600000);

    return hours;
}

float millisecond_converter_todays(float ms) {

    float days = (ms/86400000);

    return days;
}


int main(void)
{
    float ms = 0.0F;

    printf("Please enter a millisecond value: ");
    scanf("%f", &ms);

    float seconds = millisecond_converter_tosec(ms);
    float minutes = millisecond_converter_tomin(ms);
    float hours = millisecond_converter_tohr(ms);
    float days = millisecond_converter_todays(ms);

    printf("seconds: %f\n", seconds);
    printf("minutes: %f\n", minutes);
    printf("hours: %f\n", hours);
    printf("days: %f\n", days);

    return 0;
}
