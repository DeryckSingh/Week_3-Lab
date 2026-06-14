#include <stdio.h>

// Initialzing Prototypes
int clamp(int val, int lo, int hi);
int absolute_value(int x);
double celsius_to_farenheit(double c);
int is_even(int n);

// Picking my own values to test in the function definitions below
int main (void){
    int bound = clamp(15, 0, 10);
    int absolute = absolute_value(-10);
    double C_to_F = celsius_to_farenheit(0);
    int even_odd = is_even(3);

    printf("clamp(15, 0, 10) = %d\n", bound);
    printf("Absolute |-10|: %d\n", absolute);
    printf("Celsius to Farenheit: %.2lf\n", C_to_F);
    printf("If test # is even print 1, otherwise print 0: %d\n", even_odd);

    return 0;
}

int clamp(int val, int lo, int hi) {
    if (val < lo) {
        (val = lo);
    } else if (val > hi) {
        (val = hi);
    } else {
        (val = val);
    }
    return val;
}

int absolute_value(int x) {
    if (x < 0) {
        x = (x * -1);
    } else {
        x = x;
    }
    return x;
}

double celsius_to_farenheit(double c) {
    c = (c * 9.0 / 5.0 + 32);
    return c;
}

int is_even(int n) {
    if (n % 2 == 0) {
        n = 1;
    } else {
        n = 0;
    }
    return n;
}