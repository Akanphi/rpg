#include <SFML/Graphics.h>
#include <stdio.h>
#include <string.h>

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600
#define TEXT_SIZE 24
#define TEXT_SPEED 0.05f

int main()
{
    sfVideoMode mode = {WINDOW_WIDTH, WINDOW_HEIGHT, 32};
    sfRenderWindow* window = sfRenderWindow_create(mode, "Affichage de texte en CSFML", sfDefaultStyle, NULL);

    if (!window)
        return 1;

    sfFont* font = sfFont_createFromFile("police/montserrat.ttf");
    if (!font)
        return 1;

    sfText* text = sfText_create();
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, TEXT_SIZE);
    sfText_setFillColor(text, sfWhite);
    sfText_setPosition(text, (sfVector2f){10.f, 10.f});

    const char* fullText = "Bonjour, je suis un texte qui s'affiche au fur et à mesure.";
    char displayedText[100] = "";
    float timer = 0;

    while (sfRenderWindow_isOpen(window)) {
        sfEvent event;
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        timer += sfTime_asSeconds(sfClock_getElapsedTime(sfClock_create()));
        if (strlen(displayedText) < strlen(fullText) && timer >= TEXT_SPEED) {
            strncat(displayedText, &fullText[strlen(displayedText)], 1);
            sfText_setString(text, displayedText);
            timer = 0;
        }
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawText(window, text, NULL);
        sfRenderWindow_display(window);
    }

    sfFont_destroy(font);
    sfText_destroy(text);
    sfRenderWindow_destroy(window);

    return 0;
}