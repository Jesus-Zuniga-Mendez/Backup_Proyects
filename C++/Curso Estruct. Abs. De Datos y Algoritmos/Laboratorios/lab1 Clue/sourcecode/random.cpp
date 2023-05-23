#include "../include/includes.h"

int rand_gen(){
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator (seed);
    std::uniform_int_distribution<int> distribution(1,10);
    int number=distribution(generator);
    std::cout<<number;
    return(number);
}
