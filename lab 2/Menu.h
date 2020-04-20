#pragma once

#include "Stack.h"

class Menu {
private:
    Stack _stack;
    bool _ready;

    void Command(int);

    bool CheckStack() const;
    void CreateCommand();
    void PopCommand();
    void PushCommand();
    void TopCommand() const;
    void SizeCommand() const;
    void EmptyCommand() const;
    void ShowCommand() const;
    static void ExitCommand();
public:
    Menu();
    void Start();
};