#include <iostream>

#include "Menu.h"

Menu::Menu() : _ready(false) { }

void Menu::Start() {
    while (true) {
        std::cout << "Commands:" << std::endl;
        std::cout << "1 - Create Stack" << std::endl;
        std::cout << "2 - Push" << std::endl;
        std::cout << "3 - Pop" << std::endl;
        std::cout << "4 - Top" << std::endl;
        std::cout << "5 - Size" << std::endl;
        std::cout << "6 - Empty or not" << std::endl;
        std::cout << "7 - Show all stack" << std::endl;
        std::cout << "8 - Exit" << std::endl;

        int c;
        std::cin >> c;
        Command(c);
    }
}

void Menu::Command(int c) {
    switch (c) {
        case 1:
            CreateCommand();
            break;
        case 2:
            PushCommand();
            break;
        case 3:
            PopCommand();
            break;
        case 4:
            TopCommand();
            break;
        case 5:
            SizeCommand();
            break;
        case 6:
            EmptyCommand();
            break;
        case 7:
            ShowCommand();
            break;
        case 8:
            ExitCommand();
            break;
        default:
            std::cout << "This command not actually! Try again." << std::endl;
    }
}

void Menu::CreateCommand() {
    std::cout << "Enter max size:" << std::endl;
    int size;
    std::cin >> size;
    this->_stack = Stack(size);
    this->_ready = true;
}

bool Menu::CheckStack() const {
    if (!this->_ready) {
        std::cout << "Stack not created.";
        exit(1);
    }
    return this->_ready;
}

void Menu::PushCommand() {
    CheckStack();
    std::cout << "Enter integer element:" << std::endl;
    int element;
    std::cin >> element;
    this->_stack.Push(element);
}

void Menu::PopCommand() {
    CheckStack();
    int element = this->_stack.Pop();
    std::cout << element << " popped" << std::endl;
}

void Menu::TopCommand() const {
    CheckStack();
    int element = this->_stack.Top();
    std::cout << element << " on top" << std::endl;
}

void Menu::EmptyCommand() const {
    CheckStack();
    if (this->_stack.Empty()) {
        std::cout << "Stack is empty" << std::endl;
    } else {
        std::cout << "Stack isn't empty" << std::endl;
    }
}

void Menu::SizeCommand() const {
    CheckStack();
    int element = this->_stack.Size();
    std::cout << "Elements: " << element << std::endl;
}

void Menu::ShowCommand() const {
    CheckStack();
    this->_stack.Show();
    std::cout << std::endl;
}

void Menu::ExitCommand() {
    std::cout << "1 - Close" << std::endl;
    std::cout << "2 - Back to work" << std::endl;
    while (true) {
        int c;
        std::cin >> c;
        if (c == 1) {
            exit(0);
        } else if (c == 2) {
            return;
        } else {
            std::cout << "This command not actually! Try again." << std::endl;
        }
    }
}
