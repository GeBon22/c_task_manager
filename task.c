#include <stdio.h>
#include <string.h>
#include "task.h"

void initialize_tasks(Task tasks[], int *task_count) {
    *task_count = 0;
}

void add_task(Task tasks[], int *task_count) {
    if (*task_count >= 50) {
        printf("Task limit reached!\n");
        return;
    }

    Task new_task;
    new_task.id = (*task_count) + 1;

    printf("Enter task title: ");
    fgets(new_task.title, sizeof(new_task.title), stdin);

    printf("Enter task description: ");
    fgets(new_task.description, sizeof(new_task.description), stdin);

    printf("Enter due date (YYYY-MM-DD): ");
    fgets(new_task.dueDate, sizeof(new_task.dueDate), stdin);

    new_task.status = 0;

    tasks[(*task_count)++] = new_task;
    printf("Task added successfully!\n");

}

void view_tasks(const Task tasks[], int task_count) {
    printf("Current Tasks:\n");
    for (int i = 0; i < task_count; i++) {
        printf("ID: %d, Title: %s, Due Date: %s, Status: %s\n", 
       tasks[i].id, 
       tasks[i].title,  
       tasks[i].dueDate,
       tasks[i].status == 0 ? "Incomplete" : "Complete");

    }
}

void complete_task(Task tasks[], int task_count) {
    int id;
    printf("Enter task ID to mark as complete: ");
    scanf("%d", &id);
    getchar();

    for (int i = 0; i < task_count; i++) {
        if (tasks[i].id == id) { 
            tasks[i].status = 1;
            printf("Task %d marked as complete.\n", id);
            return;
        }
    }

    printf("Task not found.\n");
}