// Copyright (c) 2024, The Endstone Project. (https://endstone.dev) All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include "endstone/actor/actor.h"

namespace endstone {
/**
 * @brief Represents a mobile entity (i.e. living entity), such as a monster or player.
 */
class Mob : public virtual Actor {
public:
    /**
     * @brief Checks to see if an actor is gliding, such as using an Elytra.
     * @return True if this actor is gliding.
     */
    [[nodiscard]] virtual bool isGliding() const = 0;
};
}  // namespace endstone
