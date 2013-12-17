#ifndef MUSTANG_H
#define MUSTANG_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <libusb-1.0/libusb.h>
//#include <QtDebug>
#include "effects_enum.h"
#include "data_structs.h"
//#include <time.h>

// amp's VID and PID
#define USB_VID 0x1ed8
#define OLD_USB_PID 0x0004  //Mustang I and II
#define NEW_USB_PID 0x0005  //Mustang III, IV and V
#define MINI_USB_PID 0x0010 //Mustang Mini

// amp's VID and PID while in update mode
#define USB_UPDATE_VID 0x1ed8
#define OLD_USB_UPDATE_PID 0x0006  //Mustang I and II
#define NEW_USB_UPDATE_PID 0x0007  //Mustang III, IV, V
#define MINI_USB_UPDATE_PID 0x0011 //Mustang Mini 

// for USB communication
#define TMOUT 500
#define LENGTH 64
//#define NANO_SEC_SLEEP 10000000

// effect array fields
#define DSP 2
#define EFFECT 16
#define FXSLOT 18
#define KNOB1 32
#define KNOB2 33
#define KNOB3 34
#define KNOB4 35
#define KNOB5 36
#define KNOB6 37

// amp array fields
#define AMPLIFIER 16
#define VOLUME 32
#define GAIN 33
#define TREBLE 36
#define MIDDLE 37
#define BASS 38
#define CABINET 49
#define NOISE_GATE 47
#define THRESHOLD 48
#define MASTER_VOL 35
#define GAIN2 34
#define PRESENCE 39
#define DEPTH 41
#define BIAS 42
#define SAG 51
#define BRIGHTNESS 52

// save fields
#define SAVE_SLOT 4
#define FXKNOB 3

// HID Stuff
// Byte 6 of HID data from amp defines the knob
#define GAIN_KNOB 0x01
#define VOLUME_KNOB 0x00
#define TREBLE_KNOB 0x04

// HID raw data:
// Gain:
// 05 01 02 6d  00 01 01 0c  00 23 23 00 
// Volume:
// 05 01 02 6d  00 00 00 0c  00 17 17 00
// Treble:
// 05 01 02 6d  00 04 04 0c  00 3e 3e 00
// Amp Model/Preset:
// More complicated... multi-packet.... TODO


class Mustang
{
public:
    Mustang();
    ~Mustang();
    int start_amp(char list[][32]=NULL, char *name=NULL, struct amp_settings *amp_set=NULL, struct fx_pedal_settings *effects_set=NULL);    // initialize communication
    int get_from_amp(char list[][32]=NULL, char *name=NULL, struct amp_settings *amp_set=NULL, struct fx_pedal_settings *effects_set=NULL);    // get settings from amp
    int stop_amp(void);    // terminate communication
    int set_effect(struct fx_pedal_settings);
    int set_amplifier(struct amp_settings);
    int save_on_amp(char *, int);
    int load_memory_bank(int, char *name=NULL, struct amp_settings *amp_set=NULL, struct fx_pedal_settings *effects_set=NULL);
    int save_effects(int , char *, int , struct fx_pedal_settings *);
    int update(char *);
    int poll_amp_input(void);

private:
    libusb_device_handle *amp_hand;    // handle for USB communication
    unsigned char execute[LENGTH];    // "apply" command sent after each instruction
    unsigned char prev_array[4][LENGTH];    // array used to clear the effect

    int decode_data(unsigned char [6][LENGTH], char *name=NULL, struct amp_settings *amp_set=NULL, struct fx_pedal_settings *effects_set=NULL);
};

#endif // MUSTANG_H
