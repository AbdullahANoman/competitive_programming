#include<bits/stdc++.h>
using namespace std;

int main() {

    double r;
    cin >> r;


    double pi = acos(-1);


    double circleArea = pi * r * r;

    double  circleCircumference = 2 * pi * r;


    cout << fixed << setprecision(6) << circleArea << " " << circleCircumference << endl;

    return 0;
}
