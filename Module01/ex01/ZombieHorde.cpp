#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *horde;
    std::stringstream tmp;

    tmp << name; 
    horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        tmp << i;
        name = tmp.str();
        horde[i].setName(name);
        tmp.seekp(tmp.str().length()-1);
    }

    return (horde);
}