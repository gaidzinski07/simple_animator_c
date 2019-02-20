#ifndef ANIMATION_H
#define ANIMATION_H

#include "vector2.h"

typedef struct clip{
	Vector2 *coord;
	int size;
	int vel;
	enum type{
		literal = 1,
		smooth
	} type;
	char *c;
}AnimationClip;

AnimationClip *create_anim();
void set_animation_config(AnimationClip *anim, Vector2 *v, int size, int vel, int type, char *c);
void animate(AnimationClip anim);


#endif
