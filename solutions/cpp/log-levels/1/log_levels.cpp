#include <string>

namespace log_line {
std::string message(std::string line) {
	return line.erase(0, line.find(": ") + 2);
}

std::string log_level(std::string line) {
	return line.erase(line.find("]"), line.length());
}

std::string reformat(std::string line) {
	return message(line) + " (" + log_level(line) + ")";
}
}  // namespace log_line
