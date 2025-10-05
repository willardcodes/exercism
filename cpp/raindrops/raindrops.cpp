#include <string>
#include "raindrops.h"

namespace raindrops {

std::string convert(const int number) {
    std::string sound;
    bool divisible_by_three = false;
    bool divisible_by_five = false;
    bool divisible_by_seven = false;

    if (number % 3 == 0) {
        divisible_by_three = true;
        sound.append("Pling");
    }

    if (number % 5 == 0) {
        divisible_by_five = true;
        sound.append("Plang");
    }

    if (number % 7 == 0) {
        divisible_by_seven = true;
        sound.append("Plong");
    }

    if (!divisible_by_three && !divisible_by_five && !divisible_by_seven) {
        sound.append(std::to_string(number));
    }

    return sound;
}

}  // namespace raindrops
