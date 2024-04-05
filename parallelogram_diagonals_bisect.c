#include <stdio.h>

/**
 * struct Point - Structure to represent a 2D point
 * @x: x-coordinate of the point
 * @y: y-coordinate of the point
 */
struct Point {
    float x;
    float y;
};

/**
 * midpoint - Calculate the midpoint of a line segment given two points
 * @p1: First endpoint of the line segment
 * @p2: Second endpoint of the line segment
 *
 * Return: Midpoint of the line segment
 */
struct Point midpoint(struct Point p1, struct Point p2) {
    struct Point mid;
    mid.x = (p1.x + p2.x) / 2;
    mid.y = (p1.y + p2.y) / 2;
    return mid;
}

/**
 * areEqual - Check if two points are equal
 * @p1: First point
 * @p2: Second point
 *
 * Return: 1 if points are equal, 0 otherwise
 */
int areEqual(struct Point p1, struct Point p2) {
    return (p1.x == p2.x && p1.y == p2.y);
}

int main(void) {
    struct Point A, B, C, D;
    struct Point midpoint_AC;
    struct Point midpoint_BD;

    printf("Enter the coordinates of vertex A (x y): ");
    scanf("%f %f", &A.x, &A.y);
    printf("Enter the coordinates of vertex B (x y): ");
    scanf("%f %f", &B.x, &B.y);
    printf("Enter the coordinates of vertex C (x y): ");
    scanf("%f %f", &C.x, &C.y);
    printf("Enter the coordinates of vertex D (x y): ");
    scanf("%f %f", &D.x, &D.y);

    midpoint_AC = midpoint(A, C);
    midpoint_BD = midpoint(B, D);

    if (areEqual(midpoint_AC, midpoint_BD)) {
        printf("The diagonals bisect each other.\n");
    } else {
        printf("The diagonals do not bisect each other.\n");
    }

    return 0;
}
