#include <stdio.h>
#include <conio.h>
#include <time.h>
int main()
{
    // clrscr();
    char timestr[10];
    struct tm t = {0};
    time_t check;
    printf("\nEnter time in HH:MM:SS format: ");
    gets(timestr);
    if (timestr[2] != ':' || timestr[5] != ':')
    {
        printf("\nInvalid Time!");
        return 0;
    }
    t.tm_hour = (timestr[0] - '0') * 10 + (timestr[1] - '0');
    t.tm_min = (timestr[3] - '0') * 10 + (timestr[4] - '0');
    t.tm_sec = (timestr[6] - '0') * 10 + (timestr[7] - '0');
    check = mktime(&t);
    if (t.tm_hour < 0 || t.tm_hour > 23 || t.tm_min < 0 || t.tm_min > 59 || t.tm_sec < 0 || t.tm_sec > 59)
    {
        printf("\nInvalid Time!");
    }
    else
    {
        printf("\nValid Time!");
        printf("\nTime: %d:%d:%d",t.tm_hour,t.tm_min,t.tm_sec);
        printf("\nHoure: %d",t.tm_hour);
        printf("\nMinutes: %d",t.tm_min);
        printf("\nSecond: %d",t.tm_sec);
    }
    getch();
    return 0;
}
