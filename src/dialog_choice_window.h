#pragma once

#include <pebble.h>

#define DIALOG_CHOICE_WINDOW_MESSAGE  "Enable charging with xadow?"

void dialog_choice_window_push(SmartstrapAttribute *attr);
void dialog_choice_window_pop();
