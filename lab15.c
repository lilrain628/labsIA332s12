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
