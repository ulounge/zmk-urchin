/**
 * This file includes custom keycodes for the italian input language setting.
 * If you only type in english, you can delete this file and it's import.
 * If you wish to replace this file with your preferred language, use
 * the qmk version as reference:
 * https://github.com/qmk/qmk_firmware/tree/master/quantum/keymap_extras
*/


/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ² │ & │ é │ " │ ' │ ( │ - │ è │ _ │ ç │ à │ ) │ = │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ A │ Z │ E │ R │ T │ Y │ U │ I │ O │ P │ ^ │ $ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ Q │ S │ D │ F │ G │ H │ J │ K │ L │ M │ ù │ * │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ W │ X │ C │ V │ B │ N │ , │ ; │ : │ ! │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_SUP2 GRAVE           // ²
#define FR_AMPR N1              // &
#define FR_EACU N2              // é
#define FR_DQUO N3              // "
#define FR_QUOT N4              // '
#define FR_LPRN N5              // (
#define FR_MINS N6              // -
#define FR_EGRV N7              // è
#define FR_UNDS N8              // _
#define FR_CCED N9              // ç
#define FR_AGRV N0              // à
#define FR_RPRN MINUS           // )
#define FR_EQL  EQUAL           // =

// Row 2
#define FR_A    Q               // A
#define FR_Z    W               // Z
#define FR_E    E               // E
#define FR_R    R               // R
#define FR_T    T               // T
#define FR_Y    Y               // Y
#define FR_U    U               // U
#define FR_I    I               // I
#define FR_O    O               // O
#define FR_P    P               // P
#define FR_CIRC LBKT            // ^ (dead)
#define FR_DLR RBKT             // $

// Row 3
#define FR_Q    A               // Q
#define FR_S    S               // S
#define FR_D    D               // D
#define FR_F    F               // F
#define FR_G    G               // G
#define FR_H    H               // H
#define FR_J    J               // J
#define FR_K    K               // K
#define FR_L    L               // L
#define FR_M    SEMI            // M
#define FR_UGRV APOS            // ù
#define FR_ASTR NON_US_HASH     // *

// Row 4
#define FR_LABK NON_US_BSLH     // <
#define FR_W    Z               // W
#define FR_X    X               // X
#define FR_C    C               // C
#define FR_V    V               // V
#define FR_B    B               // B
#define FR_N    N               // N
#define FR_COMM M               // ,
#define FR_SCLN COMMA           // ;
#define FR_COLN DOT             // :
#define FR_EXLM SLASH           // !


/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ° │ + │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ ¨ │ £ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │ % │ µ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │ ? │ . │ / │ § │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_1    LS(FR_AMPR)      // 1
#define FR_2    LS(FR_EACU)      // 2
#define FR_3    LS(FR_DQUO)      // 3
#define FR_4    LS(FR_QUOT)      // 4
#define FR_5    LS(FR_LPRN)      // 5
#define FR_6    LS(FR_MINLS)     // 6
#define FR_7    LS(FR_EGRV)      // 7
#define FR_8    LS(FR_UNDLS)     // 8
#define FR_9    LS(FR_CCED)      // 9
#define FR_0    LS(FR_AGRV)      // 0
#define FR_DEG  LS(FR_RPRN)      // °
#define FR_PLUS LS(FR_EQL)       // +

// Row 2
#define FR_DIAE LS(FR_CIRC)      // ¨ (dead)
#define FR_PND  LS(FR_DLR)       // £

// Row 3
#define FR_PERC S(FR_UGRV)       // %
#define FR_MICR S(FR_ASTR)       // µ

// Row 4
#define FR_RABK LS(FR_LABK) // >
#define FR_QUES LS(FR_COMM) // ?
#define FR_DOT  LS(FR_SCLN) // .
#define FR_SLSH LS(FR_COLN) // /
#define FR_SECT LS(FR_EXLM) // §


/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ ~ │ # │ { │ [ │ | │ ` │ \ │ ^ │ @ │ ] │ } │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │ € │   │   │   │   │   │   │   │   │ ¤ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_TILD ALGR(FR_EACU) // ~ (dead)
#define FR_HASH ALGR(FR_DQUO) // #
#define FR_LCBR ALGR(FR_QUOT) // {
#define FR_LBRC ALGR(FR_LPRN) // [
#define FR_PIPE ALGR(FR_MINS) // |
#define FR_GRV  ALGR(FR_EGRV) // ` (dead)
#define FR_BSLS ALGR(FR_UNDS) // (backslash)
#define FR_AT   ALGR(FR_AGRV) // @
#define FR_RBRC ALGR(FR_RPRN) // ]
#define FR_RCBR ALGR(FR_EQL)  // }

// Row 2
#define FR_EURO ALGR(E)       // €
#define FR_CURR ALGR(FR_DLR)  // ¤
/** 
 * Personalized symbols.
 * 
 * These symbols are not part of the default italian input.
 * I use a custom windows keymap to input them.

#define FR_BKTK RA(MINUS)        // `
#define FR_TILDE RA(EQUAL)       // ~
#define FR_CEGR RA(LS(E))        // È
*/