/*#include <iostream>

using namespace std;

struct spaceship {
    int length;
    int crewsize;
    double maxspeed;
    bool canhyperjump;
};

spaceship* allocate(int num){
    return new spaceship[num];
}

void printShip(const spaceship& ship){
    cout << "Ship details\n";
    cout << "Length: " << ship.length << "\n";
    cout << "Crew size: " << ship.crewsize << "\n";
    cout << "Max. speed: " << ship.maxspeed << "\n";
    cout << "Hyperjump?: " << ship.canhyperjump << "\n";
}

void list(spaceship* ships, int num){
    for(int i = 0; i < num; ++i){
        if(ships[i].canhyperjump){
            printShip(ships[i]);
        }
    }
}

int crewTransportCount(spaceship* ships, int num, int minCrewSize = 100){
    int count = 0;
    for(int i = 0; i < num; ++i){
        if(ships[i].crewsize >= minCrewSize){
            count++;
        }
    }
    return count;
}

spaceship* slowestShip(spaceship* ships, int num, bool filter = false){
    spaceship* slowest = 0;
    for(int i = 0; i < num; ++i){
        if(!filter || !ships[i].canhyperjump){
            if(slowest == 0 || ships[i].maxspeed < slowest->maxspeed){
                slowest = &ships[i];
            }
        }
    }
    return slowest;
}

int main()
{
    cout << "Number of spaceships: ";
    int numOfShips = 0;
    cin >> numOfShips;
    spaceship* ships = allocate(numOfShips);

    for(int i = 0; i < numOfShips; ++i){
        cout << "Enter ship information #" << i+1 << ":\n";
        cout << "Length: ";
        cin >> ships[i].length;
        cout << "Crew size: ";
        cin >> ships[i].crewsize;
        cout << "Max. speed: ";
        cin >> ships[i].maxspeed;
        cout << "Hyperjump?: ";
        cin >> ships[i].canhyperjump;
    }

    list(ships, numOfShips);

    cout << "The number of ships that can transport at least 400 passengers: " << crewTransportCount(ships, numOfShips, 400) << endl;

    cout << "The slowest ship:\n";
    spaceship* slowest = slowestShip(ships, numOfShips);
    if(slowest == 0){
        cout << "No slowest ship!\n";
    }
    else{
        printShip(*slowest);
    }

    cout << "The slowest ship without hyperjump:\n";
    slowest = slowestShip(ships, numOfShips, true);
    if(slowest == 0){
        cout << "No slowest ship!\n";
    }
    else{
        printShip(*slowest);
    }


    delete[] ships;
    return 0;
}*/
