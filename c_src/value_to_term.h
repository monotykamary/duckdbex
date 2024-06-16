#pragma once
#include <erl_nif.h>

namespace duckdb {
  class Value;
}

namespace nif {
  bool array_value_to_term(ErlNifEnv* env, const duckdb::Value& value, ERL_NIF_TERM& sink);
  bool value_to_term(ErlNifEnv* env, const duckdb::Value& value, ERL_NIF_TERM& sink);
}
