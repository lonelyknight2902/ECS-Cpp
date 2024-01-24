#include <Entity.h>

Entity::Entity(const std::string& tag, size_t id)
  : m_tag(tag)
  , m_id(id)
{};
void Entity::destroy() { m_alive = false; }
const std::string& Entity::tag() { return m_tag; }