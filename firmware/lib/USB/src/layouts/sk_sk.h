#pragma once

#define SHIFT 0x80

// Slovak keyboard layout mapping for Arduino HID
const uint8_t sk_sk[128] = {
  0x00,  // NUL - Nulový znak
  0x00,  // SOH - Začiatok hlavičky
  0x00,  // STX - Začiatok textu
  0x00,  // ETX - Koniec textu
  0x00,  // EOT - Koniec prenosu
  0x00,  // ENQ - Požiadavka
  0x00,  // ACK - Potvrdenie
  0x00,  // BEL - Zvonček
  0x2a,  // BS  - Backspace (Späť)
  0x2b,  // TAB - Tabulátor
  0x28,  // LF  - Enter (Nový riadok)
  0x00,  // VT  - Vertikálny tabulátor
  0x00,  // FF  - Posun stránky
  0x00,  // CR  - Návrat vozíka
  0x00,  // SO  - Shift Out
  0x00,  // SI  - Shift In
  0x00,  // DEL - Delete (Zmazať)
  0x00,  // DC1 - Ovládanie zariadenia 1
  0x00,  // DC2 - Ovládanie zariadenia 2
  0x00,  // DC3 - Ovládanie zariadenia 3
  0x00,  // DC4 - Ovládanie zariadenia 4
  0x00,  // NAK - Negatívne potvrdenie
  0x00,  // SYN - Synchronizácia
  0x00,  // ETB - Koniec prenosového bloku
  0x00,  // CAN - Zrušenie
  0x00,  // EM  - Koniec média
  0x00,  // SUB - Náhrada
  0x00,  // ESC - Escape
  0x00,  // FS  - Oddeľovač súborov
  0x00,  // GS  - Oddeľovač skupín
  0x00,  // RS  - Oddeľovač záznamov
  0x00,  // US  - Oddeľovač jednotiek

  0x2c,          // Medzerník
  0x1e | SHIFT,  // ! (Výkričník)
  0x1f | SHIFT,  // " (Úvodzovky)
  0x20 | SHIFT,  // # (Mriežka)
  0x21 | SHIFT,  // $ (Dolár)
  0x22 | SHIFT,  // % (Percento)
  0x23 | SHIFT,  // & (Ampersand)
  0x24 | SHIFT,  // ' (Apostrof)
  0x25 | SHIFT,  // ( (Ľavá zátvorka)
  0x26 | SHIFT,  // ) (Pravá zátvorka)
  0x38 | SHIFT,  // * (Hviezdička)
  0x30 | SHIFT,  // + (Plus)
  0x36,          // , (Čiarka)
  0x38,          // - (Mínus)
  0x37,          // . (Bodka)
  0x2d | SHIFT,  // / (Lomka)
  0x27,          // 0
  0x1e,          // 1
  0x1f,          // 2
  0x20,          // 3
  0x21,          // 4
  0x22,          // 5
  0x23,          // 6
  0x24,          // 7
  0x25,          // 8
  0x26,          // 9
  0x37 | SHIFT,  // : (Dvojbodka)
  0x36 | SHIFT,  // ; (Bodkočiarka)
  0x64,          // < (Menší ako)
  0x27 | SHIFT,  // = (Rovná sa)
  0x64 | SHIFT,  // > (Väčší ako)
  0x2d,          // ? (Otáznik)
  0x19 | SHIFT,  // @ (Zavináč)
  0x04 | SHIFT,  // A
  0x05 | SHIFT,  // B
  0x06 | SHIFT,  // C
  0x07 | SHIFT,  // D
  0x08 | SHIFT,  // E
  0x09 | SHIFT,  // F
  0x0a | SHIFT,  // G
  0x0b | SHIFT,  // H
  0x0c | SHIFT,  // I
  0x0d | SHIFT,  // J
  0x0e | SHIFT,  // K
  0x0f | SHIFT,  // L
  0x10 | SHIFT,  // M
  0x11 | SHIFT,  // N
  0x12 | SHIFT,  // O
  0x13 | SHIFT,  // P
  0x14 | SHIFT,  // Q
  0x15 | SHIFT,  // R
  0x16 | SHIFT,  // S
  0x17 | SHIFT,  // T
  0x18 | SHIFT,  // U
  0x19 | SHIFT,  // V
  0x1a | SHIFT,  // W
  0x1b | SHIFT,  // X
  0x1c | SHIFT,  // Y
  0x1d | SHIFT,  // Z
  0x2f,          // [ (Ľavá hranatá zátvorka) 
  0x35,          // \ (Spätná lomka)
  0x30,          // ] (Pravá hranatá zátvorka)
  0x2e | SHIFT,  // ^ (Strieška)
  0x38 | SHIFT,  // _ (Podčiarkovník)
  0x2f | SHIFT,  // ` (Spätný apostrof)
  0x04,          // a
  0x05,          // b
  0x06,          // c
  0x07,          // d
  0x08,          // e
  0x09,          // f
  0x0a,          // g
  0x0b,          // h
  0x0c,          // i
  0x0d,          // j
  0x0e,          // k
  0x0f,          // l
  0x10,          // m
  0x11,          // n
  0x12,          // o
  0x13,          // p
  0x14,          // q
  0x15,          // r
  0x16,          // s
  0x17,          // t
  0x18,          // u
  0x19,          // v
  0x1a,          // w
  0x1b,          // x
  0x1c,          // y
  0x1d,          // z
  0x2f | SHIFT,  // { (Ľavá zložená zátvorka)
  0x35 | SHIFT,  // | (Zvislá čiara)
  0x30 | SHIFT,  // } (Pravá zložená zátvorka)
  0x2e | SHIFT,  // ~ (Vlnovka)
  0              // DEL (Delete)
};