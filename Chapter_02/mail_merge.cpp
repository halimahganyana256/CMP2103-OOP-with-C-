
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main() {
    // Variables to store the student's details
    string firstName, lastName, studyProgram, academicYear;

    // Prompt the user to enter their details
    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your last name: ";
    cin >> lastName;
    cin.ignore();

    cout << "Enter your study program: ";
    getline(cin, studyProgram);

    cout << "Enter your academic year: ";
    getline(cin, academicYear);

    // Get the current date automatically
    time_t now = time(0);
    tm *localTime = localtime(&now);

    int day = localTime->tm_mday;
    int month = localTime->tm_mon;
    int year = localTime->tm_year + 1900;

    // Store the names of the months
    string months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    // Determine the correct date suffix
    string suffix;

    if (day == 1 || day == 21 || day == 31)
        suffix = "st";
    else if (day == 2 || day == 22)
        suffix = "nd";
    else if (day == 3 || day == 23)
        suffix = "rd";
    else
        suffix = "th";

    // Display the acceptance letter
    cout << "\n\n";
    cout << "==============================================" << endl;
    cout << "          MAKERERE UNIVERSITY                 " << endl;
    cout << "==============================================" << endl;

    cout << "Date: " << day << suffix << " "
         << months[month] << " " << year << endl;

    cout << endl;

    cout << "To: " << firstName << " " << lastName << "," << endl;

    cout << endl;

    cout << "Dear " << firstName << "," << endl;

    cout << endl;

    cout << "CONGRATULATIONS! I am pleased to inform you that the "
         << "Makerere University Admissions Board has approved your "
         << "application for admission to the "
         << academicYear << " academic year." << endl;

    cout << endl;

    cout << "You have been offered a place for the following course:" << endl;

    cout << "PROGRAM: " << studyProgram << endl;

    cout << endl;

    cout << "As a student of Makerere University, you will be part of a "
         << "historic institution dedicated to academic excellence and "
         << "innovation. Please ensure that you report to the Academic "
         << "Registrar's office with your original academic documents "
         << "for verification during the orientation week." << endl;

    cout << endl;

    cout << "We look forward to welcoming you to Makerere University." << endl;

    cout << endl;

    cout << "Yours sincerely," << endl;

    cout << endl;

    cout << "John Doe" << endl;
    cout << "Academic Registrar" << endl;

    cout << "==============================================" << endl;

    return 0;
}
