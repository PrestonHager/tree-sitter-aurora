module.exports = grammar({
  name: 'Aurora',

  word: $ => $.identifier,
  extras: $ => [
    '\n',
    ' '
  ],

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      seq(
        choice(
          $.function_definition,
          $.variable_definition,
          $.function_call,
          $.return_statement,
          $.if_statement,
        ),
        ';'
      ),
      $.comment
    ),

    variable_definition: $ => seq(
      field('type', $.type),
      ':',
      field('name', $.identifier),
      '=',
      field('value', $.expression)
    ),

    block: $ => seq(
      repeat($._statement),
      'end'
    ),

    function_definition: $ => seq(
      field('func_keyword', 'func'),
      ':',
      field('name', $.identifier),
      field('parameters', $.function_parameter_list),
      field('return_type', $.function_return_type),
      ';',
      field('body', $.block)
    ),

    function_parameter_list: $ => seq(
      '>',
      optional(
        repeat($._function_parameter)
      ),
      optional('<')
    ),

    parameter_list: $ => seq(
      '>',
      repeat($.identifier),
      // TODO: add parameters
      optional('<')
    ),

    _function_parameter: $ => seq(
      $.identifier,
      '::',
      $.type
    ),

    function_return_type: $ => seq(
      '=>',
      $.type
    ),

    function_call: $ => seq(
      $.identifier,
      $.parameter_list
    ),

    return_statement: $ => seq(
      'return',
      $.expression
    ),

    if_statement: $ => seq(
      field('if_keyword', 'if'),
      '>',
      $.comparison
    ),

    comparison: $ => seq(
      $.expression,
      choice("?=", "?>", "?<", "?>=", "?<="),
      $.expression
    ),

    expression: $ => seq(
      choice($.identifier, $.string, $.number, $.boolean),
      repeat(seq(
        choice("+", "-", "*", "/"),
        choice($.identifier, $.string, $.number, $.boolean)
      ))
    ),

    type: $ => choice(
      'Void',
      'Number',
      'String'
    ),

    comment: $ => choice(
      seq('//', /.*/, '\n')
    ),

    string: $ => /".*"/,

    number: $ => /[0-9]+(\.[0-9]+)?/,

    boolean: $ => choice('true', 'false'),

    identifier: $ => /([_a-zA-Z])([_a-zA-Z0-9])*/
  }
});
