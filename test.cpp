#include <iostream>
#include <string>
using namespace std;

int main()
{
    string answerA, answerB, answerC;
    answerA = "Question A";
    answerB = "Question B";
    answerC = "Question C";
    char answer;

    cout << "Quelle est la question ?" << endl;
    cout << answerA << endl;
    cout << answerB << endl;
    cout << answerC << endl;
    cout << "Repond par A,B,C ?" << endl;
    cin >> answer;

    string defaultAnswer("Je n'ai pas compris votre réponse");
    string *userAnswer(0);

    switch (answer)
    {
    case 'A':
        userAnswer = &answerA;
        break;
    case 'B':
        userAnswer = &answerB;
        break;
    case 'C':
        userAnswer = &answerC;
        break;
    default:
        userAnswer = &defaultAnswer;
        break;
    }

    cout << "Vous avez choisi la reponse " << *userAnswer << endl;
    cout << "valeur de default answer " << userAnswer << endl;
    return 0;
}