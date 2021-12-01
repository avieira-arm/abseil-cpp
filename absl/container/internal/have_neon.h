// Copyright 2022 The Abseil Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// Shared config probing for AArch64 AdvSimd instructions used in Swiss tables.
#ifndef ABSL_CONTAINER_INTERNAL_HAVE_NEON_H_
#define ABSL_CONTAINER_INTERNAL_HAVE_NEON_H_

#ifndef ABSL_INTERNAL_RAW_HASH_SET_HAVE_NEON
#if defined(__ARM_ARCH_ISA_A64)
#define ABSL_INTERNAL_RAW_HASH_SET_HAVE_NEON 1
#else
#define ABSL_INTERNAL_RAW_HASH_SET_HAVE_NEON 0
#endif
#endif

#if ABSL_INTERNAL_RAW_HASH_SET_HAVE_NEON
#include <arm_neon.h>
#endif

#endif  // ABSL_CONTAINER_INTERNAL_HAVE_NEON_H_
