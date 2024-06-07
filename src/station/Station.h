#pragma once

// Station will be a vertices on the graph

class Station {
public:
    int key;
    char name;
    Station* next;
    bool wasVisited;

    Station(int key, char name);
    ~Station();
    void Display();
    bool operator!=(const Station& rhd);
    bool operator==(const Station& rhd);
    bool operator<(const Station& rhd);
    bool operator>(const Station& rhd);
};