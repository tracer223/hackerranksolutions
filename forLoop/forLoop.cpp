/*
* This program takes 2 numerical inputs from the user and prints the numbers n between these numbers * as strings. If the number is higher than 9 and even, it prints the string "even". If higher than 9 * and odd, it prints "odd".
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    string stringNums [9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int a;
    int b;

    cin >> a >> b;

    //printf("%d\n%d\n", a, b);

    for (; a <= b; a++) {
        if (a >= 1 && a <= 9) {
          cout << stringNums[a-1] << endl;       
        } else if (a > 9 && a % 2 == 0) {
            cout << "even" << endl;
        } else {
            cout << "odd" << endl;
        } 
    }

    return 0;
}


