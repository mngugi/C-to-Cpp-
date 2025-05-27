// implement task logic
// task.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task.h"

#define TASK_FILE "data/tasks.txt"

void add_task(const char *desc) {
    FILE *file = fopen(TASK_FILE, "a");
    if (!file) {
        perror("Failed to open task file");
        return;
    }

    int id = rand() % 100000; // Simple unique ID
    fprintf(file, "%d|%s|0\n", id, desc);
    fclose(file);
    printf("✅ Task added: %s\n", desc);
}

void list_tasks() {
    FILE *file = fopen(TASK_FILE, "r");
    if (!file) {
        printf("No tasks found.\n");
        return;
    }

    Task task;
    char line[512];
    while (fgets(line, sizeof(line), file)) {
        sscanf(line, "%d|%[^|]|%d", &task.id, task.description, &task.done);
        printf("ID: %d | [%c] %s\n", task.id, task.done ? 'x' : ' ', task.description);
    }

    fclose(file);
}

void delete_task(int id) {
    FILE *file = fopen(TASK_FILE, "r");
    FILE *temp = fopen("data/tmp.txt", "w");
    if (!file || !temp) {
        perror("File error");
        return;
    }

    Task task;
    char line[512];
    while (fgets(line, sizeof(line), file)) {
        sscanf(line, "%d|%[^|]|%d", &task.id, task.description, &task.done);
        if (task.id != id)
            fprintf(temp, "%d|%s|%d\n", task.id, task.description, task.done);
    }

    fclose(file);
    fclose(temp);
    remove(TASK_FILE);
    rename("data/tmp.txt", TASK_FILE);
    printf("🗑 Task %d deleted.\n", id);
}

void mark_task_done(int id) {
    FILE *file = fopen(TASK_FILE, "r");
    FILE *temp = fopen("data/tmp.txt", "w");
    if (!file || !temp) {
        perror("File error");
        return;
    }

    Task task;
    char line[512];
    while (fgets(line, sizeof(line), file)) {
        sscanf(line, "%d|%[^|]|%d", &task.id, task.description, &task.done);
        if (task.id == id) task.done = 1;
        fprintf(temp, "%d|%s|%d\n", task.id, task.description, task.done);
    }

    fclose(file);
    fclose(temp);
    remove(TASK_FILE);
    rename("data/tmp.txt", TASK_FILE);
    printf("☑ Task %d marked as done.\n", id);
}

