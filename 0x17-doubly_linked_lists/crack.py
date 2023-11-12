#!/usr/bin/python3
import sys
import dis

def disassem(in_file):
    with open(in_file, 'rb') as f:
        bytecode = f.read()

    dis.dis(bytecode)

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage:python {} file.pyc".format(sys.argv[0]));
        sys.exit(1)

    in_file = sys.argv[1]

    disassem(in_file)
