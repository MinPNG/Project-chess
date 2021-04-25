#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef BOARD

#define BOARD

/* Colors of pieces */
typedef enum{ 
    WHITE,
    BLACK
} color;

typedef struct board {
  grid *grid;
  config *configuration;
  void (*init)(struct board * self);
  /* Configuration function */
  void (*set_full_move)(struct board * self, int full_move);
  void (*set_half_move)(struct board * self, int half_move);
  void (*set_en_passant)(struct board * self, int en_passant);
  void (*set_is_finished)(struct board * self, bool is_finished);
  void (*set_is_checkmate)(struct board * self, bool is_checkmate);
  void (*set_is_checked)(struct board * self, bool is_checked);
  void (*set_turn)(struct board * self, color turn);
} board;

typedef struct config {
  int full_move;
  int half_move;
  int en_passant;
  bool is_finished;
  bool is_checkmate;
  bool is_checked;
  color turn;
} config;

typedef struct grid {
  castling castling;
} grid;

typedef struct castling {
  bool white_short;
  bool white_long;
  bool black_short;
  bool black_long;
} castling;

#endif