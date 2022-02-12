/*
Project 12-1

A template queue class.
*/

#include <iostream>
using namespace std;

const int maxQ = 100;

// This creates a genric queue class
template <class QType> class Queue
{
    QType q[maxQ]; // this array holds the queue
    int size; // maximum number elements queue can store.
    int putloc, getloc; // the put and get indices

    public:
        // Construct a queue of specific length.
        Queue (int len) 
        {
            if (len > maxQ) len = maxQ;
            else if (len <= 0) len = 1;
            size = len;
            putloc = getloc = 0;
        }

        // Put data into the queue.
        void put(QType data)
        {
            if (putloc == size)
            {
                cout << " --Queue is full.\n";
                return;
            }

            putloc ++;
            q[putloc] = data;
        }

        QType get()
        {
            if (getloc == putloc)
            {
                cout << " --Queue is empty.\n";
                return 0;
            }

            getloc ++;
            return q[getloc];
        }
};

// Demonstrate generic function.
int main()
{
    Queue <int> iQa(10), iQb(10); // create two integer queue

    iQa.put(1);
    iQa.put(2);
    iQa.put(3);

    iQb.put(10);
    iQb.put(20);
    iQb.put(30);

    cout << "Contents of integer queue iQa: ";
    for (int i=0; i < 3; i++) cout << iQa.get() << " ";
    cout << endl;

    cout << "Contents of integer queue iQb: ";
    for (int i=0; i < 3; i++) cout << iQb.get() << " ";
    cout << endl;

    Queue <double> dQa(10), dQb(10); // create two integer queue

    dQa.put(1.01);
    dQa.put(2.02);
    dQa.put(3.03);

    dQb.put(10.01);
    dQb.put(20.02);
    dQb.put(30.03);

    cout << "Contents of integer queue dQa: ";
    for (int i=0; i < 3; i++) cout << dQa.get() << " ";
    cout << endl;

    cout << "Contents of integer queue dQb: ";
    for (int i=0; i < 3; i++) cout << dQb.get() << " ";
    cout << endl;
}