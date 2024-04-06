// Count the Number of Words in a Sentence: Write a function that takes a string (a sentence) as input and returns the number of words in the sentence.
#include <iostream>
using namespace std;
int countwords(string sentence)
{
    // getting the lenght of the sentence

    int size = sentence.length();
    int ans = 0;
    // Iterating over the array
    for (int i = 0; i < size; i++)
    {
        if (sentence[i] == ' ')
        {
            ans++;
        }
    }
    // to add the last word.
    return ans + 1;
}
int main()
{
    string sentence = "hii my name is harsh";
    cout << countwords(sentence);
    return 0;
}
// result is:5