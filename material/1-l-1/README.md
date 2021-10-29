# Introduction to HPPS and C

## Reading

* BOH 1
* JG 1-3

## Videos

* [Command line arguments](https://sid.erda.dk/share_redirect/f8RgVGzlET/argv.mp4)

## Abstract

Welcome to the first lecture in HPPS!  This lecture uses the [flipped
classroom](https://en.wikipedia.org/wiki/Flipped_classroom) approach.
This is motivated by the idea that HPPS is mostly an *applied* course,
where the focus is on honing your skill at software construction.  For
all labs you will be assigned reading and/or videos to watch in
advance.

If you have not watched the video or read anything for this first lab,
fear not! Our goal today will be on ensuring that you have the tools
you will need for the course, so we don't have to spend too much time
on technical hindrances later on. Please make sure that you have
watched the videos and read the material *before* the next lab
session.

Most subsequent labs will be directly focused on
exercising the concepts used in the *mandatory assignments*.  Each lab
consists of tasks listed in a document, like this one.  Lab work is
not *mandatory*, and you do not submit it anywhere (but you are
encouraged to ask for feedback!), but you cannot expected to pass the
course without active participation in the labs.

## Basic setup and Unix familiarity

You will need access to a Unix shell for HPPS.  Read the [Unix
software guide](../../unix.md).

After reading and following the guide, open a terminal with a Unix
shell.  When illustrating a shell command, we will write it like this:

```
$ echo HPPS is my favourite course
HPPS is my favourite course
```

The `$` is not part of the input you type, but a stand-in for the
command prompt.  On the line after the command (the `echo ...` part),
we may put the output of the command.  When we tell you to run a
command, we will often not show the output, but merely tell you to run
e.g:

```
$ echo HPPS is the favourite course of $USER
```

If you have no experience with using a command prompt, then you might
want to read (part of) [this text on Unix-Like Data
Processing](uldp17-2018-08-16.pdf), which also contains some
exercises.  If you don't like this text, then the Internet contains
thousands of tutorials and guides on how to use a Unix shell, all of
which are a mere search engine away.  You do not need to be a command
prompt expert to succeed in HPPS, but you should understand the
following:

* The general tree structure of the file system.

* How to move between directories (`cd`) and see their contents (`ls`).

* How to view file contents from a command line (`cat`, `less`, etc).

* How to copy files (`cp`).

* How to move/rename files (`mv`).

* How to delete files and directories (`rm`).

## Compiling C programs

You will be doing a lot of C programming in HPPS, so you need to make
sure you can compile C code.  You are not expected to understand what
the C code *does* yet.

Copy the file [guess.c](guess.c) to a directory on your computer, open
a Unix terminal, and navigate to the directory containing `guess.c`.  Then run:

```
$ gcc guess.c -o guess
```

This will compile the C program and generate a binary called `guess`.
Now run the `./guess` program and complete the game:

```
$ ./guess
OK, I am thinking of a number in the range [0,99] - see if you can guess it!
Type a number and press enter to make a guess.
42
Too high!
...
```

While you don't know C yet, you can still try the following (optional)
exercises to modify the `guess.c` program.  Remember that you have to
re-run the `gcc` command after making a modification!

* Make the program print a more insulting message when the player guesses wrong.

* Change the range from which the random number is drawn.

* Make the program cheat, so that it changes the number it is thinking
  of when it would otherwise have been guessed.
