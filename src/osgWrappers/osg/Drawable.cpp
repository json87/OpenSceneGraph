// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/BoundingBox>
#include <osg/CopyOp>
#include <osg/Drawable>
#include <osg/Geometry>
#include <osg/Node>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/PrimitiveSet>
#include <osg/Shape>
#include <osg/State>
#include <osg/StateSet>
#include <osg/Vec2>
#include <osg/Vec3>
#include <osg/Vec4>
#include <osg/Vec4ub>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::vector< osg::Node * >, osg::Drawable::ParentList);

TYPE_NAME_ALIAS(unsigned int, osg::Drawable::AttributeType);

BEGIN_ENUM_REFLECTOR(osg::Drawable::AttributeTypes)
	I_EnumLabel(osg::Drawable::VERTICES);
	I_EnumLabel(osg::Drawable::WEIGHTS);
	I_EnumLabel(osg::Drawable::NORMALS);
	I_EnumLabel(osg::Drawable::COLORS);
	I_EnumLabel(osg::Drawable::SECONDARY_COLORS);
	I_EnumLabel(osg::Drawable::FOG_COORDS);
	I_EnumLabel(osg::Drawable::ATTIBUTE_6);
	I_EnumLabel(osg::Drawable::ATTIBUTE_7);
	I_EnumLabel(osg::Drawable::TEXTURE_COORDS);
	I_EnumLabel(osg::Drawable::TEXTURE_COORDS_0);
	I_EnumLabel(osg::Drawable::TEXTURE_COORDS_1);
	I_EnumLabel(osg::Drawable::TEXTURE_COORDS_2);
	I_EnumLabel(osg::Drawable::TEXTURE_COORDS_3);
	I_EnumLabel(osg::Drawable::TEXTURE_COORDS_4);
	I_EnumLabel(osg::Drawable::TEXTURE_COORDS_5);
	I_EnumLabel(osg::Drawable::TEXTURE_COORDS_6);
	I_EnumLabel(osg::Drawable::TEXTURE_COORDS_7);
END_REFLECTOR

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osg::Drawable)
	I_BaseType(osg::Object);
	I_Constructor0();
	I_ConstructorWithDefaults2(IN, const osg::Drawable &, drawable, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY);
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	I_Method0(const char *, libraryName);
	I_Method0(const char *, className);
	I_Method0(osg::Geometry *, asGeometry);
	I_Method0(const osg::Geometry *, asGeometry);
	I_Method0(const osg::Drawable::ParentList &, getParents);
	I_Method0(osg::Drawable::ParentList, getParents);
	I_Method1(osg::Node *, getParent, IN, unsigned int, i);
	I_Method1(const osg::Node *, getParent, IN, unsigned int, i);
	I_Method0(unsigned int, getNumParents);
	I_Method1(void, setStateSet, IN, osg::StateSet *, stateset);
	I_Method0(osg::StateSet *, getStateSet);
	I_Method0(const osg::StateSet *, getStateSet);
	I_Method0(osg::StateSet *, getOrCreateStateSet);
	I_Method1(void, setInitialBound, IN, const osg::BoundingBox &, bbox);
	I_Method0(const osg::BoundingBox &, getInitialBound);
	I_Method0(void, dirtyBound);
	I_Method0(const osg::BoundingBox &, getBound);
	I_Method0(osg::BoundingBox, computeBound);
	I_Method1(void, setComputeBoundingBoxCallback, IN, osg::Drawable::ComputeBoundingBoxCallback *, callback);
	I_Method0(osg::Drawable::ComputeBoundingBoxCallback *, getComputeBoundingBoxCallback);
	I_Method0(const osg::Drawable::ComputeBoundingBoxCallback *, getComputeBoundingBoxCallback);
	I_Method1(void, setShape, IN, osg::Shape *, shape);
	I_Method0(osg::Shape *, getShape);
	I_Method0(const osg::Shape *, getShape);
	I_Method1(void, setSupportsDisplayList, IN, bool, flag);
	I_Method0(bool, getSupportsDisplayList);
	I_Method1(void, setUseDisplayList, IN, bool, flag);
	I_Method0(bool, getUseDisplayList);
	I_Method1(void, setUseVertexBufferObjects, IN, bool, flag);
	I_Method0(bool, getUseVertexBufferObjects);
	I_Method0(void, dirtyDisplayList);
	I_Method0(unsigned int, getGLObjectSizeHint);
	I_Method1(void, draw, IN, osg::State &, state);
	I_Method1(void, compileGLObjects, IN, osg::State &, state);
	I_MethodWithDefaults1(void, releaseGLObjects, IN, osg::State *, state, 0);
	I_Method1(void, setUpdateCallback, IN, osg::Drawable::UpdateCallback *, ac);
	I_Method0(osg::Drawable::UpdateCallback *, getUpdateCallback);
	I_Method0(const osg::Drawable::UpdateCallback *, getUpdateCallback);
	I_Method0(bool, requiresUpdateTraversal);
	I_Method1(void, setEventCallback, IN, osg::Drawable::EventCallback *, ac);
	I_Method0(osg::Drawable::EventCallback *, getEventCallback);
	I_Method0(const osg::Drawable::EventCallback *, getEventCallback);
	I_Method0(bool, requiresEventTraversal);
	I_Method1(void, setCullCallback, IN, osg::Drawable::CullCallback *, cc);
	I_Method0(osg::Drawable::CullCallback *, getCullCallback);
	I_Method0(const osg::Drawable::CullCallback *, getCullCallback);
	I_Method1(void, setDrawCallback, IN, osg::Drawable::DrawCallback *, dc);
	I_Method0(osg::Drawable::DrawCallback *, getDrawCallback);
	I_Method0(const osg::Drawable::DrawCallback *, getDrawCallback);
	I_Method1(void, drawImplementation, IN, osg::State &, state);
	I_Method1(bool, supports, IN, const osg::Drawable::AttributeFunctor &, x);
	I_Method1(void, accept, IN, osg::Drawable::AttributeFunctor &, x);
	I_Method1(bool, supports, IN, const osg::Drawable::ConstAttributeFunctor &, x);
	I_Method1(void, accept, IN, osg::Drawable::ConstAttributeFunctor &, x);
	I_Method1(bool, supports, IN, const osg::PrimitiveFunctor &, x);
	I_Method1(void, accept, IN, osg::PrimitiveFunctor &, x);
	I_Method1(bool, supports, IN, const osg::PrimitiveIndexFunctor &, x);
	I_Method1(void, accept, IN, osg::PrimitiveIndexFunctor &, x);
	I_ReadOnlyProperty(const osg::BoundingBox &, Bound);
	I_Property(osg::Drawable::ComputeBoundingBoxCallback *, ComputeBoundingBoxCallback);
	I_Property(osg::Drawable::CullCallback *, CullCallback);
	I_Property(osg::Drawable::DrawCallback *, DrawCallback);
	I_Property(osg::Drawable::EventCallback *, EventCallback);
	I_ReadOnlyProperty(unsigned int, GLObjectSizeHint);
	I_Property(const osg::BoundingBox &, InitialBound);
	I_ArrayProperty_G(osg::Node *, Parent, Parents, unsigned int, void);
	I_ReadOnlyProperty(osg::Drawable::ParentList, Parents);
	I_Property(osg::Shape *, Shape);
	I_Property(osg::StateSet *, StateSet);
	I_Property(bool, SupportsDisplayList);
	I_Property(osg::Drawable::UpdateCallback *, UpdateCallback);
	I_Property(bool, UseDisplayList);
	I_Property(bool, UseVertexBufferObjects);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::Drawable::AttributeFunctor)
	I_Constructor0();
	I_Method3(void, apply, IN, osg::Drawable::AttributeType, x, IN, unsigned, int, IN, GLbyte *, x);
	I_Method3(void, apply, IN, osg::Drawable::AttributeType, x, IN, unsigned, int, IN, GLshort *, x);
	I_Method3(void, apply, IN, osg::Drawable::AttributeType, x, IN, unsigned, int, IN, GLint *, x);
	I_Method3(void, apply, IN, osg::Drawable::AttributeType, x, IN, unsigned, int, IN, GLubyte *, x);
	I_Method3(void, apply, IN, osg::Drawable::AttributeType, x, IN, unsigned, int, IN, GLushort *, x);
	I_Method3(void, apply, IN, osg::Drawable::AttributeType, x, IN, unsigned, int, IN, GLuint *, x);
	I_Method3(void, apply, IN, osg::Drawable::AttributeType, x, IN, unsigned, int, IN, float *, x);
	I_Method3(void, apply, IN, osg::Drawable::AttributeType, x, IN, unsigned, int, IN, osg::Vec2 *, x);
	I_Method3(void, apply, IN, osg::Drawable::AttributeType, x, IN, unsigned, int, IN, osg::Vec3 *, x);
	I_Method3(void, apply, IN, osg::Drawable::AttributeType, x, IN, unsigned, int, IN, osg::Vec4 *, x);
	I_Method3(void, apply, IN, osg::Drawable::AttributeType, x, IN, unsigned, int, IN, osg::Vec4ub *, x);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::Drawable::ComputeBoundingBoxCallback)
	I_BaseType(osg::Object);
	I_Constructor0();
	I_Constructor2(IN, const osg::Drawable::ComputeBoundingBoxCallback &, x, IN, const osg::CopyOp &, x);
	I_Method0(osg::Object *, cloneType);
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	I_Method0(const char *, libraryName);
	I_Method0(const char *, className);
	I_Method1(osg::BoundingBox, computeBound, IN, const osg::Drawable &, x);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::Drawable::ConstAttributeFunctor)
	I_Constructor0();
	I_Method3(void, apply, IN, osg::Drawable::AttributeType, x, IN, const unsigned, int, IN, const GLbyte *, x);
	I_Method3(void, apply, IN, osg::Drawable::AttributeType, x, IN, const unsigned, int, IN, const GLshort *, x);
	I_Method3(void, apply, IN, osg::Drawable::AttributeType, x, IN, const unsigned, int, IN, const GLint *, x);
	I_Method3(void, apply, IN, osg::Drawable::AttributeType, x, IN, const unsigned, int, IN, const GLubyte *, x);
	I_Method3(void, apply, IN, osg::Drawable::AttributeType, x, IN, const unsigned, int, IN, const GLushort *, x);
	I_Method3(void, apply, IN, osg::Drawable::AttributeType, x, IN, const unsigned, int, IN, const GLuint *, x);
	I_Method3(void, apply, IN, osg::Drawable::AttributeType, x, IN, const unsigned, int, IN, const float *, x);
	I_Method3(void, apply, IN, osg::Drawable::AttributeType, x, IN, const unsigned, int, IN, const osg::Vec2 *, x);
	I_Method3(void, apply, IN, osg::Drawable::AttributeType, x, IN, const unsigned, int, IN, const osg::Vec3 *, x);
	I_Method3(void, apply, IN, osg::Drawable::AttributeType, x, IN, const unsigned, int, IN, const osg::Vec4 *, x);
	I_Method3(void, apply, IN, osg::Drawable::AttributeType, x, IN, const unsigned, int, IN, const osg::Vec4ub *, x);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::Drawable::CullCallback)
	I_VirtualBaseType(osg::Object);
	I_Constructor0();
	I_Constructor2(IN, const osg::Drawable::CullCallback &, x, IN, const osg::CopyOp &, x);
	I_Method0(osg::Object *, cloneType);
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	I_Method0(const char *, libraryName);
	I_Method0(const char *, className);
	I_Method3(bool, cull, IN, osg::NodeVisitor *, x, IN, osg::Drawable *, x, IN, osg::State *, x);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::Drawable::DrawCallback)
	I_VirtualBaseType(osg::Object);
	I_Constructor0();
	I_Constructor2(IN, const osg::Drawable::DrawCallback &, x, IN, const osg::CopyOp &, x);
	I_Method0(osg::Object *, cloneType);
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	I_Method0(const char *, libraryName);
	I_Method0(const char *, className);
	I_Method2(void, drawImplementation, IN, osg::State &, x, IN, const osg::Drawable *, x);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::Drawable::EventCallback)
	I_VirtualBaseType(osg::Object);
	I_Constructor0();
	I_Constructor2(IN, const osg::Drawable::EventCallback &, x, IN, const osg::CopyOp &, x);
	I_Method0(osg::Object *, cloneType);
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	I_Method0(const char *, libraryName);
	I_Method0(const char *, className);
	I_Method2(void, event, IN, osg::NodeVisitor *, x, IN, osg::Drawable *, x);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::Drawable::Extensions)
	I_BaseType(osg::Referenced);
	I_Constructor1(IN, unsigned int, contextID);
	I_Constructor1(IN, const osg::Drawable::Extensions &, rhs);
	I_Method1(void, lowestCommonDenominator, IN, const osg::Drawable::Extensions &, rhs);
	I_Method1(void, setupGLExtenions, IN, unsigned int, contextID);
	I_Method1(void, setVertexProgramSupported, IN, bool, flag);
	I_Method0(bool, isVertexProgramSupported);
	I_Method1(void, setSecondaryColorSupported, IN, bool, flag);
	I_Method0(bool, isSecondaryColorSupported);
	I_Method1(void, setFogCoordSupported, IN, bool, flag);
	I_Method0(bool, isFogCoordSupported);
	I_Method1(void, setMultiTexSupported, IN, bool, flag);
	I_Method0(bool, isMultiTexSupported);
	I_Method1(void, setOcclusionQuerySupported, IN, bool, flag);
	I_Method0(bool, isOcclusionQuerySupported);
	I_Method1(void, setARBOcclusionQuerySupported, IN, bool, flag);
	I_Method0(bool, isARBOcclusionQuerySupported);
	I_Method1(void, glSecondaryColor3ubv, IN, const GLubyte *, coord);
	I_Method1(void, glSecondaryColor3fv, IN, const GLfloat *, coord);
	I_Method1(void, glFogCoordfv, IN, const GLfloat *, coord);
	I_Method2(void, glMultiTexCoord1f, IN, GLenum, target, IN, GLfloat, coord);
	I_Method2(void, glMultiTexCoord2fv, IN, GLenum, target, IN, const GLfloat *, coord);
	I_Method2(void, glMultiTexCoord3fv, IN, GLenum, target, IN, const GLfloat *, coord);
	I_Method2(void, glMultiTexCoord4fv, IN, GLenum, target, IN, const GLfloat *, coord);
	I_Method2(void, glVertexAttrib1s, IN, unsigned int, index, IN, GLshort, s);
	I_Method2(void, glVertexAttrib1f, IN, unsigned int, index, IN, GLfloat, f);
	I_Method2(void, glVertexAttrib2fv, IN, unsigned int, index, IN, const GLfloat *, v);
	I_Method2(void, glVertexAttrib3fv, IN, unsigned int, index, IN, const GLfloat *, v);
	I_Method2(void, glVertexAttrib4fv, IN, unsigned int, index, IN, const GLfloat *, v);
	I_Method2(void, glVertexAttrib4ubv, IN, unsigned int, index, IN, const GLubyte *, v);
	I_Method2(void, glVertexAttrib4Nubv, IN, unsigned int, index, IN, const GLubyte *, v);
	I_Method2(void, glGenBuffers, IN, GLsizei, n, IN, GLuint *, buffers);
	I_Method2(void, glBindBuffer, IN, GLenum, target, IN, GLuint, buffer);
	I_Method4(void, glBufferData, IN, GLenum, target, IN, GLsizeiptrARB, size, IN, const GLvoid *, data, IN, GLenum, usage);
	I_Method4(void, glBufferSubData, IN, GLenum, target, IN, GLintptrARB, offset, IN, GLsizeiptrARB, size, IN, const GLvoid *, data);
	I_Method2(void, glDeleteBuffers, IN, GLsizei, n, IN, const GLuint *, buffers);
	I_Method1(GLboolean, glIsBuffer, IN, GLuint, buffer);
	I_Method4(void, glGetBufferSubData, IN, GLenum, target, IN, GLintptrARB, offset, IN, GLsizeiptrARB, size, IN, GLvoid *, data);
	I_Method2(GLvoid *, glMapBuffer, IN, GLenum, target, IN, GLenum, access);
	I_Method1(GLboolean, glUnmapBuffer, IN, GLenum, target);
	I_Method3(void, glGetBufferParameteriv, IN, GLenum, target, IN, GLenum, pname, IN, GLint *, params);
	I_Method3(void, glGetBufferPointerv, IN, GLenum, target, IN, GLenum, pname, IN, GLvoid **, params);
	I_Method2(void, glGenOcclusionQueries, IN, GLsizei, n, IN, GLuint *, ids);
	I_Method2(void, glDeleteOcclusionQueries, IN, GLsizei, n, IN, const GLuint *, ids);
	I_Method1(GLboolean, glIsOcclusionQuery, IN, GLuint, id);
	I_Method1(void, glBeginOcclusionQuery, IN, GLuint, id);
	I_Method0(void, glEndOcclusionQuery);
	I_Method3(void, glGetOcclusionQueryiv, IN, GLuint, id, IN, GLenum, pname, IN, GLint *, params);
	I_Method3(void, glGetOcclusionQueryuiv, IN, GLuint, id, IN, GLenum, pname, IN, GLuint *, params);
	I_Method3(void, glGetQueryiv, IN, GLenum, target, IN, GLenum, pname, IN, GLint *, params);
	I_Method2(void, glGenQueries, IN, GLsizei, n, IN, GLuint *, ids);
	I_Method2(void, glBeginQuery, IN, GLenum, target, IN, GLuint, id);
	I_Method1(void, glEndQuery, IN, GLenum, target);
	I_Method1(GLboolean, glIsQuery, IN, GLuint, id);
	I_Method2(void, glDeleteQueries, IN, GLsizei, n, IN, const GLuint *, ids);
	I_Method3(void, glGetQueryObjectiv, IN, GLuint, id, IN, GLenum, pname, IN, GLint *, params);
	I_Method3(void, glGetQueryObjectuiv, IN, GLuint, id, IN, GLenum, pname, IN, GLuint *, params);
	I_WriteOnlyProperty(bool, ARBOcclusionQuerySupported);
	I_WriteOnlyProperty(bool, FogCoordSupported);
	I_WriteOnlyProperty(bool, MultiTexSupported);
	I_WriteOnlyProperty(bool, OcclusionQuerySupported);
	I_WriteOnlyProperty(bool, SecondaryColorSupported);
	I_WriteOnlyProperty(bool, VertexProgramSupported);
	I_WriteOnlyProperty(unsigned int, upGLExtenions);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::Drawable::UpdateCallback)
	I_VirtualBaseType(osg::Object);
	I_Constructor0();
	I_Constructor2(IN, const osg::Drawable::UpdateCallback &, x, IN, const osg::CopyOp &, x);
	I_Method0(osg::Object *, cloneType);
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	I_Method0(const char *, libraryName);
	I_Method0(const char *, className);
	I_Method2(void, update, IN, osg::NodeVisitor *, x, IN, osg::Drawable *, x);
END_REFLECTOR

STD_VECTOR_REFLECTOR(std::vector< osg::Node * >);

