/*
** EPITECH PROJECT, 2021
** MSCSFML8LIB
** File description:
** MSCSFML8LIB
*/

#ifndef MSCSFML8LIB
#define MSCSFML8LIB

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>

typedef struct game_s game_t;
typedef struct ms_button_s ms_button_t;

typedef struct ms_button_s {
    sfSprite *sprite;
    sfVector2f pos;
    sfVector2f dim;
    void (*upd)(game_t *, struct ms_button_s *);
    void (*draw)(game_t *, struct ms_button_s *);
    ms_button_t *next;
    ms_button_t *prev;
} ms_button_t;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//ms_button_create
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * @brief  creates a ms_button_t
 * 
 * @return return  a new allocated ms_button_t
 */
ms_button_t *ms_button_create();


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//ms_button_push
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * @brief  push a simple button in a button list
 * 
 * @param list button list
 * @param button button to push
 * 
 * @return no return
 */
void ms_button_push(ms_button_t **list, ms_button_t *button);


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//ms_button_pop_first
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * @brief  Pop the first button in the list
 * 
 * @param list button list
 * 
 * @return no return
 */
void ms_button_pop_first(ms_button_t **list);


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//ms_button_pop_button
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * @brief  Pop a button in the list
 * 
 * @param list button list
 * @param button button lto be popped
 * 
 * @return no return
 */
void ms_button_pop_button(ms_button_t **list, ms_button_t *button);


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//ms_button_pop_all
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * @brief  Pop a button list
 * 
 * @param list button list to be popped
 * 
 * @return no return
 */
void ms_button_pop_all(ms_button_t **list);


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//button_pop_all
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * @brief  Pop a button list
 * 
 * @param list button list to be popped
 * 
 * @return no return
 */
void ms_set_sprite(sfSprite *sprite, sfTexture *texture, sfIntRect *rect, sfVector2f *scale);

#endif /* !MSCSFML8LIB */
