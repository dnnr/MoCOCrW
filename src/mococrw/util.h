/*
 * #%L
 * %%
 * Copyright (C) 2018 BMW Car IT GmbH
 * %%
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * #L%
 */
#pragma once

#include <memory>
#include <vector>

namespace mococrw
{
namespace utility
{

template <class T>
using SharedPtrTypeFromUniquePtr = std::shared_ptr<typename T::element_type>;

std::string toHex(const std::vector<uint8_t> &data);

std::vector<uint8_t> fromHex(const std::string &hexData);

std::vector<uint8_t> cryptoRandomBytes(size_t length);
}  //::utility
}  //::mococrw
