##### UNIXLab GitHub Repository (ISL37 UNIX and Shell Programming Laboratory)

### Prerequisites:
- To run the shell scripts, ensure that you have a POSIX-compliant shell environment installed, such as Bash.
- For compiling and running the C/C++ programs, you need a C/C++ compiler (e.g., GCC) installed on your system.
---

#### Disclaimer

**Attention**: The programs provided in this repository are solely intended for educational and learning purposes. The creator of these programs accepts no responsibility for any consequences resulting from the use or misuse of the code provided herein. 

Users are advised to exercise caution and use these programs at their own risk. It is recommended to thoroughly understand the code and its implications before learning it for a lab examination. Using these programs for cheating in any lab examination is strictly frowned upon and not encouraged.

By using these programs, users acknowledge and accept the inherent risks associated with using these programs and agree to hold the creator harmless from any damages, liabilities, or losses that may arise from their use.


#### Directory 1 (`bash_scripting`) - Shell Scripts for Basic File and String Operations
---

This directory contains a collection of shell scripts designed to perform various file and string operations, prescribed under UNIX and Shell Programming Laboratory (ISL37) course of the Branch of ISE, M S Ramaiah Institute of Technology, Bangalore. 

#### Programs with Variable Descriptions and Summaries:

1. **db_maker.sh**:
   - **Description**: This script creates a student database file containing student details such as USN, First Name, Last Name, and Department. It then displays the Student Name, Department, and the frequency of occurrences of students belonging to respective departments.
   - **Variables**:
     - `n`: An integer variable to store the number of records to be entered.
     - `fields`: A string variable representing the fields in the database (USN, First Name, Last Name, Dept).
     - `del`: A delimiter used to separate fields in the database.
     - `count`: A counter variable to track the number of records entered.
   - **Usage**: `sh db_maker.sh`

2. **samefile_checker.sh**:
   - **Description**: This script takes two filenames as arguments and checks if their contents are identical. If the contents are the same, it removes the second file.
   - **Variables**:
     - None.
   - **Usage**: `sh samefile_checker.sh <filename1> <filename2>`

3. **filetype.sh**:
   - **Description**: This script takes a filename as an argument and reports whether it is a directory, a file, or something else.
   - **Variables**:
     - None.
   - **Usage**: `sh filetype.sh <filename>`

4. **filename_to_uppercase.sh**:
   - **Description**: This script accepts one or more filenames as arguments and converts their names to uppercase if they exist in the current directory.
   - **Variables**:
     - None.
   - **Usage**: `sh filename_to_uppercase.sh <filename1> <filename2> ... <filenamen>`

5. **file_perms.sh**:
   - **Description**: This script accepts two filenames as arguments, checks if their permissions are identical, and outputs common permissions if they are identical. Otherwise, it outputs each filename followed by its permissions.
   - **Variables**:
     - `perms1`: Permissions of the first file.
     - `perms2`: Permissions of the second file.
   - **Usage**: `sh file_perms.sh <filename1> <filename2>`

6. **string_operations.sh**:
   - **Description**: This script takes two strings as input and performs various operations such as checking if the strings are equal, finding the length of each string, and determining if a string is NULL.
   - **Variables**:
     - `str1`: First input string.
     - `str2`: Second input string.
   - **Usage**: `sh string_operations.sh`

7. **reverse_args.sh**:
   - **Description**: This script prints the arguments passed to it in reverse order.
   - **Variables**:
     - `rev`: A string variable to store the reversed arguments.
   - **Usage**: `sh reverse_args.sh <arg1> <arg2> <arg3> ... <argn>`

8. **reverse_nums.sh**:
   - **Description**: This script takes a number as input and prints its digits in reverse order.
   - **Variables**:
     - `num`: Input number.
     - `rev`: Reversed number.
     - `temp`: Temporary variable to store the input number.
   - **Usage**: `sh reverse_nums.sh`

9. **fibonacci.sh**:
   - **Description**: This script prints the first 25 Fibonacci numbers.
   - **Variables**:
     - `n1`, `n2`: Variables to store the current and next Fibonacci numbers.
     - `fib`: A string variable to store the Fibonacci sequence.
     - `count`: Counter variable to limit the sequence to 25 numbers.
   - **Usage**: `sh fibonacci.sh`

10. **prime.sh**:
    - **Description**: This script prints the prime numbers within a specified range.
    - **Variables**:
      - `beg`: Start of the range.
      - `end`: End of the range.
      - `prime`: A string variable to store the prime numbers within the range.
   - **Usage**: `sh prime.sh`

11. **linearsearch.sh**:
    - **Description**: This script performs a linear search to find a given key element in an array of numbers.
    - **Variables**:
      - `arr[]`: Array to store the input elements.
      - `ele`: Element to be searched.
      - `flag`: Flag variable to indicate if the element is found.
   - **Usage**: `sh linearsearch.sh`

12. **largest_of3.sh**:
    - **Description**: This script finds the largest of three numbers using a function.
    - **Variables**:
      - `n1`, `n2`, `n3`: Input numbers.
      - `maxof3()`: A function to find the maximum of three numbers.
   - **Usage**: `sh largest_of3.sh`



#### Directory 2 (`sys_programming`) - C++ System Programs (Kernel-esque)
---
This directory contains a collection of system programs in C++ designed to perform various file, pipe, process and kernel operations, prescribed under UNIX and Shell Programming Laboratory (ISL37) course of the Branch of ISE, M S Ramaiah Institute of Technology, Bangalore. 

#### Programs with Descriptions, Usage Instructions, and Variable Descriptions:

1. **UNIX Command Implementations**:
   - This section contains C/C++ programs that implement various UNIX commands using APIs.

   (i) **ln.cpp**:
       - **Description**: Implements the UNIX `ln` command using APIs.
       - **Usage**: `./<executable> <filename> <link_filename>`
       - **Variables**:
         - `argc`: Number of command-line arguments.
         - `argv[]`: Array of command-line arguments.
       - Compile: `g++ ln.cpp -o ln`

   (ii) **mv.cpp**:
       - **Description**: Implements the UNIX `mv` command using APIs.
       - **Usage**: `./<executable> <source_filename> <dest_filename>`
       - **Variables**: Same as ln.cpp
       - Compile: `g++ mv.cpp -o mv`

   (iii) **rm.cpp**:
       - **Description**: Implements the UNIX `rm` command using APIs.
       - **Usage**: `./<executable> <filename>`
       - **Variables**: Same as ln.cpp
       - Compile: `g++ rm.cpp -o rm`

2. **dp_cp.cpp**:
   - **Description**: Displays the contents of a file on standard output and copies the contents of one file to another.
   - **Usage**: `./<executable> <filename1> <filename2>`
   - **Variables**:
     - `argc`: Number of command-line arguments.
     - `argv[]`: Array of command-line arguments.
   - Compile: `g++ dp_cp.cpp -o dp_cp`

3. **hundredthbyte.cpp**:
   - **Description**: Reads every 100th byte from a file.
   - **Usage**: `./<executable> <filename>`
   - **Variables**: Same as ln.cpp
   - Compile: `g++ hundredthbyte.cpp -o hundredthbyte`

4. **fileinfo.cpp**:
   - **Description**: Displays information about a given file, including the file type and Inode information.
   - **Usage**: `./<executable> <filename1>`
   - **Variables**: Same as ln.cpp
   - Compile: `g++ fileinfo.cpp -o fileinfo`

5. **process.cpp** and **processvfork.cpp**:
   - **Description**: Create processes using `fork()` and `vfork()` system calls.
   - **Usage**: Run the executables directly.
   - **Variables**: Same as ln.cpp
   - Compile: `g++ process.cpp -o process` and `g++ processvfork.cpp -o processvfork`

6. **zombieprocess.cpp** and **preventzombie.cpp**:
   - **Description**: Demonstrate and avoid Zombie processes.
   - **Usage**: Run the executables directly.
   - **Variables**: Same as ln.cpp
   - Compile: `g++ zombieprocess.cpp -o zombieprocess` and `g++ preventzombie.cpp -o preventzombie`

7. **orphan.cpp**:
   - **Description**: Creates an Orphan process.
   - **Usage**: Run the executable directly.
   - **Variables**: Same as ln.cpp
   - Compile: `g++ orphan.cpp -o orphan`

8. **racecondition.cpp**:
    - **Description**: Demonstrates a race condition.
    - **Usage**: Run the executable directly.
    - **Variables**: Same as ln.cpp
    - Compile: `g++ racecondition.cpp -o racecondition`

9. **retrieveexit.cpp**:
    - **Description**: Demonstrates a parent process that retrieves a child's exit code.
    - **Usage**: Run the executable directly.
    - **Variables**: Same as ln.cpp
    - Compile: `g++ retrieveexit.cpp -o retrieveexit`

10. **catchsignal.cpp**, **default_signal.cpp**, and **ignore_signal.cpp**:
    - **Description**: Catch, accept, or ignore signals.
    - **Usage**: Run the executables directly.
    - **Variables**: Same as ln.cpp
    - Compile: `g++ catchsignal.cpp -o catchsignal`, `g++ default_signal.cpp -o default_signal`, and `g++ ignore_signal.cpp -o ignore_signal`

11. **unixsystem.cpp**:
    - **Description**: Implements the UNIX `system()` function using APIs.
    - **Usage**: Run the executable directly.
    - **Variables**: Same as ln.cpp
    - Compile: `g++ unixsystem.cpp -o unixsystem`

12. **pipeoperations.cpp** and **parenttochildpipe.cpp**:
    - **Description**: Creates, writes to, and reads from a pipe, and sends data from parent to child through a pipe.
    - **Usage**: Run the executables directly.
    - **Variables**: Same as ln.cpp
    - Compile: `g++ pipeoperations.cpp -o pipeoperations` and `g++ parenttochildpipe.cpp -o parenttochildpipe`



#### Explore and Experiment:
   - Feel free to explore and experiment with the scripts by modifying the code and observing how it affects the program's behavior.
   - Gain insights into shell scripting concepts by studying and understanding the script logic and implementation details.

By following these instructions, you can easily set up and run the provided shell scripts on your local machine, enabling you to perform various file and string operations efficiently.