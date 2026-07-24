#include <iostream>
#include <vector>
#include <map>
using namespace std;

map <string, vector <string>> graph;

// addFlight("Jaipur", "Delhi")
void addFlight(string city1, string city2){
    graph[city1].push_back(city2);
    graph[city2].push_back(city1);
}

void displayGraph(){
    cout << "\n========== FLIGHT NETWORK ==========\n\n";

    for (auto city: graph){
        cout << city.first << "->";

        for (string neighbour: city.second){
            cout << neighbour << " ";
        }

        cout << endl;
    }
}


void showFlights(string city){
    cout << "\nFLIGHTS FROM CITY: " << city << "\n";

    for (string neighbour: graph[city]){
        cout << neighbour << endl;
    }
}


int main(){
    addFlight("Delhi", "Jaipur");
    addFlight("Delhi", "Mumbai");
    addFlight("Jaipur", "Pune");
    addFlight("Mumbai", "Pune");

    displayGraph();

    showFlights("Delhi");

    return 0;
}