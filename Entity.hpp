#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <stdint.h>
#include <cstdlib>
#include <iostream>

using Entity = uint32_t;
const Entity MAX_ENTITES = 1000;

using ComponentType = std::uint8_t;
const ComponentType MAX_COMPONENT = 32;

#endif /* !ENTITY_HPP */