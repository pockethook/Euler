'''Sum square difference.'''

def sum_of_squares(n):
    '''Return the sum of the squares of the first n natural numbers.'''
    return sum(x * x for x in range(n + 1))

def square_of_sum(n):
    '''Return the square of the sum of the first x natural numbers.'''
    return sum(range(n + 1)) ** 2

if __name__ == '__main__':
    print(square_of_sum(100) - sum_of_squares(100))
