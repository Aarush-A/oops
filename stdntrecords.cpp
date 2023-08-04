#include <iostream>
using namespace std;

class student{
public:
    string name;
    int roll;
    int mmarks;
    int scmarks;
    int sstmarks;
    int engmarks;
    int csmarks;
    int pemarks;
    
    student(){
        string name;
        int roll,mmarks,scmarks, sstmarks, engmarks, csmarks, pemarks;
        cout<<"\n Enter Name: ";
        cin>>name;
        cout<<"\n Enter Roll: ";
        cin>>roll;
        cout<<"\n Enter Math marks: ";
        cin>>mmarks;
        cout<<"\n Enter Science Marks: ";
        cin>>scmarks;
        cout<<"\n Enter SST Marks: ";
        cin>>sstmarks;
        cout<<"\n Enter English Marks: ";
        cin>>engmarks;
        cout<<"\n Enter CS Marks: ";
        cin>>csmarks;
        cout<<"\n Enter PE Marks: ";
        cin>>pemarks;   
        this->name=name;
        this->roll=roll;
        this->mmarks=mmarks;
        this->scmarks=scmarks;
        this->sstmarks=sstmarks;
        this->engmarks=engmarks;
        this->csmarks=csmarks;
        this->pemarks=pemarks;
    }
};

void print(student* temp){
    cout<<"Name: "<<temp->name<<endl<<"Roll Number: "<<temp->roll<<endl<<"Math Marks: "<<temp->mmarks<<endl<<"Science Marks: "<<temp->scmarks<<endl<<"SST Marks: "<<temp->sstmarks<<endl<<"English Marks: "<<temp->engmarks<<endl<<"CS Marks: "<<temp->csmarks<<endl<<"PE Marks: "<<temp->pemarks<<endl<<endl;
}
    
int main() {
    student* s1=new student();
    student* s2=new student();
    student* s3=new student();
    student* s4=new student();
    student* s5=new student();
    print(s1);
    print(s2);
    print(s3);
    print(s4);
    print(s5);
}
