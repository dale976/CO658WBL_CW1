#pragma once

// #include "LinkedList.h"
// #include "Station.h"

class TubeMap {
private:
    int** adjMat; // adjacency matrix (2 dimensional array)
    int numberStations;
    int size;
    static const int INF = 999999;
public:
    // Station** stations; // 1 dimensioanl array

    TubeMap(int size);
    ~TubeMap();

    void Display();
    void AddEdge(int start, int end, int weight);
    // void AddStation(Station* station);
    // LinkedList<Station>* GetAdjacentStationsLL(Station* stat);
    // int DistanceBetweenStations(Station* first, Station* second);
    // Location* GetLowestWeight(LinkedList<Station>* adjacentVertices, Station* vertex);
    int GetNumberStations();

};