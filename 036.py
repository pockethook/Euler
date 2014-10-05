# Double-base palindromes


def is_palindrome(array):
    '''Return True if list is a palindrome.'''

    length = len(array)
    for i in range(length // 2):
        if array[i] != array[length - 1 - i]:
            return False
    return True


def is_palindrome_binary(n):
    '''Return True if binary representation of n is a palindrome.'''

    return is_palindrome(bin(n)[2:])


def is_palindrome_decimal(n):
    '''Return True if decimal representation of n is a palindrome.'''

    return is_palindrome(str(n))


def sum_double_base_palindromes(n):
    '''Sum the numbers that are palindromes in base 2 and 10,
    and are less than n.'''

    total = 0
    for i in range(n):
        if is_palindrome_binary(i) and is_palindrome_decimal(i):
            total += i

    return total

if __name__ == '__main__':
    print(sum_double_base_palindromes(1000000))
