#include <iostream>
#include <conio.h>

using namespace std;

#define ARRSIZE 50
#define GROUP_SIZE 20

/* Created by CppBuzz
* Modified by Rizky Khapidsyah
*/
//function with read input from user and returns it

int* getArrary();

int main() {

    int* ptr = getArrary();

    cout << endl;

    for (int i = 1; i <= ARRSIZE; i++) {
        if ((i > GROUP_SIZE) && ((i - 1) % GROUP_SIZE == 0)) {
            cout << "\n";
        }
            
        cout << " " << *ptr++;;

        if (i % GROUP_SIZE != 0 && i != ARRSIZE) {
            cout << ",";
        }
    }

    _getch();
    return 0;
}

int* getArrary() {

    static int intArr[ARRSIZE];

    for (int i = 0; i < ARRSIZE; i++) {
        cout << "\n Enter a[" << i << "] :";
        cin >> intArr[i];
    }

    return intArr;
}