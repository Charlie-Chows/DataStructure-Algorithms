#include<bits/stdc++.h>
using namespace std;

int main(){

    // SAME LOGIC USING FOR & WHILE

    // FOR LOOP
    for (int currentElement = 0 ; currentElement <= 7; currentElement++){
        cout << "Hello Sujith" << endl;
    }

    // WHILE LOOP
    int currentElement = 0;
    while(currentElement <= 7){
        cout << "Welcome" << endl;
      currentElement++;
    }

    // DO - WHILE
    int presentElement = 2;
    do{
        cout << "irrespective of condition it execute once " << presentElement << endl; 
    }while(presentElement <= 1);
        cout << "It never executes";
        presentElement++;
    
    return 0;
}