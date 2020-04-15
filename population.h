
#ifndef POPULATION_H
#define POPULATION_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
    
#include "element.h"

  typedef struct{
    char name[64];
    int n_elements;
    int size;
    Element *element;
  }Population;

  Population new_Population(char *name, int size);
  int add_element_to_population(Population *population, Element element);
  int print_Population(Population population);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* POPULATION_H */
