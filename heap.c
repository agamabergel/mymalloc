#include <stdio.h>
#include <assert.h>


#define _HEAP_CAP 640000
#define _CHUNCK_ALLOCED_CAP 1024


char heap[_HEAP_CAP] = {0};

size_t alloced_chuncks_size = 0;
size_t heap_size = 0;


typedef struct 
{
	void* start;
	size_t size;		
} heap_alloced_chunk;

heap_alloced_chunk heap_alloced[_CHUNCK_ALLOCED_CAP] = {0};


void* mmalloc(size_t size)
{
	if (size == 0)
		return NULL;

	assert(heap_size + size <= HEAP_CAP_SIZE);
	
}


void ffree(void* ptr)
{
	printf("not implmented :))");

}


int main(void)
{
	int* arr = (int*)mmalloc(sizeof(int) * 4);
	for (int i = 0; i < 4; i++)
	{
		arr[i] = i;
	}
	return 0;
}

