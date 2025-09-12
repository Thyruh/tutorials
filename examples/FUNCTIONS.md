A function...

Functions in C++ are declared very easily:

```
int main();
```

What does this mean? Lets read it as if it were english:
A function called main, which returns an object of type integer and accepts no arguments, because of empty parenthesis.

Now lets actually define a function main that will do something.

```
int main() {
    return 0;
}
```

This function is now defined as main which returns an int AND we know what it actually does - it signifies the successful
compilation of our program with this line:

```return 0;```

Lets talk about return, the keyword
If the function name it is called in == main, that means the end of execution of the entire program. Stop everything and exit the program with the exit
code 0. 0 in this case meaning success. Now if I were to write:

```return 1;```

It would exit the execution, just like previous time, but it would throw exit code 1, which means something went wrong.
So far it is probably not at all clear why is that even a thing, and do people actually use that.
Lets review an example of where that could be useful:

```
#include <iostream>
int main() {
    int input; // Declaring a variable without initializing the value.
    std::cin >> input; // Getting the input from the standart stream from the user.
    if (input > 10) return 0; // If the input number > 10, success, if not, we got a problem!
    return 1; // Exiting with the error code
}
```


Now lets look an a function that is not called main():

```
int sum(int x, y) {
    return x+y;
}
```

First, "read" the function.
A function called sum, that returns an int, accepts two arguments: x, and y - both are integers as well. Returns their sum.
If you guess, that the program is going to stop execution, and exit with code (x+y), you have been clearly paying attention,
Unfortunately, Mr Bjarne Stroustrup thought it would be funny if it instead was doing something completely different, ha-ha-ha...

All it does is opens the output it created up for grab.
So if you did:

```
#include<iostream>

int sum(int x, y) {
    return x+y;
}

int main() {
    int sum = sum(5, 8); // That here is where you save the return value of the sum() function into a variable sum of type int.
    std::cout << sum << std::endl; // Print the value
}
```

The memory obsessed C devs must be screaming that I create a variable that I could avoid and I waste 0.000000000001 seconds of runtime and even less memory, so lets do this the proper way:

```
#include<iostream>

int sum(int x, y) {
    return x+y;
}

int main() {
    std::cout << sum(4, 9) << std::endl; // That is it - straight to stdout
}
```


For a function to return nothing, you do:

```
void iReturnNothing() {
    std::cout << "If i put return here, it will throw an error."
}
```

Except that is not entirely true...

```
void iReturnNothing() {
    std::cout << "Believe it or not, but this will actually work, simply returning nothing, AND stopping the execution of the current function";
    return
}
```

This example is useless, of course, but something very similar to:

```
#include <iostream>
void checker() { // Some kind of checker function (What is important is it's not main)
    int input; // Declaring a variable without initializing the value.
    std::cin >> input; // Getting the input from the standart stream from the user.
    if (input > 10) std::cout << "Success!" << std::endl;
    return; // Exiting without the error code.
}
```

Is capable of showing just how useful void functions may be.
Then we of course would need to call it in main(), but that is not of relevance.
