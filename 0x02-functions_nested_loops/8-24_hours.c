#include"main.h"

/**
 * jack_bauer- prints every minute of the day
*/

void jack_bauer(void) {
    for (int hour = 0; hour < 24; hour++) {
        for (int minute = 0; minute < 60; minute++) {
            int h1 = hour / 10;
            int h2 = hour % 10;
            int m1 = minute / 10;
            int m2 = minute % 10;
            _putchar(h1 + '0');
            _putchar(h2 + '0');
            _putchar(':');
            _putchar(m1 + '0');
            _putchar(m2 + '0');
            _putchar('\n');
        }
    }
}

