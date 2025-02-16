#include "scheduler.h"

void Scheduler::scheduleTask(int delay, std::function<void()> task) {
    std::this_thread::sleep_for(std::chrono::seconds(delay));
    task();
}
