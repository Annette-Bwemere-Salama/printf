# Printf

`printf` is an implementation of the printf function in C.

`printf` is a function in the C programming language that is used to output formatted text to the standard output stream (usually the screen). The name `printf` stands for "print formatted" and it takes a format string as its first argument, followed by any number of additional arguments. The format string contains placeholders, called format specifiers, that are replaced by the values of the additional arguments when the function is called.

For example, the following code uses `printf` to output a formatted string that includes an integer and a floating-point number:

```c
#include <stdio.h>

int main(void) {
    int x = 10;
    float y = 3.14;
    printf("x = %d, y = %f\n", x, y);
    return 0;
}
```

In this example, the format string `"x = %d, y = %f\n"` contains two format specifiers: `%d`, which is replaced by the value of the integer variable `x`, and `%f`, which is replaced by the value of the floating-point variable `y`. The output would be:

```
x = 10, y = 3.140000
```




## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project on a live system.

<!-- ### Prerequisites -->

To use the `printf` function in the C programming language, you need to have a basic understanding of the C language and its syntax. You also need to have a C compiler installed on your computer so that you can compile and run C programs.

In your C code, you need to include the `stdio.h` header file, which contains the declaration of the `printf` function. Here's an example of how you might use `printf` in a simple C program:

```c
#include <stdio.h>

int main(void) {
    printf("Hello, world!\n");
    return 0;
}
```

In this example, we include the `stdio.h` header file and use the `printf` function to output a string to the standard output stream. When this program is compiled and run, it will print the string `"Hello, world!"` followed by a newline character.




## Running the tests

To run tests for a `printf` implementation, you would typically write test cases that call your `printf` function with various inputs and check that the output is correct. Here's an example of how you might write a simple test case for a `printf` implementation:

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char buffer[100];
    int result;

    // Redirect stdout to buffer
    freopen("/dev/null", "a", stdout);
    setbuf(stdout, buffer);

    // Call printf with test input
    result = printf("Hello, %s!\n", "world");

    // Check the result
    if (result != 13) {
        printf("Test failed: incorrect return value\n");
        return 1;
    }

    if (strcmp(buffer, "Hello, world!\n") != 0) {
        printf("Test failed: incorrect output\n");
        return 1;
    }

    printf("Test passed\n");
    return 0;
}
```

In this example, we redirect the standard output stream to a buffer so that we can capture the output of the `printf` function. We then call `printf` with a test input and check that the return value and the output are correct. If either the return value or the output is incorrect, we print an error message and return a non-zero exit code to indicate that the test failed.

You could write additional test cases to test other aspects of your `printf` implementation, such as its handling of different format specifiers and its behavior when called with invalid inputs.


### And coding style tests

Betty Style
* [Dropwizard](https://github.com/holbertonschool/Betty) - Betty Style



## Contributing

Please read [CONTRIBUTING.md](https://github.com/JoeMakuta/printf) for details on our code of conduct, and the process for submitting pull requests to us.

## Versioning

We use [SemVer](https://github.com/JoeMakuta/printf) for versioning. For the versions available, see the [tags on this repository](https://github.com/JoeMakuta/printf). 

