'''Even Fibonacci numbers.'''

def even_fibonacci_below(limit):
    '''Generate the fibonacci sequence ignoring odd terms below limit.'''
    a, b = 0, 1
    while b < limit:
        a, b = b, a + b
        if b % 2 == 0:
            yield b

if __name__ == '__main__':
    print(sum(even_fibonacci_below(4000000)))
