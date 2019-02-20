#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "animation.h"

AnimationClip *create_anim(){
	AnimationClip *anim = malloc(sizeof(AnimationClip));
	anim->size = 0;
	anim->vel = 0;
	anim->type = 1;
	anim->c = ".";
	return anim;
}

void set_animation_config(AnimationClip *anim, Vector2 *v, int size, int vel, int type, char *c){
	anim->coord = v;
	anim->size = size;
	anim->vel = vel;
	anim->type = type;
	anim->c = c;
}

void animate(AnimationClip anim){
	struct timespec tim, tim2;;
	tim.tv_sec  = 0;
	tim.tv_nsec = 500000000L;
	system("CLS");
	
	int i, j;
	for(i=0; i<anim.size; i++){
		
		//breaks
		for(j=0; j<anim.coord[i].y; j++){
			printf("\n");
		}
		//espacos
		for(j = 0; j < anim.coord[i].x; j++){
			printf(" ");
		}
		printf("%s", anim.c);
		nanosleep(&tim, &tim2);
		system("CLS");
	}
}
