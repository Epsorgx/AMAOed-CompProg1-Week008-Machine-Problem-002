/* ****************************************************************
 * @author: <Mark Gerone F. Grospe>
 * @app name: <Seat Reservation>
 * @app desc: <a simple seat reservation program that displays 35 seats available and accepts reservation based on user input>
 * @history:
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"
#include <iomanip>

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************

    int seatNum[5][7] = {{1,2,3,4,5,6,7},{8,9,10,11,12,13,14},{15,16,17,18,19,20,21},{22,23,24,25,26,27,28},{29,30,31,32,33,34,35}};
    int reserveSeatNum = 0;
    int i, j;
    int temp[5][7] = {0};
    
    cout << "Welcome!!!" << endl;
    cout << "This is a simple seat reservation program," << endl << endl;

    //loop here
    userInput:

    //displays available seats

    cout << "_______________________________________" << endl;
    cout << "          --SEATS AVAILABLE--          " << endl;
    cout << "_______________________________________" << endl;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 7; j++) {
            cout << setw(5) << seatNum[i][j];
        }
        cout << endl;
    } 

    cout << "_______________________________________" << endl;

    //accepts user input
    cout << "Enter seat number to reserve: ";
    cin >> reserveSeatNum;

    //check if input is zero
    if (reserveSeatNum != 0) {

    //prompt if seat is taken
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 7; j++) {
            if (reserveSeatNum == temp[i][j]) {
                    cout << "Seat is taken." << endl << endl;
            }
        }
    } 

    //update selected seat number to zero
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 7; j++) {
            if (reserveSeatNum == seatNum[i][j]) {
                    temp[i][j] = seatNum[i][j];
                    seatNum[i][j] = 0;
                    cout << "Seat sucessfully reserved." << endl << endl;
            }
        }
    } 

    //prompt if invalid seat number 
    if (reserveSeatNum = 0 || reserveSeatNum > 35) {
        cout << "Error: You entered an invalid seat number." << endl << endl;
    }
    }
    else {
        cout << "Error: You entered an invalid seat number." << endl << endl;
    }
    goto userInput;

    cin.ignore();
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
