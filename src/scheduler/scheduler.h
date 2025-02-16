#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <thread>
#include <chrono>
#include <functional>

class Scheduler {
public:
    static void scheduleTask(int delay, std::function<void()> task);
};

#endif

