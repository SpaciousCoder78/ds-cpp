//structures basic program

#include<iostream>

using namespace std;


struct student{
    int id;
    int roll;
    char section;
    string name;
}stu;

int main(){
    cout<<"Enter id"<<endl;
    cin>>stu.id;
    cout<<"Enter roll no"<<endl;
    cin>>stu.roll;
    cout<<"Enter section"<<endl;
    cin>>stu.section;
    cout<<"Enter name"<<endl;
    cin>>stu.name;

    cout<<"ID: "<<stu.id<<endl;
    cout<<"Roll No: "<<stu.roll<<endl;
    cout<<"Section: "<<stu.section<<endl;
    cout<<"Name: "<<stu.name<<endl;

}
