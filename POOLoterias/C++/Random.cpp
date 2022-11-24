#include "Random.h"

int Random::nextInt(int mini, int maxi) {
    this->rd = mini + (rand() % (maxi - (mini - 1)));

    return this->rd;
}

Random::Random() {
    srand(time(NULL));
}
