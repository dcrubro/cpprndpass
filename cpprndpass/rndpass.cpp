// Written by DcruBro, some of the code is from stackoverflow (duh),
// also this is pretty much just spaghetti code, but it works
// which is all that's important.
// ===================================================================
// This is the source file for the random password generator,
// just in case anyone wants to do some changes to the code.
// ===================================================================
// The .exe and .o files were compiled with gcc. to compile use
// "gcc rndpass.cpp -lstdc++ -o rndpass.exe" or
// "gcc rndpass.cpp -lstdc++ -o rndpass.o"

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const char alphanum[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int string_length = sizeof(alphanum)-1;

string temp = "";

void genPass() {
    int n;

    cout << "Enter the length of password: ";

    cin >> n;

    srand(time(0));

    cout << "Generated password: ";

    for(int i = 0; i < n; i++) {
        cout << alphanum[rand() % string_length];
    }

    cout <<"\n";
}

int main() {

    cout << "Random password generator\n";

    while (true) {
        genPass();

        cout << "\n";

        bool doAgain;

        cout << "Generate another password (y/n)? ";
        cin >> temp;

        if (temp == "n" || temp == "N") {
            break;
        } else {
            continue;
        }

        cout << "\n";
    }
    
    return 0;
}