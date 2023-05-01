#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

struct dec{
        char *type;
        char *name;
        float val;
    }dec[10];

typedef struct id_sym{
    char *type;
    char *name;
    float val;
}id_sym;

typedef struct func_sym{
    char *returnType;
    int para;
    char *paraType[10];
    char *name;
    char *paraName[10];
    float val[10];
}func_sym;

int id_count = 0;
int func_count = 0;

id_sym id_table[1000];
func_sym func_table[10];

void insertFunc(char *name, char *returnType){
    for(int i = 0; i<func_count; i++){
        if(strcmp(func_table[i].name, name) == 0){
            printf("ERROR: Function %s already declared\n", name);
            exit(0);
        }
    }
    func_table[func_count] = *(func_sym*)malloc(sizeof(func_sym));
    func_table[func_count].name = strdup(name);
    func_table[func_count].returnType = strdup(returnType);
    func_count++;
}

char *findFunc(char *name){
    for(int i = 0; i<func_count; i++){
        if(strcmp(func_table[i].name, name) == 0){
            return func_table[i].returnType;
        }
    }
    printf("ERROR: Function %s not declared\n", name);
    exit(0);
}

char *findIdType(char *name){
    for(int i = 0; i<id_count; i++){
        if(strcmp(id_table[i].name, name) == 0){
            return id_table[i].type;
        }
    }
    printf("ERROR: Variable %s not declared\n", name);
    exit(0);
}

void updateFunc(int para, struct dec *d){
    func_table[func_count-1].para = para;
    for(int i = 0; i<para; i++){
        func_table[func_count-1].paraType[i] = strdup(d[i].type);
        func_table[func_count-1].paraName[i] = strdup(d[i].name);
    }
}


void insertID(char *name, char *type){
    for(int i = 0; i<id_count; i++){
        if(strcmp(id_table[i].name, name) == 0){
            printf("ERROR: Variable %s already declared\n", name);
            exit(0);
        }
    }
    id_table[id_count] = *(id_sym*)malloc(sizeof(id_sym));
    id_table[id_count].name = strdup(name);
    id_table[id_count].type = strdup(type);
    id_count++;
}

void typeCheck(char *name, char *type){
    bool found = true;
    for(int i = 0; i<id_count; i++){
        if(strcmp(id_table[i].name, name) == 0){
            found = false;
            if(strcmp(id_table[i].type, type) != 0){
                printf("ERROR: Type mismatch for %s\n", name);
                exit(0);
            }
            break;
        }
    }
    if(found){
        printf("ERROR: Variable %s not declared\n", name);
        exit(0);
    }
}

void updateID(char *name, float val){
    for(int i = 0; i<id_count; i++){
        if(strcmp(id_table[i].name, name) == 0){
            id_table[i].val = val;
        }
    }
}

void print_Id_Table(){
    printf("NEW SYMBOL TABLE----------------------\n");
    for(int i = 0;i<id_count;i++){
        if(strcmp(id_table[i].type, "INT") == 0)
            printf("%s\t%s\t%d\n", id_table[i].name, id_table[i].type, (int)id_table[i].val);
        else if(strcmp(id_table[i].type, "FLOAT") == 0)
            printf("%s\t%s\t%f\n", id_table[i].name, id_table[i].type, id_table[i].val);
        else if(strcmp(id_table[i].type, "CHAR") == 0)
            printf("%s\t%s\t%c\n", id_table[i].name, id_table[i].type, (int)id_table[i].val+'a');
    }
}

void print_func_Table(){
    printf("NEW FUNCTION TABLE----------------------\n");
    for(int i = 0;i<func_count;i++){
        printf("%s\t%s\t", func_table[i].name, func_table[i].returnType);
        for(int j = 0; j<func_table[i].para; j++){
            printf("%s %s\t", func_table[i].paraType[j], func_table[i].paraName[j]);
        }
        printf("\n");
    }
}

int comparator(float a, float b, char *op){
    if(strcmp(op,">")==0){
        return a>b;
    }
    else if(strcmp(op,"<")==0){
        return a<b;
    }
    else if(strcmp(op,">=")==0){
        return a>=b;
    }
    else if(strcmp(op,"<=")==0){
        return a<=b;
    }
    else if(strcmp(op,"!=")==0){
        return a!=b;
    }
    else if(strcmp(op,"&&")==0){
        return a&&b;
    }
    else if(strcmp(op,"||")==0){
        return a||b;
    }
    else if(strcmp(op,"==")==0){
        return a==b;
    }
    else{
        printf("ERROR: Invalid operator\n");
        exit(0);
    }
}
