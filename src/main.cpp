// Copyright 2025 UNN-IASR

#include "Automata.h"
#include <iostream>
#include <string>

int main() {
    std::string menu[]{ "Espresso", "Americano", "Coconut milk raf" };
    int prices[]{ 80, 20, 450 };
    Automata DrinkMachine(menu, prices, 3);
    std::cout << DrinkMachine.On();
    std::cout << DrinkMachine.GetMenu();
    std::cout << DrinkMachine.Coin(50);
    std::cout << DrinkMachine.Choice(1);
    std::cout << DrinkMachine.Choice(0);
    std::cout << DrinkMachine.Coin(400);
    std::cout << DrinkMachine.Choice(2);
    std::cout << DrinkMachine.Check();
    std::cout << DrinkMachine.Coin(400);
    std::cout << DrinkMachine.Choice(2);
    std::cout << DrinkMachine.Check();
    std::cout << DrinkMachine.Cook();
    std::cout << DrinkMachine.Finish();
}
