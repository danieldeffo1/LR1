if(EXISTS "C:/Users/qwer7/OneDrive/Рабочий стол/LR1/out/build/x64-Debug/tests/lr1_tests[1]_tests.cmake")
  include("C:/Users/qwer7/OneDrive/Рабочий стол/LR1/out/build/x64-Debug/tests/lr1_tests[1]_tests.cmake")
else()
  add_test(lr1_tests_NOT_BUILT lr1_tests_NOT_BUILT)
endif()
