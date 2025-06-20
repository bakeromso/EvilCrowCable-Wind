#pragma once

#define SHIFT 0x80
#define ALTGR 0x40

const uint8_t be_be[128] = {
    0x00,  // NUL
    0x00,  // SOH
    0x00,  // STX
    0x00,  // ETX
    0x00,  // EOT
    0x00,  // ENQ
    0x00,  // ACK
    0x00,  // BEL
    0x2a,  // BS   Backspace
    0x2b,  // TAB  Tab
    0x28,  // LF   Enter
    0x00,  // VT
    0x00,  // FF
    0x00,  // CR
    0x00,  // SO
    0x00,  // SI
    0x00,  // DEL
    0x00,  // DC1
    0x00,  // DC2
    0x00,  // DC3
    0x00,  // DC4
    0x00,  // NAK
    0x00,  // SYN
    0x00,  // ETB
    0x00,  // CAN
    0x00,  // EM
    0x00,  // SUB
    0x00,  // ESC
    0x00,  // FS
    0x00,  // GS
    0x00,  // RS
    0x00,  // US

    0x2c,         // ' '
    0x25,         // !
    0x1e | ALTGR, // "
    0x20 | ALTGR, // #
    0x30,         // $
    0x34 | SHIFT, // %
    0x1e,         // &
    0x21,         // '
    0x22,         // (
    0x2d,         // )
    0x30 | SHIFT, // *
    0x38 | SHIFT, // +
    0x10,         // ,
    0x37,         // -
    0x36 | SHIFT, // .
    0x37 | SHIFT, // /
    0x27,         // 0
    0x1e | SHIFT, // 1
    0x1f | SHIFT, // 2
    0x20 | SHIFT, // 3
    0x21 | SHIFT, // 4
    0x22 | SHIFT, // 5
    0x23 | SHIFT, // 6
    0x24 | SHIFT, // 7
    0x25 | SHIFT, // 8
    0x26 | SHIFT, // 9
    0x37,         // :
    0x36,         // ;
    0x03,         // <
    0x38,         // =
    0x03 | SHIFT, // >
    0x10 | SHIFT, // ?
    0x1f | ALTGR, // @
    0x14 | SHIFT, // A
    0x05 | SHIFT, // B
    0x06 | SHIFT, // C
    0x07 | SHIFT, // D
    0x08 | SHIFT, // E
    0x09 | SHIFT, // F
    0x0a | SHIFT, // G
    0x0b | SHIFT, // H
    0x0c | SHIFT, // I
    0x0d | SHIFT, // J
    0x0e | SHIFT, // K
    0x0f | SHIFT, // L
    0x33 | SHIFT, // M
    0x11 | SHIFT, // N
    0x12 | SHIFT, // O
    0x13 | SHIFT, // P
    0x04 | SHIFT, // Q
    0x15 | SHIFT, // R
    0x16 | SHIFT, // S
    0x17 | SHIFT, // T
    0x18 | SHIFT, // U
    0x19 | SHIFT, // V
    0x1d | SHIFT, // W
    0x1b | SHIFT, // X
    0x1c | SHIFT, // Y
    0x1a | SHIFT, // Z
    0x2f | ALTGR, // [
    0x03 | ALTGR, // backslash
    0x30 | ALTGR, // ]
    0x23 | ALTGR, // ^
    0x2e | SHIFT, // _
    0x31 | ALTGR, // `
    0x14,         // a
    0x05,         // b
    0x06,         // c
    0x07,         // d
    0x08,         // e
    0x09,         // f
    0x0a,         // g
    0x0b,         // h
    0x0c,         // i
    0x0d,         // j
    0x0e,         // k
    0x0f,         // l
    0x33,         // m
    0x11,         // n
    0x12,         // o
    0x13,         // p
    0x04,         // q
    0x15,         // r
    0x16,         // s
    0x17,         // t
    0x18,         // u
    0x19,         // v
    0x1d,         // w
    0x1b,         // x
    0x1c,         // y
    0x1a,         // z
    0x26 | ALTGR, // {
    0x1e | ALTGR, // |
    0x27 | ALTGR, // }
    0x38 | ALTGR, // ~
    0x00          // DEL
};
