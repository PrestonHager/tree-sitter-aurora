#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_COLON = 3,
  anon_sym_EQ = 4,
  anon_sym_null = 5,
  anon_sym_end = 6,
  anon_sym_func_COLON = 7,
  anon_sym_GT = 8,
  anon_sym_LT = 9,
  anon_sym_COLON_COLON = 10,
  anon_sym_EQ_GT = 11,
  anon_sym_return = 12,
  anon_sym_if_GT = 13,
  anon_sym_Void = 14,
  anon_sym_Number = 15,
  anon_sym_String = 16,
  anon_sym_SLASH_SLASH = 17,
  aux_sym_comment_token1 = 18,
  anon_sym_SLASH_STAR = 19,
  anon_sym_STAR_SLASH = 20,
  sym_string = 21,
  sym_number = 22,
  anon_sym_true = 23,
  anon_sym_false = 24,
  sym_source_file = 25,
  sym__statement = 26,
  sym_variable_definition = 27,
  sym_block = 28,
  sym_function_definition = 29,
  sym_function_parameter_list = 30,
  sym_parameter_list = 31,
  sym__function_parameter = 32,
  sym_function_return_type = 33,
  sym_function_call = 34,
  sym_return_statement = 35,
  sym_if_statement = 36,
  sym__type = 37,
  sym_comment = 38,
  sym_boolean = 39,
  aux_sym_source_file_repeat1 = 40,
  aux_sym_function_parameter_list_repeat1 = 41,
  aux_sym_parameter_list_repeat1 = 42,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_null] = "null",
  [anon_sym_end] = "end",
  [anon_sym_func_COLON] = "func:",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_return] = "return",
  [anon_sym_if_GT] = "if>",
  [anon_sym_Void] = "Void",
  [anon_sym_Number] = "Number",
  [anon_sym_String] = "String",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [anon_sym_STAR_SLASH] = "*/",
  [sym_string] = "string",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_variable_definition] = "variable_definition",
  [sym_block] = "block",
  [sym_function_definition] = "function_definition",
  [sym_function_parameter_list] = "function_parameter_list",
  [sym_parameter_list] = "parameter_list",
  [sym__function_parameter] = "_function_parameter",
  [sym_function_return_type] = "function_return_type",
  [sym_function_call] = "function_call",
  [sym_return_statement] = "return_statement",
  [sym_if_statement] = "if_statement",
  [sym__type] = "_type",
  [sym_comment] = "comment",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_parameter_list_repeat1] = "function_parameter_list_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_func_COLON] = anon_sym_func_COLON,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_if_GT] = anon_sym_if_GT,
  [anon_sym_Void] = anon_sym_Void,
  [anon_sym_Number] = anon_sym_Number,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_variable_definition] = sym_variable_definition,
  [sym_block] = sym_block,
  [sym_function_definition] = sym_function_definition,
  [sym_function_parameter_list] = sym_function_parameter_list,
  [sym_parameter_list] = sym_parameter_list,
  [sym__function_parameter] = sym__function_parameter,
  [sym_function_return_type] = sym_function_return_type,
  [sym_function_call] = sym_function_call,
  [sym_return_statement] = sym_return_statement,
  [sym_if_statement] = sym_if_statement,
  [sym__type] = sym__type,
  [sym_comment] = sym_comment,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_parameter_list_repeat1] = aux_sym_function_parameter_list_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_func_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym__function_parameter] = {
    .visible = false,
    .named = true,
  },
  [sym_function_return_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_name = 2,
  field_parameters = 3,
  field_return_type = 4,
  field_value = 5,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_return_type] = "return_type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[3] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 2},
    {field_value, 4},
  [2] =
    {field_body, 5},
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 3},
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '<') ADVANCE(17);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '<') ADVANCE(17);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '/') ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(19);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(18);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(19);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_func_COLON);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_if_GT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '>') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'N') ADVANCE(1);
      if (lookahead == 'S') ADVANCE(2);
      if (lookahead == 'V') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_Void);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_Number);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 22},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 22},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_func_COLON] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_if_GT] = ACTIONS(1),
    [anon_sym_Void] = ACTIONS(1),
    [anon_sym_Number] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(30),
    [sym__statement] = STATE(5),
    [sym_variable_definition] = STATE(42),
    [sym_function_definition] = STATE(42),
    [sym_function_call] = STATE(42),
    [sym_return_statement] = STATE(42),
    [sym_if_statement] = STATE(42),
    [sym__type] = STATE(38),
    [sym_comment] = STATE(42),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_func_COLON] = ACTIONS(7),
    [anon_sym_return] = ACTIONS(9),
    [anon_sym_if_GT] = ACTIONS(11),
    [anon_sym_Void] = ACTIONS(13),
    [anon_sym_Number] = ACTIONS(13),
    [anon_sym_String] = ACTIONS(13),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
    [anon_sym_SLASH_STAR] = ACTIONS(17),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_func_COLON,
    ACTIONS(9), 1,
      anon_sym_return,
    ACTIONS(11), 1,
      anon_sym_if_GT,
    ACTIONS(15), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      anon_sym_end,
    STATE(38), 1,
      sym__type,
    STATE(44), 1,
      sym_block,
    STATE(4), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    ACTIONS(13), 3,
      anon_sym_Void,
      anon_sym_Number,
      anon_sym_String,
    STATE(42), 6,
      sym_variable_definition,
      sym_function_definition,
      sym_function_call,
      sym_return_statement,
      sym_if_statement,
      sym_comment,
  [45] = 12,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(26), 1,
      anon_sym_end,
    ACTIONS(28), 1,
      anon_sym_func_COLON,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(34), 1,
      anon_sym_if_GT,
    ACTIONS(40), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(43), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 1,
      sym__type,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    ACTIONS(37), 3,
      anon_sym_Void,
      anon_sym_Number,
      anon_sym_String,
    STATE(42), 6,
      sym_variable_definition,
      sym_function_definition,
      sym_function_call,
      sym_return_statement,
      sym_if_statement,
      sym_comment,
  [90] = 11,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_func_COLON,
    ACTIONS(9), 1,
      anon_sym_return,
    ACTIONS(11), 1,
      anon_sym_if_GT,
    ACTIONS(15), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(46), 1,
      anon_sym_end,
    STATE(38), 1,
      sym__type,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    ACTIONS(13), 3,
      anon_sym_Void,
      anon_sym_Number,
      anon_sym_String,
    STATE(42), 6,
      sym_variable_definition,
      sym_function_definition,
      sym_function_call,
      sym_return_statement,
      sym_if_statement,
      sym_comment,
  [132] = 11,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_func_COLON,
    ACTIONS(9), 1,
      anon_sym_return,
    ACTIONS(11), 1,
      anon_sym_if_GT,
    ACTIONS(15), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym__type,
    STATE(3), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    ACTIONS(13), 3,
      anon_sym_Void,
      anon_sym_Number,
      anon_sym_String,
    STATE(42), 6,
      sym_variable_definition,
      sym_function_definition,
      sym_function_call,
      sym_return_statement,
      sym_if_statement,
      sym_comment,
  [174] = 2,
    ACTIONS(50), 5,
      ts_builtin_sym_end,
      anon_sym_func_COLON,
      anon_sym_if_GT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(52), 6,
      anon_sym_end,
      anon_sym_return,
      anon_sym_Void,
      anon_sym_Number,
      anon_sym_String,
      sym_identifier,
  [190] = 3,
    STATE(36), 1,
      sym_boolean,
    ACTIONS(56), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 3,
      anon_sym_null,
      sym_string,
      sym_number,
  [203] = 3,
    STATE(41), 1,
      sym_boolean,
    ACTIONS(56), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(58), 3,
      anon_sym_null,
      sym_string,
      sym_number,
  [216] = 4,
    ACTIONS(60), 1,
      sym_identifier,
    ACTIONS(62), 1,
      anon_sym_LT,
    ACTIONS(64), 1,
      anon_sym_EQ_GT,
    STATE(11), 2,
      sym__function_parameter,
      aux_sym_function_parameter_list_repeat1,
  [230] = 3,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_EQ_GT,
    STATE(10), 2,
      sym__function_parameter,
      aux_sym_function_parameter_list_repeat1,
  [242] = 4,
    ACTIONS(60), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(73), 1,
      anon_sym_EQ_GT,
    STATE(10), 2,
      sym__function_parameter,
      aux_sym_function_parameter_list_repeat1,
  [256] = 2,
    STATE(17), 1,
      sym__type,
    ACTIONS(75), 3,
      anon_sym_Void,
      anon_sym_Number,
      anon_sym_String,
  [265] = 3,
    ACTIONS(77), 1,
      sym_identifier,
    STATE(13), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(80), 2,
      anon_sym_SEMI,
      anon_sym_LT,
  [276] = 2,
    STATE(39), 1,
      sym__type,
    ACTIONS(82), 3,
      anon_sym_Void,
      anon_sym_Number,
      anon_sym_String,
  [285] = 4,
    ACTIONS(84), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_SEMI,
    ACTIONS(88), 1,
      anon_sym_LT,
    STATE(13), 1,
      aux_sym_parameter_list_repeat1,
  [298] = 4,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(92), 1,
      anon_sym_SEMI,
    ACTIONS(94), 1,
      anon_sym_LT,
    STATE(15), 1,
      aux_sym_parameter_list_repeat1,
  [311] = 1,
    ACTIONS(96), 3,
      anon_sym_LT,
      anon_sym_EQ_GT,
      sym_identifier,
  [317] = 2,
    ACTIONS(98), 1,
      anon_sym_EQ_GT,
    STATE(32), 1,
      sym_function_return_type,
  [324] = 2,
    ACTIONS(100), 1,
      anon_sym_GT,
    STATE(23), 1,
      sym_parameter_list,
  [331] = 2,
    ACTIONS(102), 1,
      anon_sym_GT,
    STATE(18), 1,
      sym_function_parameter_list,
  [338] = 1,
    ACTIONS(73), 1,
      anon_sym_EQ_GT,
  [342] = 1,
    ACTIONS(104), 1,
      anon_sym_SEMI,
  [346] = 1,
    ACTIONS(106), 1,
      anon_sym_SEMI,
  [350] = 1,
    ACTIONS(108), 1,
      sym_identifier,
  [354] = 1,
    ACTIONS(110), 1,
      anon_sym_SEMI,
  [358] = 1,
    ACTIONS(86), 1,
      anon_sym_SEMI,
  [362] = 1,
    ACTIONS(112), 1,
      anon_sym_EQ,
  [366] = 1,
    ACTIONS(114), 1,
      aux_sym_comment_token1,
  [370] = 1,
    ACTIONS(116), 1,
      anon_sym_COLON_COLON,
  [374] = 1,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
  [378] = 1,
    ACTIONS(120), 1,
      anon_sym_SEMI,
  [382] = 1,
    ACTIONS(122), 1,
      anon_sym_SEMI,
  [386] = 1,
    ACTIONS(124), 1,
      anon_sym_SEMI,
  [390] = 1,
    ACTIONS(126), 1,
      anon_sym_STAR_SLASH,
  [394] = 1,
    ACTIONS(128), 1,
      sym_identifier,
  [398] = 1,
    ACTIONS(130), 1,
      anon_sym_SEMI,
  [402] = 1,
    ACTIONS(132), 1,
      anon_sym_EQ_GT,
  [406] = 1,
    ACTIONS(134), 1,
      anon_sym_COLON,
  [410] = 1,
    ACTIONS(136), 1,
      anon_sym_SEMI,
  [414] = 1,
    ACTIONS(138), 1,
      aux_sym_comment_token1,
  [418] = 1,
    ACTIONS(140), 1,
      anon_sym_SEMI,
  [422] = 1,
    ACTIONS(142), 1,
      anon_sym_SEMI,
  [426] = 1,
    ACTIONS(144), 1,
      anon_sym_SEMI,
  [430] = 1,
    ACTIONS(146), 1,
      anon_sym_SEMI,
  [434] = 1,
    ACTIONS(148), 1,
      anon_sym_SEMI,
  [438] = 1,
    ACTIONS(150), 1,
      anon_sym_SEMI,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 174,
  [SMALL_STATE(7)] = 190,
  [SMALL_STATE(8)] = 203,
  [SMALL_STATE(9)] = 216,
  [SMALL_STATE(10)] = 230,
  [SMALL_STATE(11)] = 242,
  [SMALL_STATE(12)] = 256,
  [SMALL_STATE(13)] = 265,
  [SMALL_STATE(14)] = 276,
  [SMALL_STATE(15)] = 285,
  [SMALL_STATE(16)] = 298,
  [SMALL_STATE(17)] = 311,
  [SMALL_STATE(18)] = 317,
  [SMALL_STATE(19)] = 324,
  [SMALL_STATE(20)] = 331,
  [SMALL_STATE(21)] = 338,
  [SMALL_STATE(22)] = 342,
  [SMALL_STATE(23)] = 346,
  [SMALL_STATE(24)] = 350,
  [SMALL_STATE(25)] = 354,
  [SMALL_STATE(26)] = 358,
  [SMALL_STATE(27)] = 362,
  [SMALL_STATE(28)] = 366,
  [SMALL_STATE(29)] = 370,
  [SMALL_STATE(30)] = 374,
  [SMALL_STATE(31)] = 378,
  [SMALL_STATE(32)] = 382,
  [SMALL_STATE(33)] = 386,
  [SMALL_STATE(34)] = 390,
  [SMALL_STATE(35)] = 394,
  [SMALL_STATE(36)] = 398,
  [SMALL_STATE(37)] = 402,
  [SMALL_STATE(38)] = 406,
  [SMALL_STATE(39)] = 410,
  [SMALL_STATE(40)] = 414,
  [SMALL_STATE(41)] = 418,
  [SMALL_STATE(42)] = 422,
  [SMALL_STATE(43)] = 426,
  [SMALL_STATE(44)] = 430,
  [SMALL_STATE(45)] = 434,
  [SMALL_STATE(46)] = 438,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter_list, 1),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameter_list_repeat1, 2), SHIFT_REPEAT(29),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameter_list_repeat1, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter_list, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(13),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_parameter, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [118] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter_list, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_return_type, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, .production_id = 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Aurora(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .field_count = FIELD_COUNT,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .field_names = ts_field_names,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
