#include <CTransform.h>

CTransform::CTransform()
  : pos({ 0,0 })
  , velocity({ 0,0 }) 
{}

CTransform::CTransform(const Vec2& p, const Vec2& v)
  : pos(p)
  , velocity(v) 
{}