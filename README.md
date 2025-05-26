Simple Login System in C++
This is a basic console-based user registration and login system implemented in C++. It uses simple file handling to store usernames and encrypted passwords.

Features
User registration with username and password.

Password encryption using XOR cipher for demonstration.

User login with validation against stored credentials.

Prevents duplicate usernames.

How It Works
Usernames and passwords are stored in a text file named users.txt.

Passwords are "encrypted" by XOR-ing each character with the constant 123.

During login, the input password is encrypted the same way and matched against stored passwords.

Files
main.cpp — Contains the source code for the login system.

users.txt — Created automatically to store user data.

Usage
Compile the program:

bash
Copy
Edit
g++ main.cpp -o login_system
Run the program:

bash
Copy
Edit
./login_system
Follow the on-screen menu:

Choose 1 to register a new user.

Choose 2 to login.

Choose 3 to exit.

Important Notes
The password encryption method is not secure and is used only for demonstration purposes.

Passwords are stored in plain text format after simple XOR encryption — do not use this system for real applications.

For real-world use, consider secure hashing algorithms like bcrypt or Argon2.

The program does not handle spaces in usernames or passwords.

The program assumes the working directory is writable for creating users.txt.
