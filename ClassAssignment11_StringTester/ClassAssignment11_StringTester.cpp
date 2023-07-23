#include <iostream>
#include <string>

int main()
{
    std::string word1 = "Game";
    std::string word2("Over");
    std::string word3(3, '!');              //Tells program to output 3 '!'s.

    std::string phrase = word1 + " " + word2 + word3;           //This is a string object. It concats the previous string variables defines above with the (+) operator.
    std::cout << "The phrase is: " << phrase << "\n\n";

    std::cout << "Changing the character at position 0 \n";
    phrase[0] = 'L';                        //Accesses the char at the [0] index ('G') in string 'phrase'. Changes the char to 'L'.
    std::cout << "The Phrase is now: " << phrase << "\n\n";

    for (unsigned int i = 0; i < phrase.size(); ++i) {                              //string.size returns the size of the string as an int. A (.) is called a Member Selection Operator
        std::cout << "Character at position " << i << " is: " << phrase[i] << "\n";
    }

    std::cout << "\nThe Sequence 'Over' begins at location ";
    std::cout << phrase.find("Over") << "\n";                   //Finds the string in 'phrase' and returns the index it begins at.

    if (phrase.find("eggplant") == std::string::npos) {         //You'll find no such vegetables here. npos means "Not at position" or cannot be found.
        std::cout << "'Eggplant' is not found in phrase... Incase you were wondering.\n\n";
    }

    phrase.erase(4, 5);                                         //Erases chars in phrase by index...
    std::cout << "Phrase is now: " << phrase << "\n";

    phrase.erase(4);
    std::cout << "Phrase is now: " << phrase << "\n";

    phrase.erase();                                             //or the whole string if no argument is entered.
    std::cout << "Phrase is now: " << phrase << "\n";
        
    if (phrase.empty()) {                                       //Checks to see if a string is empty. Simple enough?
        std::cout << "\nThe Phrase is no more, Commander. It has been destroyed by your hand.\n\n";
    }
    system("pause");                                                        //Keeps console open after debugging. Prompts user input.
    return 0;

}
