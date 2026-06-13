#include <stdio.h>
// initializing prototypes
void get_dimentions(double *w, double *h);
double compute_area(double w, double h);
double compute_perimeter(double w, double h);
void classify_rectangle(double w, double h);
void print_results(double area, double perimeter);


// calling functions
// fixed from calling functions with types in the arguments
int main(void) {
    double width, height;
    get_dimentions(&width, &height);
    double area = compute_area(width, height);
    double perimeter = compute_perimeter(width, height);
    print_results(area, perimeter);
    classify_rectangle(width, height);
    return 0;
    }

    /* --- compute area and perimeter of a rectangle --- */
    // Block 1
    //Making function definitions
void get_dimentions(double *w, double *h)   {
    printf("Enter width: ");
    fscanf(stdin, "%lf", w);
    printf("Enter height: ");
    fscanf(stdin, "%lf", h);
    }
    // Block 2
    //Making function definitions
    double compute_area(double w, double h) {
    double area = w * h;

    return area;
    }
    // Block 3
    //Making function definitions
double compute_perimeter(double w, double h) {
    double perimeter = 2.0 * (w + h);

    return perimeter;
    }
    // Block 4
    //Making function definitions
void classify_rectangle(double w, double h) {
    if (w == h) {
    printf("Shape: Square\n");
    } else if (w > h * 2.0 || h > w * 2.0) {
    printf("Shape: Elongated rectangle\n");
    } else {
    printf("Shape: Rectangle\n");
    }
  
    }
    /* --- classify the rectangle --- */
    // Block 5
    //Making function definitions
void print_results(double area, double perimeter) {
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);
  
}

