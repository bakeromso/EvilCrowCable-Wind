#pragma once

#define SHIFT 0x80

// Czech keyboard layout mapping for Arduino HID
const uint8_t cz_cz[128] = {
  0x00,  // NUL - Nulový znak
  0x00,  // SOH - Začátek hlavičky
  0x00,  // STX - Začátek textu
  0x00,  // ETX - Konec textu
  0x00,  // EOT - Konec přenosu
  0x00,  // ENQ - Dotaz
  0x00,  // ACK - Potvrzení
  0x00,  // BEL - Zvonek
  0x2a,  // BS  - Backspace (Zpět)
  0x2b,  // TAB - Tabulátor
  0x28,  // LF  - Enter (Nový řádek)
  0x00,  // VT  - Vertikální tabulátor
  0x00,  // FF  - Posun stránky
  0x00,  // CR  - Návrat vozíku
  0x00,  // SO  - Shift Out
  0x00,  // SI  - Shift In
  0x00,  // DEL - Delete (Smazat)
  0x00,  // DC1 - Ovládání zařízení 1
  0x00,  // DC2 - Ovládání zařízení 2
  0x00,  // DC3 - Ovládání zařízení 3
  0x00,  // DC4 - Ovládání zařízení 4
  0x00,  // NAK - Negativní potvrzení
  0x00,  // SYN - Synchronizace
  0x00,  // ETB - Konec přenosového bloku
  0x00,  // CAN - Zrušení
  0x00,  // EM  - Konec média
  0x00,  // SUB - Náhrada
  0x00,  // ESC - Escape
  0x00,  // FS  - Oddělovač souborů
  0x00,  // GS  - Oddělovač skupin
  0x00,  // RS  - Oddělovač záznamů
  0x00,  // US  - Oddělovač jednotek

  0x2c,          // Mezerník
  0x1e | SHIFT,  // ! (Vykřičník)
  0x1f | SHIFT,  // " (Uvozovky)
  0x20 | SHIFT,  // # (Křížek)
  0x21 | SHIFT,  // $ (Dolar)
  0x22 | SHIFT,  // % (Procento)
  0x23 | SHIFT,  // & (Ampersand)
  0x24 | SHIFT,  // ' (Apostrof)
  0x25 | SHIFT,  // ( (Levá závorka)
  0x26 | SHIFT,  // ) (Pravá závorka)
  0x38 | SHIFT,  // * (Hvězdička)
  0x30 | SHIFT,  // + (Plus)
  0x36,          // , (Čárka)
  0x38,          // - (Mínus)
  0x37,          // . (Tečka)
  0x2d | SHIFT,  // / (Lomítko)
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
  0x37 | SHIFT,  // : (Dvojtečka)
  0x36 | SHIFT,  // ; (Středník)
  0x64,          // < (Menší než)
  0x27 | SHIFT,  // = (Rovná se)
  0x64 | SHIFT,  // > (Větší než)
  0x2d,          // ? (Otazník)
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
  0x2f,          // [ (Levá hranatá závorka)
  0x35,          // \ (Zpětné lomítko)
  0x30,          // ] (Pravá hranatá závorka)
  0x2e | SHIFT,  // ^ (Stříška)
  0x38 | SHIFT,  // _ (Podtržítko)
  0x2f | SHIFT,  // ` (Zpětný apostrof)
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
  0x2f | SHIFT,  // { (Levá složená závorka)
  0x35 | SHIFT,  // | (Svislá čára)
  0x30 | SHIFT,  // } (Pravá složená závorka)
  0x2e | SHIFT,  // ~ (Vlnovka)
  0              // DEL (Delete)
};
