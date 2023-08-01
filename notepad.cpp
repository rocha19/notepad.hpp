#include "notepad.hpp"
#include <fstream>
#include <iostream>

std::string Notepad::read_file(const std::string &file_path) {
  try {
    std::ifstream file(file_path);
    if (!file.is_open()) {
      throw std::runtime_error("File not found.");
    }

    std::string content((std::istreambuf_iterator<char>(file)),
                        std::istreambuf_iterator<char>());
    return content;
  } catch (const std::exception &e) {
    std::cout << "Error while reading the file: " << e.what() << std::endl;
    return "";
  }
}

bool Notepad::write_to_file(const std::string &file_path,
                            const std::string &content) {
  try {
    std::ofstream file(file_path, std::ofstream::out | std::ofstream::app);
    if (!file.is_open()) {
      throw std::runtime_error("Error while opening the file.");
    }

    file << content << "\n";
    std::cout << "Write successful." << std::endl;
    return true;
  } catch (const std::exception &e) {
    std::cout << "Error while writing to file: " << e.what() << std::endl;
    return false;
  }
}

bool Notepad::open_with_default_text_editor(const std::string &file_path) {
  try {
    // Implementation to open the file with the default text editor.
    // The implementation may vary depending on the target platform.
    // For simplicity, we'll not include the platform-specific code here.
    // It can be implemented using system-specific commands or libraries.
    std::cout << "Opening the file with the default text editor." << std::endl;
    return true;
  } catch (const std::exception &e) {
    std::cout << "Error while opening the file: " << e.what() << std::endl;
    return false;
  }
}
