Yeah, no point for a .cc file here, i think.

Before I begin. There will not be anything about the C/C++ syntax (Other than complaints, and constant expressions of how much
i dislike the C++ syntax)
I assume you have already gone through that part of the repo, as README suggests.

So, types...

For now we will talk about a couple of basic ones such as:
    - integer.
    - string. (or std::string, speaking of poor decisions:)
    - boolean.
    - char/char*.
    - std::array.
    - And of course std::vector (That is a joke, but fasten your seatbelts, ladies and gentlemen, we will get there BLAZINGLY FAST)


What is an integer, and how do you cook it?
Integer is a datatype for storing numbers that you want to do some math with in the future (99% cases)

In C/C++ a code snippet for an integer usage would be this:

```
int main() {
    return 0;
}
```

Now you are going to ask: "What???? How is that an example of an integer when there are no variables?"
Well, an integer doesn't automatically imply a variable, in this case we have an example of a constant expression with a type int.
Which is used by the program, just not stored as an integer on the g++ compiler level. But this is a bit of stretch. From now on,
we will refer to this type of integer as an integer-literal, or just literal.


Now something more logical would be:

```
int main() {
    int x = 0;
    return x;
}
```


--- String:

Now lets talk about std::string:
First of all, i found it a bit of a pain because of C legacy leftovers (like matching a std::string object to a '' , very easily
spottable error, but nevertheless, annoying as fuck.)

Now strings is sentence/sentences (or how pros refer to it - arrays of characters), consisting of both ASCII (and beyond)
characters and numbers. These numbers you can't do math with.


Now definition/declaration: (Refer to ../syntax101)

```
#include<string>
int main() {
    std::string str = "some random string";
    return 0;
}
```


---  Char/Char*:

What is a char? The short answer is it is a character.
You could also say it's the powerhouse of std::string.

 Definitions:

```
int main() {
    char ch = 'a';
    return 0;
}
```

Notice the single quotes. Remember, can only be one single character. Shit like char ch = 'Hello, World!' will not slide

Now if you are starting to wonder: How the hell did C developers use strings, if there is no string keyword in the whole language?
Let me answer - they used char*

Now C-strings is something a bit different from normal strings in other languages like python and rust.

Here is how we define one:

```
int main() {
    char* str = "Hello, world\n";
    return 0;
}
```

This is very unsafe though, for reasons.

The correct way would be:

```
int main() {
    const char* str = "Hello, world\n"; // Creates an immutable c_string.
    return 0;
}

// Or

int main() {
    char* str[] = "Hello, world\n"; // Creates a mutable c_string. Notice the square brackets - an array.
    return 0;
}
```

-- Booleans
