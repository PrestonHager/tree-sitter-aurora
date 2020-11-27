#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_COLON = 3,
  anon_sym_EQ = 4,
  anon_sym_end = 5,
  anon_sym_func = 6,
  anon_sym_GT = 7,
  anon_sym_LT = 8,
  anon_sym_COLON_COLON = 9,
  anon_sym_EQ_GT = 10,
  anon_sym_return = 11,
  anon_sym_if = 12,
  anon_sym_QMARK_EQ = 13,
  anon_sym_QMARK_GT = 14,
  anon_sym_QMARK_LT = 15,
  anon_sym_QMARK_GT_EQ = 16,
  anon_sym_QMARK_LT_EQ = 17,
  anon_sym_PLUS = 18,
  anon_sym_DASH = 19,
  anon_sym_STAR = 20,
  anon_sym_SLASH = 21,
  anon_sym_Void = 22,
  anon_sym_Number = 23,
  anon_sym_String = 24,
  anon_sym_SLASH_SLASH = 25,
  aux_sym_comment_token1 = 26,
  anon_sym_LF = 27,
  sym_string = 28,
  sym_number = 29,
  anon_sym_true = 30,
  anon_sym_false = 31,
  sym_source_file = 32,
  sym__statement = 33,
  sym_variable_definition = 34,
  sym_block = 35,
  sym_function_definition = 36,
  sym_function_parameter_list = 37,
  sym_parameter_list = 38,
  sym__function_parameter = 39,
  sym_function_return_type = 40,
  sym_function_call = 41,
  sym_return_statement = 42,
  sym_if_statement = 43,
  sym_comparison = 44,
  sym_expression = 45,
  sym_type = 46,
  sym_comment = 47,
  sym_boolean = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym_function_parameter_list_repeat1 = 50,
  aux_sym_parameter_list_repeat1 = 51,
  aux_sym_expression_repeat1 = 52,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_end] = "end",
  [anon_sym_func] = "func",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_return] = "return",
  [anon_sym_if] = "if",
  [anon_sym_QMARK_EQ] = "\?=",
  [anon_sym_QMARK_GT] = "\?>",
  [anon_sym_QMARK_LT] = "\?<",
  [anon_sym_QMARK_GT_EQ] = "\?>=",
  [anon_sym_QMARK_LT_EQ] = "\?<=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_Void] = "Void",
  [anon_sym_Number] = "Number",
  [anon_sym_String] = "String",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_LF] = "\n",
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
  [sym_comparison] = "comparison",
  [sym_expression] = "expression",
  [sym_type] = "type",
  [sym_comment] = "comment",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_parameter_list_repeat1] = "function_parameter_list_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_QMARK_EQ] = anon_sym_QMARK_EQ,
  [anon_sym_QMARK_GT] = anon_sym_QMARK_GT,
  [anon_sym_QMARK_LT] = anon_sym_QMARK_LT,
  [anon_sym_QMARK_GT_EQ] = anon_sym_QMARK_GT_EQ,
  [anon_sym_QMARK_LT_EQ] = anon_sym_QMARK_LT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_Void] = anon_sym_Void,
  [anon_sym_Number] = anon_sym_Number,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_LF] = anon_sym_LF,
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
  [sym_comparison] = sym_comparison,
  [sym_expression] = sym_expression,
  [sym_type] = sym_type,
  [sym_comment] = sym_comment,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_parameter_list_repeat1] = aux_sym_function_parameter_list_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
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
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_func] = {
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
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
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
  [anon_sym_LF] = {
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
  [sym_comparison] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
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
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_func_keyword = 2,
  field_if_keyword = 3,
  field_name = 4,
  field_parameters = 5,
  field_return_type = 6,
  field_type = 7,
  field_value = 8,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_func_keyword] = "func_keyword",
  [field_if_keyword] = "if_keyword",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_return_type] = "return_type",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[4] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_if_keyword, 0},
  [1] =
    {field_name, 2},
    {field_type, 0},
    {field_value, 4},
  [4] =
    {field_body, 6},
    {field_func_keyword, 0},
    {field_name, 2},
    {field_parameters, 3},
    {field_return_type, 4},
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(15);
      if (lookahead == '?') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '?') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(18);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == ' ') SKIP(8)
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '=') ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
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
      if (lookahead == ':') ADVANCE(17);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(18);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_QMARK_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      if (lookahead == '=') ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_QMARK_LT);
      if (lookahead == '=') ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_QMARK_GT_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_QMARK_LT_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
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
      if (lookahead == ' ') SKIP(0)
      if (lookahead == 'N') ADVANCE(1);
      if (lookahead == 'S') ADVANCE(2);
      if (lookahead == 'V') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 't') ADVANCE(8);
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
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_Void);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(38);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_Number);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 30},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_QMARK_EQ] = ACTIONS(1),
    [anon_sym_QMARK_GT] = ACTIONS(1),
    [anon_sym_QMARK_LT] = ACTIONS(1),
    [anon_sym_QMARK_GT_EQ] = ACTIONS(1),
    [anon_sym_QMARK_LT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_Void] = ACTIONS(1),
    [anon_sym_Number] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(3),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(35),
    [sym__statement] = STATE(5),
    [sym_variable_definition] = STATE(37),
    [sym_function_definition] = STATE(37),
    [sym_function_call] = STATE(37),
    [sym_return_statement] = STATE(37),
    [sym_if_statement] = STATE(37),
    [sym_type] = STATE(36),
    [sym_comment] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_func] = ACTIONS(9),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_Void] = ACTIONS(15),
    [anon_sym_Number] = ACTIONS(15),
    [anon_sym_String] = ACTIONS(15),
    [anon_sym_SLASH_SLASH] = ACTIONS(17),
    [anon_sym_LF] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_func,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(19), 1,
      anon_sym_end,
    STATE(36), 1,
      sym_type,
    STATE(54), 1,
      sym_block,
    ACTIONS(15), 3,
      anon_sym_Void,
      anon_sym_Number,
      anon_sym_String,
    STATE(4), 3,
      sym__statement,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(37), 5,
      sym_variable_definition,
      sym_function_definition,
      sym_function_call,
      sym_return_statement,
      sym_if_statement,
  [45] = 12,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(26), 1,
      anon_sym_end,
    ACTIONS(28), 1,
      anon_sym_func,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(34), 1,
      anon_sym_if,
    ACTIONS(40), 1,
      anon_sym_SLASH_SLASH,
    STATE(36), 1,
      sym_type,
    ACTIONS(37), 3,
      anon_sym_Void,
      anon_sym_Number,
      anon_sym_String,
    STATE(3), 3,
      sym__statement,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(37), 5,
      sym_variable_definition,
      sym_function_definition,
      sym_function_call,
      sym_return_statement,
      sym_if_statement,
  [90] = 11,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_func,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(43), 1,
      anon_sym_end,
    STATE(36), 1,
      sym_type,
    ACTIONS(15), 3,
      anon_sym_Void,
      anon_sym_Number,
      anon_sym_String,
    STATE(3), 3,
      sym__statement,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(37), 5,
      sym_variable_definition,
      sym_function_definition,
      sym_function_call,
      sym_return_statement,
      sym_if_statement,
  [132] = 11,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_func,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_type,
    ACTIONS(15), 3,
      anon_sym_Void,
      anon_sym_Number,
      anon_sym_String,
    STATE(3), 3,
      sym__statement,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(37), 5,
      sym_variable_definition,
      sym_function_definition,
      sym_function_call,
      sym_return_statement,
      sym_if_statement,
  [174] = 5,
    ACTIONS(3), 1,
      anon_sym_LF,
    STATE(6), 1,
      aux_sym_expression_repeat1,
    ACTIONS(49), 2,
      anon_sym_QMARK_GT,
      anon_sym_QMARK_LT,
    ACTIONS(47), 4,
      anon_sym_SEMI,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_GT_EQ,
      anon_sym_QMARK_LT_EQ,
    ACTIONS(51), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [197] = 5,
    ACTIONS(3), 1,
      anon_sym_LF,
    STATE(6), 1,
      aux_sym_expression_repeat1,
    ACTIONS(56), 2,
      anon_sym_QMARK_GT,
      anon_sym_QMARK_LT,
    ACTIONS(54), 4,
      anon_sym_SEMI,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_GT_EQ,
      anon_sym_QMARK_LT_EQ,
    ACTIONS(58), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [220] = 5,
    ACTIONS(3), 1,
      anon_sym_LF,
    STATE(7), 1,
      aux_sym_expression_repeat1,
    ACTIONS(62), 2,
      anon_sym_QMARK_GT,
      anon_sym_QMARK_LT,
    ACTIONS(58), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(60), 4,
      anon_sym_SEMI,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_GT_EQ,
      anon_sym_QMARK_LT_EQ,
  [243] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(49), 2,
      anon_sym_QMARK_GT,
      anon_sym_QMARK_LT,
    ACTIONS(47), 8,
      anon_sym_SEMI,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_GT_EQ,
      anon_sym_QMARK_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [261] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
    ACTIONS(66), 8,
      anon_sym_end,
      anon_sym_func,
      anon_sym_return,
      anon_sym_if,
      anon_sym_Void,
      anon_sym_Number,
      anon_sym_String,
      sym_identifier,
  [279] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
    ACTIONS(70), 8,
      anon_sym_end,
      anon_sym_func,
      anon_sym_return,
      anon_sym_if,
      anon_sym_Void,
      anon_sym_Number,
      anon_sym_String,
      sym_identifier,
  [297] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(74), 2,
      anon_sym_QMARK_GT,
      anon_sym_QMARK_LT,
    ACTIONS(72), 8,
      anon_sym_SEMI,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_GT_EQ,
      anon_sym_QMARK_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [315] = 7,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(76), 1,
      sym_identifier,
    STATE(8), 1,
      sym_boolean,
    STATE(18), 1,
      sym_expression,
    STATE(42), 1,
      sym_comparison,
    ACTIONS(78), 2,
      sym_string,
      sym_number,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [339] = 6,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(76), 1,
      sym_identifier,
    STATE(8), 1,
      sym_boolean,
    STATE(51), 1,
      sym_expression,
    ACTIONS(78), 2,
      sym_string,
      sym_number,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [360] = 6,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(76), 1,
      sym_identifier,
    STATE(8), 1,
      sym_boolean,
    STATE(46), 1,
      sym_expression,
    ACTIONS(78), 2,
      sym_string,
      sym_number,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [381] = 6,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(76), 1,
      sym_identifier,
    STATE(8), 1,
      sym_boolean,
    STATE(33), 1,
      sym_expression,
    ACTIONS(78), 2,
      sym_string,
      sym_number,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
  [402] = 5,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(82), 1,
      sym_identifier,
    STATE(9), 1,
      sym_boolean,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(84), 2,
      sym_string,
      sym_number,
  [420] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(88), 2,
      anon_sym_QMARK_GT,
      anon_sym_QMARK_LT,
    ACTIONS(86), 3,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_GT_EQ,
      anon_sym_QMARK_LT_EQ,
  [433] = 5,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(92), 1,
      anon_sym_LT,
    ACTIONS(94), 1,
      anon_sym_EQ_GT,
    STATE(22), 2,
      sym__function_parameter,
      aux_sym_function_parameter_list_repeat1,
  [450] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(96), 5,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_EQ_GT,
      sym_identifier,
  [461] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(98), 1,
      sym_identifier,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_EQ_GT,
    STATE(21), 2,
      sym__function_parameter,
      aux_sym_function_parameter_list_repeat1,
  [476] = 5,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_LT,
    ACTIONS(105), 1,
      anon_sym_EQ_GT,
    STATE(21), 2,
      sym__function_parameter,
      aux_sym_function_parameter_list_repeat1,
  [493] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    STATE(28), 1,
      sym_type,
    ACTIONS(107), 3,
      anon_sym_Void,
      anon_sym_Number,
      anon_sym_String,
  [505] = 5,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_SEMI,
    ACTIONS(113), 1,
      anon_sym_LT,
    STATE(27), 1,
      aux_sym_parameter_list_repeat1,
  [521] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    STATE(50), 1,
      sym_type,
    ACTIONS(107), 3,
      anon_sym_Void,
      anon_sym_Number,
      anon_sym_String,
  [533] = 4,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(26), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(118), 2,
      anon_sym_SEMI,
      anon_sym_LT,
  [547] = 5,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(122), 1,
      anon_sym_SEMI,
    ACTIONS(124), 1,
      anon_sym_LT,
    STATE(26), 1,
      aux_sym_parameter_list_repeat1,
  [563] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(126), 3,
      anon_sym_LT,
      anon_sym_EQ_GT,
      sym_identifier,
  [572] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(128), 1,
      anon_sym_GT,
    STATE(31), 1,
      sym_function_parameter_list,
  [582] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(130), 1,
      anon_sym_GT,
    STATE(47), 1,
      sym_parameter_list,
  [592] = 3,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(132), 1,
      anon_sym_EQ_GT,
    STATE(44), 1,
      sym_function_return_type,
  [602] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(134), 1,
      anon_sym_SEMI,
  [609] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(136), 1,
      anon_sym_SEMI,
  [616] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(138), 1,
      anon_sym_COLON,
  [623] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
  [630] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(142), 1,
      anon_sym_COLON,
  [637] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(144), 1,
      anon_sym_SEMI,
  [644] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(122), 1,
      anon_sym_SEMI,
  [651] = 2,
    ACTIONS(146), 1,
      aux_sym_comment_token1,
    ACTIONS(148), 1,
      anon_sym_LF,
  [658] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(105), 1,
      anon_sym_EQ_GT,
  [665] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(150), 1,
      anon_sym_COLON_COLON,
  [672] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(152), 1,
      anon_sym_SEMI,
  [679] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(154), 1,
      sym_identifier,
  [686] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(156), 1,
      anon_sym_SEMI,
  [693] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(158), 1,
      anon_sym_EQ,
  [700] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(160), 1,
      anon_sym_SEMI,
  [707] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(162), 1,
      anon_sym_SEMI,
  [714] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(164), 1,
      anon_sym_EQ_GT,
  [721] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(166), 1,
      anon_sym_SEMI,
  [728] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(168), 1,
      anon_sym_SEMI,
  [735] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(170), 1,
      anon_sym_SEMI,
  [742] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(172), 1,
      sym_identifier,
  [749] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(174), 1,
      anon_sym_SEMI,
  [756] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(176), 1,
      anon_sym_SEMI,
  [763] = 2,
    ACTIONS(3), 1,
      anon_sym_LF,
    ACTIONS(178), 1,
      anon_sym_GT,
  [770] = 1,
    ACTIONS(180), 1,
      anon_sym_LF,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 174,
  [SMALL_STATE(7)] = 197,
  [SMALL_STATE(8)] = 220,
  [SMALL_STATE(9)] = 243,
  [SMALL_STATE(10)] = 261,
  [SMALL_STATE(11)] = 279,
  [SMALL_STATE(12)] = 297,
  [SMALL_STATE(13)] = 315,
  [SMALL_STATE(14)] = 339,
  [SMALL_STATE(15)] = 360,
  [SMALL_STATE(16)] = 381,
  [SMALL_STATE(17)] = 402,
  [SMALL_STATE(18)] = 420,
  [SMALL_STATE(19)] = 433,
  [SMALL_STATE(20)] = 450,
  [SMALL_STATE(21)] = 461,
  [SMALL_STATE(22)] = 476,
  [SMALL_STATE(23)] = 493,
  [SMALL_STATE(24)] = 505,
  [SMALL_STATE(25)] = 521,
  [SMALL_STATE(26)] = 533,
  [SMALL_STATE(27)] = 547,
  [SMALL_STATE(28)] = 563,
  [SMALL_STATE(29)] = 572,
  [SMALL_STATE(30)] = 582,
  [SMALL_STATE(31)] = 592,
  [SMALL_STATE(32)] = 602,
  [SMALL_STATE(33)] = 609,
  [SMALL_STATE(34)] = 616,
  [SMALL_STATE(35)] = 623,
  [SMALL_STATE(36)] = 630,
  [SMALL_STATE(37)] = 637,
  [SMALL_STATE(38)] = 644,
  [SMALL_STATE(39)] = 651,
  [SMALL_STATE(40)] = 658,
  [SMALL_STATE(41)] = 665,
  [SMALL_STATE(42)] = 672,
  [SMALL_STATE(43)] = 679,
  [SMALL_STATE(44)] = 686,
  [SMALL_STATE(45)] = 693,
  [SMALL_STATE(46)] = 700,
  [SMALL_STATE(47)] = 707,
  [SMALL_STATE(48)] = 714,
  [SMALL_STATE(49)] = 721,
  [SMALL_STATE(50)] = 728,
  [SMALL_STATE(51)] = 735,
  [SMALL_STATE(52)] = 742,
  [SMALL_STATE(53)] = 749,
  [SMALL_STATE(54)] = 756,
  [SMALL_STATE(55)] = 763,
  [SMALL_STATE(56)] = 770,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(17),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter_list, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameter_list_repeat1, 2), SHIFT_REPEAT(41),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameter_list_repeat1, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter_list, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(26),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_parameter, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [140] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, .production_id = 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter_list, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_return_type, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
