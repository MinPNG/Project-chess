#include <board.h>

static void init(board *board) {
  board_mapper(board);
}

static void board_init(board *board) {
  /* Configuration */
  set_full_move(board, 1);
  set_half_move(board, 0);
  set_en_passant(board, NULL);
  set_is_finished(board, false);
  set_is_checkmate(board, false);
  set_is_checked(board, false);
  set_playing_color(board, WHITE);
} 

static void set_full_move(board *board, int full_move) {
  config *configuration = board->configuration;
  configuration->full_move = full_move;
}

static void set_half_move(board *board, int half_move) {
  config *configuration = board->configuration;
  configuration->half_move = half_move;
}

static void set_en_passant(board *board, int en_passant) {
  config *configuration = board->configuration;
  configuration->en_passant = en_passant;
}

static void set_is_finished(board *board, bool is_finished) {
  config *configuration = board->configuration;
  configuration->full_move = is_finished;
}

static void set_is_checkmate(board *board, bool is_checkmate) {
  config *configuration = board->configuration;
  configuration->full_move = is_checkmate;
}

static void set_is_checked(board *board, bool is_checked) {
  config *configuration = board->configuration;
  configuration->full_move = is_checked;
}

static void set_turn(board *board, color *turn) {
  config *configuration = board->configuration;
  configuration->turn = turn;
}

static void board_mapper(board *board) {
  board->init = &init;
  board->set_full_move = &set_full_move;
  board->set_half_move = &set_half_move;
  board->set_en_passant = &set_en_passant;
  board->set_is_finished = &set_is_finished;
  board->set_is_checkmate = &set_is_checkmate;
  board->set_is_checked = &set_is_checked;
  board->set_turn = &set_turn;
}

