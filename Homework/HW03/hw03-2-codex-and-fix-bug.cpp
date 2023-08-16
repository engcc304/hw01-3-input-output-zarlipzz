//TODO: #9 Fix bug and arrange code in CODEX pattern.
#include <stdio.h>
#include <stdbool.h>

int main() {
    float a;
    float b = 3;
    bool _1 = false;
    int i = 0;

    printf("%d ", _1);

    if (_1 != false) {
        printf("ok ");
    } else {
        while (i <= 5) {
            printf("not-okay-%d ", ++i);
        }
    }

    for (i = 3; i < 10; i += 1) {
        if (i % 2 == (!1 ? 1 : 2)) {
            printf("see see");
            printf("haha");
        }
    }

    return 0;
}
