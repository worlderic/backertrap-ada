
// Copyright (C) 2015  Frode Roxrud Gill
// See LICENSE file for license

#include "font.h"

#include "xmega/utils/progmem.h"


const U8 g_FreePixelFont12_alphabet_p[] PROGMEM = "!\"#%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[]_abcdefghijklmnopqrstuvwxyz{}";

const U8 g_FreePixelFont12_font_p[] PROGMEM = {
4, //[SPACE]
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,

1, //!
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b00000000,
0b10000000,
0b10000000,
0b00000000,
0b00000000,

6, //"
0b11011000,
0b11011000,
0b11011000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,

6, //#
0b01001000,
0b01001000,
0b11111100,
0b01001000,
0b01001000,
0b01001000,
0b01001000,
0b11111100,
0b01001000,
0b01001000,
0b00000000,
0b00000000,

7, //%
0b01100000,
0b10010000,
0b10010010,
0b01100100,
0b00001000,
0b00010000,
0b00100000,
0b01001100,
0b10010010,
0b00010010,
0b00001100,
0b00000000,

6, //&
0b00110000,
0b01001000,
0b01001000,
0b00110000,
0b01100000,
0b10010100,
0b10010100,
0b10001000,
0b10001000,
0b01110100,
0b00000000,
0b00000000,

2, //'
0b11000000,
0b11000000,
0b11000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,

2, //(
0b01000000,
0b01000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b01000000,
0b01000000,
0b00000000,

2, //)
0b10000000,
0b10000000,
0b01000000,
0b01000000,
0b01000000,
0b01000000,
0b01000000,
0b01000000,
0b01000000,
0b10000000,
0b10000000,
0b00000000,

5, //*
0b00000000,
0b00100000,
0b10101000,
0b01110000,
0b10101000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,

7, //+
0b00000000,
0b00000000,
0b00010000,
0b00010000,
0b00010000,
0b11111110,
0b00010000,
0b00010000,
0b00010000,
0b00000000,
0b00000000,
0b00000000,

3, //,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b01100000,
0b01100000,
0b01100000,
0b11000000,

7, //-
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111110,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,

2, //.
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11000000,
0b00000000,
0b00000000,

5, // /
0b00001000,
0b00001000,
0b00010000,
0b00010000,
0b00100000,
0b00100000,
0b01000000,
0b01000000,
0b10000000,
0b10000000,
0b00000000,
0b00000000,

6, //0
0b01111000,
0b10000100,
0b10000100,
0b10001100,
0b10010100,
0b10100100,
0b11000100,
0b10000100,
0b10000100,
0b01111000,
0b00000000,
0b00000000,

6, //1
0b00100000,
0b01100000,
0b10100000,
0b00100000,
0b00100000,
0b00100000,
0b00100000,
0b00100000,
0b00100000,
0b11111000,
0b00000000,
0b00000000,

6, //2
0b01111000,
0b10000100,
0b10000100,
0b00000100,
0b00001000,
0b00010000,
0b00100000,
0b01000000,
0b10000000,
0b11111100,
0b00000000,
0b00000000,

6, //3
0b01111000,
0b10000100,
0b00000100,
0b00001000,
0b00110000,
0b00001000,
0b00000100,
0b00000100,
0b10001000,
0b01110000,
0b00000000,
0b00000000,

6, //4
0b00011000,
0b00101000,
0b00101000,
0b01001000,
0b01001000,
0b10001000,
0b11111100,
0b00001000,
0b00001000,
0b00001000,
0b00000000,
0b00000000,

6, //5
0b11111100,
0b10000000,
0b10000000,
0b10000000,
0b11111000,
0b00000100,
0b00000100,
0b00000100,
0b10000100,
0b01111000,
0b00000000,
0b00000000,

6, //6
0b00111000,
0b01000000,
0b10000000,
0b10000000,
0b10111000,
0b11000100,
0b10000100,
0b10000100,
0b10000100,
0b01111000,

6, //7
0b11111100,
0b10000100,
0b00000100,
0b00001000,
0b00001000,
0b00010000,
0b00010000,
0b00100000,
0b00100000,
0b00100000,
0b00000000,
0b00000000,

6, //8
0b01111000,
0b10000100,
0b10000100,
0b01001000,
0b00110000,
0b01001000,
0b10000100,
0b10000100,
0b10000100,
0b01111000,
0b00000000,
0b00000000,

6, //9
0b01111000,
0b10000100,
0b10000100,
0b10000100,
0b10001100,
0b01110100,
0b00000100,
0b00000100,
0b00001000,
0b01110000,
0b00000000,
0b00000000,

2, //:
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11000000,
0b00000000,
0b00000000,

3, //;
0b00000000,
0b00000000,
0b00000000,
0b01100000,
0b01100000,
0b00000000,
0b00000000,
0b00000000,
0b01100000,
0b01100000,
0b01100000,
0b11000000,

4, //<
0b00000000,
0b00000000,
0b00010000,
0b00100000,
0b01000000,
0b10000000,
0b01000000,
0b00100000,
0b00010000,
0b00000000,
0b00000000,
0b00000000,

6, //=
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111100,
0b00000000,
0b11111100,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,

4, //>
0b00000000,
0b00000000,
0b10000000,
0b01000000,
0b00100000,
0b00010000,
0b00100000,
0b01000000,
0b10000000,
0b00000000,
0b00000000,
0b00000000,

6, //?
0b01111000,
0b10000100,
0b10000100,
0b00000100,
0b00001000,
0b00010000,
0b00100000,
0b00100000,
0b00000000,
0b00100000,
0b00000000,
0b00000000,

7, //@
0b00111000,
0b01000100,
0b01000010,
0b10011010,
0b10101010,
0b10101010,
0b10101010,
0b10010100,
0b01000000,
0b01000100,
0b00111000,
0b00000000,

6, //A
0b01111000,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b11111100,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b00000000,
0b00000000,

6, //B
0b11111000,
0b10000100,
0b10000100,
0b10000100,
0b11111000,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b11111000,
0b00000000,
0b00000000,

6, //C
0b00111000,
0b01000100,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b01000100,
0b00111000,
0b00000000,
0b00000000,

6, //D
0b11110000,
0b10001000,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b10001000,
0b11110000,
0b00000000,
0b00000000,

6, //E
0b11111100,
0b10000000,
0b10000000,
0b10000000,
0b11111000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b11111100,
0b00000000,
0b00000000,

6, //F
0b11111100,
0b10000000,
0b10000000,
0b10000000,
0b11111000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b00000000,
0b00000000,

6, //G
0b00111000,
0b01000100,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10001100,
0b10000100,
0b01000100,
0b00111100,
0b00000000,
0b00000000,

6, //H
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b11111100,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b00000000,
0b00000000,

5, //I
0b11111000,
0b00100000,
0b00100000,
0b00100000,
0b00100000,
0b00100000,
0b00100000,
0b00100000,
0b00100000,
0b11111000,
0b00000000,
0b00000000,

6, //J
0b00111100,
0b00000100,
0b00000100,
0b00000100,
0b00000100,
0b00000100,
0b00000100,
0b00000100,
0b10001000,
0b01110000,
0b00000000,
0b00000000,

6, //K
0b10000100,
0b10001000,
0b10010000,
0b10100000,
0b11000000,
0b11000000,
0b10100000,
0b10010000,
0b10001000,
0b10000100,
0b00000000,
0b00000000,

6, //L
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b11111100,
0b00000000,
0b00000000,

7, //M
0b10000010,
0b10000010,
0b11000110,
0b11000110,
0b10101010,
0b10101010,
0b10010010,
0b10010010,
0b10000010,
0b10000010,
0b00000000,
0b00000000,

6, //N
0b10000100,
0b10000100,
0b11000100,
0b10100100,
0b10100100,
0b10010100,
0b10010100,
0b10001100,
0b10000100,
0b10000100,
0b00000000,
0b00000000,

6, //O
0b00110000,
0b01001000,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b01001000,
0b00110000,
0b00000000,
0b00000000,

6, //P
0b11111000,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b11111000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b00000000,
0b00000000,

6, //Q
0b00110000,
0b01001000,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b10010100,
0b01001000,
0b00110100,
0b00000000,
0b00000000,

6, //R
0b11111000,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b11111000,
0b10010000,
0b10001000,
0b10001000,
0b10000100,
0b00000000,
0b00000000,

6, //S
0b01111000,
0b10000100,
0b10000000,
0b10000000,
0b01111000,
0b00000100,
0b00000100,
0b00000100,
0b10000100,
0b01111000,
0b00000000,
0b00000000,

7, //T
0b11111110,
0b00010000,
0b00010000,
0b00010000,
0b00010000,
0b00010000,
0b00010000,
0b00010000,
0b00010000,
0b00010000,
0b00000000,
0b00000000,

6, //U
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b01111000,
0b00000000,
0b00000000,

7, //V
0b10000010,
0b10000010,
0b10000010,
0b01000100,
0b01000100,
0b01000100,
0b00101000,
0b00101000,
0b00101000,
0b00010000,
0b00000000,
0b00000000,

7, //W
0b10000010,
0b10000010,
0b10000010,
0b10000010,
0b10010010,
0b10010010,
0b10101010,
0b10101010,
0b01000100,
0b01000100,
0b00000000,
0b00000000,

6, //X
0b10000100,
0b10000100,
0b01001000,
0b01001000,
0b00110000,
0b00110000,
0b01001000,
0b01001000,
0b10000100,
0b10000100,
0b00000000,
0b00000000,

7, //Y
0b10000010,
0b10000010,
0b01000100,
0b01000100,
0b00101000,
0b00010000,
0b00010000,
0b00010000,
0b00010000,
0b00010000,
0b00000000,
0b00000000,

6, //Z
0b11111100,
0b00000100,
0b00000100,
0b00001000,
0b00010000,
0b00100000,
0b01000000,
0b10000000,
0b10000000,
0b11111100,
0b00000000,
0b00000000,

4, //[
0b11110000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b11110000,

4, //]
0b11110000,
0b00010000,
0b00010000,
0b00010000,
0b00010000,
0b00010000,
0b00010000,
0b00010000,
0b00010000,
0b00010000,
0b00010000,
0b11110000,

6, //_
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111100,
0b00000000,
0b00000000,

6, //a
0b00000000,
0b00000000,
0b00000000,
0b00111000,
0b01000100,
0b00000100,
0b01111100,
0b10000100,
0b10001100,
0b01110100,
0b00000000,
0b00000000,

6, //b
0b10000000,
0b10000000,
0b10000000,
0b10111000,
0b11000100,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b11111000,
0b00000000,
0b00000000,

6, //c
0b00000000,
0b00000000,
0b00000000,
0b01111000,
0b10000100,
0b10000000,
0b10000000,
0b10000000,
0b10000100,
0b01111000,
0b00000000,
0b00000000,

6, //d
0b00000100,
0b00000100,
0b00000100,
0b01111100,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b10001100,
0b01110100,
0b00000000,
0b00000000,

6, //e
0b00000000,
0b00000000,
0b00000000,
0b01111000,
0b10000100,
0b10000100,
0b11111100,
0b10000000,
0b10000000,
0b01111000,
0b00000000,
0b00000000,

6, //f
0b00011100,
0b00100000,
0b00100000,
0b11111000,
0b00100000,
0b00100000,
0b00100000,
0b00100000,
0b00100000,
0b00100000,
0b00000000,
0b00000000,

6, //g
0b00000000,
0b00000000,
0b00000000,
0b01110100,
0b10001100,
0b10000100,
0b10000100,
0b10000100,
0b10001100,
0b01110100,
0b00000100,
0b01111000,

6, //h
0b10000000,
0b10000000,
0b10000000,
0b10111000,
0b11000100,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b00000000,
0b00000000,

5, //i
0b00000000,
0b00100000,
0b00000000,
0b11100000,
0b00100000,
0b00100000,
0b00100000,
0b00100000,
0b00100000,
0b11111000,
0b00000000,
0b00000000,

5, //j
0b00000000,
0b00001000,
0b00000000,
0b01111000,
0b00001000,
0b00001000,
0b00001000,
0b00001000,
0b00001000,
0b00001000,
0b10001000,
0b01110000,

6, //k
0b10000000,
0b10000000,
0b10000000,
0b10000100,
0b10001000,
0b10010000,
0b11100000,
0b10010000,
0b10001000,
0b10000100,
0b00000000,
0b00000000,

5, //l
0b11000000,
0b01000000,
0b01000000,
0b01000000,
0b01000000,
0b01000000,
0b01000000,
0b01000000,
0b01000000,
0b00111000,
0b00000000,
0b00000000,

7, //m
0b00000000,
0b00000000,
0b00000000,
0b11101100,
0b10010010,
0b10010010,
0b10010010,
0b10010010,
0b10010010,
0b10010010,
0b00000000,
0b00000000,

6, //n
0b00000000,
0b00000000,
0b00000000,
0b10111000,
0b11000100,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b00000000,
0b00000000,

6, //o
0b00000000,
0b00000000,
0b00000000,
0b01111000,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b01111000,
0b00000000,
0b00000000,

6, //p
0b00000000,
0b00000000,
0b00000000,
0b10111000,
0b11000100,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b11111000,
0b10000000,
0b10000000,

6, //q
0b00000000,
0b00000000,
0b00000000,
0b01111100,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b10001100,
0b01110100,
0b00000100,
0b00000100,

6, //r
0b00000000,
0b00000000,
0b00000000,
0b10111000,
0b11000100,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b00000000,
0b00000000,

6, //s
0b00000000,
0b00000000,
0b00000000,
0b01111000,
0b10000100,
0b10000000,
0b01111000,
0b00000100,
0b10000100,
0b01111000,
0b00000000,
0b00000000,

6, //t
0b00100000,
0b00100000,
0b00100000,
0b11111100,
0b00100000,
0b00100000,
0b00100000,
0b00100000,
0b00100000,
0b00011100,
0b00000000,
0b00000000,

6, //u
0b00000000,
0b00000000,
0b00000000,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b10001100,
0b01110100,
0b00000000,
0b00000000,

6, //v
0b00000000,
0b00000000,
0b00000000,
0b10000100,
0b10000100,
0b10000100,
0b01001000,
0b01001000,
0b01001000,
0b00110000,
0b00000000,
0b00000000,

7, //w
0b00000000,
0b00000000,
0b00000000,
0b10000010,
0b10000010,
0b10010010,
0b10010010,
0b10101010,
0b01000100,
0b01000100,
0b00000000,
0b00000000,

6, //x
0b00000000,
0b00000000,
0b00000000,
0b10000100,
0b10000100,
0b01001000,
0b00110000,
0b01001000,
0b10000100,
0b10000100,
0b00000000,
0b00000000,

6, //y
0b00000000,
0b00000000,
0b00000000,
0b10000100,
0b10000100,
0b01000100,
0b01001000,
0b00101000,
0b00101000,
0b00010000,
0b00010000,
0b01100000,

6, //z
0b00000000,
0b00000000,
0b00000000,
0b11111100,
0b00000100,
0b00001000,
0b00010000,
0b00100000,
0b01000000,
0b11111100,
0b00000000,
0b00000000,

5, //{
0b00011000,
0b00100000,
0b00100000,
0b00100000,
0b00100000,
0b11000000,
0b00100000,
0b00100000,
0b00100000,
0b00100000,
0b00011000,
0b00000000,

5, //}
0b11000000,
0b00100000,
0b00100000,
0b00100000,
0b00100000,
0b00011000,
0b00100000,
0b00100000,
0b00100000,
0b00100000,
0b11000000,
0b00000000
};

FreePixelFont12::FreePixelFont12()
: Font()
{
}

FreePixelFont12::~FreePixelFont12()
{
}

U8 FreePixelFont12::GetAlphabetByte(U8 pos) const
{
	return pgm_read_byte(&g_FreePixelFont12_font_p[pos]);
}

U8 FreePixelFont12::GetFontdataByte(U16 ch_offset, U8 pos) const
{
	return pgm_read_byte(&g_FreePixelFont12_font_p[ch_offset+pos]);
}
