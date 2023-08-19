# Questions

## What is [Priority Inversion](https://www.digikey.in/en/maker/projects/introduction-to-rtos-solution-to-part-11-priority-inversion/abf4b8f7cd4a4c70bece35678d178321)?

Priority inversion is a **bug** that occurs when a high priority task is indirectly preempted by a low priority task. For example, the low priority task holds a mutex that the high priority task must wait for to continue executing.

## What is Priority inheritance?

This is a solution to the bug: Priority Inversion.
PI, involves boosting the priority of a task holding a lock to that of any other (higher priority) task that tries to take the lock.
This happens at the time of other higher priority task trying-to-access-lock.
meaning, that the low priority task will **_NOT_** be automatically be promoted to the the higher priority by default as part of locking the mutex. The promotion in priority, happens **_only_** when a higher priority task is trying to lock the same mutex.

## What is Priority ceiling protocol?

This is a solution to the bug: Priority Inversion.
Whenever a task works with a particular resource or takes a lock, the task’s priority level is automatically boosted to that of the priority ceiling associated with the lock or resource. The priority ceiling is determined by the maximum priority of any task that needs to use the resource or lock.
This happens at the time of locking the mutex itself.
meaning, that the low priority task will be _automatically promoted_ to the the higher priority by default as part of locking the mutex.
