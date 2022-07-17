#include <bits/stdc++.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <tchar.h>

using namespace std;

void greeting()
{
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time->tm_hour < 12)
    {
        cout << "Good Morning Abhishek" << endl;
        string phrase = "Good Morning Abhishek";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else if (time->tm_hour >= 12 && time->tm_hour <= 16)
    {
        cout << "Good Afternoon Abhishek" << endl;
        string phrase = "Good Afternoon Abhishek";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else
    {
        cout << "Good Night Abhishek" << endl;
        string phrase = "Good Night Abhishek";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}
void datetime()
{
    time_t now = time(0);
    char *dt = ctime(&now);
    cout << "the date and time is" << endl
         << dt << endl;
}
int main()
{
    system("cls");
    cout << "\t################ PERSONAL ASSISTANT ############0" << endl;
    string password; // to take password
    string command;  // to take command from the user
    do
    {
        cout << "********************************************" << endl;
        cout << "| ENTER THE PASSWORD TO CONFIRM YOU ARE THE OWNER" << endl;
        cout << "********************************************" << endl;
        string phrase = "Enter your password";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        getline(cin, password);
        STARTUPINFO startupInfo = {0};

        if (password == "abhishek")
        {
            cout << "\n**********************************************" << endl;
            greeting();
            do
            {
                cout << "\n**********************************************" << endl;
                cout << endl
                     << "How can I help you Master..." << endl
                     << endl;
                const char *charCommand = command.c_str();
                system(charCommand);

                cout << "enter your question ===>";
                getline(cin, command);
                cout << endl;
                cout << "Answer to your question is " << endl;

                if (command == "hello" || command == "hi ")
                {
                    cout << "Hello, Abhishek!" << endl;
                    string phrase = "Hello, Abhishek!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if (command == "what is the time")
                {
                    datetime();
                }
                else if (command == "open notepad")
                {
                    cout << "Opening notepad!" << endl;
                    string phrase = "Opening notepad!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\WINDOWS\\system32\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startupInfo, NULL);
                }
                else if (command == "open microsoft word")
                {
                    cout << "Opening microsoft word!" << endl;
                    string phrase = "Opening microsoft word!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\WINWORD.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startupInfo, NULL);
                }
                else if (command == "open microsft excel")
                {
                    cout << "Opening microsoft excel!" << endl;
                    string phrase = "Opening microsoft excel!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\EXCEL.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startupInfo, NULL);
                }
                else if (command == "open pdf")
                {
                    cout << "Opening pdf" << endl;
                    string phrase = "Opening pdf";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL, _T("open"), _T("C:\\Users\\abhis\\Downloads\\knight.pdf"), NULL, NULL, SW_NORMAL);
                }
                else if (command == "open google")
                {
                    cout << "Opening google" << endl;
                    string phrase = "Opening google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }
                else if (command == "open youtube")
                {
                    cout << "Opening you tube" << endl;
                    string phrase = "Opening you tube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }
                else if (command == "close browser")
                {
                    cout << "closing browser" << endl;
                    string phrase = "closing browser";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("TASKKILL /IM chrome.exe /F");
                }
                else if (command == "open photo")
                {
                    cout << "opening photo" << endl;
                    string phrase = "opening photo";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL, _T("open"), _T("C:\\Users\\abhis\\Pictures\\Saved Pictures\\Screenshot 2021-11-08 143536.png"), NULL, NULL, SW_NORMAL);
                }
                // else if (command == "play music")
                // {
                //     cout << "playing music now" << endl;
                //     string phrase = "opening photo";
                //     string command = "espeak \"" + phrase + "\"";
                //     const char *charCommand = command.c_str();
                //     system(charCommand);
                //     mciSendString(_T("open \"C:\\Users\\abhis\\Music\\song.mp3\" type mpegvideo alias mp3"), NULL, 0, NULL);
                //     mciSendString(_T("play mp3"), NULL, 0, NULL);
                // }
                else if (command == "bye" || command == "quit")
                {
                    cout << "bye, Abhishek!" << endl;
                    string phrase = "bye, Abhishek!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }
                else
                {
                    cout << "sorry could not understand commnad please try again" << endl;
                    string phrase = "sorry could not understand commnad please try again";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
            }while(1);
        }
    }while(1);
}