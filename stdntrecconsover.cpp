#include <iostream>
using namespace std;

class student{
public:
    string name;
    int roll;
    int marks[6];
    
    student(string name,int roll, int marks[6]){
        this->name=name;
        this->roll=roll;
        for(int i=0;i<6;i++){
            this->marks[i]=marks[i];
        }
        cout<<"Name: "<<this->name<<endl<<"Roll Number: "<<this->roll<<endl;
        for(int i=0;i<6;i++){
            cout<<this->marks[i]<<endl;
        }
    }
    
    student(string name,int roll){
        this->name=name;
        this->roll=roll;
        cout<<"Name: "<<this->name<<endl<<"Roll Number: "<<this->roll<<endl;
    }
    
    student(int roll, int marks[6]){
        this->roll=roll;
        for(int i=0;i<6;i++){
            this->marks[i]=marks[i];
        }
        cout<<"Roll Number: "<<this->roll<<endl;
       for(int i=0;i<6;i++){
            cout<<this->marks[i]<<endl;
        }
    }
};

int main() {
    int marks[6]={91,92,93,95,96,99};
    student* s1=new student("Aarush", 1, marks);
    student* s2=new student(1,marks);
    student* s3=new student("Dinaaksh",2);
    return 0;
}
