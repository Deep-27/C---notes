#include <stdio.h>

void update(int *a,int *b) {
    int *c;
    *c=*a+*b;
    int *d;
    (*a>*b)?(*d=*a-*b):(*d=*b-*a);
    *a=*c;
    *b=*d;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}