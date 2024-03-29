#include <EntityManager.h>

std::shared_ptr<Entity> EntityManager::addEntity(const std::string& tag) {
  auto e = std::shared_ptr<Entity>(new Entity(tag, m_totalEntities++));
  m_toAdd.push_back(e);
  // m_entities.push_back(e);
  // m_entityMap[tag].push_back(e);
  return e;
}

EntityVec& EntityManager::getEntities() {
  return m_entities;
}

EntityVec& EntityManager::getEntities(const std::string& tag) {
  return m_entityMap[tag];
}

void EntityManager::update() {
  for (auto e : m_toAdd) {
    m_entities.push_back(e);
    m_entityMap[e->tag()].push_back(e);
  }
  m_toAdd.clear();
}

