module.exports = grammar({
  name: 'Aurora',

  word: $ => $.identifier,

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => seq(
      choice(
        $.function_definition,
        $.variable_definition,
        $.function_call,
        $.return_statement,
        $.if_statement,
        $.comment
        // TODO: add more definitions
      ),
      ';'
    ),

    variable_definition: $ => seq(
      $._type,
      ':',
      field('name', $.identifier),
      '=',
      field('value', choice(
        $.string,
        $.number,
        $.boolean,
        'null'
      ))
    ),

    block: $ => seq(
      repeat($._statement),
      'end'
    ),

    function_definition: $ => seq(
      'func:',
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
      $._type
    ),

    function_return_type: $ => seq(
      '=>',
      $._type
    ),

    function_call: $ => seq(
      $.identifier,
      $.parameter_list
    ),

    return_statement: $ => seq(
      'return',
      choice(
        $.string,
        $.number,
        $.boolean,
        'null'
      )
    ),

    if_statement: $ => seq(
      'if>'
    ),

    _type: $ => choice(
      'Void',
      'Number',
      'String'
    ),

    comment: $ => choice(
      seq('//', /.*/),
      seq('/*', /.*/, '*/')
    ),

    string: $ => /".*"/,

    number: $ => /[0-9]+(\.[0-9]+)?/,

    boolean: $ => choice('true', 'false'),

    identifier: $ => /([_a-zA-Z])([_a-zA-Z0-9])*/
  }
});
