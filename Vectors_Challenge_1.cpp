/// David Kouassi Sept 1, 2025, Lab Activity: Vectors_Challenge_1
#include <iostream>
#include <string>
#include <limits> // for std::numeric_limits

using namespace std;

// Global const arrays
const string DAYS_OF_WEEK[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
const string MONTHS_OF_YEAR[12] = {"January", "February", "March", "April", "May", "June",
                                   "July", "August", "September", "October", "November", "December"};

int main()
{
    int choice;

    do
    {
        // Display menu
        cout << "\nMenu:\n";
        cout << "1. Get Day Name by Number (1-7)\n";
        cout << "2. Get Month Name by Number (1-12)\n";
        cout << "3. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Input validation for menu choice
        if (cin.fail())
        {
            cin.clear();                                         // Clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input! Please enter a number between 1 and 3.\n";
            continue;
        }

        switch (choice)
        {
        case 1:
        {
            int dayNumber;
            cout << "Enter day number (1-7): ";
            cin >> dayNumber;

            // Validate day input
            if (cin.fail() || dayNumber < 1 || dayNumber > 7)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid Day\n";
            }
            else
            {
                cout << "Day " << dayNumber << " is " << DAYS_OF_WEEK[dayNumber - 1] << endl;
            }
            break;
        }
        case 2:
        {
            int monthNumber;
            cout << "Enter month number (1-12): ";
            cin >> monthNumber;

            // Validate month input
            if (cin.fail() || monthNumber < 1 || monthNumber > 12)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid Month\n";
            }
            else
            {
                cout << "Month " << monthNumber << " is " << MONTHS_OF_YEAR[monthNumber - 1] << endl;
            }
            break;
        }
        case 3:
            cout << "Exiting program. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice! Please select 1, 2, or 3.\n";
        }

    } while (choice != 3);

    return 0;
}