#include<iostream>
using namespace std;
double add(double a,double b){
    return a+b;
}
double sub(double a,double b){
    return a-b;
}
double mul(double a,double b){
    return a*b;
}
double div(double a,double b){
    if(b==0){
        return -1;
    }
    else{
        return a/b;
    }
}
int main(){
    double n1,n2;
    int choice;
    cout<<"THis is a program that calculates the basic arithmetic operations(+,-,*,/)!"<<endl;
    cout<<"Enter the first integer: ";
    cin>>n1;
    cout<<"Enter the second integer: ";
    cin>>n2;
    cout<<endl;
    cout<<"Select an operation from the following:"<<endl;
    cout<<"1.Addition\n";
    cout<<"2.Subtraction\n";
    cout<<"3.Multiplication\n";
    cout<<"4.Division\n";
    cout<<"Select the operation to be performed corresponding to the number:";
    cin>>choice;
    doublee res;
    switch(choice){
        case 1:
        res=add(n1,n2);
        cout<<"Addition of "<<n1<<" and "<<n2<<" = "<<res<<endl;
        break;
        case 2:
        res=sub(n1,n2);
        cout<<"Subtraction of "<<n1<<" and "<<n2<<" = "<<res<<endl;
        break;
        case 3:
        res=mul(n1,n2);
        cout<<"Multiplication of "<<n1<<" and "<<n2<<" = "<<res<<endl;
        break;
        case 4:
        res=div(n1,n2);
        if(res==-1){
            cout<<"Error!denominator cannot be zero."<<endl;
        }
        else{
            cout<<"Division of "<<n1<<" and "<<n2<<" = "<<res;
        }
        break;
        default:
        cout<<"Invalid choice! Please select a valid operation from the given operations."<<endl;
        }
        return 0;
    }

