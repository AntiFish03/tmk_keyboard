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
     * | Shf/~  | FN19 |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  | Shf/Ent|
     * |--------+------+------+------+------+------|  '   |           |   \  |------+------+------+------+------+--------|
     * |        |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RtCtrl |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      | +L2  | LALT | LGUI | +L1  |                                       |      |  lt  |  up  |  dn  |  rt  |
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | Home | PgUp |       | PgDn | End  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 | Space|  Del |------|       |------| Enter| Bksp |
     *                                 |      |      |      |       |      |      |      |
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
           FN1,FN19,   S,   D,   F,   G,
            NO,   Z,   X,   C,   V,   B,QUOT,
            NO, FN6,LALT,LGUI, FN5,
                                        HOME,PGUP,
                                               NO,
                                    FN2, DEL,  NO,
             // right hand
                EQL,   6,   7,   8,   9,   0,  BSPC,
               RBRC,   Y,   U,   I,   O,   P,  NO,
                       H,   J,   K,   L,SCLN, FN3,
               BSLS,   N,   M,COMM, DOT,SLSH,RCTL,
                           NO,LEFT,  UP,DOWN,RGHT,
          PGDN, END,
            NO,
            NO, ENT, FN4
     ),

     /* Keymap: Layer 1 (Media + Func keys) in QWERTY
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |   F1   |  F2  |  F3  |  F4  |  F5  |  F6  |      |           | Mute | PREV | STOP | PLAY | NEXT |      |  TRNS  |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |   F7   |  F8  |  F9  |  F10 |  F11 |  F12 |      |           | Vol+ |      |      |  UP  |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  TRNS  |      |      |      |      |      |------|           |------|      | LEFT | DOWN | RGHT |      |  TRNS  |
     * |--------+------+------+------+------+------|      |           | Vol- |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      | TRNS | TRNS | TRNS |                                       |      |      |      |      |      |
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 | TRNS |      |------|       |------|      |      |
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
          TRNS,  NO,  NO,  NO,  NO,  NO,  NO,
            NO,  NO,TRNS,TRNS,TRNS,
                                          NO,  NO,
                                               NO,
                                   TRNS,  NO,  NO,
        // right hand
               MUTE,MPRV,MSTP,MPLY,MNXT,  NO,TRNS,
               VOLU,  NO,  NO,  UP,  NO,  NO,  NO,
                      NO,LEFT,DOWN,RGHT,  NO,TRNS,
               VOLD,  NO,  NO,  NO,  NO,  NO,  NO,
                           NO,  NO,  NO,  NO,  NO,
            NO,  NO,
            NO,
            NO,  NO,  NO
     ),

    /* Keymap: Layer 2 (Keypad) in QWERTY
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |[Teensy]| PWR  |      |      |      |      |      |           |      |      | NUMLK|   =  |   /  |   *  |  BSPC  |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |   7  |   8  |   9  |   -  |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |------|           |------|      |   4  |   4  |   6  |   +  |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |   1  |   2  |   3  |  ent |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      | TRNS |      |      |      |                                       |   0  |   0  |   .  |  ent |      |
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
           FN0, PWR,  NO,  NO,  NO,  NO,  NO,
            NO,  NO,  NO,  NO,  NO,  NO,  NO,
            NO,  NO,  NO,  NO,  NO,  NO,
            NO,  NO,  NO,  NO,  NO,  NO,  NO,
            NO,TRNS,  NO,  NO,  NO,
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
     /* Keymap: Layer 3 Spectacle App Layer
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |  FN7 |  FN8 |  FN9 | FN16 |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        | TRNS | FN14 | FN15 | FN10 | FN17 |------|           |------|      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      | FN13 | FN12 | FN11 | FN18 |      |           |      |      |      |      |      |      |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
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

     KEYMAP(  // Layer3:
        // left hand
          NO,  NO,  NO,  NO,  NO,  NO,  NO,
          NO,  NO, FN7, FN8, FN9,FN16,  NO,
          NO,TRNS,FN14,FN15,FN10,FN17,
          NO,  NO,FN13,FN12,FN11,FN18,  NO,
          NO,  NO,  NO,  NO,  NO,
                                        NO,  NO,
                                             NO,
                                   NO,  NO,  NO,
        // right hand
               NO,  NO,  NO,  NO,  NO,  NO,  NO,
               NO,  NO,  NO,  NO,  NO,  NO,  NO,
                    NO,  NO,  NO,  NO,  NO,  NO,
               NO,  NO,  NO,  NO,  NO,  NO,  NO,
                         NO,  NO,  NO,  NO,  NO,
          NO,  NO,
          NO,
          NO,  NO,  NO
    )


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

    KEYMAP(  // LayerN: fully OFF
        // left hand
          NO,  NO,  NO,  NO,  NO,  NO,  NO,
          NO,  NO,  NO,  NO,  NO,  NO,  NO,
          NO,  NO,  NO,  NO,  NO,  NO,
          NO,  NO,  NO,  NO,  NO,  NO,  NO,
          NO,  NO,  NO,  NO,  NO,
                                        NO,  NO,
                                             NO,
                                   NO,  NO,  NO,
        // right hand
               NO,  NO,  NO,  NO,  NO,  NO,  NO,
               NO,  NO,  NO,  NO,  NO,  NO,  NO,
                    NO,  NO,  NO,  NO,  NO,  NO,
               NO,  NO,  NO,  NO,  NO,  NO,  NO,
                         NO,  NO,  NO,  NO,  NO,
          NO,  NO,
          NO,
          NO,  NO,  NO
    )
*/

};

/* id for user defined functions */
enum function_id {
    TEENSY_KEY,
};

enum macro_id {
     SPEC_TOP_LEFT,
     SPEC_TOP,
     SPEC_TOP_RGHT,
     SPEC_RGHT,
     SPEC_BTM_RGHT,
     SPEC_BTM,
     SPEC_BTM_LEFT,
     SPEC_LEFT,
     SPEC_FULL,
     SPEC_CENTER,
     SPEC_SMALLER,
     SPEC_LARGER
};

/*
 * Macro definition
 */
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
     switch (id) {
          case SPEC_TOP_LEFT:
            return (record->event.pressed ?
              MACRO( D(LGUI), D(LCTL), T(LEFT), END ) :
              MACRO( U(LGUI), U(LCTL), END)
            );
          case SPEC_TOP:
            return (record->event.pressed ?
              MACRO( D(LGUI), D(LALT), T(UP), END ) :
              MACRO( U(LGUI), U(LALT), END)
            );
          case SPEC_TOP_RGHT:
            return (record->event.pressed ?
              MACRO( D(LGUI), D(LCTL), T(RGHT), END ) :
              MACRO( U(LGUI), U(LCTL), END)
            );
          case SPEC_RGHT:
            return (record->event.pressed ?
              MACRO( D(LGUI), D(LSFT), D(LALT), T(RGHT), END ) :
              MACRO( U(LGUI), U(LSFT), U(LALT), END)
            );
          case SPEC_BTM_RGHT:
            return (record->event.pressed ?
              MACRO( D(LGUI), D(LCTL), D(LSFT), T(RGHT), END ) :
              MACRO( U(LGUI), U(LCTL), U(LSFT), END)
            );
          case SPEC_BTM:
            return (record->event.pressed ?
              MACRO( D(LGUI), D(LALT), T(DOWN), END ) :
              MACRO( U(LGUI), U(LALT), END )
            );
          case SPEC_BTM_LEFT:
            return (record->event.pressed ?
              MACRO( D(LGUI), D(LCTL), D(LSFT), T(LEFT), END ) :
              MACRO( U(LGUI), U(LCTL), U(LSFT), END)
            );

          case SPEC_LEFT:
            return (record->event.pressed ?
              MACRO( D(LGUI), D(LSFT), D(LALT), T(LEFT), END ) :
              MACRO( U(LGUI), U(LSFT), U(LALT), END)
            );
          case SPEC_CENTER:
            return (record->event.pressed ?
              MACRO( D(LGUI), D(LSFT), D(LALT), T(C), END ) :
              MACRO( U(LGUI), U(LSFT), U(LALT), END)
            );
          case SPEC_FULL:
            return (record->event.pressed ?
              MACRO( D(LGUI), D(LSFT), D(LALT), T(F), END ) :
              MACRO( U(LGUI), U(LSFT), U(LALT), END)
            );

          case SPEC_SMALLER:
            return (record->event.pressed ?
              MACRO( D(LCTL), D(LSFT), D(LALT), T(LEFT), END ) :
              MACRO( U(LCTL), U(LSFT), U(LALT), END)
            );

          case SPEC_LARGER:
            return (record->event.pressed ?
              MACRO( D(LCTL), D(LSFT), D(LALT), T(RGHT), END ) :
              MACRO( U(LCTL), U(LSFT), U(LALT), END)
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

     ACTION_MACRO(SPEC_TOP_LEFT),                       // FN7
     ACTION_MACRO(SPEC_TOP),                            // FN8
     ACTION_MACRO(SPEC_TOP_RGHT),                       // FN9
     ACTION_MACRO(SPEC_RGHT),                           // FN10
     ACTION_MACRO(SPEC_BTM_RGHT),                       // FN11
     ACTION_MACRO(SPEC_BTM),                            // FN12
     ACTION_MACRO(SPEC_BTM_LEFT),                       // FN13
     ACTION_MACRO(SPEC_LEFT),                           // FN14
     ACTION_MACRO(SPEC_CENTER),                         // FN15
     ACTION_MACRO(SPEC_FULL),                           // FN16
     ACTION_MACRO(SPEC_LARGER),                         // FN17
     ACTION_MACRO(SPEC_SMALLER),                        // FN18

     ACTION_LAYER_TAP_KEY(3, KC_A)                      // FN19


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

