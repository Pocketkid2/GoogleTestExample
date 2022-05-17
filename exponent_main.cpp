#include <iostream>
#include <cctype>
#include "exponent.h"
using namespace std;

// Prints the default command-line usage of this program
void printUsage() {
    cout << "exponent <base> <exponent>" << endl;
}

// Reads the input string as an unsigned 64 bit integer
uint64_t readString(char *str) {
    uint64_t value = 0;
    int i = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            throw str;
        } else {
            value *= 10;
            value += (str[i] - '0');
        }
    }
    return value;
}

int main(int argc, char **argv) {
    if (argc > 3) {
        cout << "Too many arguments!" << endl;
        printUsage();
    } else if (argc < 3) {
        cout << "Not enough arguments!" << endl;
        printUsage();
    } else {
        try {
            uint64_t base = readString(argv[1]);
            uint64_t exponent = readString(argv[2]);
            cout << "Base: " << base << endl << "Exponent: " << exponent << endl;
            uint64_t result = exp_by_squaring(base, exponent);
            cout << "Result: " << result << endl;
        } catch (char *str) {
            cout << "Received invalid number " << str << endl;
        }
    }
}