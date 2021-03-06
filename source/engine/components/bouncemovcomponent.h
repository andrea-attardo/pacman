
#ifndef BOUNCEMOVCOMPONENT_H
#define BOUNCEMOVCOMPONENT_H

#include "SDL.h"
#include "../actor.h"
#include "json.hpp"
using json = nlohmann::json;

class BounceMovComponent: public Component {

public:

	BounceMovComponent( Actor* actor, json boundrectDescr );

	void update( const double deltatime );


private:
	
	SDL_Rect	boundRect;
	Actor*		pActor;

};


#endif 