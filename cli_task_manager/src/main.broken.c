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
        printf("1. Add task\n");
        printf("2. List tasks\n");
        printf("3. Delete task\n");
        printf("4. Mark task as done\n");
        printf("5. Search tasks\n");
        printf("6. Exit\n> ");

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
                getchar();
                delete_task(id);
                break;
            case 4:
                printf("Enter task ID to mark as done: ");
                scanf("%d", &id);
                getchar();
                mark_task_done(id);
                break;
            case 5:
                printf("Enter keyword to search: ");
                fgets(desc, sizeof(desc), stdin);
                desc[strcspn(desc, "\n")] = 0;
                search_tasks(desc);
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
