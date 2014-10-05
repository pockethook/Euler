# Factorial digit sum


def factorial(n):
    '''Return n factorial.'''

    if n < 1:
        return 1

    product = 1
    for i in range(1, n + 1):
        product *= i

    return product

def sum_digits(n):
    '''Sum digits of a number.'''

    total = 0
    for digit in str(n):
        total += int(digit)

    return total

if __name__ == '__main__':
    print(sum_digits(factorial(100)))
