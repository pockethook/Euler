# Digit factorials


def factorial(n):
    fact = 1
    for i in range(1, n + 1):
        fact *= i
    return fact

factorials = [factorial(i) for i in range(10)]


def is_digital_factorial(n):
    if n < 10:
        return False

    total = 0
    for i in str(n):
        total += factorials[int(i)]

    return n == total

if __name__ == '__main__':
    count = 0
    for i in range(1000000):
        if is_digital_factorial(i):
            count += i
    print(count)
