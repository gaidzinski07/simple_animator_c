#include "vector2.h"

void create_vector(Vector2 *v, int x, int y){
	v->x = x;
	v->y = y;
}

Vector2 *create_empty_vector_array(int size){
	Vector2 *v = malloc(sizeof(Vector2)*size);
	return v;
}

void add_vector_to_array(Vector2* v, int pos, Vector2 element){
	v[pos] = element;
}

void fill_vector_array(Vector2 *v, int size){
	int i, x, y;
	for(i=0; i<size;i++){
		scanf("%d %d", &x, &y);
		Vector2 v2;
		v2.x = x;
		v2.y = y;
		add_vector_to_array(v, i, v2);
	}
}
