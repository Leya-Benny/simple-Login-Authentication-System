# Simple Login System in C++

This is a basic console-based user registration and login system implemented in C++. It uses simple file handling to store usernames and encrypted passwords.

---

## Features

- User registration with username and password.
- Password encryption using XOR cipher for demonstration.
- User login with validation against stored credentials.
- Prevents duplicate usernames.

---

## How It Works

- Usernames and passwords are stored in a text file named `users.txt`.
- Passwords are "encrypted" by XOR-ing each character with the constant `123`.
- During login, the input password is encrypted the same way and matched against stored passwords.

---

## Files

- `auth_system.cpp` — Contains the source code for the login system.
- `users.txt` — Created automatically to store user data.

---
