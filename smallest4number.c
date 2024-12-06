#include <stdio.h>

int main() {

    int a, b, c, d;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

  
    if (a < b) {
        if (a < c) {
            if (a < d) {
               printf(" a is the smallest number"); 
            } else {
               printf("d is the smallest number"); 
            }
        } else {
            if (c < d) {
               printf("c is the smallest number");
            } else {
                printf("d is the smallest number");
            }
        }
    } else {
        if (b < c) {
            if (b < d) {
               printf("b is the smallest number");
            } else {
               printf("d is the smallest number");
            }
        } else {
            if (c < d) {
                printf("c is the smallest number");
            } else {
                printf("d is the smallest number");
            }
        }
    }

    return 0;
}

