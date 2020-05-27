#!/usr/bin/python
import sys

if len(sys.argv) != 3:
    print("Usage: ./pyminimum progname testfile")
    sys.exit()

progname = sys.argv[1]
testfile = sys.argv[2]

print("progname: " + progname)
print("testfile: " + testfile)
