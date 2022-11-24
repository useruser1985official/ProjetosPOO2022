#ifndef RANDOM_H
#define RANDOM_H
#include <cstdlib>
#include <ctime>

class Random {
    public:
        int nextInt(int mini, int maxi);

        Random();
    private:
        int rd;
};

#endif // RANDOM_H
