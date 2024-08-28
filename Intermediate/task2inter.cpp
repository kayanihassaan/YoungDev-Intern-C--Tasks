#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream inputFile("input.txt");
    string line;

    if (inputFile.is_open())
    {
        while (getline(inputFile, line))
        {
            cout << line << endl;
        }
        inputFile.close();
    }
    else
    {
        cout << "Unable to open input file" << endl;
    }

    ofstream outputFile("output.txt");
    string userInput;

    if (outputFile.is_open())
    {
        cout << "Enter text to write to the file (type 'exit' to stop):" << endl;
        while (true)
        {
            getline(cin, userInput);
            if (userInput == "exit")
            {
                break;
            }
            outputFile << userInput << endl;
        }
        outputFile.close();
    }
    else
    {
        cout << "Unable to open output file" << endl;
    }

    return 0;
}
