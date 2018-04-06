#include <iostream>

using namespace std;

struct player {
    int number;
    int age;
    double height;
    int numOfGoals;
    int numOfGames;
    bool hasWorldCupMatch;
};

player* allocate(int num){
    return new player[num];
}

void printPlayer(const player& p, int number = 0){
    cout << "Player details #" << number << "\n";
    cout << "Number: " << p.number << "\n";
    cout << "Age: " << p.age << "\n";
    cout << "Height: " << p.height << "\n";
    cout << "Number of goals: " << p.numOfGoals << "\n";
    cout << "Number of games: " << p.numOfGames << "\n";
    cout << "Has world cup match?: " << p.hasWorldCupMatch << "\n";
}

void list(player* players, int num){
    for(int i = 0; i < num; ++i){
        printPlayer(players[i], i+1);
    }
}

player* oldestPlayer(player* players, int num){
    player* oldest = 0;
    for(int i = 0; i < num; ++i){
        if(oldest == 0 || players[i].age > oldest->age){
            oldest = &players[i];
        }
    }
    return oldest;
}

int playedMatchCount(player* players, int num, int played = 10){
    int count = 0;
    for(int i = 0; i < num; ++i){
        if(players[i].numOfGames >= played){
            count++;
        }
    }
    return count;
}

int main()
{
    cout << "Number of players: ";
    int numOfPlayers = 0;
    cin >> numOfPlayers;
    player* players = allocate(numOfPlayers);

    for(int i = 0; i < numOfPlayers; ++i){
        cout << "Enter player information #" << i+1 << ":\n";
        cout << "Number: ";
        cin >> players[i].number;
        cout << "Age: ";
        cin >> players[i].age;
        cout << "Height: ";
        cin >> players[i].height;
        cout << "Number of goals: ";
        cin >> players[i].numOfGoals;
        cout << "Number of games: ";
        cin >> players[i].numOfGames;
        cout << "Has world cup match?: ";
        cin >> players[i].hasWorldCupMatch;
    }

    player* oldest = oldestPlayer(players, numOfPlayers);
    if(oldest != 0){
        printPlayer(*oldest);
    }

    int played = 0;
    cout << "Played: ";
    cin >> played;
    cout << "The number of players who played at least " << played << " games: " << playedMatchCount(players, numOfPlayers, played) << endl;

    int number = 0;
    cout << "Number: ";
    cin >> number;
    bool found = false;
    for(int i = 0; i < numOfPlayers; ++i){
        if(players[i].number == number){
            found = true;
            printPlayer(players[i]);
            break;
        }
    }
    if(!found){
        cout << "No player with number " << number << "!\n";
    }

    for(int i = 0; i < numOfPlayers - 1; ++i){
        //int max_idx = i;
        for(int j = i + 1; j < numOfPlayers; ++j){
            /*if(players[j].height > players[max_idx].height){
                max_idx = j;
            }
            if(max_idx != i){
                player tmp = players[i];
                players[i] = players[max_idx];
                players[max_idx] = tmp;
            }*/
            if(players[i].height < players[j].height){
                player tmp = players[i];
                players[i] = players[j];
                players[j] = tmp;
            }
        }
    }
    list(players, numOfPlayers);

    delete[] players;

    return 0;
}



