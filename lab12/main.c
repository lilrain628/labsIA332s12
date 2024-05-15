#include<stdio.h>
#include "header.h"
int main(){
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