#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_COLON = 3,
  anon_sym_EQ = 4,
  anon_sym_end = 5,
  anon_sym_func_COLON = 6,
  anon_sym_GT = 7,
  anon_sym_LT = 8,
  anon_sym_COLON_COLON = 9,
  anon_sym_EQ_GT = 10,
  anon_sym_return = 11,
  anon_sym_if_GT = 12,
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
  anon_sym_SLASH_STAR = 27,
  anon_sym_STAR_SLASH = 28,
  sym_string = 29,
  sym_number = 30,
  anon_sym_true = 31,
  anon_sym_false = 32,
  sym_source_file = 33,
  sym__statement = 34,
  sym_variable_definition = 35,
  sym_block = 36,
  sym_function_definition = 37,
  sym_function_parameter_list = 38,
  sym_parameter_list = 39,
  sym__function_parameter = 40,
  sym_function_return_type = 41,
  sym_function_call = 42,
  sym_return_statement = 43,
  sym_if_statement = 44,
  sym_comparison = 45,
  sym_expression = 46,
  sym_type = 47,
  sym_comment = 48,
  sym_boolean = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_function_parameter_list_repeat1 = 51,
  aux_sym_parameter_list_repeat1 = 52,
  aux_sym_expression_repeat1 = 53,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_end] = "end",
  [anon_sym_func_COLON] = "func:",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_return] = "return",
  [anon_sym_if_GT] = "if>",
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
  [anon_sym_func_COLON] = anon_sym_func_COLON,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_if_GT] = anon_sym_if_GT,
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
      if (eof) ADVANCE(11);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '+') ADVANCE(28);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(18);
      if (lookahead == '?') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '+') ADVANCE(28);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '?') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(21);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(20);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(21);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_func_COLON);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_if_GT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_QMARK_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_QMARK_LT);
      if (lookahead == '=') ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_QMARK_GT_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_QMARK_LT_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '>') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
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
      if (lookahead == 'r') ADVANCE(6);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_Void);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(33);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_Number);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 10},
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
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 35},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 35},
  [51] = {.lex_state = 10},
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
    [anon_sym_func_COLON] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_if_GT] = ACTIONS(1),
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
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(40),
    [sym__statement] = STATE(5),
    [sym_variable_definition] = STATE(44),
    [sym_function_definition] = STATE(44),
    [sym_function_call] = STATE(44),
    [sym_return_statement] = STATE(44),
    [sym_if_statement] = STATE(44),
    [sym_type] = STATE(33),
    [sym_comment] = STATE(44),
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
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(24), 1,
      anon_sym_end,
    ACTIONS(26), 1,
      anon_sym_func_COLON,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(32), 1,
      anon_sym_if_GT,
    ACTIONS(38), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(41), 1,
      anon_sym_SLASH_STAR,
    STATE(33), 1,
      sym_type,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    ACTIONS(35), 3,
      anon_sym_Void,
      anon_sym_Number,
      anon_sym_String,
    STATE(44), 6,
      sym_variable_definition,
      sym_function_definition,
      sym_function_call,
      sym_return_statement,
      sym_if_statement,
      sym_comment,
  [45] = 12,
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
    ACTIONS(44), 1,
      anon_sym_end,
    STATE(33), 1,
      sym_type,
    STATE(54), 1,
      sym_block,
    STATE(4), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    ACTIONS(13), 3,
      anon_sym_Void,
      anon_sym_Number,
      anon_sym_String,
    STATE(44), 6,
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
    STATE(33), 1,
      sym_type,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    ACTIONS(13), 3,
      anon_sym_Void,
      anon_sym_Number,
      anon_sym_String,
    STATE(44), 6,
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
    STATE(33), 1,
      sym_type,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    ACTIONS(13), 3,
      anon_sym_Void,
      anon_sym_Number,
      anon_sym_String,
    STATE(44), 6,
      sym_variable_definition,
      sym_function_definition,
      sym_function_call,
      sym_return_statement,
      sym_if_statement,
      sym_comment,
  [174] = 4,
    STATE(6), 1,
      aux_sym_expression_repeat1,
    ACTIONS(52), 2,
      anon_sym_QMARK_GT,
      anon_sym_QMARK_LT,
    ACTIONS(50), 4,
      anon_sym_SEMI,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_GT_EQ,
      anon_sym_QMARK_LT_EQ,
    ACTIONS(54), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [194] = 4,
    STATE(6), 1,
      aux_sym_expression_repeat1,
    ACTIONS(59), 2,
      anon_sym_QMARK_GT,
      anon_sym_QMARK_LT,
    ACTIONS(57), 4,
      anon_sym_SEMI,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_GT_EQ,
      anon_sym_QMARK_LT_EQ,
    ACTIONS(61), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [214] = 2,
    ACTIONS(63), 5,
      ts_builtin_sym_end,
      anon_sym_func_COLON,
      anon_sym_if_GT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(65), 6,
      anon_sym_end,
      anon_sym_return,
      anon_sym_Void,
      anon_sym_Number,
      anon_sym_String,
      sym_identifier,
  [230] = 4,
    STATE(7), 1,
      aux_sym_expression_repeat1,
    ACTIONS(69), 2,
      anon_sym_QMARK_GT,
      anon_sym_QMARK_LT,
    ACTIONS(61), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(67), 4,
      anon_sym_SEMI,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_GT_EQ,
      anon_sym_QMARK_LT_EQ,
  [250] = 2,
    ACTIONS(52), 2,
      anon_sym_QMARK_GT,
      anon_sym_QMARK_LT,
    ACTIONS(50), 8,
      anon_sym_SEMI,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_GT_EQ,
      anon_sym_QMARK_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [265] = 2,
    ACTIONS(73), 2,
      anon_sym_QMARK_GT,
      anon_sym_QMARK_LT,
    ACTIONS(71), 8,
      anon_sym_SEMI,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_GT_EQ,
      anon_sym_QMARK_LT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [280] = 6,
    ACTIONS(75), 1,
      sym_identifier,
    STATE(9), 1,
      sym_boolean,
    STATE(19), 1,
      sym_expression,
    STATE(55), 1,
      sym_comparison,
    ACTIONS(77), 2,
      sym_string,
      sym_number,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
  [301] = 5,
    ACTIONS(75), 1,
      sym_identifier,
    STATE(9), 1,
      sym_boolean,
    STATE(38), 1,
      sym_expression,
    ACTIONS(77), 2,
      sym_string,
      sym_number,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
  [319] = 5,
    ACTIONS(75), 1,
      sym_identifier,
    STATE(9), 1,
      sym_boolean,
    STATE(36), 1,
      sym_expression,
    ACTIONS(77), 2,
      sym_string,
      sym_number,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
  [337] = 5,
    ACTIONS(75), 1,
      sym_identifier,
    STATE(9), 1,
      sym_boolean,
    STATE(42), 1,
      sym_expression,
    ACTIONS(77), 2,
      sym_string,
      sym_number,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
  [355] = 4,
    ACTIONS(81), 1,
      sym_identifier,
    STATE(10), 1,
      sym_boolean,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(83), 2,
      sym_string,
      sym_number,
  [370] = 4,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      anon_sym_EQ_GT,
    STATE(20), 2,
      sym__function_parameter,
      aux_sym_function_parameter_list_repeat1,
  [384] = 1,
    ACTIONS(91), 5,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_EQ_GT,
      sym_identifier,
  [392] = 2,
    ACTIONS(95), 2,
      anon_sym_QMARK_GT,
      anon_sym_QMARK_LT,
    ACTIONS(93), 3,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_GT_EQ,
      anon_sym_QMARK_LT_EQ,
  [402] = 3,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(100), 2,
      anon_sym_LT,
      anon_sym_EQ_GT,
    STATE(20), 2,
      sym__function_parameter,
      aux_sym_function_parameter_list_repeat1,
  [414] = 4,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_LT,
    ACTIONS(104), 1,
      anon_sym_EQ_GT,
    STATE(17), 2,
      sym__function_parameter,
      aux_sym_function_parameter_list_repeat1,
  [428] = 4,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(110), 1,
      anon_sym_LT,
    STATE(25), 1,
      aux_sym_parameter_list_repeat1,
  [441] = 2,
    STATE(27), 1,
      sym_type,
    ACTIONS(112), 3,
      anon_sym_Void,
      anon_sym_Number,
      anon_sym_String,
  [450] = 4,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(116), 1,
      anon_sym_SEMI,
    ACTIONS(118), 1,
      anon_sym_LT,
    STATE(22), 1,
      aux_sym_parameter_list_repeat1,
  [463] = 3,
    ACTIONS(120), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(123), 2,
      anon_sym_SEMI,
      anon_sym_LT,
  [474] = 2,
    STATE(49), 1,
      sym_type,
    ACTIONS(112), 3,
      anon_sym_Void,
      anon_sym_Number,
      anon_sym_String,
  [483] = 1,
    ACTIONS(125), 3,
      anon_sym_LT,
      anon_sym_EQ_GT,
      sym_identifier,
  [489] = 2,
    ACTIONS(127), 1,
      anon_sym_GT,
    STATE(46), 1,
      sym_parameter_list,
  [496] = 2,
    ACTIONS(129), 1,
      anon_sym_EQ_GT,
    STATE(39), 1,
      sym_function_return_type,
  [503] = 2,
    ACTIONS(131), 1,
      anon_sym_GT,
    STATE(29), 1,
      sym_function_parameter_list,
  [510] = 1,
    ACTIONS(133), 1,
      anon_sym_COLON_COLON,
  [514] = 1,
    ACTIONS(135), 1,
      sym_identifier,
  [518] = 1,
    ACTIONS(137), 1,
      anon_sym_COLON,
  [522] = 1,
    ACTIONS(108), 1,
      anon_sym_SEMI,
  [526] = 1,
    ACTIONS(139), 1,
      anon_sym_EQ,
  [530] = 1,
    ACTIONS(141), 1,
      anon_sym_SEMI,
  [534] = 1,
    ACTIONS(143), 1,
      anon_sym_SEMI,
  [538] = 1,
    ACTIONS(145), 1,
      anon_sym_SEMI,
  [542] = 1,
    ACTIONS(147), 1,
      anon_sym_SEMI,
  [546] = 1,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
  [550] = 1,
    ACTIONS(151), 1,
      sym_identifier,
  [554] = 1,
    ACTIONS(153), 1,
      anon_sym_SEMI,
  [558] = 1,
    ACTIONS(155), 1,
      anon_sym_SEMI,
  [562] = 1,
    ACTIONS(157), 1,
      anon_sym_SEMI,
  [566] = 1,
    ACTIONS(159), 1,
      aux_sym_comment_token1,
  [570] = 1,
    ACTIONS(161), 1,
      anon_sym_SEMI,
  [574] = 1,
    ACTIONS(163), 1,
      anon_sym_EQ_GT,
  [578] = 1,
    ACTIONS(165), 1,
      anon_sym_STAR_SLASH,
  [582] = 1,
    ACTIONS(167), 1,
      anon_sym_SEMI,
  [586] = 1,
    ACTIONS(169), 1,
      aux_sym_comment_token1,
  [590] = 1,
    ACTIONS(89), 1,
      anon_sym_EQ_GT,
  [594] = 1,
    ACTIONS(171), 1,
      anon_sym_SEMI,
  [598] = 1,
    ACTIONS(173), 1,
      anon_sym_SEMI,
  [602] = 1,
    ACTIONS(175), 1,
      anon_sym_SEMI,
  [606] = 1,
    ACTIONS(177), 1,
      anon_sym_SEMI,
  [610] = 1,
    ACTIONS(179), 1,
      anon_sym_SEMI,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 174,
  [SMALL_STATE(7)] = 194,
  [SMALL_STATE(8)] = 214,
  [SMALL_STATE(9)] = 230,
  [SMALL_STATE(10)] = 250,
  [SMALL_STATE(11)] = 265,
  [SMALL_STATE(12)] = 280,
  [SMALL_STATE(13)] = 301,
  [SMALL_STATE(14)] = 319,
  [SMALL_STATE(15)] = 337,
  [SMALL_STATE(16)] = 355,
  [SMALL_STATE(17)] = 370,
  [SMALL_STATE(18)] = 384,
  [SMALL_STATE(19)] = 392,
  [SMALL_STATE(20)] = 402,
  [SMALL_STATE(21)] = 414,
  [SMALL_STATE(22)] = 428,
  [SMALL_STATE(23)] = 441,
  [SMALL_STATE(24)] = 450,
  [SMALL_STATE(25)] = 463,
  [SMALL_STATE(26)] = 474,
  [SMALL_STATE(27)] = 483,
  [SMALL_STATE(28)] = 489,
  [SMALL_STATE(29)] = 496,
  [SMALL_STATE(30)] = 503,
  [SMALL_STATE(31)] = 510,
  [SMALL_STATE(32)] = 514,
  [SMALL_STATE(33)] = 518,
  [SMALL_STATE(34)] = 522,
  [SMALL_STATE(35)] = 526,
  [SMALL_STATE(36)] = 530,
  [SMALL_STATE(37)] = 534,
  [SMALL_STATE(38)] = 538,
  [SMALL_STATE(39)] = 542,
  [SMALL_STATE(40)] = 546,
  [SMALL_STATE(41)] = 550,
  [SMALL_STATE(42)] = 554,
  [SMALL_STATE(43)] = 558,
  [SMALL_STATE(44)] = 562,
  [SMALL_STATE(45)] = 566,
  [SMALL_STATE(46)] = 570,
  [SMALL_STATE(47)] = 574,
  [SMALL_STATE(48)] = 578,
  [SMALL_STATE(49)] = 582,
  [SMALL_STATE(50)] = 586,
  [SMALL_STATE(51)] = 590,
  [SMALL_STATE(52)] = 594,
  [SMALL_STATE(53)] = 598,
  [SMALL_STATE(54)] = 602,
  [SMALL_STATE(55)] = 606,
  [SMALL_STATE(56)] = 610,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(16),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter_list, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameter_list_repeat1, 2), SHIFT_REPEAT(31),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameter_list_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter_list, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(25),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_parameter, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [149] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter_list, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_return_type, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
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
