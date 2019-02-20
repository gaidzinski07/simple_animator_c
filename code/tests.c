#include<stdio.h>
#include<time.h>
#include "animation.h"
#include "vector2.h"

int main(void){
	char *c = malloc(sizeof(char)*20);
	printf("Type the text that\'ll be animated:\n");
	gets(c);
	int size;
	printf("Type the amount of frames of your animation:\n");
	scanf("%d", &size);
	printf("Type the %d coordinates, like \"x y\":\n", size);
	Vector2 *v = create_empty_vector_array(size);
	fill_vector_array(v, size);
	AnimationClip *a = create_anim();
	set_animation_config(a, v, size, 2, 1, c);
	animate(*a);
	return 0;
}







