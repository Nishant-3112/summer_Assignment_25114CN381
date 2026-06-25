#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    char answer;

    cout << "===== QUIZ APPLICATION =====" << endl;

    // Question 1
    cout << "\n1. What is the capital of India?" << endl;
    cout << "A. Mumbai" << endl;
    cout << "B. New Delhi" << endl;
    cout << "C. Kolkata" << endl;
    cout << "D. Chennai" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'B' || answer == 'b')
    {
        score++;
    }

    // Question 2
    cout << "\n2. Which language is used for C++ programming?" << endl;
    cout << "A. HTML" << endl;
    cout << "B. Python" << endl;
    cout << "C. C++" << endl;
    cout << "D. Java" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'C' || answer == 'c')
    {
        score++;
    }

    // Question 3
    cout << "\n3. How many continents are there in the world?" << endl;
    cout << "A. 5" << endl;
    cout << "B. 6" << endl;
    cout << "C. 7" << endl;
    cout << "D. 8" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'C' || answer == 'c')
    {
        score++;
    }

    // Question 4
    cout << "\n4. Which is the largest planet in our solar system?" << endl;
    cout << "A. Earth" << endl;
    cout << "B. Mars" << endl;
    cout << "C. Jupiter" << endl;
    cout << "D. Saturn" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'C' || answer == 'c')
    {
        score++;
    }

    // Question 5
    cout << "\n5. Who is known as the Father of Computers?" << endl;
    cout << "A. Charles Babbage" << endl;
    cout << "B. Bill Gates" << endl;
    cout << "C. Steve Jobs" << endl;
    cout << "D. Dennis Ritchie" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'A' || answer == 'a')
    {
        score++;
    }

    cout << "\n===== QUIZ RESULT =====" << endl;
    cout << "Your Score: " << score << "/5" << endl;

    if (score >= 3)
        cout << "Congratulations! You passed the quiz." << endl;
    else
        cout << "You failed. Try again!" << endl;

    return 0;
}