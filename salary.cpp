#include <bits/stdc++.h>
using namespace std;

class person{
public:
    char name[64];
    int age;
    char add[64];
    int salary;
    
    person(char name[],int age,char add[],int salary){
        strcpy(this->name,name);
        this->age=age;
        strcpy(this->add,add);
        this->salary=salary;
        cout << "Salary Slip \n"
             << "Name: " << this->name << "\nAge: " << this->age << "\nAddress: " << this->add << "\nSalary: " << this->salary << endl;
    }
    
    inline static int young(person* arr[]){
        person* min = arr[0];
        for(int i=1; i<10; i++){
            if(arr[i]->age < min->age){
                min = arr[i];
            }
        }
        return min->age;
    }
    
    inline static int old(person* arr[]){
        person* max = arr[0];
        for(int i=1; i<10; i++){
            if(arr[i]->age > max->age){
                max = arr[i];
            }
        }
        return max->age;
    }
};

int main() {
    person* arr[10];
    for(int i=0;i<9;i++){
        char name[64];
        cout<<"Enter Name: \n";
        cin>>name;
        int age;
        cout<<"Enter Age: \n";
        cin>>age;
        char add[64];
        cout<<"Enter Address: \n";
        cin>>add;
        int salary;
        cout<<"Enter Salary: \n";
        cin>>salary;
        arr[i]=new person(name,age,add,salary);
    }
    cout<<"Youngest Age: "<<person::young(arr)<<endl;
    cout<<"Oldest Age: "<<person::old(arr)<<endl;
}
