#ifndef NOTEPAD_HPP
#define NOTEPAD_HPP

#include <string>

class Notepad {
public:
  static std::string read_file(const std::string &file_path);
  static bool write_to_file(const std::string &file_path,
                            const std::string &content);
  static bool open_with_default_text_editor(const std::string &file_path);
};

#endif
