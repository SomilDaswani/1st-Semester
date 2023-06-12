#include <stdio.h>
#include <time.h>

int main() {
    while (1) {
        time_t currentTime;
        struct tm *localTime;
        time(&currentTime);
        localTime = localtime(&currentTime);
        int hour = localTime->tm_hour;
        int min = localTime->tm_min;
        int sec = localTime->tm_sec;
        printf("\r%02d:%02d:%02d", hour, min, sec);
        sleep(1);
    }
    return 0;
}
