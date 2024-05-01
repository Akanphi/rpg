/*
** EPITECH PROJECT, 2023
** B-MUL-200-COT-2-1-mypaint-akande-philippe.abiodoun
** File description:
** paint.h
*/

#ifndef MY_PAINT
    #define MY_PAINT
    #define WINDOW window->window
    #define MODE window->mode
    #define PALE window->sfWhitepale
    #define GRIS window->sfGris
    #define MOUPO window->mousePos

    #include <SFML/Graphics.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <string.h>
    #include <fcntl.h>
    #include <stdarg.h>
    #include <unistd.h>
    #include <SFML/Graphics/Color.h>
    #include <SFML/Graphics/CircleShape.h>
    #include <SFML/Window/Export.h>
    #include <SFML/Window/Types.h>
    #include <SFML/System/Vector2.h>


typedef struct button_s {
    sfRectangleShape *rect;
    sfTexture* texture;
    sfImage *image;
    sfSprite* sprite;
    sfVector2f scale;
    sfVector2f pos;
    sfFont *fontpot;
    sfText *textpot;
    sfText *textgom;
    sfText *textcra;
    sfText *text1;
    sfText *text2;
    sfText *text3;
    sfText *text4;
    sfText *text5;
    sfText *text6;
    sfText *text7;
    sfText *text8;
}button_t;

typedef struct form {
    sfRectangleShape *rect;
    sfCircleShape *circ;
    sfText *text;
    sfFont *font;
}form_t;

typedef struct forma {
    sfCircleShape *shape;
    float radius;
    sfVector2f position;
}forma_t;

typedef struct formcol {
    sfCircleShape *circ1;
    sfCircleShape *circ2;
    sfCircleShape *circ3;
    sfCircleShape *circ4;
    sfCircleShape *circ5;
    sfCircleShape *circ6;
    sfCircleShape *circ7;
    sfCircleShape *circ8;
    sfText *text;
    sfFont *font;
}formcol_t;

typedef struct icon {
    sfTexture* texture;
    sfSprite* sprite;
    sfVector2f scale;
    sfVector2f pos;
    sfTexture* text_pot;
    sfSprite* spri_pot;
    sfVector2f scale_pot;
    sfVector2f potpos;
    sfTexture* text_gom;
    sfSprite* spri_gom;
    sfVector2f scale_gom;
    sfVector2f gompos;
    sfTexture* text_uti;
    sfSprite* spri_uti;
    sfVector2f scale_uti;
    sfVector2f utipos;
    sfText *text;
    sfText *text2;
    sfFont *font;
}icon_t;

typedef struct window {
    icon_t *icon;
    sfColor sour;
    sfBool iconClicked;
    sfFloatRect spriteBounds;
    sfFloatRect spricra;
    sfFloatRect sprigom;
    sfFloatRect spricol1;
    sfFloatRect spricol2;
    sfFloatRect spricol3;
    sfFloatRect spricol4;
    sfFloatRect spricol5;
    sfFloatRect spricol6;
    sfFloatRect spricol7;
    sfFloatRect spricol8;
    sfFloatRect plantra;
    sfColor sfWhitepale;
    sfColor sfGris;
    sfFloatRect sprirecext;
    sfRectangleShape *rectext;
    sfVector2i mousePos;
    sfRenderWindow *window;
    sfEvent event;
    sfVector2f hover;
    sfVideoMode mode;
    sfTexture *texture;
    sfSprite *sprite;
    sfText *text;
    sfText *text2;
    sfText *text3;
    sfFont *font;
    char *title;
    button_t *rect;
}window_t;

void window_on(window_t *window);
void window_in(window_t *window);
void events(window_t *window, formcol_t *formco);
char *copien(char *str);
void text_init(window_t *window);
button_t *init_button(window_t *window);
void iconset(icon_t *icon);
form_t *init_forms(void);
formcol_t *iniformcol(void);
void formacircle(forma_t *circle, window_t *window);
void init5(button_t *button);
void hovermenu(window_t *window);
void boungloba(window_t *window, formcol_t *formco);
void elifi(window_t *window, formcol_t *formco, sfColor sfPurp);
void windodeclare(window_t *window, formcol_t *formco);
void ifi1(window_t *window, formcol_t *formco, sfColor sfPurp);
void destroy(window_t *window, form_t *fora, formcol_t *fo);
#endif
