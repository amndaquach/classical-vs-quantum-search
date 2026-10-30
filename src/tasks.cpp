#include "tasks.h"
#include <iostream>
#include <limits>
using namespace std;

void printMenu() {
    cout << "===== Classical vs. Quantum Search =====\nEnter the number of the menu option: " << endl;
    cout << "1. Generate dataset\n"
        << "2. Linear Search\n"
        << "3. Binary Search\n"
        << "4. Breadth-First Search\n"
        << "5. Depth-First Search\n"
        << "6. Grover's Search (quantum simulation)\n"
        << "7. Run classical search tests\n"
        << "8. Run Grover tests\n"
        << "9. Performance Report\n"
        << "10. Comparison Table\n"
        << "0. Exit" << endl;
}

void runMenu() {
    AppState state;
    int option = -1;

    do {
        printMenu();
        if (!(cin >> option)) {
            cin.clear();
            cout << "Invalid input. Please enter an option between 0 and 10." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            option = -1;
            continue;
        }

        switch (option) {
            case 1: generateDataset(state); break;
            case 2: linearSearch(state); break; 
            case 3: binarySearch(state); break;
            case 4: breadthFirstSearch(state); break;
            case 5: depthFirstSearch(state); break;
            case 6: groversSearch(state); break;
            case 7: classicalSearchTests(state); break;
            case 8: groversSearchTests(state); break;
            case 9: performanceReport(state); break;
            case 10: comparisonTable(state); break;
            case 0: cout << "Exiting program." << endl; break;
            default: cout << "Invalid option. Please enter a number between 0 and 10." << endl;
        }
    } while (option !=0);
}

void generateDataset(AppState& state) {
    (void)state;
    cout << "Generate dataset not yet implemented." << endl;
}

void linearSearch(AppState& state) {
    (void)state;
    cout << "Linear search not yet implemented." << endl;
}

void binarySearch(AppState& state) {
    (void)state;
    cout << "Binary search not yet implemented." << endl;
}

void breadthFirstSearch(AppState& state) {
    (void)state;
    cout << "Breadth-first search not yet implemented." << endl;
}

void depthFirstSearch(AppState& state) {
    (void)state;
    cout << "Depth-first search not yet implemented." << endl;
}

void groversSearch(AppState& state) {
    (void)state;
    cout << "Grover's search not yet implemented." << endl;
}

void classicalSearchTests(AppState& state) {
    (void)state;
    cout << "Classical search tests not yet implemented." << endl;
}

void groversSearchTests(AppState& state) {
    (void)state;
    cout << "Grover's search tests not yet implemented." << endl;
}

void performanceReport(AppState& state) {
    (void)state;
    cout << "Performance report not yet implemented." << endl;
}

void comparisonTable(AppState& state) {
    (void)state;
    cout << "Comparison table not yet implemented." << endl;
}

