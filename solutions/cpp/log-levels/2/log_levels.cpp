#include <string>

namespace log_line {

    std::string message(const std::string& line) {
        auto pos = line.find(": ");
        return line.substr(pos + 2);
    }

    std::string log_level(const std::string& line) {
        auto start = line.find("[") + 1;
        auto end = line.find("]");
        return line.substr(start, end - start);
    }

    std::string reformat(const std::string& line) {
        return message(line) + " (" + log_level(line) + ")";
    }

} // namespace log_line
