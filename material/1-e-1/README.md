# Exercises

The main purpose of today's exercises is to get you started on
programming in C.  If you didn't go through the [self-reflection
exercises from Tueday](../1-l-1/README.md), start by doing that.  They
mostly consist of setting up a working C development environment
(compiler, editor), which you will need today.

For the coding exercises, you should use `make` to build your
programs. To parametrize `make` to build with all the necessary
compiler flags, start by writing down a `Makefile` containing the
following:

```
CC=gcc
CFLAGS=-std=c11 -Wall -Werror -Wextra -pedantic -g
```

Then when you add a program `foo`, add a rule to `Makefile` as
follows:

```
foo: foo.c
	$(CC) -o foo foo.c $(CFLAGS)
```

**Beware**: the leading whitespace *must* be a single tab character.
Now, to compile `foo`, just run `make foo`. For example:

```
$ make mynameis
```

There are ways to automate parts of this, but we recommend being
explicit until you get a firm grasp on what `make` does.

In the following, we colloquially use "print" as slang for writing to
standard output.

* [Code handout here](src/)
* [Reference solutions here](ref/)

## Printing in C

Write a C program `mynameis` that prints your name.

## Input arguments in C

Write a C program `repeatme` that given a string as argument, prints
the string twice on separate lines.  (Maybe watch [the video on
reading line
arguments](https://sid.erda.dk/share_redirect/f8RgVGzlET/argv.mp4).)

If the program gets a number of arguments that is different from 1 it
should print "`Wrong number of arguments`".

## Input argument validation

Write a C program `noAs` that given a string as argument, does either
of the following.

  * If the first character of the string is the `char` `A` it
    prints "`No beginning A's are allowed`",

  * otherwise it prints the given string.

Reminder: Consider how strings are formatted in C.

Note: reuse your argument validation from before. You can just as well
learn it from the beginning: _always check your inputs._

## Multiple input formats

Modify the `roll` program developed at the lecture to support `dN` as
a shorthand for `1dN`.  Hint: if one `sscanf()` fails, try another.

## Integer representation

Play the integer representation game linked below. Try to get `0xA`
correct on the different "levels".

http://topps.diku.dk/compsys/integers.html

## Integer puzzles

Consider the integer puzzles from the last slide in the lecture
slides.
