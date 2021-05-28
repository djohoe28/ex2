#include "my_utility.h"
#include "Route.h"
//|-> "Port.h"
//  |--> <iostream>
//  |--> <algorithm>
//  |--> <vector>
//  |--> <iterator>
//  |--> <memory>

int main(int argc, char *argv[]) {
    //checkInput(argc, argv);
    cout << "Enter Word #1" << endl;
    string nextLine;
    string nextWord;
    getline(cin, nextLine);
    nextWord = getNextWord(nextLine, nextLine);

    cout << "Word #1 = " << nextWord << endl;
    //cout << "Enter Word #2" << endl;
    cout << "Rest of Line = " << nextLine << endl;
    cout << "Press Enter to terminate." << endl;
    getline(cin, nextWord);
    //printMenu();
}





  


    
    

    
  




