// this program is a simple student fee information system that allows users to check their fee details, total fees, and make payments.
// It uses a password for security and provides options for different actions based on the user's input.
#include <iostream>
using namespace std;

int main() {
    int p;
    p = 1234;
    int rol_no, n, action;
    int pas2 = 1234;
    double tuition_fee, hostel_fee, exam_fee, total_fee, amount_paid;

    cout << ":: WELCOME TO STUDENT FEE INFORMATION SYSTEM ::" << endl;
    cout << "Enter the password to run the program: " << endl;
    cin >> p;

    if (p == 1234) {
        cout << ":: WELCOME TO STUDENT FEE INFORMATION SYSTEM ::" << endl;
        cout << "Enter Roll Number: " << endl;
        cin >> rol_no;

        if (rol_no == 70) {
            cout << "Name: Kaushal Mishra " << endl;
            cout << "Enrollment Number: 0133CL231070" << endl;
            tuition_fee = 50000;
            hostel_fee = 30000;
            exam_fee = 5000;
            total_fee = tuition_fee + hostel_fee + exam_fee;
        } else if (rol_no == 68) {
            cout << "Name: Kartik Shivnani" << endl;
            cout << "Enrollment Number: 0133CL231068" << endl;
            tuition_fee = 52000;
            hostel_fee = 32000;
            exam_fee = 6000;
            total_fee = tuition_fee + hostel_fee + exam_fee;
        } else if (rol_no == 37) {
            cout << "Name: Avanish Singh" << endl;
            cout << "Enrollment Number: 0133CL231037" << endl;
            tuition_fee = 50000;
            hostel_fee = 30000;
            exam_fee = 5000;
            total_fee = tuition_fee + hostel_fee + exam_fee;
        } else {
            cout << "Roll number not found!" << endl;
            return 0;
        }

        while (true) {
            cout << "1. Check tuition fee details" << endl;
            cout << "2. Check total fees" << endl;
            cout << "3. Pay fees" << endl;
            cout << "4. Exit" << endl;
            cin >> n;

            if (n == 1) {
                cout << "Tuition Fee: Rs. " << tuition_fee << endl;
                cout << "Hostel Fee: Rs. " << hostel_fee << endl;
                cout << "Exam Fee: Rs. " << exam_fee << endl;
            } else if (n == 2) {
                cout << "Enter the password for total fee details: " << endl;
                cin >> pas2;

                if (pas2 == 1234) {
                    cout << "Total Fee is: Rs. " << total_fee << endl;
                } else {
                    cout << "You have entered the wrong password" << endl;
                }
            } else if (n == 3) {
                cout << "Enter the amount to pay: " << endl;
                cin >> amount_paid;

                if (amount_paid >= total_fee) {
                    cout << "Payment successful! No pending fees." << endl;
                    total_fee = 0; // Fees are fully paid
                } else {
                    total_fee -= amount_paid;
                    cout << "Payment successful! Remaining balance: Rs. " << total_fee << endl;
                }
            } else if (n == 4) {
                cout << "Exiting... Thank you for using the system!" << endl;
                break;
            } else {
                cout << "Invalid option selected. Please try again." << endl;
            }

            if (total_fee == 0) {
                cout << "All fees are paid. No further actions required!" << endl;
                break;
            }
        }
    } else {
        cout << "You have entered the wrong password" << endl;
    }

    return 0;
}
// This program is a simple student fee information system that allows users to check their fee details, total fees, and make payments.