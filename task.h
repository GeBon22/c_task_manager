#ifndef TASK_H
#define TASK_H

typedef struct {
    int id;
    char title[100];
    char description[256];
    char dueDate[11];
    int status;
} Task;

void add_task(Task tasks[], int *task_count);
void view_tasks(const Task tasks[], int task_count);
void complete_task(Task tasks[], int task_count);
void initialize_tasks(Task tasks[], int *task_count);
void save_tasks_to_csv(const Task tasks[], int task_count);

#endif
