#include <string>
class Weapon
{
private:
  std::string type;

public:
  std::string const &getType();
  void setType(std::string &type);
};
