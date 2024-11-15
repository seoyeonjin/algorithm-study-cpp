#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    unsigned long pokemonNumber, questionNumber;
    unordered_map<string,string> pokemonList;

    cin >> pokemonNumber >> questionNumber;

    for (int i = 0; i < pokemonNumber; i++){
        string pokemon;
        cin >> pokemon;
        pokemonList[pokemon] = to_string(i+1);
        pokemonList[to_string(i+1)] = pokemon;
    }

    for (int i =0; i<questionNumber;i++){
        string question;
        cin >> question;

        cout << pokemonList[question] <<'\n';
    }
    
    return 0;
}