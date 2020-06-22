# HackerRank Algorithm

A repository contain of source code for algorithm HackerRank

## Requirement

```bash
g++ --version

# g++ (Ubuntu 4.9.4-2ubuntu1~16.04) 4.9.4
# Copyright (C) 2015 Free Software Foundation, Inc.
# This is free software; see the source for copying conditions.  There is NO
# warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

## Compiling Assets

```bash
# -Wall flag mean "turns on (almost) all warning that g++ can tell you about"
# -std=c++0x flag mean "hey compiler, my source code contain some function that come from older features. Would you compile it using this flag?"
# -save-temps mean Store the normally temporary intermediate files( *.s, *.i, *.o) permanently.
# -o mean create executable file
g++ -std=c++0x -Wall -save-temps main.cpp -o bin/main

# without warning
g++ -std=c++0x -save-temps main.cpp -o bin/main
```

## Run Binary

```bash
./bin/main
```
