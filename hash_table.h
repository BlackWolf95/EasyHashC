#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <inttypes.h>

#define SIZE 20

struct DataItem {
   uint64_t data;
   int key;
};

struct DataItem* hashArray[SIZE];
struct DataItem* dummyItem;
struct DataItem* item;

int hashCode(int key);
struct DataItem *search(int key);
void insert(int key, uint64_t data);
struct DataItem* delete(struct DataItem* item);
void display();
