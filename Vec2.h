#pragma once
class Vec2 {
public:
  float x;
  float y;

  Vec2();
  Vec2(float xin, float yin);

  Vec2 operator + (const Vec2& rhs) const;

  void operator += (const Vec2& rhs);

  Vec2& add(const Vec2& v);

  Vec2& scale(float s);

  Vec2& rotate(float deg);

  // float dist(const Vec2& v) const {
  //   return sqrtf((v.x - x) * (v.x - x) + (v.y - y) * (v.y - y));
  // }
};