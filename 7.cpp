#include <iostream>
using namespace std;
int main()
{
    // Bitwise operator
    int a = 4, b = 8;
    cout << (a & b) << endl;  // Bitwise AND
    cout << (a | b) << endl;  // Bitwise OR
    cout << (a ^ b) << endl;  // Bitwise XOR (0^0=0 and 1^1=0 but 0^1=1 and 1^0=1)
    cout << (~a) << endl;     // Bitwise NOT
    cout << (a << 1) << endl; // Left shift operator (4*2^1=8)
    // ans=a*(2^n) where n is the number of bits shifted
    cout << (a >> 1) << endl; // Right shift operator (4/2^1=2) The last bit is discarded and the first bit is filled with 0
    // ans=a/(2^n) where n is the number of bits shifted

    // Operator Precedence and Associativity

    // 1. Parentheses ()
    // Highest precedence.
    // Expressions inside parentheses are evaluated first.
    // Associativity: N/A
    // Example: (a + b)

    // 2. Unary Operators
    // +x   -> Unary plus
    // -x   -> Unary minus
    // !x   -> Logical NOT
    // ~x   -> Bitwise NOT
    // Associativity: Right to Left (R → L)
    // Example: -a, !flag

    // 3. Multiplicative Operators
    // *    -> Multiplication
    // /    -> Division
    // %    -> Modulus (remainder)
    // Associativity: Left to Right (L → R)
    // Example: a * b, a / b, a % b

    // 4. Additive Operators
    // +    -> Addition
    // -    -> Subtraction
    // Associativity: Left to Right (L → R)
    // Example: a + b, a - b

    // 5. Relational Operators
    // >    -> Greater than
    // <    -> Less than
    // >=   -> Greater than or equal to
    // <=   -> Less than or equal to
    // Associativity: Left to Right (L → R)
    // Example: a > b, a <= b

    // 6. Equality Operators
    // ==   -> Equal to
    // !=   -> Not equal to
    // Associativity: Left to Right (L → R)
    // Example: a == b, a != b

    // 7. Logical AND
    // &&   -> Logical AND
    // Associativity: Left to Right (L → R)
    // Example: (a > 0) && (b > 0)

    // 8. Logical OR
    // ||   -> Logical OR
    // Associativity: Left to Right (L → R)
    // Example: (a == 1) || (b == 1)

    // 9. Assignment Operator
    // =    -> Assign value to variable
    // Associativity: Right to Left (R → L)
    // Example: x = y = z = 10

    // Overall Precedence Order (Highest → Lowest)
    //
    // Operator Group                  Associativity
    // ------------------------------------------------
    // ()                              N/A
    // Unary (+, -, !, ~)             R → L
    // *, /, %                         L → R
    // +, -                            L → R
    // >, <, >=, <=                    L → R
    // ==, !=                          L → R
    // &&                              L → R
    // ||                              L → R
    // =                               R → L


    //Scope 
    //Local
    if (true) {
        int x = 10; // Local variable, only accessible within this block
        cout << "Inside if block: " << x << endl;
    }
    // cout << x; // Error: 'x' was not declared in this scope

    //Global
    int y = 20; // Global variable, accessible throughout the program
    cout << "Global variable: " << y << endl;

    //Data type modifiers
        short int a = 10;
    long int b = 100000;
    long long int c = 10000000000LL;

    signed int d = -50;
    unsigned int e = 50;

    cout << "short int: " << a << endl;
    cout << "long int: " << b << endl;
    cout << "long long int: " << c << endl;
    cout << "signed int: " << d << endl;
    cout << "unsigned int: " << e << endl;

    return 0;
}