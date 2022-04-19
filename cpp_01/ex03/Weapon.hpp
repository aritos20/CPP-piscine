#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string type;
public:
    Weapon(std::string nameWeapon);
    ~Weapon();

    std::string getType() const;
    void        setType(std::string newType);
};


#endif