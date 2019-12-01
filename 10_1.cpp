// Calculate the quantity of strings, which begin and end with the same letter

#include <iostream>
#include <stdlib.h>     
#include <time.h>
#include <stdio.h> // for gets, puts;
#include <conio.h> // for getch();
#include <string.h> // for strlen (s); necessary in online compiler
#include <cctype>

using namespace std;

int main(){

    // Declare file f3 for result work program 
    FILE* f1;

    f1 = fopen("F.txt", "r"); //create file to push a result of work programm
    char s[200];

    if (f1 == NULL) {
        cout << "Cannot open file to view\n";
        return 1;
    }
    // counter 
    int counter_1;
    int counter_2 = 0;
    int counter_3;
    while(fgets(s,200,f1)){
        counter_1 = 0;
        for(int i = 0; s[i] != '\0'; i++){
            counter_1++;
        }
        counter_1--;
        cout << counter_1 << endl;
        if(s[0] == s[counter_1-1]){
            counter_2++;
        }
        
    }
    cout << counter_2 << endl;

   

    // int counter_2 = 0;
    // while(fgets(s, 200, f1)){
    //     if(s[0] == s[counter_1]-1){
    //         counter_2++;
    //     }
    // }
    // cout << counter_2 << endl;
    

    system("pause");
    return 0;
}
