#ifndef CONNECTOME_H
#define CONNECTOME_H

/*
This header creates a general layout for presynaptic and postsynaptic connectomes.
It feels pointless since there are only two whole-brain connectomes.
It is useful to have, though. It keeps the amount of lines in the code down.
*/

#include <stdint.h>
#include <stdbool.h>

typedef struct {
    int connectioncount;
    int **connectionweights; // every second array will be allocated to (2*sizeof(int32_t)). [0] is the idex of the target neuron and [1] is the weight added to that neuron
    int values[2];
} neuron;

typedef struct {
    int neuroncount;
    neuron *neurons;

    int stimulationcount;
    bool *stimulations;
    int **stimulationtargetcount;
    int **stimulationtargets;

    int thisState;
    int nextState;

    int fireThreshold;
} connectome;

#endif
