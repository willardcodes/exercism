#include "vehicle_purchase.h"

namespace vehicle_purchase {

bool needs_license(const std::string kind) {
    if (kind == "truck")
        return true;
    if (kind == "car")
        return true;
    return false;
}

std::string choose_vehicle(const std::string option1, const std::string option2) {
    std::string best_option;
    if (option1 < option2)
        best_option = option1;
    else
        best_option = option2;
    return best_option.append(" is clearly the better choice.");

}

double calculate_resell_price(const double original_price, const double age) {
    if (age < 3)
        return original_price * 0.8;
    if (age < 10)
        return original_price * 0.7;
    return original_price * 0.5;
}

}  // namespace vehicle_purchase
