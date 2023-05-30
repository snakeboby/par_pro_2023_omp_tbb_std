// Copyright 2023 Chubenko Andrey
#ifndef MODULES_TASK_3_CHUBENKO_A_DIJKSTRA_TBB_DIJKSTRA_H_
#define MODULES_TASK_3_CHUBENKO_A_DIJKSTRA_TBB_DIJKSTRA_H_
#include <vector>

std::vector<std::vector<int>> create_random_graph(int num_of_vertex,
                                                  int max_destination);
void start_parallel_algorithm(int num_of_vertex,
                              int max_destination);
#endif  // MODULES_TASK_3_CHUBENKO_A_DIJKSTRA_TBB_DIJKSTRA_H_

