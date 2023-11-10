#include <bits/stdc++.h>

using namespace std;

class go
{
    string EncryptPassword(const string &password)
    {
        string encryptedPassword = password;
        int key = 3; // You can choose a different key for encryption

        for (char &c : encryptedPassword)
        {
            if (isalpha(c))
            {
                c = (c + key - 'a') % 26 + 'a';
            }
            else if (isdigit(c))
            {
                c = (c + key - '0') % 10 + '0';
            }
        }

        return encryptedPassword;
    }

    // Function to decrypt a password using Caesar Cipher

    string DecryptPassword(const string &encryptedPassword)
    {
        string decryptedPassword = encryptedPassword;
        int key = 3; // You should use the same key as used for encryption

        for (char &c : decryptedPassword)
        {
            if (isalpha(c))
            {
                c = (c - key - 'a' + 26) % 26 + 'a';
            }
            else if (isdigit(c))
            {
                c = (c - key - '0' + 10) % 10 + '0';
            }
        }

        decryptedPassword[0] -= 26;

        return decryptedPassword;
    }

    void DisplayRandomQuote()
    {
        string quotes[] = {
            "Believe in yourself and all that you are. Know that there is something inside you that is greater than any obstacle. - Christian D. Larson",
            "Success is not final, failure is not fatal: It is the courage to continue that counts. - Winston Churchill",
            "The only way to do great work is to love what you do. - Steve Jobs",
            "The only place where success comes before work is in the dictionary. - Vidal Sassoon",
            "Don't watch the clock; do what it does. Keep going. - Sam Levenson",
            "Believe you can and you're halfway there. - Theodore Roosevelt",
            "Your time is limited, don't waste it living someone else's life. - Steve Jobs",
            "The future depends on what you do today. - Mahatma Gandhi",
            "It does not matter how slowly you go as long as you do not stop. - Confucius",
            "In the middle of every difficulty lies opportunity. - Albert Einstein",
            "The harder you work for something, the greater you'll feel when you achieve it. - Unknown",
            "Success is walking from failure to failure with no loss of enthusiasm. - Winston Churchill",
            "You don't have to be great to start, but you have to start to be great. - Zig Ziglar",
            "You are never too old to set another goal or to dream a new dream. - C.S. Lewis",
            "Success is not the key to happiness. Happiness is the key to success. If you love what you are doing, you will be successful. - Albert Schweitzer",
            "The only limit to our realization of tomorrow will be our doubts of today. - Franklin D. Roosevelt",
            "The best way to predict the future is to create it. - Peter Drucker",
            "The journey of a thousand miles begins with one step. - Lao Tzu",
            "You are the master of your destiny. You can influence, direct and control your own environment. - Napoleon Hill",
            "Don't be pushed around by the fears in your mind. Be led by the dreams in your heart. - Roy T. Bennett"};

        int numQuotes = sizeof(quotes) / sizeof(quotes[0]);

        srand(static_cast<unsigned>(time(0)));

        int randomIndex = rand() % numQuotes;

        cout << "Random Quote: ";
        cout << quotes[randomIndex] << endl;
    }

    bool IsStrongPassword(const string &password)
    {
        bool hasLowerCase = false;
        bool hasUpperCase = false;
        bool hasDigit = false;

        if (password.length() < 8)
        {
            return false;
        }

        for (char c : password)
        {
            if (islower(c))
            {
                hasLowerCase = true;
            }
            else if (isupper(c))
            {
                hasUpperCase = true;
            }
            else if (isdigit(c))
            {
                hasDigit = true;
            }
        }

        return hasLowerCase && hasUpperCase && hasDigit;
    }


    private:
        void displayFAQs()
    {
        cout << "Frequently Asked Questions:" << endl;
        cout << "Q1. How to register an account?" << endl;
        cout << "A1. Select 'Register' from the main menu, then enter your username, a strong password, and your age." << endl
             << endl;

        cout << "Q2. What is a strong password?" << endl;
        cout << "A2. A strong password should be at least 8 characters long, contain a mix of uppercase and lowercase letters, and include digits." << endl
             << endl;

        cout << "Q3. How can I change my password?" << endl;
        cout << "A3. Choose 'Change Password' from the main menu, enter your old password, and then set your new password." << endl
             << endl;

        cout << "Q4. How do I delete my account?" << endl;
        cout << "A4. Currently, there's no option to delete your account from within the application. You can contact support for assistance." << endl
             << endl;

        cout << "Q5. I forgot my password. What should I do?" << endl;
        cout << "A5. You can contact support for assistance in case you forget your password." << endl
             << endl;

        cout << "Q6. How can I view all records?" << endl;
        cout << "A6. Select 'Show All Records' from the main menu and log in as the 'root' user with the password 'root'." << endl
             << endl;

        cout << "Q7. I encountered an issue not covered here. What should I do?" << endl;
        cout << "A7. Please choose 'Contact Support' from this menu and get in touch with our support team for assistance." << endl
             << endl;
    }
    public:
        void system()
    {

        int choice;
        string text, password, oldPassword, newPassword, newPasswordConfirm, name, age, username;
        bool isRoot = false;

        cout << " ________________________________________________________________" << endl;
        cout << "|   * * *      * * * *   * * * *   * * *    * * *       * * *    |" << endl;
        cout << "| *      *     *         *         *     *  *     *   *       *  |" << endl;
        cout << "| *            *         *         *     *  *     *   *       *  |" << endl;
        cout << "|   * * *      * * * *   *         * * *    * * *     *       *  |" << endl;
        cout << "|        *     *         *         *        * *       *       *  |" << endl;
        cout << "| *      *     *         *         *        *   *     *       *  |" << endl;
        cout << "|   * * *      * * * *   * * * *   *        *     *     * * *    |" << endl;
        cout << "|________________________________________________________________|" << endl;

        do
        {
            cout << " _____________________________" << endl;
            cout << "|       1. Register           |" << endl;
            cout << "|       2. Login              |" << endl;
            cout << "|       3. Change Password    |" << endl;
            cout << "|       4. Delete Record      |" << endl;
            cout << "|       5. Show All Records   |" << endl;
            cout << "|       6. End Program        |" << endl;
            cout << "|       7. Help and Support   |" << endl;
            cout << "|_____________________________|" << endl;
            cout << endl
                 << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1: // Register
            {
                cout << " ______________________________" << endl;
                cout << "|          Register            |" << endl;
                cout << "|______________________________|" << endl
                     << endl;

                cout << "Please Enter Username: ";
                cin >> username;
                cout << "Please Enter Password: ";
                cin >> password;
                cout << "Please Enter Your Age: ";
                cin >> age;

                if (!IsStrongPassword(password))
                {
                    cout << "Password is not strong enough. It should be at least 8 characters long and include a mix of uppercase and lowercase letters and digits." << endl;
                    break;
                }

                // Encrypt the password before storing it6
                password = EncryptPassword(password);

                ofstream file("File.txt", ios::app);
                if (file.is_open())
                {
                    file << username << "\n";
                    file << password << "\n";
                    file << age << "\n";
                    file.close();
                    cout << "Registration Successfully" << endl;
                }
                else
                {
                    cout << "Failed to open the file for registration." << endl;
                }
                break;
            }
            case 2: // Login
            {
                cout << " ______________________________" << endl;
                cout << "|            Login             |" << endl;
                cout << "|______________________________|" << endl
                     << endl;

                ifstream file("File.txt");
                cout << "Please Enter the Username: ";
                cin >> username;
                cout << "Please Enter the Password: ";
                cin >> password;

                if (file.is_open())
                {
                    bool found = false;
                    while (getline(file, text))
                    {
                        if (username == text)
                        {
                            if (getline(file, text))
                            {                                 // read the password
                                text = DecryptPassword(text); // Decrypt the stored password before comparison
                                if (password == text)
                                {
                                    cout << " ________________________________" << endl;
                                    cout << "|      Login Successful        |" << endl;
                                    cout << "|______________________________|" << endl
                                         << endl;
                                    cout << "Details" << endl;
                                    cout << "Username: " << username << endl;
                                    cout << "Password: " << password << endl;
                                    found = true;
                                    DisplayRandomQuote();
                                    break; // exit the loop once the login is successful
                                }
                                else
                                {
                                    cout << "Incorrect Password" << endl;
                                    break; // exit the loop if the password is incorrect
                                }
                            }
                        }
                    }
                    if (!found)
                    {
                        cout << "User not found. Please register." << endl;
                    }
                    file.close();
                }
                else
                {
                    cout << "Failed to open the file for login." << endl;
                }
                break;
            }

            case 3: // Change Password
            {
                cout << " ______________________________" << endl;
                cout << "|      Change Password         |" << endl;
                cout << "|______________________________|" << endl
                     << endl;

                ifstream file("File.txt");
                cout << "Please Enter Username: ";
                cin >> username;

                bool userFound = false;
                while (!file.eof())
                {
                    getline(file, text);
                    if (username == text)
                    {
                        userFound = true;
                        getline(file, text);
                        text = DecryptPassword(text); // Decrypt the stored password for comparison
                        cout << "Enter Old Password: ";
                        cin >> oldPassword;
                        if (oldPassword == text)
                        {
                            cout << "Enter Your New Password: ";
                            cin >> newPassword;
                            cout << "Enter Your Password Again: ";
                            cin >> newPasswordConfirm;
                            if (newPassword == newPasswordConfirm)
                            {
                                // Encrypt the new password before storing it
                                newPassword = EncryptPassword(newPassword);

                                fstream tempFile("TempFile.txt", ios::out);
                                tempFile << username << "\n";
                                tempFile << newPassword << "\n";
                                cout << "Password Changed Successfully" << endl;
                                tempFile.close();
                            }
                            else
                            {
                                cout << "Passwords do not match" << endl;
                            }
                        }
                        else
                        {
                            cout << "Please enter a valid old password" << endl;
                        }
                    }
                    else
                    {
                        fstream tempFile("TempFile.txt", ios::out | ios::app);
                        tempFile << text << "\n";
                        getline(file, text);
                        tempFile << text << "\n";
                        userFound = false;
                        tempFile.close();
                    }
                }

                file.close();

                if (userFound)
                {
                    remove("File.txt");
                    rename("TempFile.txt", "File.txt");
                }
                else
                {
                    cout << "User not found. Please register." << endl;
                }
                break;
            }
            case 4: // Delete Record
            {
                cout << " ______________________________" << endl;
                cout << "|       Delete Record          |" << endl;
                cout << "|______________________________|" << endl
                     << endl;

                cout << "Enter Username of the record to delete: ";
                cin >> username;

                ifstream file("File.txt");
                ofstream tempFile("TempFile.txt");

                if (file.is_open() && tempFile.is_open())
                {
                    bool recordDeleted = false;
                    while (!file.eof())
                    {
                        getline(file, text);
                        if (username == text)
                        {
                            getline(file, text); // Skip the password
                            getline(file, text); // Skip the age
                            recordDeleted = true;
                        }
                        else
                        {
                            tempFile << text << "\n"; // Write the username to the temp file
                            getline(file, text);      // Skip the password
                            getline(file, text);      // Skip the age
                        }
                    }
                    file.close();
                    tempFile.close();
                    remove("File.txt");
                    rename("TempFile.txt", "File.txt");
                    if (recordDeleted)
                    {
                        cout << "Record for user " << username << " has been deleted." << endl;
                    }
                    else
                    {
                        cout << "Record not found. No changes were made." << endl;
                    }
                }
                else
                {
                    cout << "Error opening files for record deletion." << endl;
                }
                break;
            }
            case 5: // Show All Records
            {
                cout << "Please Enter the Username: ";
                cin >> username;
                cout << "Please Enter the Password: ";
                cin >> password;

                if (username == "root" && password == "root")
                {
                    isRoot = true;
                }

                if (isRoot)
                {
                    cout << " ______________________________" << endl;
                    cout << "|       Show All Records       |" << endl;
                    cout << "|______________________________|" << endl
                         << endl;

                    ifstream file("File.txt");

                    if (file.is_open())
                    {
                        cout << "All Records:" << endl;

                        while (getline(file, text))
                        {
                            cout << "Username: " << text << endl;
                            getline(file, text);          // Password
                            text = DecryptPassword(text); // Decrypt the stored password for display
                            getline(file, text);          // Age
                            cout << "---------------------------" << endl;
                        }

                        file.close();
                    }
                    else
                    {
                        cout << "Error opening the file for displaying records." << endl;
                    }
                }
                else
                {
                    cout << "Access Denied" << endl;
                    cout << "You are not the Root User" << endl;
                }

                break;
            }
            case 6:
                cout << "______________Thank You!_____________" << endl;
                cout << " -------------Project By-------------" << endl;
                cout << "|-----1. Rydhampreet Singh Gindra----|" << endl;
                cout << "|-----2. Rupesh Singla---------------|" << endl;
                cout << "|-----3. Saksham Bharti--------------|" << endl;
                break;
            case 7: // Help and Support
            {
                cout << " _____________________________" << endl;
                cout << "|       Help and Support      |" << endl;
                cout << "|_____________________________|" << endl
                     << endl;

                cout << "Welcome to the Help and Support section. How can we assist you?" << endl;
                cout << "1. FAQ" << endl;
                cout << "2. Contact Support" << endl;
                cout << "3. Go back to the main menu" << endl;

                int helpChoice;
                cout << "Enter your choice: ";
                cin >> helpChoice;

                switch (helpChoice)
                {
                case 1: // FAQ
                    displayFAQs();
                    break;

                case 2: // Contact Support
                    cout << "If you need further assistance, please contact our support team at help@rps.com." << endl;
                    break;

                case 3: // Go back to the main menu
                    break;

                default:
                    cout << "Invalid choice. Please select a valid option." << endl;
                }
                break;
            }
            default:
                cout << "Enter a valid Choice" << endl;
                break;
            }
        } while (choice != 6);
    }
};

// Function to encrypt a password using Caesar Cipher

int main()
{
    go obj1;
    obj1.system();
    return 0;
}