#pragma once
#include <iostream>
#include <memory>
#include <CTransform.h>
#include <CName.h>
#include <CShape.h>
#include <CBBox.h>
class Entity
{
  friend class EntityManager;
  const size_t m_id = 0;
  const std::string m_tag = "Default";
  bool m_alive = true;
  Entity(const std::string& tag, size_t id);
public:
  std::shared_ptr<CTransform> cTransform;
  std::shared_ptr<CName> cName;
  std::shared_ptr<CShape> cShape;
  std::shared_ptr<CBBox> cBBox;
  void destroy();
  const std::string& tag();
};