/*#include<stdio.h>
int main(){
    
    return 0;
}*/

/*#include<stdio.h>   //Q.1 my program 
#include<string.h>
struct vector{
    char dirn[10];
    int  cons;
};
int main(){
    struct vector v1,v2;
    strcpy(v1.dirn,"i cap");
    strcpy(v2.dirn,"j cap");
    printf("Value of 1st vector is");
    scanf("%d", &v1.cons);
    printf("Value of 2nd vector is");
    scanf("%d", &v2.cons);
    printf("The value of v1,v2 vectors is %d%s and %d%s",v1.cons,v1.dirn,v2.cons,v2.dirn);
    return 0;
}

#include<stdio.h>   //my method correct version
#include<string.h>
struct vector {
    char dirn[10];
    int cons;
};
int main() {
    struct vector v1, v2;

    strcpy(v1.dirn, "i");
    strcpy(v2.dirn, "j");

    printf("Value of i component: ");
    scanf("%d", &v1.cons);

    printf("Value of j component: ");
    scanf("%d", &v2.cons);

    printf("The vector is: %d%s + %d%s\n",
           v1.cons, v1.dirn, v2.cons, v2.dirn);

    return 0;
}

#include <stdio.h>   //exam oriented method
struct vector {
    int x;
    int y;
};

int main() {
    struct vector v;

    printf("Enter x component: ");
    scanf("%d", &v.x);

    printf("Enter y component: ");
    scanf("%d", &v.y);

    printf("The 2-D vector is: %di + %dj\n", v.x, v.y);

    return 0;
}

#include <stdio.h>     //Q.2 my answer
struct vector {
    int x;
    int y;
};

int sumVector(struct vector v[]){
    int a,b,v1,v2;
    a=(v1+v2).x;
    b=(v1+v2).y;
    return a,b;
}

int main(){
    struct vector v1,v2;
    int a,b,v;
    printf("Enter x component of 1st vector: ");
    scanf("%d", &v1.x);

    printf("Enter y component of 1st vector: ");
    scanf("%d", &v1.y);

    printf("Enter x component of 2nd vector: ");
    scanf("%d", &v2.x);

    printf("Enter y component of 2nd vector: ");
    scanf("%d", &v2.y);
    sumVector(v);
    printf("The 2-D vector sum is: %di + %dj\n", a ,b );
    return 0;
}

#include <stdio.h>           //chatgpts answer
struct vector {
    int x;
    int y;
};

struct vector sumVector(struct vector v1, struct vector v2){
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main(){
    struct vector v1, v2, sum;

    printf("Enter x component of 1st vector: ");
    scanf("%d", &v1.x);

    printf("Enter y component of 1st vector: ");
    scanf("%d", &v1.y);

    printf("Enter x component of 2nd vector: ");
    scanf("%d", &v2.x);

    printf("Enter y component of 2nd vector: ");
    scanf("%d", &v2.y);

    sum = sumVector(v1, v2);
    printf("The 2-D vector sum is: %di + %dj\n", sum.x, sum.y);
    return 0;
}

#include <stdio.h>     //best for exam

typedef struct vector{
    int i;
    int j;
} V;

V sumVector(V v1, V v2){
    V v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
}

int main(){
    V v1 = {1, 2};
    V v2 = {5, 6};
    V v3 = sumVector(v1, v2);
    printf("The value of vector v3 is %di + %d j", v3.i, v3.j);
    return 0;
}*/
