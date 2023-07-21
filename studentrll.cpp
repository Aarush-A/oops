#include <bits/stdc++.h>
using namespace std;

struct student{
    public:
    int rll;
    string name;
    int age;
    
    student(int roll, string n, int ag){
        rll=roll;
        name=n;
        age=ag;
    }
};
int main(){
    student* s1=new student(1,"Pablo", 18);
    student* s2=new student(2,"Dino",19);
    student* s3=new student(3,"Lemony",20);
    student* s4=new student(4,"Grim",21);
    student* s5=new student(5,"Flames",18);
    vector<student*> student;
    student.push_back(s1);
    student.push_back(s2);
    student.push_back(s3);
    student.push_back(s4);
    student.push_back(s5);
    for(auto it:student){
        if(it->rll==2){
            cout<<"NAME:"<<it->name<<endl;
        }
    }
    for(auto it:student){
        delete it;
    }
    return 0;
}
