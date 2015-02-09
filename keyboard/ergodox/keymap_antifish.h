//
// Layout by antifish03


static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap: Default Layer in QWERTY
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * | ESC    |   1  |   2  |   3  |   4  |   5  |  -   |           |   +  |   6  |   7  |   8  |   9  |   0  |  BSPC  |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Tab    |   Q  |   W  |   E  |   R  |   T  |  [   |           |   ]  |   Y  |   U  |   I  |   O  |   P  |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | Shf/~  |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  | Shf/Ent|
     * |--------+------+------+------+------+------|  '   |           |   \  |------+------+------+------+------+--------|
     * |        |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RtCtrl |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      | +L2  | LALT | LGUI | +L1  |                                       |      |  lt  |  up  |  dn  |  rt  |
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | Home | PgUp |       | PgDn | End  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |  M1  |       |  M3  |      |      |
     *                                 | Space|  Del |------|       |------| Enter| Bksp |
     *                                 |      |      |  M2  |       |  M4  |      |      |
     *                                 | LGui |      |      |       |      |      | RGui |
     *                                 `--------------------'       `--------------------'
     *
     *
     *
     ****************************************************************************************************/

     KEYMAP(  // Layer0:
     // left hand
           ESC,   1,   2,   3,   4,   5,MINS,
           TAB,   Q,   W,   E,   R,   T,LBRC,
           FN1,   A,   S,   D,   F,   G,
           FN1,   Z,   X,   C,   V,   B,QUOT,
           NO, FN6,LALT,LGUI, FN5,
                                        HOME,PGUP,
                                              FN8,
                                    FN2, DEL,FN10,
             // right hand
                EQL,   6,   7,   8,   9,   0,  BSPC,
               RBRC,   Y,   U,   I,   O,   P,  NO,
                       H,   J,   K,   L,SCLN, FN3,
               BSLS,   N,   M,COMM, DOT,SLSH,RCTL,
                           NO,LEFT,  UP,DOWN,RGHT,
          PGDN, END,
           FN9,
          FN11, ENT, FN4
     ),

     /* Keymap: Layer 1 (Media + Func keys) in QWERTY
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |   F1   |  F2  |  F3  |  F4  |  F5  |  F6  |      |           | Mute | PREV | STOP | PLAY | NEXT |      |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |   F7   |  F8  |  F9  |  F10 |  F11 |  F12 |      |           | Vol+ |      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |------|           |------|      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           | Vol- |------+------+------+------+------+--------|
     * |  PWR   | SLEEP|      |      |      |      |      |           |      |      |      |  UP  |      |      |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       | LEFT | DOWN | RGHT |      |      |
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     *
     *
     *
     ****************************************************************************************************/

     KEYMAP(  // Layer 1:
        // left hand
            F1,  F2,  F3,  F4,  F5,  F6,  NO,
            F7,  F8,  F9, F10, F11, F12,  NO,
          TRNS,  NO,  NO,  NO,  NO,  NO,
           PWR,SLEP,  NO,  NO,  NO,  NO,  NO,
            NO, NO,   NO,  NO, FN5,
                                          NO,  NO,
                                               NO,
                                     NO,  NO,  NO,
        // right hand
               MUTE,MPRV,MSTP,MPLY,MNXT,  NO,TRNS,
               VOLU,  NO,  NO,  NO,  NO,  NO,  NO,
                      NO,  NO,  NO,  NO,  NO,TRNS,
               VOLD,  NO,  NO,  UP,  NO,  NO,  NO,
                         LEFT,DOWN,RGHT,  NO,  NO,
            NO,  NO,
            NO,
            NO,  NO,  NO
     ),

    /* Keymap: Layer 2 (Keypad) in QWERTY
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |[Teensy]|      |      |      |      |      |      |           |      |      | NUMLK|   =  |   /  |   *  |  BSPC  |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |   7  |   8  |   9  |   -  |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |------|           |------|      |   4  |   4  |   6  |   +  |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |   1  |   2  |   3  |  ent |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      | +L2  |      |      |      |                                       |   0  |   0  |   .  |  ent |      |
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |  E   |
     *                                 |      |      |------|       |------|      |  N   |
     *                                 |      |      |      |       |      |      |  T   |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     *
     *
     *
     ****************************************************************************************************/

     KEYMAP(  // Layer2:
          // left hand
           FN0,  NO,  NO,  NO,  NO,  NO,  NO,
            NO,  NO,  NO,  NO,  NO,  NO,  NO,
            NO,  NO,  NO,  NO,  NO,  NO,
            NO,  NO,  NO,  NO,  NO,  NO,  NO,
            NO, FN6,  NO,  NO,  NO,
                                          NO,  NO,
                                               NO,
                                     NO,  NO,  NO,
          // right hand
                 NO,  NO,NLCK,PEQL,PSLS,PAST,BSPC,
                 NO,  NO,  P7,  P8,  P9,PMNS,  NO,
                      NO,  P4,  P5,  P6,PPLS,  NO,
                 NO,  NO,  P1,  P2,  P3,PENT,  NO,
                           P0,  P0,PDOT,PENT,  NO,
            NO,  NO,
            NO,
            NO,  NO,PENT
     ),



/*
    // templates to copy from

    KEYMAP(  // LayerN: transparent on edges + hard-defined thumb keys, all others are empty
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 LCTL,LSFT,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                       RGUI,RALT,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,RSFT,RCTL
    ),
    KEYMAP(  // LayerN: fully transparent
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
*/

};

/* id for user defined functions */
enum function_id {
    TEENSY_KEY,
};

enum macro_id {
     TOP_LEFT,
     TOP_RGHT,
     BTM_LEFT,
     BTM_RGHT
};

/*
 * Macro definition
 */
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
     switch (id) {
          case TOP_LEFT:
               return (record->event.pressed ?
                    MACRO( D(LGUI), D(LCTL), T(LEFT), END ) :
                    MACRO( U(LGUI), U(LCTL), END)
               );
          case TOP_RGHT:
               return (record->event.pressed ?
                    MACRO( D(LGUI), D(LCTL), T(RGHT), END ) :
                    MACRO( U(LGUI), U(LCTL), END)
               );
          case BTM_LEFT:
               return (record->event.pressed ?
                    MACRO( D(LGUI), D(LCTL), D(LSFT), T(LEFT), END ) :
                    MACRO( U(LGUI), U(LCTL), U(LSFT), END)
               );
          case BTM_RGHT:
               return (record->event.pressed ?
                   MACRO( D(LGUI), D(LCTL), D(LSFT), T(RGHT), END ) :
                   MACRO( U(LGUI), U(LCTL), U(LSFT), END)
               );
    }
    return MACRO_NONE;
}

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
     ACTION_FUNCTION(TEENSY_KEY),                       // FN0  - Teensy key
     ACTION_MODS_TAP_KEY(MOD_LSFT, KC_GRV),             // FN1  = LShift  with tap Tilda
     ACTION_MODS_TAP_KEY(MOD_LGUI, KC_SPC),             // FN2  = LGUI  with tap Space
     ACTION_MODS_TAP_KEY(MOD_RSFT, KC_ENTER),           // FN3  = RShift  with tap ENTER
     ACTION_MODS_TAP_KEY(MOD_RGUI, KC_BSPC),            // FN4  = RShift  with tap ENTER

     ACTION_LAYER_MOMENTARY(1),                         // FN5 - toggle Layer1
     ACTION_LAYER_TOGGLE(2),                            // FN6 - toggle Layer2
     ACTION_LAYER_TAP_KEY(1, ON_BOTH),                  // FN7

     ACTION_MACRO(TOP_LEFT),                            // FN8
     ACTION_MACRO(TOP_RGHT),                            // FN9
     ACTION_MACRO(BTM_LEFT),                            // FN10
     ACTION_MACRO(BTM_RGHT)                             // FN11

};

void action_function(keyrecord_t *event, uint8_t id, uint8_t opt)
{
    print("action_function called\n");
    print("id  = "); phex(id); print("\n");
    print("opt = "); phex(opt); print("\n");
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(250);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }
}

