// Copyright 2023 Chubenko Andrey
#ifndef MODULES_TASK_3_CHUBENKO_A_DIJKSTRA_TBB_DIJKSTRA_H_
#define MODULES_TASK_3_CHUBENKO_A_DIJKSTRA_TBB_DIJKSTRA_H_
#include <vector>

std::vector<int> dijkstra(const int start,
                          const std::vector<std::vector<int>>& matrix,
                          const int num_threads);
#endif  // MODULES_TASK_3_CHUBENKO_A_DIJKSTRA_TBB_DIJKSTRA_H_

