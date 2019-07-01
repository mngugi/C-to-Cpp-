/****************************************************************
* Author : Mwangi Ngugi
* Purpose : introducing structure.
* Structure:  a struct statement that defines a new data type,
* with more than one number .
*
*****************************************************************/
struct Records
{
    char Title[50];
    char Student[50];
    char Course[100];
    int id;
};

int main()
{
    struct Records student1;
    struct Records student2;

    // student1 details
    strcpy(student1.Title,"Doctor" );
    strcpy(student1.Student,"Shaolin Osaka");
    strcpy(student1.Course,"Medicine Anatomy");
    student1.id = 2040672;

    // student2 details
    strcpy(student2.Title,"Engineer" );
    strcpy(student2.Student,"Okanawi Kagawa");
    strcpy(student2.Course,"Mechanical Engineering");
    student2.id = 2040745;

    printf("--------------------------------------- \n");

    // output student1
    printf("Student Title: %s\n",student1.Title);
    printf("Student Student: %s\n",student1.Student);
    printf("Student Course: %s\n",student1.Course);
    printf("Student Id: %d\n",student1.id);

    printf("---------------------------------------\n");

    // output student2

    printf("Student Title: %s\n",student2.Title);
    printf("Student Student: %s\n",student2.Student);
    printf("Student Course: %s\n",student2.Course);
    printf("Student Id: %d\n",student2.id);

    printf("---------------------------------------\n");

    return 0;
}

