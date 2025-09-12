In case you are crazy enough to want to work in the terminal, like real men do, I have good and bad news.

First: You are absolutely mental, keep it up.

Second: It is not that hard, as long as you dont have to add linker flags and work with multiple files, you will be just fine.


So. Suppose you have a working directory with your .cpp files: I called it examples/

 filename.cpp is inside the examples directory.

```
cd examples/
ls                                   # make sure you can see the .cpp file
g++ <filename>.cpp -o <filename>     # Will compile your program to an executable called <filename>* (on GNU plus Linux).
```

To launch the executable:

```
./<filename>
```
