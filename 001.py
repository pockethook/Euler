'''Multiples of 3 and 5'''

def is_multiple_of(n, factors):
    '''Return True if n is a multiple of any of the numbers in factors.'''

    return any(n % factor == 0 for factor in factors)

def sum_multiples_below(factors, limit):
    '''Return the sum of the multiples of any of the numbers in factors
    below limit.'''

    return sum(n for n in range(limit) if is_multiple_of(n, factors))

if __name__ == '__main__':
    print(sum_multiples_below([3, 5], 1000))
