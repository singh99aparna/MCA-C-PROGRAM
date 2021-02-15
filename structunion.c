#include <stdio.h>
union PersonUnion {
  int height;
  double weight;
};
struct PersonStruct {
  int height;
  double weight;
};
int main() {
  union PersonUnion person1_union = {1700};
  union PersonUnion person2_union = {.weight=74.23};
  printf("Details of Union\n");
  printf("Height of person1_union: %d\n", person1_union.height);
  printf("Weight of person2_union: %f\n", person2_union.weight);
  printf("Size of person1_union object: %lu\n", sizeof(person1_union));
  printf("Size of person2_union object: %lu\n", sizeof(person2_union));
  printf("\n");

  struct PersonStruct person1_struct = {1700, 0.0};
  struct PersonStruct person2_struct = {0, 74.23};
  printf("Details of Struct\n");
  printf("Height of person1_struct: %d\n", person1_struct.height);
  printf("Weight of person2_struct: %f\n", person2_struct.weight);
  printf("Size of person1_struct object: %lu\n", sizeof(person1_struct));
  printf("Size of person2_struct object: %lu\n", sizeof(person2_struct));
  return 0;
}