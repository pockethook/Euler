# Power digit sum


def sum_digits(n):
    '''Sum digits of a number.'''

    total = 0
    for digit in str(n):
        total += int(digit)

    return total

if __name__ == '__main__':
    print(sum_digits(2 ** 1000))
