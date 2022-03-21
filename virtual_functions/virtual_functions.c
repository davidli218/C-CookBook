#include <stdio.h>
#include <stdlib.h>

struct IAnimal {
    void (*eat)(int food);

    void (*sleep)(int secs);
};

/*
 * Subclass implement IAnimal,
 * relying on C's guaranteed equivalence of memory layouts
 */
typedef struct {
    struct IAnimal _base;

    void (*meow)(void);
} Cat;

void cat_eat(int food) { printf("Cat eat %d food.\n", food); }

void cat_sleep(int secs) { printf("Cat sleep %d seconds.\n", secs); }

void cat_meow(void) { printf("Cat meow~\n"); }

/* Cat Constructor */
Cat *CreateACat(void) {
    Cat *x = (Cat *) malloc(sizeof(Cat));

    x->_base.eat = cat_eat;
    x->_base.sleep = cat_sleep;
    x->meow = cat_meow;

    return x;
}

int main() {
    struct IAnimal *pat = (struct IAnimal *) CreateACat();

    pat->eat(42);
    pat->sleep(30);

    ((Cat *) pat)->meow();
}
