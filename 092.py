# Square digit chains


def next_link(n):
    '''Return the next link in the chain.'''
    total = 0
    for i in str(n):
        total += int(i) * int(i)
    return total


def terminator(n):
    '''Find whether the link contains a 1 or an 89.'''
    if n == 1 or n == 89:
        return n

    while True:
        n = next_link(n)
        if n == 1 or n == 89:
            return n

if __name__ == '__main__':
    count = 0
    for i in range(1, 10000000):
        if terminator(i) == 89:
            count += 1
    print(count)
