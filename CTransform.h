#pragma once
#include <Vec2.h>
class CTransform {
public:
  Vec2 pos;
  Vec2 velocity;
  CTransform();
  CTransform(const Vec2& p, const Vec2& v);
};