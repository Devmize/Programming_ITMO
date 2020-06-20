#include "Solving.h"

int main() {

    std::ifstream input("input.txt");
    std::ofstream output("output.txt");

    Functions flow{};

    read(flow, input);
    random(flow, output);

    if (!info_center(flow)) {
        std::cout << "You have problems with file!";
        return 1;
    }

    print(flow, output);

    conditions(flow, output);
    print(flow, output);

    input.close();
    output.close();
    return 0;
}
