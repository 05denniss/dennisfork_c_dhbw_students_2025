#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stddef.h>

#include "lib.h"


bool allOf(int32_t *array, size_t length, int32_t value)
{
    int i;

    for (i=0; length>i; i++) {
        if (array[i] != value) {
                return false;
            }
        }
        return true;
    }

bool anyOf(int32_t *array, size_t length, int32_t value)
{
    int i;

    for (i=0; length>i; i++) {
        if (array[i] == value) {
                return true;
            }
        }
        return false;
    }

bool noneOf(int32_t *array, size_t length, int32_t value)
{
    int i;

    for (i=0; length>i; i++) {
        if (array[i] == value) {
                return false;
            }
        }
        return true;
    }

size_t count(int32_t *array, size_t length, int32_t value)
{
    int i;
    int countnum = 0;

    for (i=0; length>i; i++) {
        if (array[i] == value) {
            countnum++;
        }
    }
    return countnum;
}
