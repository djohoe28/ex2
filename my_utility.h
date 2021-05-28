#ifndef MY_UTILITY_H_
#define MY_UTILITY_H_


#include <iostream>

using namespace std;

void printCommands();                               // Prints list of available commands to {cout}.

void printMenu();                                   // The main loop.

void checkInput(int argc, char *argv[]) throw();    // Check whether boot-time input arguments are valid.

//--------------------------------------------------------------------------------------------------------------------------------------------------

void printCommands() {
    // Prints list of available commands to {cout}.
    // Input - N/A
    // Print - List of available commands.
    // Output - N/A
    cout << "COMMANDS: " << endl
         << "‘load’ <file>" << endl                 // Loads a file into memory.
         << "<node>,'inbound'" << endl              // Sets a new inbound connection to <node>.
         << "<node>,’outbound’" << endl             // Sets a new outbound connection to <node>.
         << "<node>,’balance’,DD/MM hh:mm" << endl  // Sets a new weight to <node> (input in "DD/MM hh:mm" format).
         << "‘print’" << endl                       // Prints current status.
         << "‘exit’" << endl;                       // Exits the program.
}

void printMenu() {
    // The main loop.
    // Input - N/A
    // Print - See {printCommands} comments.
    // Output - N/A
    // TODO: Execute the commands called.
    string input;
    string currentWord;
    /* string secondWord; */ //Jonathan

    while (1) {
        printCommands();

        getline(cin, currentWord/*, ','*/); //Jonathan
        /* getline(cin, secondWord); */ //Jonathan


        if (currentWord == "load") {
            cout << "load" << endl;
            getline(cin, currentWord); //Jonathan
        }
        else if (currentWord == "outbound") {
            cout << "outbound" << endl;
            getline(cin, currentWord); //Jonathan
        }
        else if (currentWord == "inbound") {
            cout << "inbound" << endl;
            getline(cin, currentWord); //Jonathan
        }
        else if (currentWord == "balance") {
            cout << "balance" << endl;
            getline(cin, currentWord); //Jonathan
        }
        else if (currentWord == "print") {
            cout << "print" << endl;
        }
        else if (currentWord == "exit") {
            cout << "exit" << endl;
            exit(0); //Jonathan
        } else {
            printCommands(); //Jonathan
        }


    }

}

void checkInput(int argc, char *argv[]) throw() {
    // Checks whether the boot-time input arguments are valid.
    // Input -
    //         int argc = Number of arguments given (>= 1)
    //         char *argv[] = Array of string-like input arguments. (argv[0] = executable name.
    // Print - N/A
    // Output - N/A (terminates program if arguments are invalid.)
    // TODO: What arguments should be supported?
}

#endif