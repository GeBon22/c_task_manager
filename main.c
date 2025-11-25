#include <stdio.h>
#include <stdlib.h>
#include "task.h"

int main() {
    Task tasks[100];
    int task_count;
    initialize_tasks(tasks, &task_count);

    int choice;
    while (1) {
        printf("\nTask Manager:\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Complete Task\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline

        switch (choice) {
            case 1:
                add_task(tasks, &task_count);
                break;
            case 2:
                view_tasks(tasks, task_count);
                break;
            case 3:
                complete_task(tasks, task_count);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
