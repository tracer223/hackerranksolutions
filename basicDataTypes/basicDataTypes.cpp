#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a = 3;
    long b = 123456789;
    char c = 'a';
    float d = 333.45;
    double e = 556677.660000;

    scanf(" %d %ld %c %f %lf", &a, &b, &c, &d, &e);    
    printf("%d\n%ld\n%c\n%4.3f\n%4.9lf", a, b, c, d, e);

    return 0;
}
