#include "data_generator.h"

DataGenerator::DataGenerator()
{
    std::random_device rnd;
    seed = rnd();
    rng.seed(seed);
}

int DataGenerator::randomInt(int low, int high)
{
    std::uniform_int_distribution<int> dist(low, high);
    return dist(rng);
}

DataGenerator::DataGenerator(unsigned int s)
{
    seed = s;
    rng.seed(seed);
}

std::vector<int> DataGenerator::generateUnsorted(int N)
{
    std::vector<int> data(N);
    for (int i = 0; i < N; i++)
    {
        data[i] = i + 1;
    }

    // shuffle
    for (int i = N - 1; i > 0; i--)
    {
        int j = randomInt(0, i);
        int temp = data[i];
        data[i] = data[j];
        data[j] = temp;
    }
    return data;
}

int DataGenerator::pickTarget(const std::vector<int>& data)
{
    if (data.empty())
    {
        return -1;
    }

    int lastIndex = data.size() - 1;
    int randomIndex = randomInt(0, lastIndex);

    return data[randomIndex];
}

unsigned int DataGenerator::getSeed() const
{
    return seed;
}