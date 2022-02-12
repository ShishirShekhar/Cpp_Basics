/*
Project 8-2
A queue class for character
*/

#include <iostream>
using namespace std;

const int maxQsize = 100;

class Queue{
    char q[maxQsize]; // This array holds the queue
    int size; // maximum number of elements the queue can store.
    int putloc, getloc; // the put and get indices
    public:

        // Construct a queue of the specific length.
        Queue(int len){
            // Queue must be less than max and positive.
            if (len > maxQsize) len = maxQsize;
            else if (len <= 0) len = 1;

            size = len;
            putloc = getloc = 0;
        }

        // Put a character into the queue.
        void put(char h){
            if (putloc == size){
                cout << " -- Queue is full.\n";
                return;
            }

            putloc++;
            q[putloc] = h;
        
        }

        // Get a character from the queue.
        char get(){
            if (getloc == putloc){
                cout << " -- Queue is empty.\n";
                return 0;
            }

            getloc++;
            return q[getloc];
        }
};

// Demonstrate the Queue class.
int main(){
    Queue bigQ(100);
    Queue smallQ(4);
    char ch;
    int i;

    cout << "Using bigQ to store the alphabet.\n";
    // put some numbers into big
    for (i=0; i < 5; i++)
        bigQ.put('A' + i);

    // retrieve and display elements from big.
    cout << "Contents of bigQ: ";
    for (i=0; i < 26; i++){
        ch = bigQ.get();
        if (ch != 0) cout << ch;
    }

    cout << "\n";

    cout << "Using smallQ to generate errors.\n";

    // Now, use smallQ to generate some errors.
    for (i=0; i < 5; i++){
        cout << "Attempting to store " << ('Z' - i);
        
        smallQ.put('Z' - i);

        cout << "\n";
    }
    cout << "\n";
    
    // more errors on smallQ
    cout << "Contents of smallQ";
    for (i=0; i < 5; i++){
        ch = smallQ.get();

        if (ch != 0) cout << ch;
    }

    cout << "\n";
    
    return 0;
}