/*
 * buttons.h
 *
 *  Created on: 24 déc. 2015
 *      Author: skartal
 */

#ifndef BUTTONS_H_
#define BUTTONS_H_

#include "app.h"
#include "utils/colors.h"

/**********************************************/
/* BUTTON INDEX LIST                          */
/**********************************************/

#define BT_RECORD_ARM 1
#define BT_TRACK_SELECT 2
#define BT_MUTE 3
#define BT_SOLO 4
#define BT_VOLUME 5
#define BT_PAN 6
#define BT_SENDS 7
#define BT_STOP_CLIP 8

#define BT_RECORD 10
#define BT_DOUBLE 20
#define BT_DUPLICATE 30
#define BT_QUANTISE 40
#define BT_DELETE 50
#define BT_UNDO 60
#define BT_CLICK 70
#define BT_SHIFT 80
#define BT_SETUP 90

#define BT_PLAY_1 19
#define BT_PLAY_2 29
#define BT_PLAY_3 39
#define BT_PLAY_4 49
#define BT_PLAY_5 59
#define BT_PLAY_6 69
#define BT_PLAY_6 69
#define BT_PLAY_7 79
#define BT_PLAY_7 79
#define BT_PLAY_8 89

#define BT_UP 91
#define BT_DOWN 92
#define BT_LEFT 93
#define BT_RIGHT 94
#define BT_SESSION 95
#define BT_NOTE 96
#define BT_DEVICE 97
#define BT_USER 98

#define BT_PAD_FIRST 11
#define BT_PAD_LAST 88

#define BT_FIRST 1
#define BT_LAST 98

/**********************************************/
/* BUTTON FUNCTIONS                           */
/**********************************************/

void clear_buttons();
void clear_mode_buttons();
void clear_pads();
void clear_button(u8 index);
void color_button(u8 index, Color color);

#endif /* BUTTONS_H_ */
