#ifndef GRAPHIC_HANDLER
#define GRAPHIC_HANDLER

#include <vector>
#include "gameObject.h"

class GraphicHandler
{
public:

	GraphicHandler();

	~GraphicHandler() = default;

	std::vector<GameObject&> GetObjects();

	void Render();

	void Tick();

private:
	const std::vector<GameObject&> objects_;
};

#endif

