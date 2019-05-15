/*
This program finds the largest element in an array of 4 elements entered by the user.
*/

#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
#include <iterator>

using namespace std;

int max_of_four(int a, int b, int c, int d) {
    // sorts array from largest to smallest, returns 1st value (index 0)
    int largest;
    int arr[4] = {a, b, c, d};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n, greater<int>());

    return arr[0];
}


int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

