#ifndef VECTOR2_H
#define VECTOR2_H

typedef struct vetor{
	int x;
	int y;
} Vector2;

void create_vector(Vector2 *v, int x, int y);
Vector2 *create_empty_vector_array(int size);
void add_vector_to_array(Vector2* v, int pos, Vector2 element);
void fill_vector_array(Vector2 *v, int size);

#endif
