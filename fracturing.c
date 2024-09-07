//********************************************************
// assignment1.c
// Author: Giovanni Reed
// Date: 9/7/2024
// UCFID: 5470456
// Class: COP 3223, Professor Parra
// Purpose: This program sets points from
// user input and calculates distance,
// area, perimeter, height, and width.
// Input: Coordinates for points
//
// Output: Messages with information about points
// //********************************************************

# include <math.h> 
# include <stdio.h>
# define PI 3.14159


// Takes user input and returns it
double askForUserInput() {

    double x = 0.0;
    printf("What is your input?");
    scanf("%lf", &x);

    return x;
}

// Allows user to choose two points and
// finds distance between points
double shortCut() {

    double x_1 = 0.0;
    double x_2 = 0.0;
    double x_d = 0.0;
    double y_1 = 0.0;
    double y_2 = 0.0;
    double y_d = 0.0;

    x_1 = askForUserInput();
    x_2 = askForUserInput();
    y_1 = askForUserInput();
    y_2 = askForUserInput();

    // printf("%lf", x_1);
    printf("Point #1 entered: x1 = %lf; y1 = %lf", x_1, y_1);
    printf("\nPoint #2 entered: x2 = %lf; y2 = %lf\n", x_2, y_2);

    x_d = x_2 - x_1;
    y_d = y_2 - y_1;

    double p_1 = pow(x_d, 2);
    double p_2 = pow(y_d, 2);
    double distance = sqrt(p_1 + p_2);

    return distance;
}

// Uses shortCut() to find distance and prints it
double calculateDistance() {

    double distance = shortCut();
    printf("The distance between the two points is %lf\n", distance);

    return distance;
}

// Uses shortCut() to find distance and
// uses it to find perimeter
double calculatePerimeter() {

    double distance = 0.0;
    distance = shortCut();
    double per = distance * PI;
    printf("The perimeter of the city encompassed by your request is %lf\n", per);

    return 3.0;
}

// Uses shortCut() to find distance and
// uses it to calculate area
double calculateArea() {

    double distance = 0.0;
    distance = shortCut();
    double area = pow(distance * 0.5, 2) * PI;
    printf("The area of the city encompassed by your request is %lf\n", area);

    return 3.0;
}

// Uses shortCut() to find distance and
// relabels it as width
double calculateWidth() {

    double width = 0.0;
    width = shortCut();
    printf("The width of the city encompassed by your request is %lf\n", width);

    return 3.0;
}

// Uses shortcut to find distances and
// relabels it as height
double calculateHeight() {

    double height = 0.0;
    height = shortCut();
    printf("The height of the city encompassed by your request is %lf\n", height);
    return 3.0;
}

// main function - calls 5 major functions
int main(int argc, char **argv) {

    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}