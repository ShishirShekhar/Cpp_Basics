/*
Project 11-1

Create file comparision  utility.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
    register int i;

    unsigned char buf1[1024], buf2[1024];

    if (argc != 3)
    {
        cout << "Usage: comfiles <file1> <file2>\n";
        return 1;
    }

    ifstream f1(argv[1], ios::in | ios::binary);
    if (!f1)
    {
        cout << "Cannot open first file.\n";
        return 1;
    }

    ifstream f2(argv[2], ios::in | ios::binary);
    if (!f2)
    {
        cout << "Cannot open second file.\n";
        return 1;
    }

    cout << "Comparing files...\n";

    do
    {
        f1.read((char *) buf1, sizeof buf1);
        f2.read((char *) buf2, sizeof buf1);

        if (f1.gcount() != f2.gcount())
        {
            cout << "Files are different in sizes.\n";
            f1.close();
            f2.close();
            return 0;
        }

        // Compare contents of buffers
        for (i = 0; i < f1.gcount(); i++)
        {
            if (buf1[i] != buf2[i])
            {
                cout << "Files differ.\n";
                f1.close();
                f2.close();
                return 0;
            }
        }
    } while (!f1.eof() && f2.eof());

    cout << "Files are the same.\n";
    
    f1.close();
    f2.close();

    return 0;
}