#ifndef tests_h
#define tests_h 1
#include <stdio.h>

#include "makise.h"
#include "makise_gui.h"
#include "makise_e.h"

#include "tests_styles.h"

void tests_init(MHost *h);


typedef struct
{
    char* name;
    MHost host;
    MSList_Item item;
} tests_struct;

void tests_hello_init(MHost *h);
void tests_buttons_init(MHost *h);
void tests_container_init(MHost *h);
void tests_position_init(MHost *h);

void tests_selector_init(MHost *h);

void tests_run(uint8_t id);

#define tests_items_len 4
extern MSList_Item tests_items[tests_items_len];

#endif
