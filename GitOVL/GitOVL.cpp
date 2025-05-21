// GitOVL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>

int main()
{
    std::string sPassword = "Haus";
    std::string sUserInput = "";
    int iCount = 0;
    int iMaxAttempts = 3;

    std::cout << "Hilfszeile: Passwort lautet: '" << sPassword << "'\n\n  ";
    //std::cout << "enter password: ";
    //std::cin >> sUserinput;

    do {
        std::cout << "Enter password: ";
        std::cin >> sUserInput;

        if (sPassword == sUserInput)
        {
            break;
        }
        else if (iCount < iMaxAttempts)
        {
            int help = iMaxAttempts - iCount;
            std::cout << "\n Du hast noch  " << help << " Versuch(e)..\n";
        }

        else {
            std::cout << "Eingabe gesperrt. Warte 5 Sekunden..\n";
            for (int i = 0; i < 5; i++)
            {
                std::cout << 5 - i << "\n";
                std::this_thread::sleep_for(std::chrono::seconds(1));
            }

            iCount = -1;
        }


        iCount++;

    } while (sPassword != sUserInput);

    std::cout << "Welcome!";


    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
