// define the task structure

// task.h
#ifndef TASK_H
#define TASK_H

#define MAX_DESC_LEN 256

typedef struct {
    int id;
    char description[MAX_DESC_LEN];
    int done; // 0 = not done, 1 = done
} Task;

void add_task(const char *desc);
void list_tasks();
void delete_task(int id);
void mark_task_done(int id);
void search_tasks(const char *keyword)
#endif

