#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<long long int> nums(4);

    for (int i = 0; i < 4; ++i) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int total = nums[3];

    int b = total - nums[1];
    int a = total - nums[2];
    int c = total - nums[0];


    cout << a << " " << b << " " << c << endl;

    return 0;
}
