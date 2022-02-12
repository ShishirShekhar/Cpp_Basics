/*
Project 8-1
A set class for characters.
*/

#include <iostream>
using namespace std;

const int MaxSize = 100;

class Set{
    int len; // number of members.
    char members[MaxSize]; // this array holds the set
    /*This find() function is private because 
    it is not used outside the set class*/
    int find(char ch);

    public:
        // Construct a null set.
        Set() {len = 0;}

        // Return the number of elements in the sets.
        int getLength() {return len;}

        void showset(); // display the set
        bool isMember(char ch); // check for membership

        Set operator +(char ch); // add an element
        Set operator -(char ch); // remove an element

        Set operator +(Set ob2); // set union
        Set operator -(Set ob2); // set intersection
};

/*
Return the index of the element 
specified by ch, or -1 if not found.
*/

int Set::find(char ch){
    int i;
    
    for (i=0; i < len; i++){
        if (members[i] == ch) return i;
    }

    return -1;
}

// Show the set.
void Set::showset(){
    cout << "{ ";
    for (int i = 0; i < len; i++)
        cout << members[i] << " ";
    cout << " }\n";
}

/*
Return true if char is member of the set.
Return false otherwise.
*/

bool Set::isMember(char ch){
    if (find(ch) != -1) return true;
    return false;
}

// Add a unique element to a set.
Set Set::operator +(char ch){
    Set newset;

    if (len == MaxSize){
        cout << "Set if full.\n";
        return *this; // return the existing set
    }

    newset = *this; // duplicate the existing set.

    // see if element already exist.
    if (find(ch) == -1){ // if not found
        // add new element
        newset.members[newset.len] == ch;
        newset.len ++;
    }
    return newset; // return the updated set.
}

// Remove element from the set.
Set Set::operator -(char ch){
    Set newset;
    int i = find(ch); // i will be -1 if element not found

    // copy and compare the remaining elements.
    for (int j=0; j < len; j++){
        if (j != i) newset = newset + members[j];

    return newset;
    }
}

// Set union.
Set Set::operator +(Set ob2){
    Set newset = *this; // copy the first set

    // Add unique elements from second set.
    for (int i=0; i < ob2.len; i++)
        newset = newset + ob2.members[i];

    return newset;
}

Set Set::operator -(Set ob2){
    Set newset = *this; // copy the first set

    // Subtract elements from the sedond set.
    for (int i=0; i < ob2.len; i++)
        newset = newset - ob2.members[i];

    return newset; // return updated set
}

int main(){
    // Construct 10-element empty set
    Set set1;
    Set set2;
    Set set3;
    
    set1 = set1 + 'A';
    set1 = set1 + 'B';
    set1 = set1 + 'C';

    cout << "set1 after adding A B C: ";
    set1.showset();

    cout << "\n";

    cout << "Testing for membership using isMember(). \n";
    if (set1.isMember('B'))
        cout << "B is a member of set1.\n";
    else 
        cout << "B is not a member of set1.\n";

    if (set1.isMember('T'))
        cout << "T is a member of set1.\n";
    else 
        cout << "T is not a member of set1.\n";

    cout << "\n";

    set1 = set1 - 'B';
    cout << "set1 after set1 = set1 - 'B': ";
    set1.showset();

    set1 = set1 - 'A';
    cout << "set1 after set1 = set1 - 'A': ";
    set1.showset();

    set1 = set1 - 'C';
    cout << "set1 after set1 = set1 - 'C': ";
    set1.showset();

    cout << "\n";

    set1 = set1 + 'A';
    set1 = set1 + 'B';
    set1 = set1 + 'C';
    cout << "set1 after adding A B C: ";
    set1.showset();

    cout << "\n";

    set2 = set2 + 'A';
    set2 = set2 + 'X';
    set2 = set2 + 'W';
    cout << "set2 after adding A X W: ";
    set2.showset();

    cout << "\n";

    set3 = set1 + set3;
    cout << "set3 after set3 = set1 + set3: ";
    set3.showset();

    set3 = set1 - set3;
    cout << "set3 after set3 = set1 - set3: ";
    set3.showset();

    cout << "\n";

    cout << "set2 after set2 = set2 - set2: ";
    set2 = set2 - set2; // clear
    set2.showset();

    cout << "\n";

    set2 = set2 + 'C'; // add ABC in reverse order
    set2 = set2 + 'B';
    set2 = set2 + 'A';

    cout << "set2 after adding C B A: ";
    set2.showset();

    return 0;
}