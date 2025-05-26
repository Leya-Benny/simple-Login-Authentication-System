#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string encryptPassword(string pass) {
    //(just for demonstration)
    string enc = pass;
    for (char &c : enc) {
        c = c ^ 123; // XOR with a constant
    }
    return enc;
}

bool userExists(string username) {
    ifstream file("users.txt");
    string u, p;
    while (file >> u >> p) {
        if (u == username) return true;
    }
    return false;
}

void registerUser() {
    string username, password;
    cout << "Enter new username: ";
    cin >> username;

    if (userExists(username)) {
        cout << "Username already exists!\n";
        return;
    }

    cout << "Enter password: ";
    cin >> password;

    string encrypted = encryptPassword(password);
    ofstream file("users.txt", ios::app);
    file << username << " " << encrypted << endl;
    file.close();

    cout << "Registration successful!\n";
}

void loginUser() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    string encrypted = encryptPassword(password);

    ifstream file("users.txt");
    string u, p;
    bool found = false;
    while (file >> u >> p) {
        if (u == username && p == encrypted) {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Login successful!\n";
    else
        cout << "Invalid credentials!\n";
}

int main() {
    int choice;
    do {
        cout << "\n=== LOGIN SYSTEM ===\n";
        cout << "1. Register\n2. Login\n3. Exit\nChoose: ";
        cin >> choice;

        switch (choice) {
            case 1: registerUser(); break;
            case 2: loginUser(); break;
            case 3: cout << "Goodbye!\n"; break;
            default: cout << "Invalid option.\n";
        }
    } while (choice != 3);

    return 0;
}
