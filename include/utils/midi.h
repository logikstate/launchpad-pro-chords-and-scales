/*
 * midi.h
 *
 *  Created on: 24 déc. 2015
 *      Author: skartal
 */

#ifndef MIDI_H_
#define MIDI_H_

#include "app.h"
#include "music/chord.h"
#include "utils/layout.h"

#define BT_FIRST_MIDI_CHANNEL 71
#define BT_LAST_MIDI_CHANNEL 88

void midi_send_note(u8 index, u8 value);
void midi_stop_note(u8 index, u8 value);
void midi_send_aftertouch(u8 index, u8 value);
void midi_send_chord(u8 index, u8 value, Chord chord);
void midi_stop_chord(u8 index, u8 value, Chord chord);
void midi_send_chord_aftertouch(u8 index, u8 value, Chord chord);

extern int current_midi_channel;

#endif /* MIDI_H_ */
