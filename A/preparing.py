import os
import sys


if __name__ == '__main__':
    out = sys.argv[1]

    with open(out, 'w') as file:
        file.write('#pragma once\n\nint Sub(int a, int b){ return a + b;}\n')
