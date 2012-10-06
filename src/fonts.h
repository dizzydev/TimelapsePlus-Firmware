// 6 x 8 font
// 1 pixel space at left and bottom
// index = ASCII - 32
#include <avr/pgmspace.h>

// Font is represented below as rotated right 90 degrees
const unsigned char font6_8[] [6] PROGMEM =
{
    {
    0b00000000,		// sp
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    },
    {
    0b00000000,		// !
    0b00000000,
    0b00000000,
    0b00101111,
    0b00000000,
    0b00000000,
    },
    {
    0b00000000,		// "
    0b00000000,
    0b00000111,
    0b00000000,
    0b00000111,
    0b00000000,
    },
    {
    0b00000000,		// #
    0b00010100,
    0b01111111,
    0b00010100,
    0b01111111,
    0b00010100,
    },
    {
    0b00000000,		// $
    0b00100100,
    0b00101010,
    0b01111111,
    0b00101010,
    0b00010010,
    },
    {
    0b00000000,		// %
    0b01100010,
    0b01100100,
    0b00001000,
    0b00010011,
    0b00100011,
    },
    {
    0b00000000,		// &
    0b00110110,
    0b01001001,
    0b01010101,
    0b00100010,
    0b01010000,
    },
    {
    0b00000000,		// '
    0b00000000,
    0b00000101,
    0b00000011,
    0b00000000,
    0b00000000,
    },
    {
    0b00000000,		// (
    0b00000000,
    0b00011100,
    0b00100010,
    0b01000001,
    0b00000000,
    },
    {
    0b00000000,		// )
    0b00000000,
    0b01000001,
    0b00100010,
    0b00011100,
    0b00000000,
    },
    {
    0b00000000,		// *
    0b00010100,
    0b00001000,
    0b00111110,
    0b00001000,
    0b00010100,
    },
    {
    0b00000000,		// +
    0b00001000,
    0b00001000,
    0b00111110,
    0b00001000,
    0b00001000,
    },
    {
    0b00000000,		// ,
    0b00000000,
    0b00000000,
    0b10100000,
    0b01100000,
    0b00000000,
    },
    {
    0b00000000,		// -
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,
    },
    {
    0b00000000,		// .
    0b00000000,
    0b01100000,
    0b01100000,
    0b00000000,
    0b00000000,
    },
    {
    0b00000000,		// /
    0b00100000,
    0b00010000,
    0b00001000,
    0b00000100,
    0b00000010,
    },
    {
    0b00000000,		// 0
    0b00111110,
    0b01010001,
    0b01001001,
    0b01000101,
    0b00111110,
    },
    {
    0b00000000,		// 1
    0b00000000,
    0b01000010,
    0b01111111,
    0b01000000,
    0b00000000,
    },
    {
    0b00000000,		// 2
    0b01000010,
    0b01100001,
    0b01010001,
    0b01001001,
    0b01000110,
    },
    {
    0b00000000,		// 3
    0b00100001,
    0b01000001,
    0b01000101,
    0b01001011,
    0b00110001,
    },
    {
    0b00000000,		// 4
    0b00011000,
    0b00010100,
    0b00010010,
    0b01111111,
    0b00010000,
    },
    {
    0b00000000,		// 5
    0b00100111,
    0b01000101,
    0b01000101,
    0b01000101,
    0b00111001,
    },
    {
    0b00000000,		// 6
    0b00111100,
    0b01001010,
    0b01001001,
    0b01001001,
    0b00110000,
    },
    {
    0b00000000,		// 7
    0b00000001,
    0b01110001,
    0b00001001,
    0b00000101,
    0b00000011,
    },
    {
    0b00000000,		// 8
    0b00110110,
    0b01001001,
    0b01001001,
    0b01001001,
    0b00110110,
    },
    {
    0b00000000,		// 9
    0b00000110,
    0b01001001,
    0b01001001,
    0b00101001,
    0b00011110,
    },
    {
    0b00000000,		// :
    0b00000000,
    0b00110110,
    0b00110110,
    0b00000000,
    0b00000000,
    },
    {
    0b00000000,		// ;
    0b00000000,
    0b01010110,
    0b00110110,
    0b00000000,
    0b00000000,
    },
    {
    0b00000000,		// <
    0b00001000,
    0b00010100,
    0b00100010,
    0b01000001,
    0b00000000,
    },
    {
    0b00000000,		// =
    0b00010100,
    0b00010100,
    0b00010100,
    0b00010100,
    0b00010100,
    },
    {
    0b00000000,		// >
    0b00000000,
    0b01000001,
    0b00100010,
    0b00010100,
    0b00001000,
    },
    {
    0b00000000,		// ?
    0b00000010,
    0b00000001,
    0b01010001,
    0b00001001,
    0b00000110,
    },
    {
    0b00000000,		// @
    0b00110010,
    0b01001001,
    0b01011001,
    0b01010001,
    0b00111110,
    },
    {
    0b00000000,		// A
    0b01111100,
    0b00010010,
    0b00010001,
    0b00010010,
    0b01111100,
    },
    {
    0b00000000,		// B
    0b01111111,
    0b01001001,
    0b01001001,
    0b01001001,
    0b00110110,
    },
    {
    0b00000000,		// C
    0b00111110,
    0b01000001,
    0b01000001,
    0b01000001,
    0b00100010,
    },
    {
    0b00000000,		// D
    0b01111111,
    0b01000001,
    0b01000001,
    0b00100010,
    0b00011100,
    },
    {
    0b00000000,		// E
    0b01111111,
    0b01001001,
    0b01001001,
    0b01001001,
    0b01000001,
    },
    {
    0b00000000,		// F
    0b01111111,
    0b00001001,
    0b00001001,
    0b00001001,
    0b00000001,
    },
    {
    0b00000000,		// G
    0b00111110,
    0b01000001,
    0b01001001,
    0b01001001,
    0b01111010,
    },
    {
    0b00000000,		// H
    0b01111111,
    0b00001000,
    0b00001000,
    0b00001000,
    0b01111111,
    },
    {
    0b00000000,		// I
    0b00000000,
    0b01000001,
    0b01111111,
    0b01000001,
    0b00000000,
    },
    {
    0b00000000,		// J
    0b00100000,
    0b01000000,
    0b01000001,
    0b00111111,
    0b00000001,
    },
    {
    0b00000000,		// K
    0b01111111,
    0b00001000,
    0b00010100,
    0b00100010,
    0b01000001,
    },
    {
    0b00000000,		// L
    0b01111111,
    0b01000000,
    0b01000000,
    0b01000000,
    0b01000000,
    },
    {
    0b00000000,		// M
    0b01111111,
    0b00000010,
    0b00001100,
    0b00000010,
    0b01111111,
    },
    {
    0b00000000,		// N
    0b01111111,
    0b00000100,
    0b00001000,
    0b00010000,
    0b01111111,
    },
    {
    0b00000000,		// O
    0b00111110,
    0b01000001,
    0b01000001,
    0b01000001,
    0b00111110,
    },
    {
    0b00000000,		// P
    0b01111111,
    0b00001001,
    0b00001001,
    0b00001001,
    0b00000110,
    },
    {
    0b00000000,		// Q
    0b00111110,
    0b01000001,
    0b01010001,
    0b00100001,
    0b01011110,
    },
    {
    0b00000000,		// R
    0b01111111,
    0b00001001,
    0b00011001,
    0b00101001,
    0b01000110,
    },
    {
    0b00000000,		// S
    0b01000110,
    0b01001001,
    0b01001001,
    0b01001001,
    0b00110001,
    },
    {
    0b00000000,		// T
    0b00000001,
    0b00000001,
    0b01111111,
    0b00000001,
    0b00000001,
    },
    {
    0b00000000,		// U
    0b00111111,
    0b01000000,
    0b01000000,
    0b01000000,
    0b00111111,
    },
    {
    0b00000000,		// V
    0b00011111,
    0b00100000,
    0b01000000,
    0b00100000,
    0b00011111,
    },
    {
    0b00000000,		// W
    0b00111111,
    0b01000000,
    0b00111000,
    0b01000000,
    0b00111111,
    },
    {
    0b00000000,		// X
    0b01100011,
    0b00010100,
    0b00001000,
    0b00010100,
    0b01100011,
    },
    {
    0b00000000,		// Y
    0b00000111,
    0b00001000,
    0b01110000,
    0b00001000,
    0b00000111,
    },
    {
    0b00000000,		// Z
    0b01100001,
    0b01010001,
    0b01001001,
    0b01000101,
    0b01000011,
    },
    {
    0b00000000,		// [
    0b00000000,
    0b01111111,
    0b01000001,
    0b01000001,
    0b00000000,
    },
    {
    0b00000000,		// 55
    0b01010101,
    0b00101010,
    0b01010101,
    0b00101010,
    0b01010101,
    },
    {
    0b00000000,		// ]
    0b00000000,
    0b01000001,
    0b01000001,
    0b01111111,
    0b00000000,
    },
    {
    0b00000000,		// ^
    0b00000100,
    0b00000010,
    0b00000001,
    0b00000010,
    0b00000100,
    },
    {
    0b00000000,		// _
    0b01000000,
    0b01000000,
    0b01000000,
    0b01000000,
    0b01000000,
    },
    {
    0b00000000,		// `
    0b00000000,
    0b00000001,
    0b00000010,
    0b00000100,
    0b00000000,
    },
    {
    0b00000000,		// a
    0b00100000,
    0b01010100,
    0b01010100,
    0b01010100,
    0b01111000,
    },
    {
    0b00000000,		// b
    0b01111111,
    0b01001000,
    0b01000100,
    0b01000100,
    0b00111000,
    },
    {
    0b00000000,		// c
    0b00111000,
    0b01000100,
    0b01000100,
    0b01000100,
    0b00100000,
    },
    {
    0b00000000,		// d
    0b00111000,
    0b01000100,
    0b01000100,
    0b01001000,
    0b01111111,
    },
    {
    0b00000000,		// e
    0b00111000,
    0b01010100,
    0b01010100,
    0b01010100,
    0b00011000,
    },
    {
    0b00000000,		// f
    0b00001000,
    0b01111110,
    0b00001001,
    0b00000001,
    0b00000010,
    },
    {
    0b00000000,		// g
    0b00011000,
    0b10100100,
    0b10100100,
    0b10100100,
    0b01111100,
    },
    {
    0b00000000,		// h
    0b01111111,
    0b00001000,
    0b00000100,
    0b00000100,
    0b01111000,
    },
    {
    0b00000000,		// i
    0b00000000,
    0b01000100,
    0b01111101,
    0b01000000,
    0b00000000,
    },
    {
    0b00000000,		// j
    0b01000000,
    0b10000000,
    0b10000100,
    0b01111101,
    0b00000000,
    },
    {
    0b00000000,		// k
    0b01111111,
    0b00010000,
    0b00101000,
    0b01000100,
    0b00000000,
    },
    {
    0b00000000,		// l
    0b00000000,
    0b01000001,
    0b01111111,
    0b01000000,
    0b00000000,
    },
    {
    0b00000000,		// m
    0b01111100,
    0b00000100,
    0b00011000,
    0b00000100,
    0b01111000,
    },
    {
    0b00000000,		// n
    0b01111100,
    0b00001000,
    0b00000100,
    0b00000100,
    0b01111000,
    },
    {
    0b00000000,		// o
    0b00111000,
    0b01000100,
    0b01000100,
    0b01000100,
    0b00111000,
    },
    {
    0b00000000,		// p
    0b11111100,
    0b00100100,
    0b00100100,
    0b00100100,
    0b00011000,
    },
    {
    0b00000000,		// q
    0b00011000,
    0b00100100,
    0b00100100,
    0b00011000,
    0b11111100,
    },
    {
    0b00000000,		// r
    0b01111100,
    0b00001000,
    0b00000100,
    0b00000100,
    0b00001000,
    },
    {
    0b00000000,		// s
    0b01001000,
    0b01010100,
    0b01010100,
    0b01010100,
    0b00100000,
    },
    {
    0b00000000,		// t
    0b00000100,
    0b00111111,
    0b01000100,
    0b01000000,
    0b00100000,
    },
    {
    0b00000000,		// u
    0b00111100,
    0b01000000,
    0b01000000,
    0b00100000,
    0b01111100,
    },
    {
    0b00000000,		// v
    0b00011100,
    0b00100000,
    0b01000000,
    0b00100000,
    0b00011100,
    },
    {
    0b00000000,		// w
    0b00111100,
    0b01000000,
    0b00110000,
    0b01000000,
    0b00111100,
    },
    {
    0b00000000,		// x
    0b01000100,
    0b00101000,
    0b00010000,
    0b00101000,
    0b01000100,
    },
    {
    0b00000000,		// y
    0b00011100,
    0b10100000,
    0b10100000,
    0b10100000,
    0b01111100,
    },
    {
    0b00000000,		// z
    0b01000100,
    0b01100100,
    0b01010100,
    0b01001100,
    0b01000100,
    },
    {
    0b00000000,		// degrees symbol
    0b00000000,
    0b00000110,
    0b00001001,
    0b00001001,
    0b00000110,
    },
};

// Font is encoded rotated 90 degrees right
const unsigned char PROGMEM small_font[90][6] = {
{ /* chr: ' ' (3 wide) */
    3,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    },
    { /* chr: '!' (2 wide) */
    2,
    0b01011110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    },
    { /* chr: '"' (4 wide) */
    4,
    0b00000110,
    0b00000000,
    0b00000110,
    0b00000000,
    0b00000000,
    },
    { /* chr: '#' (6 wide) */
    6,
    0b00010100,
    0b00111110,
    0b00010100,
    0b00111110,
    0b00010100,
    },
    { /* chr: '$' (6 wide) */
    6,
    0b00100100,
    0b00101010,
    0b01111110,
    0b00101010,
    0b00010010,
    },
    { /* chr: '%' (6 wide) */
    6,
    0b01000100,
    0b00100000,
    0b00010000,
    0b00001000,
    0b01000100,
    },
    { /* chr: '&' (6 wide) */
    6,
    0b00110100,
    0b01001010,
    0b01010100,
    0b00100000,
    0b01010000,
    },
    { /* chr: ''' (3 wide) */
    3,
    0b00000100,
    0b00000010,
    0b00000000,
    0b00000000,
    0b00000000,
    },
    { /* chr: '(' (3 wide) */
    3,
    0b00111100,
    0b01000010,
    0b00000000,
    0b00000000,
    0b00000000,
    },
    { /* chr: ')' (3 wide) */
    3,
    0b01000010,
    0b00111100,
    0b00000000,
    0b00000000,
    0b00000000,
    },
    { /* chr: '*' (5 wide) */
    5,
    0b01010100,
    0b00111000,
    0b00111000,
    0b01010100,
    0b00000000,
    },
    { /* chr: '+' (4 wide) */
    4,
    0b00010000,
    0b00111000,
    0b00010000,
    0b00000000,
    0b00000000,
    },
    { /* chr: ',' (3 wide) */
    3,
    0b01000000,
    0b00100000,
    0b00000000,
    0b00000000,
    0b00000000,
    },
    { /* chr: '-' (4 wide) */
    4,
    0b00010000,
    0b00010000,
    0b00010000,
    0b00000000,
    0b00000000,
    },
    { /* chr: '.' (2 wide) */
    2,
    0b01000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    },
    { /* chr: '/' (6 wide) */
    6,
    0b01000000,
    0b00100000,
    0b00010000,
    0b00001000,
    0b00000100,
    },
    { /* chr: '0' (5 wide) */
    5,
    0b00111100,
    0b01010010,
    0b01001010,
    0b00111100,
    0b00000000,
    },
    { /* chr: '1' (4 wide) */
    4,
    0b01000100,
    0b01111110,
    0b01000000,
    0b00000000,
    0b00000000,
    },
    { /* chr: '2' (5 wide) */
    5,
    0b01100100,
    0b01010010,
    0b01001010,
    0b01000100,
    0b00000000,
    },
    { /* chr: '3' (5 wide) */
    5,
    0b01000010,
    0b01001010,
    0b01001010,
    0b00110100,
    0b00000000,
    },
    { /* chr: '4' (5 wide) */
    5,
    0b00011110,
    0b00010000,
    0b01111100,
    0b00010000,
    0b00000000,
    },
    { /* chr: '5' (5 wide) */
    5,
    0b01001110,
    0b01001010,
    0b01001010,
    0b00110010,
    0b00000000,
    },
    { /* chr: '6' (5 wide) */
    5,
    0b00111100,
    0b01001010,
    0b01001010,
    0b00110010,
    0b00000000,
    },
    { /* chr: '7' (5 wide) */
    5,
    0b00000010,
    0b01110010,
    0b00001010,
    0b00000110,
    0b00000000,
    },
    { /* chr: '8' (5 wide) */
    5,
    0b00110100,
    0b01001010,
    0b01001010,
    0b00110100,
    0b00000000,
    },
    { /* chr: '9' (5 wide) */
    5,
    0b00001100,
    0b01010010,
    0b01010010,
    0b00111100,
    0b00000000,
    },
    { /* chr: ':' (2 wide) */
    2,
    0b00100100,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    },
    { /* chr: ';' (3 wide) */
    3,
    0b01000000,
    0b00100100,
    0b00000000,
    0b00000000,
    0b00000000,
    },
    { /* chr: '<' (4 wide) */
    4,
    0b00010000,
    0b00101000,
    0b01000100,
    0b00000000,
    0b00000000,
    },
    { /* chr: '=' (4 wide) */
    4,
    0b00101000,
    0b00101000,
    0b00101000,
    0b00000000,
    0b00000000,
    },
    { /* chr: '>' (4 wide) */
    4,
    0b01000100,
    0b00101000,
    0b00010000,
    0b00000000,
    0b00000000,
    },
    { /* chr: '?' (5 wide) */
    5,
    0b00000100,
    0b01010010,
    0b00001010,
    0b00000100,
    0b00000000,
    },
    { /* chr: '@' (6 wide) */
    6,
    0b00111000,
    0b00000100,
    0b00110100,
    0b01000100,
    0b00111000,
    },
    { /* chr: 'A' (5 wide) */
    5,
    0b01111100,
    0b00010010,
    0b00010010,
    0b01111100,
    0b00000000,
    },
    { /* chr: 'B' (5 wide) */
    5,
    0b01111110,
    0b01001010,
    0b01001010,
    0b00110100,
    0b00000000,
    },
    { /* chr: 'C' (5 wide) */
    5,
    0b00111100,
    0b01000010,
    0b01000010,
    0b00100100,
    0b00000000,
    },
    { /* chr: 'D' (5 wide) */
    5,
    0b01111110,
    0b01000010,
    0b01000010,
    0b00111100,
    0b00000000,
    },
    { /* chr: 'E' (5 wide) */
    5,
    0b01111110,
    0b01001010,
    0b01001010,
    0b01000010,
    0b00000000,
    },
    { /* chr: 'F' (5 wide) */
    5,
    0b01111110,
    0b00001010,
    0b00001010,
    0b00000010,
    0b00000000,
    },
    { /* chr: 'G' (5 wide) */
    5,
    0b00111100,
    0b01000010,
    0b01010010,
    0b00110100,
    0b00000000,
    },
    { /* chr: 'H' (5 wide) */
    5,
    0b01111110,
    0b00001000,
    0b00001000,
    0b01111110,
    0b00000000,
    },
    { /* chr: 'I' (2 wide) */
    2,
    0b01111110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    },
    { /* chr: 'J' (4 wide) */
    4,
    0b00100000,
    0b01000000,
    0b00111110,
    0b00000000,
    0b00000000,
    },
    { /* chr: 'K' (6 wide) */
    6,
    0b01111110,
    0b00001000,
    0b00010100,
    0b00100010,
    0b01000000,
    },
    { /* chr: 'L' (5 wide) */
    5,
    0b01111110,
    0b01000000,
    0b01000000,
    0b01000000,
    0b00000000,
    },
    { /* chr: 'M' (6 wide) */
    6,
    0b01111110,
    0b00000100,
    0b00001000,
    0b00000100,
    0b01111110,
    },
    { /* chr: 'N' (6 wide) */
    6,
    0b01111110,
    0b00000100,
    0b00001000,
    0b00010000,
    0b01111110,
    },
    { /* chr: 'O' (5 wide) */
    5,
    0b00111100,
    0b01000010,
    0b01000010,
    0b00111100,
    0b00000000,
    },
    { /* chr: 'P' (5 wide) */
    5,
    0b01111110,
    0b00010010,
    0b00010010,
    0b00001100,
    0b00000000,
    },
    { /* chr: 'Q' (5 wide) */
    5,
    0b00111100,
    0b01000010,
    0b00100010,
    0b01011100,
    0b00000000,
    },
    { /* chr: 'R' (5 wide) */
    5,
    0b01111110,
    0b00010010,
    0b00110010,
    0b01001100,
    0b00000000,
    },
    { /* chr: 'S' (5 wide) */
    5,
    0b00100100,
    0b01001010,
    0b01010010,
    0b00100100,
    0b00000000,
    },
    { /* chr: 'T' (6 wide) */
    6,
    0b00000010,
    0b00000010,
    0b01111110,
    0b00000010,
    0b00000010,
    },
    { /* chr: 'U' (5 wide) */
    5,
    0b00111110,
    0b01000000,
    0b01000000,
    0b00111110,
    0b00000000,
    },
    { /* chr: 'V' (6 wide) */
    6,
    0b00001110,
    0b00110000,
    0b01000000,
    0b00110000,
    0b00001110,
    },
    { /* chr: 'W' (6 wide) */
    6,
    0b00111110,
    0b01000000,
    0b00100000,
    0b01000000,
    0b00111110,
    },
    { /* chr: 'X' (6 wide) */
    6,
    0b01000010,
    0b00100100,
    0b00011000,
    0b00100100,
    0b01000010,
    },
    { /* chr: 'Y' (6 wide) */
    6,
    0b00000110,
    0b00001000,
    0b01110000,
    0b00001000,
    0b00000110,
    },
    { /* chr: 'Z' (5 wide) */
    5,
    0b01100010,
    0b01010010,
    0b01001010,
    0b01000110,
    0b00000000,
    },
    { /* chr: '[' (3 wide) */
    3,
    0b01111110,
    0b01000010,
    0b00000000,
    0b00000000,
    0b00000000,
    },
    { /* chr: '\' (6 wide) */
    6,
    0b00000100,
    0b00001000,
    0b00010000,
    0b00100000,
    0b01000000,
    },
    { /* chr: ']' (3 wide) */
    3,
    0b01000010,
    0b01111110,
    0b00000000,
    0b00000000,
    0b00000000,
    },
    { /* chr: '^' (4 wide) */
    4,
    0b00000100,
    0b00000010,
    0b00000100,
    0b00000000,
    0b00000000,
    },
    { /* chr: '_' (5 wide) */
    5,
    0b01000000,
    0b01000000,
    0b01000000,
    0b01000000,
    0b00000000,
    },
    { /* chr: 'a' (6 wide) */
    6,
    0b00100000,
    0b01010100,
    0b01010100,
    0b01010100,
    0b01111000,
    },
    { /* chr: 'b' (6 wide) */
    6,
    0b01111111,
    0b01001000,
    0b01000100,
    0b01000100,
    0b00111000,
    },
    { /* chr: 'c' (6 wide) */
    6,
    0b00111000,
    0b01000100,
    0b01000100,
    0b01000100,
    0b00100000,
    },
    { /* chr: 'd' (6 wide) */
    6,
    0b00111000,
    0b01000100,
    0b01000100,
    0b01001000,
    0b01111111,
    },
    { /* chr: 'e' (6 wide) */
    6,
    0b00111000,
    0b01010100,
    0b01010100,
    0b01010100,
    0b00011000,
    },
    { /* chr: 'f' (6 wide) */
    6,
    0b00001000,
    0b01111110,
    0b00001001,
    0b00000001,
    0b00000010,
    },
    { /* chr: 'g' (6 wide) */
    6,
    0b00011000,
    0b10100100,
    0b10100100,
    0b10100100,
    0b01111100,
    },
    { /* chr: 'h' (6 wide) */
    6,
    0b01111111,
    0b00001000,
    0b00000100,
    0b00000100,
    0b01111000,
    },
    { /* chr: 'i' (6 wide) */
    6,
    0b00000000,
    0b01000100,
    0b01111101,
    0b01000000,
    0b00000000,
    },
    { /* chr: 'j' (6 wide) */
    6,
    0b01000000,
    0b10000000,
    0b10000100,
    0b01111101,
    0b00000000,
    },
    { /* chr: 'k' (6 wide) */
    6,
    0b01111111,
    0b00010000,
    0b00101000,
    0b01000100,
    0b00000000,
    },
    { /* chr: 'l' (6 wide) */
    6,
    0b00000000,
    0b01000001,
    0b01111111,
    0b01000000,
    0b00000000,
    },
    { /* chr: 'm' (6 wide) */
    6,
    0b01111100,
    0b00000100,
    0b00011000,
    0b00000100,
    0b01111000,
    },
    { /* chr: 'n' (6 wide) */
    6,
    0b01111100,
    0b00001000,
    0b00000100,
    0b00000100,
    0b01111000,
    },
    { /* chr: 'o' (6 wide) */
    6,
    0b00111000,
    0b01000100,
    0b01000100,
    0b01000100,
    0b00111000,
    },
    { /* chr: 'p' (6 wide) */
    6,
    0b11111100,
    0b00100100,
    0b00100100,
    0b00100100,
    0b00011000,
    },
    { /* chr: 'q' (6 wide) */
    6,
    0b00011000,
    0b00100100,
    0b00100100,
    0b00011000,
    0b11111100,
    },
    { /* chr: 'r' (6 wide) */
    6,
    0b01111100,
    0b00001000,
    0b00000100,
    0b00000100,
    0b00001000,
    },
    { /* chr: 's' (6 wide) */
    6,
    0b01001000,
    0b01010100,
    0b01010100,
    0b01010100,
    0b00100000,
    },
    { /* chr: 't' (6 wide) */
    6,
    0b00000100,
    0b00111111,
    0b01000100,
    0b01000000,
    0b00100000,
    },
    { /* chr: 'u' (6 wide) */
    6,
    0b00111100,
    0b01000000,
    0b01000000,
    0b00100000,
    0b01111100,
    },
    { /* chr: 'v' (6 wide) */
    6,
    0b00011100,
    0b00100000,
    0b01000000,
    0b00100000,
    0b00011100,
    },
    { /* chr: 'w' (6 wide) */
    6,
    0b00111100,
    0b01000000,
    0b00110000,
    0b01000000,
    0b00111100,
    },
    { /* chr: 'x' (6 wide) */
    6,
    0b01000100,
    0b00101000,
    0b00010000,
    0b00101000,
    0b01000100,
    },
    { /* chr: 'y' (6 wide) */
    6,
    0b00011100,
    0b10100000,
    0b10100000,
    0b10100000,
    0b01111100,
    },
    { /* chr: 'z' (6 wide) */
    6,
    0b01000100,
    0b01100100,
    0b01010100,
    0b01001100,
    0b01000100,
    }
};


//******* VERY LARGE FONTS ********** 16x24
//used here for displaying temperature

// Font is encoded rotated to the right 90 degrees in three parts: Top, Middle, Bottom
const unsigned char big_number[13] [3] [16] PROGMEM = 
{
	{ // CHAR '0'
		{
		0b00000000, 
		0b11000000, 
		0b11110000, 
		0b11111000, 
		0b00111100, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00111100, 
		0b11111000, 
		0b11110000, 
		0b11000000, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
		,
		{
		0b00000000, 
		0b11111111, 
		0b11111111, 
		0b11111111, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b11111111, 
		0b11111111, 
		0b11111111, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
		,
		{
		0b00000000, 
		0b00000011, 
		0b00001111, 
		0b00011111, 
		0b00111100, 
		0b00110000, 
		0b00110000, 
		0b00110000, 
		0b00110000, 
		0b00111100, 
		0b00011111, 
		0b00001111, 
		0b00000011, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
	} // End of CHAR '0'
	,
	{ // CHAR '1'
		{
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b01100000, 
		0b01110000, 
		0b01111000, 
		0b11111100, 
		0b11111100, 
		0b11111100, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
		,
		{
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b11111111, 
		0b11111111, 
		0b11111111, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
		,
		{
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00110000, 
		0b00110000, 
		0b00110000, 
		0b00111111, 
		0b00111111, 
		0b00111111, 
		0b00110000, 
		0b00110000, 
		0b00110000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
	} // End of CHAR '1'
	,
	{ // CHAR '2'
		{
		0b00000000, 
		0b00100000, 
		0b00110000, 
		0b00111000, 
		0b00011100, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00011100, 
		0b11111000, 
		0b11110000, 
		0b11100000, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
		,
		{
		0b00000000, 
		0b10000000, 
		0b11000000, 
		0b11100000, 
		0b01100000, 
		0b00110000, 
		0b00011000, 
		0b00011100, 
		0b00001110, 
		0b00000111, 
		0b00000011, 
		0b00000001, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
		,
		{
		0b00000000, 
		0b00111111, 
		0b00111111, 
		0b00111111, 
		0b00110000, 
		0b00110000, 
		0b00110000, 
		0b00110000, 
		0b00110000, 
		0b00110000, 
		0b00110000, 
		0b00110000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
	} // End of CHAR '2'
	,
	{ // CHAR '3'
		{
		0b00000000, 
		0b01000000, 
		0b01100000, 
		0b01110000, 
		0b00111000, 
		0b00011000, 
		0b00011000, 
		0b00011000, 
		0b00011000, 
		0b00111000, 
		0b11110000, 
		0b11100000, 
		0b11000000, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
		,
		{
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00011000, 
		0b00011000, 
		0b00011000, 
		0b00011000, 
		0b00111000, 
		0b00111100, 
		0b11111111, 
		0b11100111, 
		0b11000111, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
		,
		{
		0b00000000, 
		0b00000110, 
		0b00001110, 
		0b00011110, 
		0b00111000, 
		0b00110000, 
		0b00110000, 
		0b00110000, 
		0b00110000, 
		0b00111000, 
		0b00011111, 
		0b00001111, 
		0b00000111, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
	} // End of CHAR '3'
	,
	{ // CHAR '4'
		{
		0b00000000, 
		0b00000000, 
		0b10000000, 
		0b11000000, 
		0b11100000, 
		0b01110000, 
		0b00110000, 
		0b00011000, 
		0b00001100, 
		0b11111100, 
		0b11111100, 
		0b11111100, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
		,
		{
		0b00000000, 
		0b00111111, 
		0b00111111, 
		0b00110001, 
		0b00110000, 
		0b00110000, 
		0b00110000, 
		0b00110000, 
		0b00110000, 
		0b11111111, 
		0b11111111, 
		0b11111111, 
		0b00110000, 
		0b00110000, 
		0b00000000, 
		0b00000000
		}
		,
		{
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00111111, 
		0b00111111, 
		0b00111111, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
	} // End of CHAR '4'
	,
	{ // CHAR '5'
		{
		0b00000000, 
		0b11111100, 
		0b11111100, 
		0b11111100, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
		,
		{
		0b00000000, 
		0b00000111, 
		0b00000111, 
		0b00000111, 
		0b00000110, 
		0b00000110, 
		0b00000110, 
		0b00000110, 
		0b00000110, 
		0b00001110, 
		0b11111110, 
		0b11111100, 
		0b11111000, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
		,
		{
		0b00000000, 
		0b00000110, 
		0b00001110, 
		0b00011110, 
		0b00111000, 
		0b00110000, 
		0b00110000, 
		0b00110000, 
		0b00110000, 
		0b00111000, 
		0b00011111, 
		0b00001111, 
		0b00000111, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
	} // End of CHAR '5'
	,
	{ // CHAR '6'
		{
		0b00000000, 
		0b11110000, 
		0b11111000, 
		0b11111000, 
		0b00011100, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00011100, 
		0b00011000, 
		0b00011000, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
		,
		{
		0b00000000, 
		0b11111111, 
		0b11111111, 
		0b11111111, 
		0b00011000, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00011100, 
		0b11111000, 
		0b11111000, 
		0b11110000, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
		,
		{
		0b00000000, 
		0b00000111, 
		0b00001111, 
		0b00011111, 
		0b00111000, 
		0b00110000, 
		0b00110000, 
		0b00110000, 
		0b00110000, 
		0b00111000, 
		0b00011111, 
		0b00001111, 
		0b00000111, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
	} // End of CHAR '6'
	,
	{ // CHAR '7'
		{
		0b00000000, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b11111100, 
		0b11111100, 
		0b11111100, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
		,
		{
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b11000000, 
		0b11110000, 
		0b11111100, 
		0b00111111, 
		0b00001111, 
		0b00000011, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
		,
		{
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00111111, 
		0b00111111, 
		0b00111111, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
	} // End of CHAR '7'
	,
	{ // CHAR '8'
		{
		0b00000000, 
		0b11110000, 
		0b11111000, 
		0b11111000, 
		0b00011100, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00011100, 
		0b11111000, 
		0b11111000, 
		0b11110000, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
		,
		{
		0b00000000, 
		0b11110001, 
		0b11110011, 
		0b11111111, 
		0b00011110, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00011110, 
		0b11111011, 
		0b11111011, 
		0b11110001, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
		,
		{
		0b00000000, 
		0b00000111, 
		0b00001111, 
		0b00011111, 
		0b00111000, 
		0b00110000, 
		0b00110000, 
		0b00110000, 
		0b00110000, 
		0b00111000, 
		0b00011111, 
		0b00001111, 
		0b00000111, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
	} // End of CHAR '8'
	,
	{ // CHAR '9'
		{
		0b00000000, 
		0b11110000, 
		0b11111000, 
		0b11111000, 
		0b00011100, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b11111100, 
		0b11111000, 
		0b11111000, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
		,
		{
		0b00000000, 
		0b00000001, 
		0b00000011, 
		0b00000111, 
		0b00001110, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b00001100, 
		0b11111111, 
		0b11111111, 
		0b11111111, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
		,
		{
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
		0b00111111, 
		0b00111111, 
		0b00111111, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
	} // End of CHAR '9'
	,
	{ // CHAR '.'
		{
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
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
		,
		{
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
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
		,
		{
		0b00000000, 
		0b00000000, 
		0b00111000, 
		0b00111000, 
		0b00111000, 
		0b00111000, 
		0b00111000, 
		0b00111000, 
		0b00111000, 
		0b00111000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
	} // End of CHAR '.'
	,
	{ // CHAR '+'
		{
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b11110000, 
		0b11110000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
		,
		{
		0b00000000, 
		0b00011000, 
		0b00011000, 
		0b00011000, 
		0b00011000, 
		0b00011000, 
		0b11111111, 
		0b11111111, 
		0b00011000, 
		0b00011000, 
		0b00011000, 
		0b00011000, 
		0b00011000, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
		,
		{
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00011111, 
		0b00011111, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
	} // End of CHAR '+'
	,
	{ // CHAR '-'
		{
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
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
		,
		{
		0b00000000, 
		0b00011000, 
		0b00011000, 
		0b00011000, 
		0b00011000, 
		0b00011000, 
		0b00011000, 
		0b00011000, 
		0b00011000, 
		0b00011000, 
		0b00011000, 
		0b00011000, 
		0b00011000, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
		,
		{
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
		0b00000000, 
		0b00000000, 
		0b00000000, 
		0b00000000
		}
	} // End of CHAR '-'
};

const unsigned char font4_5[] [6] PROGMEM =
{

	{
		4,
		0b11110,
		0b00101,
		0b00101,
		0b11110,
		0b00000 },

	{
		4,
		0b11111,
		0b10101,
		0b10101,
		0b01010,
		0b00000 },

	{
		4,
		0b01110,
		0b10001,
		0b10001,
		0b10001,
		0b00000 },

	{
		4,
		0b11111,
		0b10001,
		0b10001,
		0b01110,
		0b00000 },

	{
		4,
		0b11111,
		0b10101,
		0b10101,
		0b10001,
		0b00000 },

	{
		4,
		0b11111,
		0b00101,
		0b00101,
		0b00001,
		0b00000 },

	{
		4,
		0b01110,
		0b10001,
		0b10101,
		0b11101,
		0b00000 },

	{
		4,
		0b11111,
		0b00100,
		0b00100,
		0b11111,
		0b00000 },

	{
		3,
		0b10001,
		0b11111,
		0b10001,
		0b00000,
		0b00000 },

	{
		4,
		0b01000,
		0b10001,
		0b01111,
		0b00001,
		0b00000 },

	{
		4,
		0b11111,
		0b00100,
		0b01010,
		0b10001,
		0b00000 },

	{
		4,
		0b11111,
		0b10000,
		0b10000,
		0b10000,
		0b00000 },

	{
		5,
		0b11111,
		0b00010,
		0b00100,
		0b00010,
		0b11111 },

	{
		4,
		0b11111,
		0b00010,
		0b00100,
		0b11111,
		0b00000 },

	{
		4,
		0b01110,
		0b10001,
		0b10001,
		0b01110,
		0b00000 },

	{
		4,
		0b11111,
		0b01001,
		0b01001,
		0b00110,
		0b00000 },

	{
		4,
		0b01110,
		0b10001,
		0b11001,
		0b11110,
		0b00000 },

	{
		4,
		0b11111,
		0b01001,
		0b01001,
		0b10110,
		0b00000 },

	{
		4,
		0b10010,
		0b10101,
		0b10101,
		0b01001,
		0b00000 },

	{
		3,
		0b00001,
		0b11111,
		0b00001,
		0b00000,
		0b00000 },

	{
		4,
		0b01111,
		0b10000,
		0b10000,
		0b01111,
		0b00000 },

	{
		3,
		0b01111,
		0b10000,
		0b01111,
		0b00000,
		0b00000 },

	{
		5,
		0b11111,
		0b01000,
		0b00100,
		0b01000,
		0b11111 },

	{
		4,
		0b11011,
		0b00100,
		0b00100,
		0b11011,
		0b00000 },

	{
		3,
		0b00011,
		0b11100,
		0b00011,
		0b00000,
		0b00000 },

	{
		4,
		0b11001,
		0b10101,
		0b10101,
		0b10011 },

// Numbers //

	{
		3,
		0b01110,
		0b10101,
		0b01110,
		0b00000 },

	{
		3,
		0b10010,
		0b11111,
		0b10000,
		0b00000 },

	{
		3,
		0b11001,
		0b10101,
		0b10010,
		0b00000 },

	{
		3,
		0b10001,
		0b10101,
		0b01010,
		0b00000 },

	{
		3,
		0b00111,
		0b00100,
		0b11111,
		0b00000 },

	{
		3,
		0b10111,
		0b10101,
		0b01001,
		0b00000 },

	{
		3,
		0b11110,
		0b10101,
		0b11101,
		0b00000 },

	{
		3,
		0b11001,
		0b00101,
		0b00011,
		0b00000 },

	{
		3,
		0b01010,
		0b10101,
		0b01010,
		0b00000 },

	{
		3,
		0b10111,
		0b10101,
		0b01111,
		0b00000 },

};

