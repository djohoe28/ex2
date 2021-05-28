#ifndef MY_UTILITY_H_
#define MY_UTILITY_H_


#include <iostream>

using namespace std;

const string DELIMITER = ",";

void printCommands();                               // Prints list of available commands to {cout}.

void printMenu();                                   // The main loop.

void checkInput(int argc, char *argv[]) throw();    // Check whether boot-time input arguments are valid.

//--------------------------------------------------------------------------------------------------------------------------------------------------

void printCommands() {
    // Prints list of available commands to {cout}.
    // Input - N/A
    // Prints - List of available commands.
    // Returns - N/A
    cout << "COMMANDS: " << endl
         << "‘load’ <file>" << endl                 // Loads a file into memory.
         << "<node>,'inbound'" << endl              // Sets a new inbound connection to <node>.
         << "<node>,’outbound’" << endl             // Sets a new outbound connection to <node>.
         << "<node>,’balance’,DD/MM hh:mm" << endl  // Sets a new weight to <node> (input in "DD/MM hh:mm" format).
         << "‘print’" << endl                       // Prints current status.
         << "‘exit’" << endl;                       // Exits the program.
}

string getNextWord(string &input, string &output) {
    // Returns the next word from {input}, until a delimiter/end of line is found, then cut it from {input} as {output}.
    // Input -
    //          string& input = String (line) to read.
    //          string& output = {input} substring, starting after the first {delimiter}.
    //          string& delimiter = String to use as delimiter (separator).
    // Prints - N/A
    // Returns - The next word (excluding delimiter).
    int index = input.find(DELIMITER);
    if (index < 0) { // No delimiter found
        index = input.length(); //Delimiter is end of input
    }
    string word = input.substr(0, index);
    output = input.substr(index + 1); //TODO: nullptr?
    return word;
}

void printMenu() {
    // The main loop.
    // Input - N/A
    // Prints - See {printCommands} comments.
    // Returns - N/A
    // TODO: Execute the commands called.
    string input;
    string nextLine;
    string nextWord;

    while (1) {
        printCommands();

        getline(cin, nextLine);
        nextWord = getNextWord(nextLine, nextLine);

        if (nextWord == "load") {
            cout << "load" << endl;
            nextWord = getNextWord(nextLine, nextLine);
        } else if (nextWord == "outbound") {
            cout << "outbound" << endl;
            nextWord = getNextWord(nextLine, nextLine);
        } else if (nextWord == "inbound") {
            cout << "inbound" << endl;
            nextWord = getNextWord(nextLine, nextLine);
        } else if (nextWord == "balance") {
            cout << "balance" << endl;
            nextWord = getNextWord(nextLine, nextLine);
        } else if (nextWord == "print") {
            cout << "print" << endl;
        } else if (nextWord == "exit") {
            cout << "exit" << endl;
            exit(0);
        } else {
            printCommands();
        }


    }

}

void checkInput(int argc, char *argv[]) throw() {
    // Checks whether the boot-time input arguments are valid.
    // Input -
    //         int argc = Number of arguments given (>= 1)
    //         char *argv[] = Array of string-like input arguments. (argv[0] = executable name.
    // Prints - N/A
    // Returns - N/A (terminates program if arguments are invalid.)
    // TODO: What arguments should be supported?
}

#endif