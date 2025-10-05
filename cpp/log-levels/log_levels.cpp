#include <string>

namespace log_line {
std::string message(std::string line) {
    const size_t startIndex = line.find_first_of(' ');
    std::string message = line.substr(startIndex + 1, line.size() - startIndex + 1);
    return message;
}

std::string log_level(std::string line) {
    const size_t startIndex = line.find('[');
    const size_t endIndex = line.find_first_of(']');
    std::string level = line.substr(startIndex + 1, endIndex - startIndex + 1);
    return level;
}

std::string reformat(std::string line) {
    const std::string level = log_level(line);
    std::string message = log_level(line);
    return message.append(" (").append(level).append(")");
}
}  // namespace log_line
