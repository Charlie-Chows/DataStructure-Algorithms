#include<bits/stdc++.h>
using namespace std;

int main(){

    int marks;
    cout << "Enter the marks : ";
    cin >> marks;
    if(marks <= 25){
        cout << "Fail";
    }
    else if(marks <= 44){
        cout << "Grade E";
    }
    else if(marks <= 49){
        cout << "Grade D";
    }
    else if(marks <= 59){
        cout << "Grade C";
    }
    else if(marks <= 70){
        cout << "Grade B";
    }
    else if(marks <= 100){
        cout << "Grade A";
    }
    else{
        cout << "Enter marks less than 100";
    }

    return 0;
}