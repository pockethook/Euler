'''Self powers.'''

def sum_self_powers_below(limit):
    '''Return the sum of the self powers below limit.'''

    return sum(x ** x for x in range(1, limit))

if __name__ == '__main__':
    print(sum_self_powers_below(1001) % 10000000000)
