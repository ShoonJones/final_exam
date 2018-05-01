#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <fstream>

using namespace std;

//******************************************************************
// Function: countLine
// Description: Count the number of lines in the paramter
// Parameters: pName - char*
// Returns: Number of Lines
//******************************************************************
int countLine(const char* pName);

//******************************************************************
// Function: countChar
// Description: Count the number of characters in the paramter
// Parameters: pName - char*
// Returns: Number of Characters
//******************************************************************
int countChar(const char* pName);

//******************************************************************
// Function: main
// Description: Main function to run the program
// Parameters: none
// Returns: 0
//******************************************************************
int main()
{
  string fileName;
  const char* pName;
  cout << "Enter input file: " << endl;
  cin >> fileName;
  std::ifstream ifs(fileName.c_str());
  std::string content( (std::istreambuf_iterator<char>(ifs) ),
                       (std::istreambuf_iterator<char>()    ) );
  pName = content.c_str();
  countLine(pName);
  countChar(pName);
  //cout << "hello" << endl;
  return 0;
  
}
  int countLine(const char* pName)
  {
    int line = 0;
    
    if(pName == "")
    {
      pName = "Ohio University";
    }
    
    else if(pName == "\n")
    {
      line++;
    }
    cout << pName << " is " << line << " lines long." << endl;
    
  }
  
  int countChar(const char* pName)
  {
    int count = 0;
    
    if(pName == "")
    {
      pName = "Athens";
    }
    
    else if(pName == " ")
    {
      count++;
    }
    
    cout << pName << " is " << count << " characters long." << endl;
    
  }