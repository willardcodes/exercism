#include <cmath>

double daily_rate(const double hourly_rate) {
    return hourly_rate * 8.0;
}

double apply_discount(const double before_discount, const double discount) {
    return before_discount * ((100.0 - discount) / 100.0);
}

int monthly_rate(const double hourly_rate, const double discount) {
    const double monthly_rate = daily_rate(hourly_rate) * 22.0;
    return std::ceil(apply_discount(monthly_rate, discount));
}

int days_in_budget(const int budget, const double hourly_rate, const double discount) {
    const double standard_rate = daily_rate(hourly_rate);
    const double discounted_rate = apply_discount(standard_rate, discount);
    const double total_days = budget / discounted_rate;
    return std::floor(total_days);
}
