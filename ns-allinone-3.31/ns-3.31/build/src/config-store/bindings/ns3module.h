/* This file was generated by PyBindGen 0...2.2...1 */
#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include <stddef.h>


#if PY_VERSION_HEX >= 0x03000000
#if PY_VERSION_HEX >= 0x03050000
typedef PyAsyncMethods* cmpfunc;
#else
typedef void* cmpfunc;
#endif
#define PyCObject_FromVoidPtr(a, b) PyCapsule_New(a, NULL, b)
#define PyCObject_AsVoidPtr(a) PyCapsule_GetPointer(a, NULL)
#define PyString_FromString(a) PyBytes_FromString(a)
#define Py_TPFLAGS_CHECKTYPES 0 /* this flag doesn't exist in python 3 */
#endif


#if     __GNUC__ > 2
# define PYBINDGEN_UNUSED(param) param __attribute__((__unused__))
#elif     __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ > 4)
# define PYBINDGEN_UNUSED(param) __attribute__((__unused__)) param
#else
# define PYBINDGEN_UNUSED(param) param
#endif  /* !__GNUC__ */

#ifndef _PyBindGenWrapperFlags_defined_
#define _PyBindGenWrapperFlags_defined_
typedef enum _PyBindGenWrapperFlags {
   PYBINDGEN_WRAPPER_FLAG_NONE = 0,
   PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED = (1<<0),
} PyBindGenWrapperFlags;
#endif

#if PY_VERSION_HEX >= 0x03070000 && !defined(PyEval_ThreadsInitialized)
#define PyEval_ThreadsInitialized() 1
#endif


#include "ns3/config-store-module.h"
#include <typeinfo>
#include <ostream>
#include <sstream>
#include <map>
#include <iostream>
/* --- forward declarations --- */


typedef struct {
    PyObject_HEAD
    ns3::CallbackBase *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3CallbackBase;


extern PyTypeObject *_PyNs3CallbackBase_Type;
#define PyNs3CallbackBase_Type (*_PyNs3CallbackBase_Type)

extern std::map<void*, PyObject*> *_PyNs3CallbackBase_wrapper_registry;
#define PyNs3CallbackBase_wrapper_registry (*_PyNs3CallbackBase_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::DefaultDeleter< ns3::AttributeAccessor > *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3DefaultDeleter__Ns3AttributeAccessor;


extern PyTypeObject *_PyNs3DefaultDeleter__Ns3AttributeAccessor_Type;
#define PyNs3DefaultDeleter__Ns3AttributeAccessor_Type (*_PyNs3DefaultDeleter__Ns3AttributeAccessor_Type)

extern std::map<void*, PyObject*> *_PyNs3DefaultDeleter__Ns3AttributeAccessor_wrapper_registry;
#define PyNs3DefaultDeleter__Ns3AttributeAccessor_wrapper_registry (*_PyNs3DefaultDeleter__Ns3AttributeAccessor_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::DefaultDeleter< ns3::AttributeChecker > *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3DefaultDeleter__Ns3AttributeChecker;


extern PyTypeObject *_PyNs3DefaultDeleter__Ns3AttributeChecker_Type;
#define PyNs3DefaultDeleter__Ns3AttributeChecker_Type (*_PyNs3DefaultDeleter__Ns3AttributeChecker_Type)

extern std::map<void*, PyObject*> *_PyNs3DefaultDeleter__Ns3AttributeChecker_wrapper_registry;
#define PyNs3DefaultDeleter__Ns3AttributeChecker_wrapper_registry (*_PyNs3DefaultDeleter__Ns3AttributeChecker_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::DefaultDeleter< ns3::AttributeValue > *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3DefaultDeleter__Ns3AttributeValue;


extern PyTypeObject *_PyNs3DefaultDeleter__Ns3AttributeValue_Type;
#define PyNs3DefaultDeleter__Ns3AttributeValue_Type (*_PyNs3DefaultDeleter__Ns3AttributeValue_Type)

extern std::map<void*, PyObject*> *_PyNs3DefaultDeleter__Ns3AttributeValue_wrapper_registry;
#define PyNs3DefaultDeleter__Ns3AttributeValue_wrapper_registry (*_PyNs3DefaultDeleter__Ns3AttributeValue_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::DefaultDeleter< ns3::CallbackImplBase > *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3DefaultDeleter__Ns3CallbackImplBase;


extern PyTypeObject *_PyNs3DefaultDeleter__Ns3CallbackImplBase_Type;
#define PyNs3DefaultDeleter__Ns3CallbackImplBase_Type (*_PyNs3DefaultDeleter__Ns3CallbackImplBase_Type)

extern std::map<void*, PyObject*> *_PyNs3DefaultDeleter__Ns3CallbackImplBase_wrapper_registry;
#define PyNs3DefaultDeleter__Ns3CallbackImplBase_wrapper_registry (*_PyNs3DefaultDeleter__Ns3CallbackImplBase_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::DefaultDeleter< ns3::Hash::Implementation > *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3DefaultDeleter__Ns3HashImplementation;


extern PyTypeObject *_PyNs3DefaultDeleter__Ns3HashImplementation_Type;
#define PyNs3DefaultDeleter__Ns3HashImplementation_Type (*_PyNs3DefaultDeleter__Ns3HashImplementation_Type)

extern std::map<void*, PyObject*> *_PyNs3DefaultDeleter__Ns3HashImplementation_wrapper_registry;
#define PyNs3DefaultDeleter__Ns3HashImplementation_wrapper_registry (*_PyNs3DefaultDeleter__Ns3HashImplementation_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::DefaultDeleter< ns3::TraceSourceAccessor > *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3DefaultDeleter__Ns3TraceSourceAccessor;


extern PyTypeObject *_PyNs3DefaultDeleter__Ns3TraceSourceAccessor_Type;
#define PyNs3DefaultDeleter__Ns3TraceSourceAccessor_Type (*_PyNs3DefaultDeleter__Ns3TraceSourceAccessor_Type)

extern std::map<void*, PyObject*> *_PyNs3DefaultDeleter__Ns3TraceSourceAccessor_wrapper_registry;
#define PyNs3DefaultDeleter__Ns3TraceSourceAccessor_wrapper_registry (*_PyNs3DefaultDeleter__Ns3TraceSourceAccessor_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::Hasher *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3Hasher;


extern PyTypeObject *_PyNs3Hasher_Type;
#define PyNs3Hasher_Type (*_PyNs3Hasher_Type)

extern std::map<void*, PyObject*> *_PyNs3Hasher_wrapper_registry;
#define PyNs3Hasher_wrapper_registry (*_PyNs3Hasher_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::ObjectBase *obj;
    PyObject *inst_dict;
    PyBindGenWrapperFlags flags:8;
} PyNs3ObjectBase;


extern PyTypeObject *_PyNs3ObjectBase_Type;
#define PyNs3ObjectBase_Type (*_PyNs3ObjectBase_Type)

class PyNs3ObjectBase__PythonHelper : public ns3::ObjectBase
{
public:
    PyObject *m_pyself;

    void set_pyobj(PyObject *pyobj)
    {
        Py_XDECREF(m_pyself);
        Py_INCREF(pyobj);
        m_pyself = pyobj;
    }

    virtual ~PyNs3ObjectBase__PythonHelper()
    {
        Py_CLEAR(m_pyself);
    }

};

extern std::map<void*, PyObject*> *_PyNs3ObjectBase_wrapper_registry;
#define PyNs3ObjectBase_wrapper_registry (*_PyNs3ObjectBase_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::TypeId *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3TypeId;


extern PyTypeObject *_PyNs3TypeId_Type;
#define PyNs3TypeId_Type (*_PyNs3TypeId_Type)

extern std::map<void*, PyObject*> *_PyNs3TypeId_wrapper_registry;
#define PyNs3TypeId_wrapper_registry (*_PyNs3TypeId_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::TypeId::AttributeInformation *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3TypeIdAttributeInformation;


extern PyTypeObject *_PyNs3TypeIdAttributeInformation_Type;
#define PyNs3TypeIdAttributeInformation_Type (*_PyNs3TypeIdAttributeInformation_Type)

extern std::map<void*, PyObject*> *_PyNs3TypeIdAttributeInformation_wrapper_registry;
#define PyNs3TypeIdAttributeInformation_wrapper_registry (*_PyNs3TypeIdAttributeInformation_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::TypeId::TraceSourceInformation *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3TypeIdTraceSourceInformation;


extern PyTypeObject *_PyNs3TypeIdTraceSourceInformation_Type;
#define PyNs3TypeIdTraceSourceInformation_Type (*_PyNs3TypeIdTraceSourceInformation_Type)

extern std::map<void*, PyObject*> *_PyNs3TypeIdTraceSourceInformation_wrapper_registry;
#define PyNs3TypeIdTraceSourceInformation_wrapper_registry (*_PyNs3TypeIdTraceSourceInformation_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::empty *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3Empty;


extern PyTypeObject *_PyNs3Empty_Type;
#define PyNs3Empty_Type (*_PyNs3Empty_Type)

extern std::map<void*, PyObject*> *_PyNs3Empty_wrapper_registry;
#define PyNs3Empty_wrapper_registry (*_PyNs3Empty_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::SimpleRefCount< ns3::AttributeAccessor, ns3::empty, ns3::DefaultDeleter<ns3::AttributeAccessor> > *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt__;


extern PyTypeObject *_PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt___Type;
#define PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt___Type (*_PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt___Type)



#include <map>
#include <string>
#include <typeinfo>
#if defined(__GNUC__) && __GNUC__ >= 3 && !defined(__clang__)
# include <cxxabi.h>
#endif

#define PBG_TYPEMAP_DEBUG 0

namespace pybindgen {

class TypeMap
{
   std::map<std::string, PyTypeObject *> m_map;

public:

   TypeMap() {}

   void register_wrapper(const std::type_info &cpp_type_info, PyTypeObject *python_wrapper)
   {

#if PBG_TYPEMAP_DEBUG
   std::cerr << "register_wrapper(this=" << this << ", type_name=" << cpp_type_info.name()
             << ", python_wrapper=" << python_wrapper->tp_name << ")" << std::endl;
#endif

       m_map[std::string(cpp_type_info.name())] = python_wrapper;
   }



   PyTypeObject * lookup_wrapper(const std::type_info &cpp_type_info, PyTypeObject *fallback_wrapper)
   {

#if PBG_TYPEMAP_DEBUG
   std::cerr << "lookup_wrapper(this=" << this << ", type_name=" << cpp_type_info.name() << ")" << std::endl;
#endif

       PyTypeObject *python_wrapper = m_map[cpp_type_info.name()];
       if (python_wrapper)
           return python_wrapper;
       else {
#if defined(__GNUC__) && __GNUC__ >= 3 && !defined(__clang__)

           // Get closest (in the single inheritance tree provided by cxxabi.h)
           // registered python wrapper.
           const abi::__si_class_type_info *_typeinfo =
               dynamic_cast<const abi::__si_class_type_info*> (&cpp_type_info);
#if PBG_TYPEMAP_DEBUG
          std::cerr << "  -> looking at C++ type " << _typeinfo->name() << std::endl;
#endif
           while (_typeinfo && (python_wrapper = m_map[std::string(_typeinfo->name())]) == 0) {
               _typeinfo = dynamic_cast<const abi::__si_class_type_info*> (_typeinfo->__base_type);
#if PBG_TYPEMAP_DEBUG
               std::cerr << "  -> looking at C++ type " << _typeinfo->name() << std::endl;
#endif
           }

#if PBG_TYPEMAP_DEBUG
          if (python_wrapper) {
              std::cerr << "  -> found match " << std::endl;
          } else {
              std::cerr << "  -> return fallback wrapper" << std::endl;
          }
#endif

           return python_wrapper? python_wrapper : fallback_wrapper;

#else // non gcc 3+ compilers can only match against explicitly registered classes, not hidden subclasses
           return fallback_wrapper;
#endif
       }
   }
};

}


extern pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt____typeid_map;

#define PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt____typeid_map (*_PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt____typeid_map)


typedef struct {
    PyObject_HEAD
    ns3::SimpleRefCount< ns3::AttributeChecker, ns3::empty, ns3::DefaultDeleter<ns3::AttributeChecker> > *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt__;


extern PyTypeObject *_PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt___Type;
#define PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt___Type (*_PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt___Type)


extern pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt____typeid_map;

#define PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt____typeid_map (*_PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt____typeid_map)


typedef struct {
    PyObject_HEAD
    ns3::SimpleRefCount< ns3::AttributeValue, ns3::empty, ns3::DefaultDeleter<ns3::AttributeValue> > *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt__;


extern PyTypeObject *_PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt___Type;
#define PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt___Type (*_PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt___Type)


extern pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt____typeid_map;

#define PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt____typeid_map (*_PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt____typeid_map)


typedef struct {
    PyObject_HEAD
    ns3::SimpleRefCount< ns3::CallbackImplBase, ns3::empty, ns3::DefaultDeleter<ns3::CallbackImplBase> > *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt__;


extern PyTypeObject *_PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt___Type;
#define PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt___Type (*_PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt___Type)


extern pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt____typeid_map;

#define PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt____typeid_map (*_PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt____typeid_map)


typedef struct {
    PyObject_HEAD
    ns3::SimpleRefCount< ns3::Hash::Implementation, ns3::empty, ns3::DefaultDeleter<ns3::Hash::Implementation> > *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt__;


extern PyTypeObject *_PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt___Type;
#define PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt___Type (*_PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt___Type)


extern pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt____typeid_map;

#define PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt____typeid_map (*_PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt____typeid_map)


typedef struct {
    PyObject_HEAD
    ns3::SimpleRefCount< ns3::TraceSourceAccessor, ns3::empty, ns3::DefaultDeleter<ns3::TraceSourceAccessor> > *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt__;


extern PyTypeObject *_PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt___Type;
#define PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt___Type (*_PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt___Type)


extern pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt____typeid_map;

#define PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt____typeid_map (*_PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt____typeid_map)


typedef struct {
    PyObject_HEAD
    ns3::TraceSourceAccessor *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3TraceSourceAccessor;


extern PyTypeObject *_PyNs3TraceSourceAccessor_Type;
#define PyNs3TraceSourceAccessor_Type (*_PyNs3TraceSourceAccessor_Type)


typedef struct {
    PyObject_HEAD
    ns3::AttributeAccessor *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3AttributeAccessor;


extern PyTypeObject *_PyNs3AttributeAccessor_Type;
#define PyNs3AttributeAccessor_Type (*_PyNs3AttributeAccessor_Type)


typedef struct {
    PyObject_HEAD
    ns3::AttributeChecker *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3AttributeChecker;


extern PyTypeObject *_PyNs3AttributeChecker_Type;
#define PyNs3AttributeChecker_Type (*_PyNs3AttributeChecker_Type)


typedef struct {
    PyObject_HEAD
    ns3::AttributeValue *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3AttributeValue;


extern PyTypeObject *_PyNs3AttributeValue_Type;
#define PyNs3AttributeValue_Type (*_PyNs3AttributeValue_Type)


typedef struct {
    PyObject_HEAD
    ns3::CallbackChecker *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3CallbackChecker;


extern PyTypeObject *_PyNs3CallbackChecker_Type;
#define PyNs3CallbackChecker_Type (*_PyNs3CallbackChecker_Type)


typedef struct {
    PyObject_HEAD
    ns3::CallbackImplBase *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3CallbackImplBase;


extern PyTypeObject *_PyNs3CallbackImplBase_Type;
#define PyNs3CallbackImplBase_Type (*_PyNs3CallbackImplBase_Type)


typedef struct {
    PyObject_HEAD
    ns3::CallbackValue *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3CallbackValue;


extern PyTypeObject *_PyNs3CallbackValue_Type;
#define PyNs3CallbackValue_Type (*_PyNs3CallbackValue_Type)


typedef struct {
    PyObject_HEAD
    ns3::EmptyAttributeAccessor *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3EmptyAttributeAccessor;


extern PyTypeObject *_PyNs3EmptyAttributeAccessor_Type;
#define PyNs3EmptyAttributeAccessor_Type (*_PyNs3EmptyAttributeAccessor_Type)


typedef struct {
    PyObject_HEAD
    ns3::EmptyAttributeChecker *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3EmptyAttributeChecker;


extern PyTypeObject *_PyNs3EmptyAttributeChecker_Type;
#define PyNs3EmptyAttributeChecker_Type (*_PyNs3EmptyAttributeChecker_Type)


typedef struct {
    PyObject_HEAD
    ns3::EmptyAttributeValue *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3EmptyAttributeValue;


extern PyTypeObject *_PyNs3EmptyAttributeValue_Type;
#define PyNs3EmptyAttributeValue_Type (*_PyNs3EmptyAttributeValue_Type)


typedef struct {
    PyObject_HEAD
    ns3::TypeIdChecker *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3TypeIdChecker;


extern PyTypeObject *_PyNs3TypeIdChecker_Type;
#define PyNs3TypeIdChecker_Type (*_PyNs3TypeIdChecker_Type)


typedef struct {
    PyObject_HEAD
    ns3::TypeIdValue *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3TypeIdValue;


extern PyTypeObject *_PyNs3TypeIdValue_Type;
#define PyNs3TypeIdValue_Type (*_PyNs3TypeIdValue_Type)


typedef struct {
    PyObject_HEAD
    ns3::CallbackImpl< ns3::ObjectBase *, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty > *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3CallbackImpl__Ns3ObjectBase___star___Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty;


extern PyTypeObject *_PyNs3CallbackImpl__Ns3ObjectBase___star___Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Type;
#define PyNs3CallbackImpl__Ns3ObjectBase___star___Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Type (*_PyNs3CallbackImpl__Ns3ObjectBase___star___Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Type)


typedef struct {
    PyObject_HEAD
    ns3::FileConfig *obj;
    PyObject *inst_dict;
    PyBindGenWrapperFlags flags:8;
} PyNs3FileConfig;


extern PyTypeObject PyNs3FileConfig_Type;

class PyNs3FileConfig__PythonHelper : public ns3::FileConfig
{
public:
    PyObject *m_pyself;
    PyNs3FileConfig__PythonHelper()
        : ns3::FileConfig(), m_pyself(NULL)
        {}

    PyNs3FileConfig__PythonHelper(ns3::FileConfig const & arg0)
        : ns3::FileConfig(arg0), m_pyself(NULL)
        {}


    void set_pyobj(PyObject *pyobj)
    {
        Py_XDECREF(m_pyself);
        Py_INCREF(pyobj);
        m_pyself = pyobj;
    }

    virtual ~PyNs3FileConfig__PythonHelper()
    {
        Py_CLEAR(m_pyself);
    }


    virtual void Attributes();

    virtual void Default();

    virtual void Global();

    virtual void SetFilename(std::string filename);
};

extern std::map<void*, PyObject*> PyNs3FileConfig_wrapper_registry;

typedef struct {
    PyObject_HEAD
    ns3::NoneFileConfig *obj;
    PyObject *inst_dict;
    PyBindGenWrapperFlags flags:8;
} PyNs3NoneFileConfig;


extern PyTypeObject PyNs3NoneFileConfig_Type;

class PyNs3NoneFileConfig__PythonHelper : public ns3::NoneFileConfig
{
public:
    PyObject *m_pyself;
    PyNs3NoneFileConfig__PythonHelper(ns3::NoneFileConfig const & arg0)
        : ns3::NoneFileConfig(arg0), m_pyself(NULL)
        {}

    PyNs3NoneFileConfig__PythonHelper()
        : ns3::NoneFileConfig(), m_pyself(NULL)
        {}


    void set_pyobj(PyObject *pyobj)
    {
        Py_XDECREF(m_pyself);
        Py_INCREF(pyobj);
        m_pyself = pyobj;
    }

    virtual ~PyNs3NoneFileConfig__PythonHelper()
    {
        Py_CLEAR(m_pyself);
    }


    virtual void Attributes();

    virtual void Default();

    virtual void Global();

    virtual void SetFilename(std::string filename);
};


typedef struct {
    PyObject_HEAD
    ns3::ConfigStore *obj;
    PyObject *inst_dict;
    PyBindGenWrapperFlags flags:8;
} PyNs3ConfigStore;


extern PyTypeObject PyNs3ConfigStore_Type;

class PyNs3ConfigStore__PythonHelper : public ns3::ConfigStore
{
public:
    PyObject *m_pyself;
    PyNs3ConfigStore__PythonHelper(ns3::ConfigStore const & arg0)
        : ns3::ConfigStore(arg0), m_pyself(NULL)
        {}

    PyNs3ConfigStore__PythonHelper()
        : ns3::ConfigStore(), m_pyself(NULL)
        {}


    void set_pyobj(PyObject *pyobj)
    {
        Py_XDECREF(m_pyself);
        Py_INCREF(pyobj);
        m_pyself = pyobj;
    }

    virtual ~PyNs3ConfigStore__PythonHelper()
    {
        Py_CLEAR(m_pyself);
    }


    static PyObject * _wrap_NotifyConstructionCompleted(PyNs3ConfigStore *self, PyObject *PYBINDGEN_UNUSED(_args), PyObject *PYBINDGEN_UNUSED(_kwargs));
    inline void NotifyConstructionCompleted__parent_caller()
    { ns3::ObjectBase::NotifyConstructionCompleted(); }

    virtual ns3::TypeId GetInstanceTypeId() const;

    virtual void NotifyConstructionCompleted();
};

/* --- forward declarations --- */


typedef struct {
    PyObject_HEAD
    ns3::Hash::Implementation *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3HashImplementation;


extern PyTypeObject *_PyNs3HashImplementation_Type;
#define PyNs3HashImplementation_Type (*_PyNs3HashImplementation_Type)

/* --- forward declarations --- */


typedef struct {
    PyObject_HEAD
    ns3::Hash::Function::Fnv1a *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3HashFunctionFnv1a;


extern PyTypeObject *_PyNs3HashFunctionFnv1a_Type;
#define PyNs3HashFunctionFnv1a_Type (*_PyNs3HashFunctionFnv1a_Type)


typedef struct {
    PyObject_HEAD
    ns3::Hash::Function::Hash32 *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3HashFunctionHash32;


extern PyTypeObject *_PyNs3HashFunctionHash32_Type;
#define PyNs3HashFunctionHash32_Type (*_PyNs3HashFunctionHash32_Type)


typedef struct {
    PyObject_HEAD
    ns3::Hash::Function::Hash64 *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3HashFunctionHash64;


extern PyTypeObject *_PyNs3HashFunctionHash64_Type;
#define PyNs3HashFunctionHash64_Type (*_PyNs3HashFunctionHash64_Type)


typedef struct {
    PyObject_HEAD
    ns3::Hash::Function::Murmur3 *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3HashFunctionMurmur3;


extern PyTypeObject *_PyNs3HashFunctionMurmur3_Type;
#define PyNs3HashFunctionMurmur3_Type (*_PyNs3HashFunctionMurmur3_Type)


class PythonCallbackImpl0 : public ns3::CallbackImpl<ns3::ObjectBase *, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty>
{
public:
    PyObject *m_callback;
    PythonCallbackImpl0(PyObject *callback)
    {
        Py_INCREF(callback);
        m_callback = callback;
    }
    virtual ~PythonCallbackImpl0()
    {
        PyGILState_STATE __py_gil_state;
        __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
        Py_DECREF(m_callback);
        m_callback = NULL;
        PyGILState_Release(__py_gil_state);
    }

    virtual bool IsEqual(ns3::Ptr<const ns3::CallbackImplBase> other_base) const
    {
        const PythonCallbackImpl0 *other = dynamic_cast<const PythonCallbackImpl0*> (ns3::PeekPointer (other_base));
        if (other != NULL)
            return (other->m_callback == m_callback);
        else
            return false;
    }


    ns3::ObjectBase *
    operator()()
    {
        PyGILState_STATE __py_gil_state;
        PyObject *py_retval;
        ns3::ObjectBase *retval;
        PyObject *args;
        PyNs3ObjectBase *tmp_ObjectBase;

        __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
        args = Py_BuildValue((char *) "()");
        py_retval = PyObject_CallObject(m_callback, args);
        if (py_retval == NULL) {
            Py_DECREF(args);
            if (PyEval_ThreadsInitialized())
                PyGILState_Release(__py_gil_state);
            return NULL;
        }
        py_retval = Py_BuildValue((char*) "(N)", py_retval);
        if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3ObjectBase_Type, &tmp_ObjectBase)) {
            PyErr_Print();
            Py_DECREF(py_retval);
            Py_DECREF(args);
            if (PyEval_ThreadsInitialized())
                PyGILState_Release(__py_gil_state);
            return NULL;
        }
        // dangerous!
        retval = tmp_ObjectBase->obj;
        Py_DECREF(py_retval);
        Py_DECREF(args);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return retval;
    }
};
