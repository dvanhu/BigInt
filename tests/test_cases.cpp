// tests/test_cases.cpp
#include "../bigint.h"
#include <iostream>
#include <cassert>

using namespace std;

void runBasicTests() {
    BigInt a("12345");
    BigInt b("12345");
    BigInt c("54321");
    BigInt d = a + c;
    assert(d == BigInt("66666"));
    cout << "✅ Addition passed\n";

    BigInt e = c - a;
    assert(e == BigInt("41976"));
    cout << "✅ Subtraction passed\n";

    BigInt f = a * b;
    assert(f == BigInt("152399025"));
    cout << "✅ Multiplication passed\n";

    BigInt g = c / a;
    assert(g == BigInt("4"));
    cout << "✅ Division passed\n";

    BigInt h = c % a;
    assert(h == BigInt("541"));
    cout << "✅ Modulo passed\n";

    BigInt powResult = a ^ BigInt(2);
    assert(powResult == BigInt("152399025"));
    cout << "✅ Power passed\n";

    BigInt fib = NthFibonacci(10);
    assert(fib == BigInt("89"));
    cout << "✅ Fibonacci passed\n";

    BigInt fact = Factorial(5);
    assert(fact == BigInt("120"));
    cout << "✅ Factorial passed\n";

    BigInt cat = NthCatalan(3);
    assert(cat == BigInt("5"));
    cout << "✅ Catalan passed\n";
}

int main() {
    try {
        runBasicTests();
        cout << "🎉 All test cases passed successfully!" << endl;
    } catch (const char* err) {
        cerr << "❌ Error: " << err << endl;
    } catch (...) {
        cerr << "❌ Unknown error occurred!" << endl;
    }
    return 0;
}
