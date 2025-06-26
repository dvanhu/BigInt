# BigInt in C++

🚀 A custom implementation of BigInt (arbitrary large integers) in C++ that supports fundamental operations like addition, subtraction, multiplication, division, modulo, exponentiation, square root, comparisons, and more.

## Features

- Arbitrary-length integer support
- Addition, Subtraction, Multiplication
- Integer Division and Modulo
- Exponentiation and Square Root (floor)
- Comparisons: ==, <, >, <=, >=
- Digit count
- Convert `int` or `string` to BigInt

## Usage

### Example

```cpp
#include "bigint.cpp" // or bigint.h + bigint.cpp

int main() {
    BigInt a = "987654321987654321987654321";
    BigInt b = "123456789123456789123456789";

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;
    cout << "a ^ 2 = " << a.pow(2) << endl;
    cout << "sqrt(a) = " << a.sqrt() << endl;
}
