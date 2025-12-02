#include <iostream>
using namespace std;

// Example functions for each type of error

// 1. Logical Error (Program runs but wrong output)
int addNumbers(int a, int b) {
    // Logical mistake: should return a + b
    return a - b; 
}

// 2. Runtime Error Example (division by zero)
void runtimeErrorExample() {
    int x = 10;
    int y = 0;  // runtime error if used
    // cout << x / y;   // Uncomment to see runtime error
}

// 3. Syntax Error Example
/*
int syntaxExample() 
{
    cout << "Missing semicolon"   // <-- syntax error
}
*/

int main() {
    cout << "=== Week 7: Error Types Demonstration ===\n";

    // Logical Error Demo
    cout << "\nLogical Error Example:\n";
    cout << "addNumbers(10, 5) should be 15, but result = "
         << addNumbers(10, 5) << endl;

    cout << "\nRuntime Error Example (commented out to avoid crash):\n";
    cout << "Dividing by zero would cause a runtime error.\n";

    cout << "\nSyntax Error Example (shown in comments):\n";
    cout << "Missing semicolon causes a syntax error.\n";

    return 0;
}
