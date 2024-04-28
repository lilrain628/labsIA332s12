#include <stdio.h>
#include <string.h>

typedef struct {
    char fio[30];
    int rating[3];
} person;

int main() {
    FILE *file = fopen("student.dat", "w");

    if (file == NULL) {
        printf("не удалось открыть файл.\n");
        return 1;
    }

    person people[4] = {
        {"иванов_и.и.", {2, 4, 5}},
        {"пертов_к.и.", {3, 4, 5}},
        {"сидоров_с.с.", {4, 4, 4}},
        {"комаров_к.к.", {2, 5, 2}},
    };

    for (int i = 0; i < 4; i++) {
        fwrite(&people[i], sizeof(person), 1, file);
    }

    fclose(file);

    char found_dolg[30];
    printf("введите студента из перечисленных (иванов_и.и., пертов_к.и., сидоров_с.с., комаров_к.к.): ");
    scanf("%s", found_dolg);

    file = fopen("student.dat", "r");

    if (file == NULL) {
        printf("не удалось открыть файл.\n");
        return 1;
    }

    person current_person;
    int found = 0;
    int count = 0;

    while (fread(&current_person, sizeof(person), 1, file)) {
        if (strcmp(current_person.fio, found_dolg) == 0) {
            for (int i = 0; i < 3; i++) {
                if (current_person.rating[i] == 2) {
                    count++;
                }
            }
            printf("ФИО: %s\n", current_person.fio);
            printf("оценки:");
            for(int i=0; i<3;i++){
                printf(" %d",current_person.rating[i]);
            }
            printf("\nколичество задолжностей: %d\n", count);
            found = 1;
            break; // чтобы не продолжать поиск после нахождения студента
        }
    }

    if (!found) {
        printf("нет такого студента.\n");
    }

    fclose(file);

    return 0;
}


