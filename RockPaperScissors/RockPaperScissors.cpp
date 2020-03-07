// RockPaperScissors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <iomanip>
#include <stdlib.h>

using namespace std;



string randomName(int length) {

    char consonents[] = { 'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z' };
    char vowels[] = { 'a','e','i','o','u','y' };

    string botName = "";

    int random = rand() % 2;
    int count = 0;

    for (int i = 0; i < length; i++) {

        if (random < 2 && count < 2) {
            botName = botName + consonents[rand() % 19];
            count++;
        }
        else {
            botName = botName + vowels[rand() % 5];
            count = 0;
        }

        random = rand() % 2;

    }

    return botName;

}




int main()
{
    std::cout << "RockPaperScissors By Wisly V1.0\n";
    //Variable For Player Information
    string playerOne;
    string playerTwo;
    string botPlayer;
    int botChoice = 0;
    int gameMode = 0;
    int playerOneChoice = 0;
    int playerTwoChoice = 0;
    string feedback;

    //Player Choice
    cout << "Choose What Mode: " << endl;
    cout << "1.Fight With Second Player" << endl;
    cout << "2.Fight With Bot" << endl;
    cout << "What Number You Choose? ";
    cin >> gameMode;
    //Logic
    if (gameMode == 1) {
        cout << "Enter Your Name First Player: ";
        cin >> playerOne;
        cout << "Welcome " << playerOne << endl;
        cout << "Now, Enter Your Name Second Player: ";
        cin >> playerTwo;
        cout << "Welcome " << playerTwo << endl;
        cout << "The Battle Between " << playerOne << " And " << playerTwo << endl;
        cout << "\nGLHF!!!\n";
        cout << "Player One What Do You Choose: \n";
        cout << "1.Rock\n";
        cout << "2.Paper\n";
        cout << "3.Scissors\n";
        cin >> playerOneChoice;
        //Logic
        if (playerOneChoice == 1) {
            cout << "Player Two What Do You Choose: \n";
            cout << "1.Rock\n";
            cout << "2.Paper\n";
            cout << "3.Scissors\n";
            cin >> playerTwoChoice;
            if (playerTwoChoice == 1) {
                cout << "TIE!!!\n";
                cout << "Enter Feedback: ";
                cin >> feedback;
                return 0;
            }
            if (playerTwoChoice == 2) {
                cout << "Player Two Win!!!\n";
                cout << "Enter Feedback: ";
                cin >> feedback;
                return 0;
            }
            if (playerTwoChoice == 3) {
                cout << "Player One Win!!!\n";
                cout << "Enter Feedback: ";
                cin >> feedback;
                return 0;
            }
        }
        if (playerOneChoice == 2) {
            cout << "Player Two What Do You Choose: \n";
            cout << "1.Rock\n";
            cout << "2.Paper\n";
            cout << "3.Scissors\n";
            cin >> playerTwoChoice;
            if (playerTwoChoice == 1) {
                cout << "Player One Win\n";
                cout << "Enter Feedback: ";
                cin >> feedback;
                return 0;
            }
            if (playerTwoChoice == 2) {
                cout << "TIE!!!\n";
                cout << "Enter Feedback: ";
                cin >> feedback;
                return 0;
            }
            if (playerTwoChoice == 3) {
                cout << "Player Two Win!!!\n";
                cout << "Enter Feedback: ";
                cin >> feedback;
                return 0;
            }
        }
        if (playerOneChoice == 3) {
            cout << "Player Two What Do You Choose: \n";
            cout << "1.Rock\n";
            cout << "2.Paper\n";
            cout << "3.Scissors\n";
            cin >> playerTwoChoice;
            if (playerTwoChoice == 1) {
                cout << "Player Two Win\n";
                cout << "Enter Feedback: ";
                cin >> feedback;
                return 0;
            }
            if (playerTwoChoice == 2) {
                cout << "Player One Win!!!\n";
                cout << "Enter Feedback: ";
                cin >> feedback;
                return 0;
            }
            if (playerTwoChoice == 3) {
                cout << "TIE!!!\n";
                cout << "Enter Feedback: ";
                cin >> feedback;
                return 0;
            }
        }
    }
    if (gameMode == 2) {
        cout << "Enter Your Name First Player: ";
        cin >> playerOne;
        cout << "Welcome " << playerOne << endl;
        cout << "Enter The Bot name length: " << endl;
        int length;                                                   
        cin >> length;
        cout << randomName(length) << endl;
        cout << "Welcome " << " Bot " << randomName(length) << endl;
        cout << "The Battle Between " << playerOne << " And " << " Bot " << randomName(length) << endl;
        cout << "\nGLHF!!!\n";
        cout << "Player One What Do You Choose: \n";
        cout << "1.Rock\n";
        cout << "2.Paper\n";
        cout << "3.Scissors\n";
        cin >> playerOneChoice;
        if (playerOneChoice == 1 && botChoice == 1) {
            cout << "TIE!!!\n";
            return 0;
        }
        if (playerOneChoice == 1 && botChoice == 2) {
            cout << "Bot Win!!!\n";
            return 0;
        }
        if (playerOneChoice == 1 && botChoice == 3) {
            cout << "Player One Win!!!\n";
            cout << "Enter Feedback: ";
            cin >> feedback;
            return 0;
        }
        if (playerOneChoice == 2 && botChoice == 1) {
            cout << "Player One Win!!!\n";
            cout << "Enter Feedback: ";
            cin >> feedback;
            return 0;
        }
        if (playerOneChoice == 2 && botChoice == 2) {
            cout << "TIE!!!\n";
            cout << "Enter Feedback: ";
            cin >> feedback;
            return 0;
        }
        if (playerOneChoice == 2 && botChoice == 3) {
            cout << "Bot Win!!!\n";
            cout << "Enter Feedback: ";
            cin >> feedback;
            return 0;
        }
        if (playerOneChoice == 3 && botChoice == 1) {
            cout << "Bot Win!!!\n";
            cout << "Enter Feedback: ";
            cin >> feedback;
            return 0;
        }
        if (playerOneChoice == 3 && botChoice == 2) {
            cout << "Player One Win!!!\n";
            cout << "Enter Feedback: ";
            cin >> feedback;
            return 0;
        }
        if (playerOneChoice == 3 && botChoice == 3) {
            cout << "TIE!!!\n";
            cout << "Enter Feedback: ";
                cin >> feedback;
            return 0;
        }
    }
}

