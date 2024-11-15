# Trolley

This is a simple program to help guide trolleys by finding the most efficient path based on user input costs. It’s mainly a practice project to understand basic in C.

## About the Program

The program continuously prompts the user to input costs for going left and right, then suggests which direction is cheaper. It stops if the user enters an invalid input or signals the end of input.

## Key Concepts Practiced

- **Infinite Loops**: Keeps the program running, so it can take multiple inputs until manually stopped.
- **If-Else-If Statements**: Compares the left and right costs to decide the best path.
- **Input Validation**: Checks if the input is valid and exits if it’s not.
- **Decision Making**: It compares the left and right costs and suggests which direction to go based on the lowest cost.

## How to Use It

1. **Compile the Program**: Use a C compiler with 32bit support to build the program:
   ```bash
   gcc -O0 -m32 -Wall -Wextra -Werror -pedantic -o trolley trolley.c
   
### Challenges and Tips for First-Time Coders

1. **Infinite Loops (`while (1)`)**  
   - Using `while (1)` creates a loop that never ends on its own—it just keeps running until the program finds a reason to stop. Here, we’re stopping it when we get invalid input or when we reach the end of input.
   - **Tip**: If you accidentally get stuck in this loop, you can usually end the program by pressing `Ctrl + d` in the terminal.

2. **`if-else-if` Statements**  
   - The `if-else-if` part of the code lets the program make decisions based on conditions, like comparing the left and right costs to decide which is cheaper. This is a simple decision-making structure, but it’s important to check conditions in the right order.
   - **Tip**: Take it one step at a time and remember that the program will only run the first condition that’s true. Play around with changing the numbers to see how it affects the output!

3. **checking Input with `scanf()` and Using EOF to Exit Gracefully**

   - In this program, we use `scanf()` to read input from the user. Besides reading values, `scanf()` also returns a value that tells us if it worked or not. For example, if the user enters a valid number, `scanf()` returns `1`. But if something unexpected is entered, like a letter, it returns something else. This lets us check if the input is valid before moving on. One of the trickier parts was getting the program to recognize the end of input and print "Terminating" before stopping. Handling EOF (End of File) with `scanf()` took some time to understand, but it was a helpful step in learning how to manage input in a program. EOF only works with `scanf()` when reading integers, because `scanf()` returns a specific value when it hits the end of input. This allows the program to check for EOF and stop when there's no more input, instead of looping forever. You can signal the end of input by pressing `Ctrl + D`. The program will detect it, print "Terminating," and end cleanly.
   - **Tip**: EOF handling can be a bit confusing at first, but it’s a useful tool once you get the hang of it. It keeps the program from getting stuck in an endless loop when input ends unexpectedly.

4. **Strict Error Checking with GCC Flags**  
   - The compile command uses flags like `-Wall`, `-Wextra`, `-Werror`, and `-pedantic`, which enable extra warnings and treat them as errors. This can be a little frustrating because even small things will stop your program from compiling, but it also helps catch mistakes early.
   - **Tip**: Don’t be discouraged errors are just reminding you to keep your code clean. Read each message carefully; they usually point right to the issue.

5. **32-Bit Compilation (`-m32` Flag)**  
   - The `-m32` option tells the compiler to create a 32-bit program. This might not be needed on every system, but it’s useful for compatibility with certain environments.
   - **Tip**: If you get errors about missing libraries, try searching for “install 32-bit libraries” plus your operating system’s name for instructions on setting it up.
    ```bash
   sudo apt install gcc-multilib

7. **Common Pitfalls: Misplacing `{}` and `()`**

   - A common mistake when starting out in C is accidentally misplacing `{}` (curly braces) and `()` (parentheses). These symbols are key for organizing your code, but it’s really easy to mix them up or forget one, which can throw off the whole program.
   - **Tip**: Take a quick look after you write each loop or condition to make sure every `{` has a matching `}` and all your `if` and `while` conditions are wrapped in `()`. It’s a small habit that can save a lot of frustration later!
