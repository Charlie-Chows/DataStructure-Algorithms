/**
 * size() is used to find length of string 
 * we can access string by using index s[1] like this
 * we can change characters by using index also s[7] = 'S';
 */


#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Sujith";
    cout << s[0] << endl;       // S
    cout << s.size() << endl;   // 6
    int len = s.size();
    cout << s[len-1] << endl;   // h
    s[len-1] = 'S';
    cout << s[len-1];           // S

    return 0;
}