//
#include "app.h"
#include <lumin/Prism.h>
#include <lumin/ui/Cursor.h>
#include <lumin/node/RootNode.h>
#include <lumin/node/ModelNode.h>

#define MODEL_FILE "res/BoxTextured.glb"

using namespace lumin;

void App::onAppStart(const lumin::InitArg &initArg)
{
  auto prism = requestNewPrism({0.5f, 0.5f, 0.5f});
  lumin::ui::Cursor::SetCursorSnapMode(prism, true);
  ResourceIDType resource = prism->createModelResourceId(MODEL_FILE, 0.3f);
  ModelNode *node = prism->createModelNode(resource);
  prism->getRootNode()->addChild(node);
  LandscapeApp::onAppStart(initArg);
}

int App::init()
{
  return 0;
}
