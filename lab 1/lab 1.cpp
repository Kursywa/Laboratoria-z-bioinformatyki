#include<stdio.h>
#include<iostream>
#include<cstring>
#include<string>


using namespace std;
int main() {
    string check = "ATTTGGGCGGAC";
    int len = check.length();
    int n = len - 1;
    for (int i = 0; i < (len / 2); i++) {
        //Using the swap method to switch values at each index
        swap(check[i], check[n]);
        n = n - 1;
    }

    
    
    while (int i = 0 < len+1) {
        if (check[i] = 'A') {
            check[i] = 'T';
            i++;
        }
        else if(check[i] = 'T') {
            check[i] = 'A';
            i++;
        }
        else if (check[i] = 'G') {
            check[i] = 'C';
            i++;
        }
        else if (check[i] = 'C') {
            check[i] = 'G';
            i++;
        }
    }
    
    cout << check << endl;
    return 0;

    
}

