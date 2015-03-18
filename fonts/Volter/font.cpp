
// Copyright (C) 2015  Frode Roxrud Gill
// See LICENSE file for license

#ifdef PRECOMP
# include "../../pch.h"
#else
#endif

#include "font.h"

const uint8 g_VolterFont9_alphabeth[] = "!\"#%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[]_abcdefghijklmnopqrstuvwxyz{}";

uint8 g_VolterFont9_font[] = {
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

1, //!
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b00000000,
0b10000000,
0b00000000,
0b00000000,

3, //"
0b10100000,
0b10100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,

6, //#
0b01001000,
0b11111100,
0b01001000,
0b01001000,
0b11111100,
0b01001000,
0b00000000,
0b00000000,
0b00000000,

7, //%
0b01000010,
0b10100100,
0b01001000,
0b00010000,
0b00100100,
0b01001010,
0b10000100,
0b00000000,
0b00000000,

6, //&
0b00110000,
0b01001000,
0b01001000,
0b01110000,
0b10010100,
0b10001000,
0b01110100,
0b00000000,
0b00000000,

1, //'
0b10000000,
0b10000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,

3, //(
0b01100000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b01100000,
0b00000000,
0b00000000,

3, //)
0b11000000,
0b00100000,
0b00100000,
0b00100000,
0b00100000,
0b00100000,
0b11000000,
0b00000000,
0b00000000,

5, //*
0b00100000,
0b10101000,
0b01110000,
0b10101000,
0b00100000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,

5, //+
0b00000000,
0b00000000,
0b00100000,
0b00100000,
0b11111000,
0b00100000,
0b00100000,
0b00000000,
0b00000000,

2, //,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11000000,
0b11000000,
0b01000000,
0b10000000,

5, //-
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111000,
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
0b11000000,
0b11000000,
0b00000000,
0b00000000,

7, // /
0b00000010,
0b00000100,
0b00001000,
0b00010000,
0b00100000,
0b01000000,
0b10000000,
0b00000000,
0b00000000,

5, //0
0b01110000,
0b10001000,
0b10011000,
0b10101000,
0b11001000,
0b10001000,
0b01110000,
0b00000000,
0b00000000,

2, //1
0b11000000,
0b01000000,
0b01000000,
0b01000000,
0b01000000,
0b01000000,
0b01000000,
0b00000000,
0b00000000,

5, //2
0b11110000,
0b00001000,
0b00001000,
0b01110000,
0b10000000,
0b10000000,
0b11111000,
0b00000000,
0b00000000,

5, //3
0b11110000,
0b00001000,
0b00001000,
0b01110000,
0b00001000,
0b00001000,
0b11110000,
0b00000000,
0b00000000,

5, //4
0b00010000,
0b00110000,
0b01010000,
0b10010000,
0b11111000,
0b00010000,
0b00010000,
0b00000000,
0b00000000,

5, //5
0b11111000,
0b10000000,
0b10000000,
0b11110000,
0b00001000,
0b00001000,
0b11110000,
0b00000000,
0b00000000,

5, //6
0b01110000,
0b10000000,
0b10000000,
0b11110000,
0b10001000,
0b10001000,
0b01110111,
0b00000000,
0b00000000,

5, //7
0b11111000,
0b00001000,
0b00010000,
0b00010000,
0b00100000,
0b00100000,
0b01000000,
0b00000000,
0b00000000,

5, //8
0b01110000,
0b10001000,
0b10001000,
0b01110000,
0b10001000,
0b10001000,
0b01110000,
0b00000000,
0b00000000,

5, //9
0b01110000,
0b10001000,
0b10001000,
0b01111000,
0b00001000,
0b00001000,
0b01110000,
0b00000000,
0b00000000,

2, //:
0b00000000,
0b00000000,
0b11000000,
0b11000000,
0b00000000,
0b11000000,
0b11000000,
0b00000000,
0b00000000,

2, //;
0b00000000,
0b00000000,
0b11000000,
0b11000000,
0b00000000,
0b11000000,
0b11000000,
0b01000000,
0b10000000,

4, //<
0b00010000,
0b00100000,
0b01000000,
0b10000000,
0b01000000,
0b00100000,
0b00010000,
0b00000000,
0b00000000,

5, //=
0b00000000,
0b00000000,
0b00000000,
0b11111000,
0b00000000,
0b11111000,
0b00000000,
0b00000000,
0b00000000,

4, //>
0b10000000,
0b01000000,
0b00100000,
0b00010000,
0b00100000,
0b01000000,
0b10000000,
0b00000000,
0b00000000,

5, //?
0b01110000,
0b10001000,
0b00001000,
0b00010000,
0b00100000,
0b00000000,
0b00100000,
0b00000000,
0b00000000,

7, //@
0b01111100,
0b10000010,
0b10111010,
0b10101010,
0b10111110,
0b10000000,
0b01111100,
0b00000000,
0b00000000,

5, //A
0b01110000,
0b10001000,
0b10001000,
0b11111000,
0b10001000,
0b10001000,
0b10001000,
0b00000000,
0b00000000,

5, //B
0b11110000,
0b10001000,
0b10001000,
0b11110000,
0b10001000,
0b10001000,
0b11110000,
0b00000000,
0b00000000,

5, //C
0b01110000,
0b10001000,
0b10000000,
0b10000000,
0b10000000,
0b10001000,
0b01110000,
0b00000000,
0b00000000,

5, //D
0b11110000,
0b10001000,
0b10001000,
0b10001000,
0b10001000,
0b10001000,
0b11110000,
0b00000000,
0b00000000,

5, //E
0b11111000,
0b10000000,
0b10000000,
0b11110000,
0b10000000,
0b10000000,
0b11111000,
0b00000000,
0b00000000,

5, //F
0b11111000,
0b10000000,
0b10000000,
0b11110000,
0b10000000,
0b10000000,
0b10000000,
0b00000000,
0b00000000,

5, //G
0b01110000,
0b10001000,
0b10000000,
0b10111000,
0b10001000,
0b10001000,
0b01110000,
0b00000000,
0b00000000,

5, //H
0b10001000,
0b10001000,
0b10001000,
0b11111000,
0b10001000,
0b10001000,
0b10001000,
0b00000000,
0b00000000,

3, //I
0b11100000,
0b01000000,
0b01000000,
0b01000000,
0b01000000,
0b01000000,
0b11100000,
0b00000000,
0b00000000,

5, //J
0b00001000,
0b00001000,
0b00001000,
0b00001000,
0b00001000,
0b10001000,
0b01110000,
0b00000000,
0b00000000,

5, //K
0b10001000,
0b10010000,
0b10100000,
0b11000000,
0b10100000,
0b10010000,
0b10001000,
0b00000000,
0b00000000,

5, //L
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b11111000,
0b00000000,
0b00000000,

6, //M
0b10000100,
0b11001100,
0b10110100,
0b10000100,
0b10000100,
0b10000100,
0b10000100,
0b00000000,
0b00000000,

5, //N
0b10001000,
0b10001000,
0b11001000,
0b10101000,
0b10011000,
0b10001000,
0b10001000,
0b00000000,
0b00000000,

5, //O
0b01110000,
0b10001000,
0b10001000,
0b10001000,
0b10001000,
0b10001000,
0b01110000,
0b00000000,
0b00000000,

5, //P
0b11110000,
0b10001000,
0b10001000,
0b10001000,
0b11110000,
0b10000000,
0b10000000,
0b00000000,
0b00000000,

6, //Q
0b01110000,
0b10001000,
0b10001000,
0b10001000,
0b10001000,
0b10011000,
0b01111000,
0b00000100,
0b00000000,

5, //R
0b11110000,
0b10001000,
0b10001000,
0b10001000,
0b11110000,
0b10010000,
0b10001000,
0b00000000,
0b00000000,

5, //S
0b01110000,
0b10001000,
0b10000000,
0b01110000,
0b00001000,
0b10001000,
0b01110000,
0b00000000,
0b00000000,

5, //T
0b11111000,
0b00100000,
0b00100000,
0b00100000,
0b00100000,
0b00100000,
0b00100000,
0b00000000,
0b00000000,

5, //U
0b10001000,
0b10001000,
0b10001000,
0b10001000,
0b10001000,
0b10001000,
0b01110000,
0b00000000,
0b00000000,

5, //V
0b10001000,
0b10001000,
0b10001000,
0b10001000,
0b01010000,
0b01010000,
0b00100000,
0b00000000,
0b00000000,

7, //W
0b10000010,
0b10000010,
0b10010010,
0b10010010,
0b01010100,
0b01010100,
0b00101000,
0b00000000,
0b00000000,

5, //X
0b10001000,
0b10001000,
0b01010000,
0b00100000,
0b01010000,
0b10001000,
0b10001000,
0b00000000,
0b00000000,

5, //Y
0b10001000,
0b10001000,
0b10001000,
0b01010000,
0b00100000,
0b00100000,
0b00100000,
0b00000000,
0b00000000,

5, //Z
0b11111000,
0b00001000,
0b00010000,
0b00100000,
0b01000000,
0b10000000,
0b11111000,
0b00000000,
0b00000000,

3, //[
0b11100000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b11100000,
0b00000000,
0b00000000,

3, //]
0b11100000,
0b00100000,
0b00100000,
0b00100000,
0b00100000,
0b00100000,
0b11100000,
0b00000000,
0b00000000,

5, //_
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b00000000,
0b11111000,
0b00000000,
0b00000000,

5, //a
0b00000000,
0b00000000,
0b01110000,
0b00001000,
0b01111000,
0b10001000,
0b01111000,
0b00000000,
0b00000000,

5, //b
0b10000000,
0b10000000,
0b11110000,
0b10001000,
0b10001000,
0b10001000,
0b11110000,
0b00000000,
0b00000000,

5, //c
0b00000000,
0b00000000,
0b01110000,
0b10001000,
0b10000000,
0b10001000,
0b01110000,
0b00000000,
0b00000000,

5, //d
0b00001000,
0b00001000,
0b01111000,
0b10001000,
0b10001000,
0b10001000,
0b01111000,
0b00000000,
0b00000000,

5, //e
0b00000000,
0b00000000,
0b01110000,
0b10001000,
0b11111000,
0b10000000,
0b01111000,
0b00000000,
0b00000000,

4, //f
0b00110000,
0b01000000,
0b11100000,
0b01000000,
0b01000000,
0b01000000,
0b01000000,
0b00000000,
0b00000000,

5, //g
0b00000000,
0b00000000,
0b01111000,
0b10001000,
0b10001000,
0b10001000,
0b01111000,
0b00001000,
0b01110000,

5, //h
0b10000000,
0b10000000,
0b11110000,
0b10001000,
0b10001000,
0b10001000,
0b10001000,
0b00000000,
0b00000000,

1, //i
0b10000000,
0b00000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b00000000,
0b00000000,

2, //j
0b01000000,
0b00000000,
0b01000000,
0b01000000,
0b01000000,
0b01000000,
0b01000000,
0b01000000,
0b10000000,

4, //k
0b10000000,
0b10000000,
0b10010000,
0b10100000,
0b11000000,
0b10100000,
0b10010000,
0b00000000,
0b00000000,

1, //l
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b10000000,
0b00000000,
0b00000000,

7, //m
0b00000000,
0b00000000,
0b11111100,
0b10010010,
0b10010010,
0b10010010,
0b10010010,
0b00000000,
0b00000000,

5, //n
0b00000000,
0b00000000,
0b11110000,
0b10001000,
0b10001000,
0b10001000,
0b10001000,
0b00000000,
0b00000000,

5, //o
0b00000000,
0b00000000,
0b01110000,
0b10001000,
0b10001000,
0b10001000,
0b01110000,
0b00000000,
0b00000000,

5, //p
0b00000000,
0b00000000,
0b11110000,
0b10001000,
0b10001000,
0b10001000,
0b11110000,
0b10000000,
0b10000000,

5, //q
0b00000000,
0b00000000,
0b01111000,
0b10001000,
0b10001000,
0b10001000,
0b01111000,
0b00001000,
0b00001000,

4, //r
0b00000000,
0b00000000,
0b10110000,
0b11000000,
0b10000000,
0b10000000,
0b10000000,
0b00000000,
0b00000000,

5, //s
0b00000000,
0b00000000,
0b01111000,
0b10000000,
0b01110000,
0b00001000,
0b11110000,
0b00000000,
0b00000000,

4, //t
0b01000000,
0b01000000,
0b11110000,
0b01000000,
0b01000000,
0b01000000,
0b00110000,
0b00000000,
0b00000000,

5, //u
0b00000000,
0b00000000,
0b10001000,
0b10001000,
0b10001000,
0b10001000,
0b01110000,
0b00000000,
0b00000000,

5, //v
0b00000000,
0b00000000,
0b10001000,
0b10001000,
0b01010000,
0b01010000,
0b00100000,
0b00000000,
0b00000000,

7, //w
0b00000000,
0b00000000,
0b10010010,
0b10010010,
0b10010010,
0b10010010,
0b01101100,
0b00000000,
0b00000000,

5, //x
0b00000000,
0b00000000,
0b10001000,
0b01010000,
0b00100000,
0b01010000,
0b10001000,
0b00000000,
0b00000000,

5, //y
0b00000000,
0b00000000,
0b10001000,
0b10001000,
0b10001000,
0b10001000,
0b01111000,
0b00001000,
0b01110000,

5, //z
0b00000000,
0b00000000,
0b11111000,
0b00010000,
0b00100000,
0b01000000,
0b11111000,
0b00000000,
0b00000000,

4, //{
0b00110000,
0b01000000,
0b01000000,
0b10000000,
0b01000000,
0b01000000,
0b00110000,
0b00000000,
0b00000000,

4, //}
0b11000000,
0b00100000,
0b00100000,
0b00010000,
0b00100000,
0b00100000,
0b11000000,
0b00000000,
0b00000000
};

VolterFont9::VolterFont9()
: Font()
{
}

VolterFont9::~VolterFont9()
{
}

const uint8* VolterFont9::GetAlphabeth() const
{
	return &g_VolterFont9_alphabeth[0];
}

uint8 VolterFont9::GetHeight() const
{
	return 9;
}

uint8 VolterFont9::GetMargin() const
{
	return 1;
}

const uint8* VolterFont9::GetFontdata() const
{
	return &g_VolterFont9_font[0];
}
