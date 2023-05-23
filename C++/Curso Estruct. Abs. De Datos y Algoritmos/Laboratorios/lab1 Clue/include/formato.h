#ifndef FORMATO_H
#define FORMATO_H

#include <iostream>

using namespace std;
// Combinación	Color
// ========================
// 0;00			 Reinicio
#define FORMATO_ANSI_COLOR_RESET "\x1b[0m"
// 0;30			 Negro
#define FORMATO_ANSI_COLOR_BLACK "\x1b[30m"
// 0;31			 Rojo
#define FORMATO_ANSI_COLOR_RED "\x1b[31m"
// 0;32			 Verde
#define FORMATO_ANSI_COLOR_GREEN "\x1b[32m"
// 0;33			 Marrón
#define FORMATO_ANSI_COLOR_BROWN "\x1b[33m"
// 0;34			 Azul
#define FORMATO_ANSI_COLOR_BLUE "\x1b[34m"
// 0;35			 Púrpura
#define FORMATO_ANSI_COLOR_PURPLE "\x1b[35m"
// 0;36			 Cian
#define FORMATO_ANSI_COLOR_CYAN "\x1b[36m"
// 0;37			 Gris claro
#define FORMATO_ANSI_COLOR_LIGTH_GRAY "\x1b[37m"
// 1;30			 Gris oscuro
#define FORMATO_ANSI_COLOR_DARK_GRAY "\x1b[01;30m"
// 1;31			 Rojo claro
#define FORMATO_ANSI_COLOR_LIGHT_RED "\x1b[01;31m"
// 1;32			 Verde claro
#define FORMATO_ANSI_COLOR_LIGHT_GREEN "\x1b[01;32m"
// 1;33			 Amarillo
#define FORMATO_ANSI_COLOR_YELLOW "\x1b[01;33m"
// 1;34			 Azul claro
#define FORMATO_ANSI_COLOR_LIGHT_BLUE "\x1b[01;34m"
// 1;35			 Púrpura claro
#define FORMATO_ANSI_COLOR_LIGHT_PURPLE "\x1b[01;35m"
// 1;36			 Cian claro
#define FORMATO_ANSI_COLOR_LIGHT_CYAN "\x1b[01;36m"
// 1;37			 Blanco
#define FORMATO_ANSI_COLOR_WHITE "\x1b[01;37m"

// Colores de fondo (background)
// ------------------------------

// Combinación	Color
// ========================
// 40			   Negro
#define FORMATO_BACKGROUND_COLOR_BLACK "\x1b[40m"
// 41			   Rojo
#define FORMATO_BACKGROUND_COLOR_RED "\x1b[41m"
// 42			   Verde
#define FORMATO_BACKGROUND_COLOR_GREEN "\x1b[42m"
// 43			   Marrón
#define FORMATO_BACKGROUND_COLOR_BROWN "\x1b[43m"
// 44			   Azul
#define FORMATO_BACKGROUND_COLOR_BLUE "\x1b[44m"
// 45			   Púrpura
#define FORMATO_BACKGROUND_COLOR_PURPLE "\x1b[45m"
// 46			   Turquesa
#define FORMATO_BACKGROUND_COLOR_TURQUOISE "\x1b[46m"
// 47			   Gris
#define FORMATO_BACKGROUND_COLOR_GRAY "\x1b[40m"
// 100			   Gris oscuro
#define FORMATO_BACKGROUND_COLOR_DARK_GRAY "\x1b[100m"
// 101			   Rojo
#define FORMATO_BACKGROUND_COLOR_LIGTH_RED "\x1b[101m"
// 102			   Verde
#define FORMATO_BACKGROUND_COLOR_LIGTH_GREEN "\x1b[102m"
// 103			   Marrón
#define FORMATO_BACKGROUND_COLOR_LIGTH_YELLOW "\x1b[103m"
// 104			   Azul
#define FORMATO_BACKGROUND_COLOR_LIGTH_BLUE "\x1b[104m"
// 105			   Púrpura
#define FORMATO_BACKGROUND_COLOR_LIGTH_PURPLE "\x1b[105m"
// 106			   Turquesa
#define FORMATO_BACKGROUND_COLOR_LIGTH_TURQUOISE "\x1b[106m"
// 107			   Gris
#define FORMATO_BACKGROUND_COLOR_WHITE "\x1b[107m"

// Efectos de carácter
// -------------------------------

// Combinación	Estilo
// ========================
// 0;4			  Subrayado
#define FORMATO_UNDERLINE_EFFECT "\x1b[00;4m"
// 0;5			  Titilante (blink)(puede que no funcione)
#define FORMATO_BLINK_EFFECT "\x1b[00;5m"
// 0;1			  Negrita
#define FORMATO_BOLD_EFFECT "\x1b[00;1m"
// 0;8			  Transparente (?)
#define FORMATO_TRANSPARENT_EFFECT "\x1b[00;8m"


#endif