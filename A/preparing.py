import os
import sys


if __name__ == '__main__':
    out = sys.argv[1]

    with open(out, 'w') as file:
        file.write(f'int Sub(int a, int b){{ return a + b;}}\n')
