add_test(
  NAME mizcore_scanner_test
  COMMAND ${CMAKE_CURRENT_BINARY_DIR}/mizcore_scanner_test.out
  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/data/)

add_executable(
  mizcore_scanner_test.out symbol_table_test.cpp vct_file_handler_test.cpp
                           miz_file_handler_test.cpp main.cpp)

target_link_libraries(mizcore_scanner_test.out PRIVATE doctest::doctest
                                                       mizcore::scanner)
target_compile_features(mizcore_scanner_test.out PRIVATE cxx_std_17)
