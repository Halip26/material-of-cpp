# the concepts in maths & conditionals

The code consists of the following lines:

```# include <iostream>:``` This line includes the iostream library, which allows input and output operations

```using namespace std;```: This line allows the use of standard library functions and objects without specifying the namespace.

```int main() {```: This line defines the main function, which is the entry point of the program.

```float n1, n2, n3;```: This line declares three float variables named n1, n2, and n3 to store the user input.

```cout << "Enter three numbers: ";```: This line displays a prompt to the user asking them to enter three numbers.

```cin >> n1 >> n2 >> n3;```: This line reads the user input and assigns the values to n1, n2, and n3.

```if(n1 >= n2 && n1 >= n3)```: This line starts an if statement to compare n1 with n2 and n3 using the >= operator.

```cout << "Largest number: " << n1;```: This line is executed if the condition in the previous if statement is true. It prints the largest number, which is n1.

```if(n2 >= n1 && n2 >= n3)```: This line starts another if statement to compare n2 with n1 and n3 using the >= operator.

```cout << "Largest number: " << n2;```: This line is executed if the condition in the previous if statement is true. It prints the largest number, which is n2.

```if(n3 >= n1 && n3 >= n2)```: This line starts a third if statement to compare n3 with n1 and n2 using the >= operator.

```cout << "Largest number: " << n3;```: This line is executed if the condition in the previous if statement is true. It prints the largest number, which is n3.

```return 0;```: This line ends the main function and returns 0 to the operating system, indicating successful execution of the program.
