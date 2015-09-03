# Homework 1

# Overview
In this assignment, you'll think and write about the differences between Java and C++. You'll also get to read, modify, compile, execute, and test some C++ code.

# Before You Begin

## Reading
* Chapter 1 and Sections 3.1-3.2 of the *C++ Primer*.

## Helpful Hints 
* *Pair Programming:* Remember, your must work on the following as a pair, including the written part.  You can (and should) read this assignment writeup and think about it before you meet, however.
* *Commit Early, Commit Often:* Remember to check in your files regularly!  In particular, don't forget to check them in when you're finished.
* As a general rule (even outside CS~70!), *you should not add generated files* of any form (e.g., compiled code, PDFs made from LaTeX, etc) to a repository when those files can be automatically produced from files already in the repository. 
* *Doxygen:* The C++ files are commented in `Doxygen` format. `Doxygen` is a tool that can automatically generate HTML or LaTeX documentation from C++ files. In future assignments, we will ask you to write your own Doxygen comments and to use Doxygen to generate documentation. For now, it's important only that you keep all the comments in your code up to date. You don't need to worry too much about the format of Doxygen comments in your code, nor do you need to generate Doxygen documentation.


# Steps
There are five Issues to complete for this assignment:

* Clone Your Repository
* Testing Part

# Grading
Your submission will be graded as follows: 
* points: correctness (does your code pass our tests?)
* points: completeness (did you make a good faith effort at each part of the assignment?)
* points: 

The grutors will also provide written comments on your code's style and elegance.

At this point, you should each have a directory called , which itself
contains the following files and directories

<span>2</span>

      Answers.txt

      palindromes/palindrome-test.txt
      palindromes/palindrome.cpp
      palindromes/Palindrome.java
      palindromes/palindrome.py

      shuffler/lineshuffler.hpp
      shuffler/lineshuffler.cpp
      shuffler/LineShuffler.java
      shuffler/random.cpp
      shuffler/random.hpp
      shuffler/shuffle.cpp

The directory contains C++, Java, and Python implementations of a
program that determines whether a word entered by the user is a
palindrome (the same forwards as backwards). All three versions should
operate identically.

The directory contains C++ and Java implementations of a program that
reads several lines from the user, then outputs them in random order.
Both implementations should operate identically.

You will edit the file to add your answers to the written questions and
to add your tests. 



To compile and run code, use the following (patterns of) commands. All
should work on the CS lab computers and on knuth.

-   To run a python program , the command is   

-   To compile a Java source file into a JVM bytecode file , the command
    is   

-   To run a compiled Java program whose function is in the file , the
    command is (without the extension!)

-   To compile a single C++ source file into an executable using the
    compiler, the command is

            clang++ -std=c++11 -pedantic -Wall -Wextra  foo.cpp
          

    This command will create an executable program called , which you
    can run by saying .

-   You can provide a much more descriptive name for the executable with
    ’s -o flag, like so:

            clang++ -std=c++11 -pedantic -Wall -Wextra  foo.cpp -o foo
          

    You can then run the program by saying .

-   If you have several C++ source files that form a single application,
    the command is

            clang++ -std=c++11 -pedantic -Wall -Wextra foo1.cpp foo2.cpp foo3.cpp
          

For the Java version of the palindromes code, you first need to compile
the Java source code into the JVM bytecode file , which you can then run
as described above. For the C++ version of the palindromes code, you
will need to compile the C++ source code and to produce an executable
program named .

For the Java version of the shuffler code, you need to compile the Java
source code into , which you can then run. The C++ code is divided into
several source files (lineshuffler.cpp, random.cpp, and shuffle.cpp).
You’ll need to compile them all together to create a program called .

First, confirm that you can compile and run the Java and C++ versions of
the palindrome and shuffle code. You don’t have to submit anything for
this part, but in future assignments we will assume you know how to
compile and run C++ code.

Unless otherwise specified, answers to this part should be one sentence
or one line of code, added to . You can make modifications to the
provided code to help answer these questions, but revert the code to its
previous (working) state before moving on to the next question.

Remember, even written answers must be produced in pair-programming
style: both of you at one computer, sharing the pair-programming roles
evenly (e.g., switching every few questions). At every good stopping
point, and especially when you’re done, make sure to commit all your
changes to the repository.

1.  List eleven different ways that code could exhibit “bad style.”

2.  The wiki page gives examples of three different (standardized)
    indentation styles. List at least one advantage and one disadvantage
    of each style.

3.  The command for compiling C++ includes the four options

              -std=c++11 -pedantic -Wall -Wextra
              

    Explain (in your own words, not by copying) what each of these mean.

    **Hint 1**. You can find information about a command like by running
    the command , which displays the “man\[ual\] page” for
    the specified. Unfortunately, the man page is a bit cryptic on the
    Macs, and is missing on knuth. Fortunately, takes the same options
    as the older compiler installed on knuth, and has a better man page.

    **Hint 2**. defaults to piping its output through , a command that
    shows you a page of input at a time. has many other useful abilities
    (which you can learn about by pressing `h` inside , or by looking at
    the man page for ), including the ability to search.

4.  Both the C++ and Java versions of the palindrome program use a
    string class provided by the language ( in C++; in Java). By
    comparing the two versions of the code, determine,

    1.  Which string method behaves exactly the same in C++ and Java?

    2.  Which string operation exists in both C++ and Java but is
        accessed (written) differently?

5.  \[q:hello-world\] From comparing the C++ and Java pieces of code,
    determine the C++ equivalent of the following Java code:

    <span>\
    </span>System.out.println(“”);

6.  Using your textbooks or other C++ resources, determine and explain
    what the line is used for. As part of your answer, explain how the
    presence or absence of this line affects your answer
    to question W\[q:hello-world\].

7.  In Java, a class is defined by a single file (ending with ), but in
    C++ a class is usually defined by two files, a *header file* (ending
    in ) and an *implementation file* (ending in ).

    1.  What happens when the compiler sees the line ?

    2.  Why doesn’t contain the line ?

    3.  Why do the names of all the member functions (a.k.a. methods)
        defined in the implementation file begin with ?

8.  In the header file , the class declaration ends with rather than
    just with .

    1.  Modify the class declaration so that it ends with and recompile
        the code. The compiler should pass the code as being correct,
        even though we would consider it bad coding style in CS 70 for a
        couple of reasons. (The linker, on the other hand, will generate
        an error when it tries to make an executable from the object
        files produced by the compiler.)

        1.  What does this code mean?\

            N.B. You almost certainly won’t find an answer to this
            question in your textbook. Investigate for yourself. Try
            instead of . Consider what it *could* mean, and then test
            your guess.

        2.  Aside from the odd-looking syntax, why is this code bad
            style?

    2.  Modify the class declaration so that it ends with (i.e., no
        closing semicolon) and attempt to recompile by typing .

        1.  What error does the compiler report?

        2.  You made the error in , but the compiler appears to be
            complaining about a different file, and its error message
            doesn’t seem very helpful. Explain why an error wasn’t
            reported until the compiler was reading this other file. If
            you had a tip to give people about errors they see
            complaining about the first “real” line of their source
            file, what would it be?

9.  The data member of the class is redundant. Explain why by indicating
    how the number of lines stored in the can be quickly determined.

The palindrome program has several limitations, the foremost being that
the function checks only for exact character matches. Thus while it
happily confirms that words like “repaper”, “rotator”, “kayak”, “civic”,
“noon” and “aibohphobia” are palindromes, it spurns palindromic phrases
and sentences such as “A Toyota”, “taco cat”, “I prefer pi.”, “A man, a
plan, a canal; Panama!” and “A man, a plan, a canoe, pasta, heros,
rajahs, a coloratura, maps, snipe, percale, macaroni, a gag, a banana
bag, a tan, a tag, a banana bag again (or a camel), a crepe, pins, Spam,
a rut, a Rolo, cash, a jar, sore hats, a peon, a canal; Panama!” because
(1) the palindrome test is case sensitive, and (2) the palindrome test
does not ignore non-letters (spaces, punctuation, etc.)

No, Mel Gibson Is A Casino’s Big Lemon.

Fix the function so that both these deficiencies are removed, keeping in
mind both correctness and elegance. In doing so, you may not change any
other provided functions (including ), but you may add helper functions
to be used by your revised . As you change the code, you should also
update any comments so that they continue to accurately reflect the
code.

There are two functions provided by C++ (accessible after adding the
line to the s at the top of your file) that may be helpful:

<span>\
</span> tolower( c); //\
 isalpha( c); //

**Warning:** every time you change , you need to recompile it. Also, if
you compile a program on the lab macs, you’ll need to delete the program
and recompile it if you want it to run on knuth.

It is important for any program to be well tested to ensure its
correctness. We will often expect two types of tests: *system tests* and
*unit tests*. For this assignment, we are only interested in system
tests due to the simplicity of the system. (You will see unit tests next
week.)

System tests verify that the execution of a system (in this case, the
program) meets specifications. Often these kinds of tests are automated,
but to keep things simple for this assignment, you’ll just test your
code by hand. Your tests will need to be written in . In addition to the
inputs themselves and the expected results, you should also document
*what aspects of the implementation you’re testing*, and *why*.

Some tests are provided, but they do not cover all interesting cases.
You will need to add at least three new test cases to this file, and
note what kinds of issues you are trying to identify.

You are encouraged to write tests before and during coding, such that
you can ensure your changes actually work as expected.

Remember to check in your code regularly! And in particular, don’t
forget to check in your code when you’re finished.

Running will help confirm that all files have been checked in. The wiki
has a useful page that can help you be sure you’re really done.
