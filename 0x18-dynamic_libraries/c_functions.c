#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c) {
    return write(1, &c, 1);
}

/**
 * add - adds two numbers and returns the result
 * @a: The first operand
 * @b: The second operand
 *
 * Return: The sum of a and b
 */
int add(int a, int b) {
    return a + b;
}

/**
 * sub - subtracts two numbers and returns the result
 * @a: The first operand
 * @b: The second operand
 *
 * Return: The difference between a and b
 */
int sub(int a, int b) {
    return a - b;
}

/**
 * mul - multiplies two numbers and returns the result
 * @a: The first operand
 * @b: The second operand
 *
 * Return: The product of a and b
 */
int mul(int a, int b) {
    return a * b;
}

/**
 * div - divides two numbers and returns the result
 * @a: The numerator
 * @b: The denominator
 *
 * Return: The quotient of a divided by b
 */
int div(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        _putchar('E');  // Print an error character if division by zero
        return 0;
    }
}

/**
 * mod - calculates the modulo of two numbers and returns the result
 * @a: The dividend
 * @b: The divisor
 *
 * Return: The modulo of a divided by b
 */
int mod(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        _putchar('E');  // Print an error character if division by zero
        return 0;
    }
}

int main() {
    int a = 10, b = 3;
    int result_add = add(a, b);
    int result_sub = sub(a, b);
    int result_mul = mul(a, b);
    int result_div = div(a, b);
    int result_mod = mod(a, b);

    _putchar('A' + result_add);
    _putchar('S' + result_sub);
    _putchar('M' + result_mul);
    _putchar('D' + result_div);
    _putchar('M' + result_mod);

    return 0;
}

