#include "domain_review.h"
#include <assert.h>
#include <string.h>

int main(void) {
    DomainReview item = {66, 52, 16, 61};
    assert(domain_review_score(item) == 197);
    assert(strcmp(domain_review_lane(item), "ship") == 0);
    return 0;
}
