#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
};

void fun(Student *obj, int n, int *arr)
{
    int roll;
     for (int i = 0; i < n; i++)
    {
        obj[i].roll = i + 100;
        roll = obj[i].roll;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = roll;
    }
}

int main()
{
    int n;
    cin >> n;
    Student *obj = new Student[n];
    int arr[n];
    fun(obj, n, arr);

    for (int i = 0; i < n; i++)
    {
        cout << obj->roll << " ";
    }
    // cout << obj->roll << endl;
    return 0;
}