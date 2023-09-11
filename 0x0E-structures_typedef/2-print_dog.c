#include <stdio.h>

struct Dog {
    char name[20];
    int age;
    char breed[20];
};

int main() {
    struct Dog myDog;
    myDog.age = 3;
    
    // Initialize name and breed without trailing whitespace
    strcpy(myDog.name, "Buddy");
    strcpy(myDog.breed, "Golden Retriever");
    
    printf("Name: %s\n", myDog.name);
    printf("Age: %d\n", myDog.age);
    printf("Breed: %s\n", myDog.breed);
    
    return 0;
}
