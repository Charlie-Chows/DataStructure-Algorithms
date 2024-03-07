/**
 * Even if we enter double it will trim to integer 
 * Array can store in any memory location but after the 0 th index remaining all elements store in consecutive order but we are not sure where the 0 th index store 
 * 
 * If we didnt initialize value in 2d array it will store garbage value 
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    // 1D ARRAY
    int array[7];
    cout << "Enter the array of Numbers : ";
    cin >>array[0]>>array[1]>>array[2]>>array[3]>>array[4]>>array[5]>>array[6];

    // we can modify array values
    array[3] = array[3] + 7;

    array[4] -= 8;

    array[3] = 70;

    cout << array[3]; // 70 what ever the user enter it shows 70
    cout << array[4];  

    // 2D ARRAY
    int array1[3][7];    // 3 => row{-->}  7 => column {^}  
    array1[1][6] = 77;
    cout << array1[1][6] << endl;   // 77
    cout << array1[1][5];           // 7978979 => Garbage value
    return 0;
}