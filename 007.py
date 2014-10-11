'''10001st prime.'''

def nth_prime(n):
    '''Return the nth prime number.'''
    primes = [2]
    trial = 3
    while len(primes) != n:
        for prime in primes:
            if trial % prime == 0:
                break
        else:
            primes.append(trial)
        trial += 1
    return primes[-1]

if __name__ == '__main__':
    print(nth_prime(10001))
