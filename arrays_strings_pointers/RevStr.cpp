/*
Project 4-1
Reverse a string
*/

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str[] = "this is a string";
    char *start, *end, t;
    char temp[] = "";
    int len;

    cout << "Original: ";
    cout << str;
    cout << "\n";

    strcpy(temp, str);
    len = strlen(temp);

    start = temp;
    end = &temp[len - 1];

    while (start < end){
        t = *start;
        *start = *end;
        *end = t;

        start++;
        end--;
    }
    cout << "Reversed: ";
    cout << temp;

    return 0;
}