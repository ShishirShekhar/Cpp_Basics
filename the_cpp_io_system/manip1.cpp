#include <iostream>
#include <iomanip>
using namespace std;

ostream &setup(ostream &stream);

int main()
{
    cout << 10 << setup << setup << 10;
}

ostream &setup(ostream &stream)
{
    stream.setf(ios::left);
    stream << setw(10) << setfill('$');
    return stream;
}