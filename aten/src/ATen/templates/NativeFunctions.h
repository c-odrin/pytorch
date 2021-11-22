#pragma once

// ${generated_comment}

#ifdef TORCH_ASSERT_NO_OPERATORS
#error This change adds a dependency on native_functions.yaml,            \
  meaning the file will need to be re-compiled every time an operator     \
  is changed or added. Consider if your change would be better placed in  \
  another file, or if a more specific header might achieve the same goal. \
  See NOTE: [Tensor vs. TensorBase]
#endif

#ifdef TORCH_ASSERT_ONLY_METHOD_OPERATORS
#error This change adds a dependency on all pytorch operators, meaning the      \
  file will need to be re-compiled every time an operator is changed or added.  \
  Consider including a specific operator from <ATen/ops/{my_operator}_native.h> \
  and see NOTE [TORCH_ASSERT_ONLY_METHOD_OPERATORS].
#endif

${NativeFunctions_includes}
