/*
Project 6-1

Create overloaded print() and println() functions
that display various types of data.
*/

#include <iostream>
using namespace std;

// These output a newline.
void println(bool b);
void println(int i);
void println(long i);
void println(char ch);
void println(char *str);
void println(double d);

// These functions do not output a newline.
void print(bool b);
void print(int i);
void print(long i);
void print(char ch);
void print(char *str);
void print(double d);


int main(){
    println(true);
    println("This is a test");
    println("x");
    println(99L);
    println(123.23);

    print("Here are some test: ");
    print(false);
    print(' ');
    print(100000L);
    print(' ');
    print(100.1);

    println(" Done!");

    return 0;
}

// Here all the println functions.
void println(bool b){
    if (b) cout << "true\n";
    else cout << "fasle\n";
}

void println(int i){
    cout << i << "\n";
}

void println(long i){
    cout << i << "\n";
}

void println(char ch){
    cout << ch << "\n";
}

void println(char *str){
    cout << str << "\n"; 
}

void println(double d){
    cout << d << "\n";
}

// Here print functions.
void print(bool b){
    if (b) cout << "true";
    else cout << "fasle";
}

void print(int i){
    cout << i;
}

void print(long i){
    cout << i;
}

void print(char ch){
    cout << ch;
}

void print(char *str){
    cout << str; 
}

void print(double d){
    cout << d;
}