#include "fileInput.h"
#include "parseFile.h"

#include <iostream>
#include <string>

// beginning of fileInput.cc


// end of fileInput.cc


int main() {

  std::string x = fileInput();

  // string x = vector<string> x = {elements separated by comma}

  parseFile(x);

/*

    std::vector<std::string> pyrxi = {"neoxi", "mirior", "emma", "dot", "alex", "ahkto"}; // pyrxi[0] through [5] for filler text

    for (int i = 0; i < 6; i++) {
        arrayOutput << pyrxi[i] << ",";
    } // loop through the vector

    arrayOutput.close(); // close file
    return 0; // quit
  } */
}
