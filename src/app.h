//
#include <lumin/LandscapeApp.h>

class App : public lumin::LandscapeApp
{
public:
  void onAppStart(const lumin::InitArg &initArg) override;
  int init() override;
};
