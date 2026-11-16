#ifndef DATA_GENERATOR_H
#define DATA_GENERATOR_H
#include <random>
#include <vector>

class DataGenerator
{
private:
    std::mt19937 rng; // random engine
    unsigned int seed; 
    int randomInt(int low, int high);

public:
    DataGenerator();
    DataGenerator(unsigned int s);

    std::vector<int> generateUnsorted(int N);
    int pickTarget(const std::vector<int>&);
    unsigned int getSeed() const;
};
#endif