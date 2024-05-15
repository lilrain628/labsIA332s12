#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

void printQuadrant(Point p) {
    if (p.x > 0 && p.y > 0) {
        printf("точка в 1 кв.\n");
    } else if (p.x < 0 && p.y > 0) {
        printf("точка в 2 кв.\n");
    } else if (p.x < 0 && p.y < 0) {
        printf("точка в 3 кв.\n");
    } else if (p.x > 0 && p.y < 0) {
        printf("точка в 4 кв.\n");
    } else {
        printf("точка лежит на оси\n");
    }
}

int main() {
    int N; //кол во точек
    scanf("%d", &N);

    Point points[N];
    for (int i = 0; i < N; i++) {
        printf("х координата точки %d: ", i+1);
        scanf("%d", &points[i].x);
        printf("у координата точки %d: ", i+1);
        scanf("%d", &points[i].y);
    }

    for (int i = 0; i < N; i++) {
        printf("Point %d: (%d, %d) - ", i+1, points[i].x, points[i].y);
        printQuadrant(points[i]);
    }

    return 0;
}
