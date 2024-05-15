#include<stdio.h>
#include "header.h"
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