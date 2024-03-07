/**
 * Take the day no & print the corresponding day 
 * for 1 print Monday
 * for 2 print Tuesday .... 7 for sunday
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int day;
    cout << "Enter number";
    cin >> day;
    switch(day){
        case 1 :
            cout << "Monday";
            break;
        case 2 :
            cout << "Tuesday";
            break;
        case 3 :
            cout << "Wednesday";
            break;
        case 4 :
            cout << "Thursday";
            break;
        case 5 :
            cout << "Friday";
            break;
        case 6 :
            cout << "Saturday";
            break;
        case 7 :
            cout << "Sunday";
            break;
        default:
            cout << "Invalid , Enter Number between 1 to 7 ";
    }
    return 0;
}

