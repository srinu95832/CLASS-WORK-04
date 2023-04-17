#include <stdio.h>

typedef union {
    float meters;
    int inches;
} Measurement;

void convert(Measurement m, char unit) {
    float inches, feet, yards, meters;

    if (unit == 'i') {
        inches = m.inches;
    } else {
        inches = m.meters * 39.3701;
    }

    feet = inches / 12.0;
    yards = feet / 3.0;
    meters = inches / 39.3701;

    printf("%.2f inches = %.2f feet = %.2f yards = %.2f meters\n",
           inches, feet, yards, meters);
}

int main() {
    Measurement m;
    char unit;

    printf("Enter a value and its unit (i for inches, m for meters): ");
    scanf("%f %c", &m.meters, &unit);

    if (unit == 'i') {
        m.inches = (int) m.meters;
    }

    convert(m, unit);

    return 0;
}
