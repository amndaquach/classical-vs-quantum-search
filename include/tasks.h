#ifndef TASKS_H
#define TASKS_H

#include <vector>

struct AppState{
    std::vector<int> data;
    int target = -1;
};

//Menu functions
void printMenu();
void runMenu();

//Menu options
void generateDataset(AppState& state);
void linearSearch(AppState& state);
void binarySearch(AppState& state);
void breadthFirstSearch(AppState& state);
void depthFirstSearch(AppState& state);
void groversSearch(AppState& state);
void classicalSearchTests(AppState& state);
void groversSearchTests(AppState& state);
void performanceReport(AppState& state);
void comparisonTable(AppState& state);

#endif
