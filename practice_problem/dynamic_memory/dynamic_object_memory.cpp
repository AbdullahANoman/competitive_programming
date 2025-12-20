#include <iostream>
using namespace std;


class Student {
    public : int roll,cls,student ;
    int arr[100];
    Student(int roll){
        this->roll = roll;
    }
    void print(){
        cout << this->roll+100 << " ";
    }
};

void fun (Student *obj){
    obj->roll = 1000;
    cout << "This student is so funny with roll " << obj->roll << endl; 
}

int main()
{

    // Student obj = Student(10);
    // cout << obj.roll << endl;
    // obj.print();
    // fun(obj);
    

    Student *obj = new Student(10);
    cout<< obj->roll << " ";
    obj->print();
    fun(obj);

    // cout << sizeof(obj) << " ";

    //NOTE in dynamic memory obj have size the full of obj inside variable but not showing if we remove dynamic memory allocation this will be show
    return 0;
}