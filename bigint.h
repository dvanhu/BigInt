#ifndef BIGINT_H
#define BIGINT_H

#include <iostream>
#include <string>

class BigInt {
private:
    std::string number;
    bool sign;
    void trim();
    BigInt abs() const;

public:
    BigInt();
    BigInt(std::string);
    BigInt(int);
    BigInt& operator=(std::string);

    // Arithmetic Operators
    BigInt operator+(const BigInt&) const;
    BigInt operator-(const BigInt&) const;
    BigInt operator*(const BigInt&) const;
    BigInt operator/(const BigInt&) const;
    BigInt operator%(const BigInt&) const;
    BigInt pow(int) const;
    BigInt sqrt() const;

    // Comparison Operators
    bool operator==(const BigInt&) const;
    bool operator<(const BigInt&) const;
    bool operator>(const BigInt&) const;
    bool operator<=(const BigInt&) const;
    bool operator>=(const BigInt&) const;

    // Utilities
    int digitCount() const;
    BigInt operator-() const;

    // Stream
    friend std::ostream& operator<<(std::ostream&, const BigInt&);
};

#endif
