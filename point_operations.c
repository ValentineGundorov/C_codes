/*Point Operations: This C program defines a structure Point to represent a point in 2D space. It reads two points, calculates the distance between them, and computes their sum. The results are printed to the console*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct point {
	double x;
	double y;
};

typedef struct point Point;

Point readPoint();
double distance(Point p1, Point p2);
Point sum(Point p1, Point p2);
void printPoint(Point p);

void main() {

	Point p1, p2, p3;
	double dist;

	p1 = readPoint();
	p2 = readPoint();

	printf("The result is: %lf\n", distance(p1, p2));
	p3 = sum(p1, p2);
	printf("The sum is: ");
	printPoint(p3);
}