#include "policy.h"
#include <assert.h>
#include <string.h>

int main(void) {
    Signal signal_case_1 = {79, 105, 24, 11, 11};
    assert(score_signal(signal_case_1) == 226);
    assert(strcmp(classify_signal(signal_case_1), "accept") == 0);
    Signal signal_case_2 = {94, 73, 13, 19, 5};
    assert(score_signal(signal_case_2) == 184);
    assert(strcmp(classify_signal(signal_case_2), "accept") == 0);
    Signal signal_case_3 = {85, 78, 20, 22, 5};
    assert(score_signal(signal_case_3) == 145);
    assert(strcmp(classify_signal(signal_case_3), "review") == 0);
    return 0;
}
