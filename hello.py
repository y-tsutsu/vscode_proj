
from itertools import cycle

def main():
    ''' main '''
    for s in [f + b or str(n) for f, b, n in zip(cycle([''] * 2 + ['Fizz']), cycle([''] * 4 + ['Buzz']), range(1, 16))]: print(s)

if __name__ == '__main__':
    main()
