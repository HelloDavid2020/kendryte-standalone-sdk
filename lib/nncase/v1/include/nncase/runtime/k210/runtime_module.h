/* Copyright 2020 Canaan Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once
#include "compiler_defs.h"
#include <nncase/runtime/runtime_module.h>

BEGIN_NS_NNCASE_RT_K210

NNCASE_INLINE_VAR constexpr module_type_t k210_module_type = to_module_type("k210");

NNCASE_MODULES_K210_API result<std::unique_ptr<runtime_module>> create_k210_runtime_module();

END_NS_NNCASE_RT_K210
