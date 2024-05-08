#include <iostream>
#include <algorithm>
#include <fstream>
#include <cctype>
#include <string>

using namespace std;

int Vowel_Count(string str){
    int count = 0;
    for (char &c : str){
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            count++;
        }
    }
    return count;
}

int Word_count(string str){
    int count = 0;
    for (char &c : str){
        if (c == ' '){
            count++;
        }
    }
    return count  + 1;
}

string SecondLetterCapitalised(string str){
    for (int i = 0; i < str.length(); i++){
        if (i != 0 && str[i - 1] == ' ' ){
            str [i] = toupper(str[i]);
        }
    }
    return str;
}

string StringReversed(string str){
    reverse(str.begin(), str.end());
    return str;
}

int main(){
    ifstream file("MyTextfile.txt");
    string fileData;

    if(file.is_open()){
        getline(file, fileData, '\0');
        file.close();
    }else{
        cout << "Unable to open file " << endl;
        return 1;
    }

    int NumberofWords = Word_count(fileData);
    cout << "The Word Count is: " << NumberofWords << endl;

    int NumberofVowels = Vowel_Count(fileData);
    cout << "The Vowel Count is: " << NumberofVowels << endl;

    string reversed = StringReversed(fileData);
    cout << "Reversed statement is: " << reversed << endl;

    string caps = SecondLetterCapitalised(fileData);
    cout << "Words with Capitalised second letter: " << caps << endl;

    return 0;
}