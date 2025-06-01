#include<bits/stdc++.h>
using namespace std;

int main() {

    int year ;
    cin >> year;

    int yearResult = year % 100;

    // cout << yearResult << endl;

    if (year>=1973 && year <=2024)
        // cout << "K%02d" << yearResult << endl;
            printf("K%02d\n", yearResult);
    return 0;
}