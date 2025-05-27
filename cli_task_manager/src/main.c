// main menu logic

// main.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task.h"

int main() {
    int choice;
    char desc[MAX_DESC_LEN];
    int id;

    while (1) {
        printf("\n=== CLI Task Manager ===\n");
        printf("1. Add task\n2. List tasks\n3. Delete task\n4. Mark task as done\n5. Exit\n> ");
        scanf("%d", &choice);
        getchar(); // clear newline

        switch (choice) {
            case 1:
                printf("Enter task description: ");
                fgets(desc, sizeof(desc), stdin);
                desc[strcspn(desc, "\n")] = 0;
                add_task(desc);
                break;
            case 2:
                list_tasks();
                break;
            case 3:
                printf("Enter task ID to delete: ");
                scanf("%d", &id);
                delete_task(id);
                break;
            case 4:
                printf("Enter task ID to mark as done: ");
                scanf("%d", &id);
                mark_task_done(id);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}

