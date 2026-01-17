//
// Generated file, do not edit! Created by opp_msgtool 6.0 from osg.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wshadow"
#  pragma clang diagnostic ignored "-Wconversion"
#  pragma clang diagnostic ignored "-Wunused-parameter"
#  pragma clang diagnostic ignored "-Wc++98-compat"
#  pragma clang diagnostic ignored "-Wunreachable-code-break"
#  pragma clang diagnostic ignored "-Wold-style-cast"
#elif defined(__GNUC__)
#  pragma GCC diagnostic ignored "-Wshadow"
#  pragma GCC diagnostic ignored "-Wconversion"
#  pragma GCC diagnostic ignored "-Wunused-parameter"
#  pragma GCC diagnostic ignored "-Wold-style-cast"
#  pragma GCC diagnostic ignored "-Wsuggest-attribute=noreturn"
#  pragma GCC diagnostic ignored "-Wfloat-conversion"
#endif

#include <iostream>
#include <sstream>
#include <memory>
#include <type_traits>
#include "osg_m.h"

namespace omnetpp {

// Template pack/unpack rules. They are declared *after* a1l type-specific pack functions for multiple reasons.
// They are in the omnetpp namespace, to allow them to be found by argument-dependent lookup via the cCommBuffer argument

// Packing/unpacking an std::vector
template<typename T, typename A>
void doParsimPacking(omnetpp::cCommBuffer *buffer, const std::vector<T,A>& v)
{
    int n = v.size();
    doParsimPacking(buffer, n);
    for (int i = 0; i < n; i++)
        doParsimPacking(buffer, v[i]);
}

template<typename T, typename A>
void doParsimUnpacking(omnetpp::cCommBuffer *buffer, std::vector<T,A>& v)
{
    int n;
    doParsimUnpacking(buffer, n);
    v.resize(n);
    for (int i = 0; i < n; i++)
        doParsimUnpacking(buffer, v[i]);
}

// Packing/unpacking an std::list
template<typename T, typename A>
void doParsimPacking(omnetpp::cCommBuffer *buffer, const std::list<T,A>& l)
{
    doParsimPacking(buffer, (int)l.size());
    for (typename std::list<T,A>::const_iterator it = l.begin(); it != l.end(); ++it)
        doParsimPacking(buffer, (T&)*it);
}

template<typename T, typename A>
void doParsimUnpacking(omnetpp::cCommBuffer *buffer, std::list<T,A>& l)
{
    int n;
    doParsimUnpacking(buffer, n);
    for (int i = 0; i < n; i++) {
        l.push_back(T());
        doParsimUnpacking(buffer, l.back());
    }
}

// Packing/unpacking an std::set
template<typename T, typename Tr, typename A>
void doParsimPacking(omnetpp::cCommBuffer *buffer, const std::set<T,Tr,A>& s)
{
    doParsimPacking(buffer, (int)s.size());
    for (typename std::set<T,Tr,A>::const_iterator it = s.begin(); it != s.end(); ++it)
        doParsimPacking(buffer, *it);
}

template<typename T, typename Tr, typename A>
void doParsimUnpacking(omnetpp::cCommBuffer *buffer, std::set<T,Tr,A>& s)
{
    int n;
    doParsimUnpacking(buffer, n);
    for (int i = 0; i < n; i++) {
        T x;
        doParsimUnpacking(buffer, x);
        s.insert(x);
    }
}

// Packing/unpacking an std::map
template<typename K, typename V, typename Tr, typename A>
void doParsimPacking(omnetpp::cCommBuffer *buffer, const std::map<K,V,Tr,A>& m)
{
    doParsimPacking(buffer, (int)m.size());
    for (typename std::map<K,V,Tr,A>::const_iterator it = m.begin(); it != m.end(); ++it) {
        doParsimPacking(buffer, it->first);
        doParsimPacking(buffer, it->second);
    }
}

template<typename K, typename V, typename Tr, typename A>
void doParsimUnpacking(omnetpp::cCommBuffer *buffer, std::map<K,V,Tr,A>& m)
{
    int n;
    doParsimUnpacking(buffer, n);
    for (int i = 0; i < n; i++) {
        K k; V v;
        doParsimUnpacking(buffer, k);
        doParsimUnpacking(buffer, v);
        m[k] = v;
    }
}

// Default pack/unpack function for arrays
template<typename T>
void doParsimArrayPacking(omnetpp::cCommBuffer *b, const T *t, int n)
{
    for (int i = 0; i < n; i++)
        doParsimPacking(b, t[i]);
}

template<typename T>
void doParsimArrayUnpacking(omnetpp::cCommBuffer *b, T *t, int n)
{
    for (int i = 0; i < n; i++)
        doParsimUnpacking(b, t[i]);
}

// Default rule to prevent compiler from choosing base class' doParsimPacking() function
template<typename T>
void doParsimPacking(omnetpp::cCommBuffer *, const T& t)
{
    throw omnetpp::cRuntimeError("Parsim error: No doParsimPacking() function for type %s", omnetpp::opp_typename(typeid(t)));
}

template<typename T>
void doParsimUnpacking(omnetpp::cCommBuffer *, T& t)
{
    throw omnetpp::cRuntimeError("Parsim error: No doParsimUnpacking() function for type %s", omnetpp::opp_typename(typeid(t)));
}

}  // namespace omnetpp

namespace omnetpp {

class cOsgCanvas__ViewpointDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertyNames;
    enum FieldConstants {
        FIELD_valid,
        FIELD_eye,
        FIELD_center,
        FIELD_up,
    };
  public:
    cOsgCanvas__ViewpointDescriptor();
    virtual ~cOsgCanvas__ViewpointDescriptor();

    virtual bool doesSupport(omnetpp::cObject *obj) const override;
    virtual const char **getPropertyNames() const override;
    virtual const char *getProperty(const char *propertyName) const override;
    virtual int getFieldCount() const override;
    virtual const char *getFieldName(int field) const override;
    virtual int findField(const char *fieldName) const override;
    virtual unsigned int getFieldTypeFlags(int field) const override;
    virtual const char *getFieldTypeString(int field) const override;
    virtual const char **getFieldPropertyNames(int field) const override;
    virtual const char *getFieldProperty(int field, const char *propertyName) const override;
    virtual int getFieldArraySize(omnetpp::any_ptr object, int field) const override;
    virtual void setFieldArraySize(omnetpp::any_ptr object, int field, int size) const override;

    virtual const char *getFieldDynamicTypeString(omnetpp::any_ptr object, int field, int i) const override;
    virtual std::string getFieldValueAsString(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldValueAsString(omnetpp::any_ptr object, int field, int i, const char *value) const override;
    virtual omnetpp::cValue getFieldValue(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldValue(omnetpp::any_ptr object, int field, int i, const omnetpp::cValue& value) const override;

    virtual const char *getFieldStructName(int field) const override;
    virtual omnetpp::any_ptr getFieldStructValuePointer(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldStructValuePointer(omnetpp::any_ptr object, int field, int i, omnetpp::any_ptr ptr) const override;
};

Register_ClassDescriptor(cOsgCanvas__ViewpointDescriptor)

cOsgCanvas__ViewpointDescriptor::cOsgCanvas__ViewpointDescriptor() : omnetpp::cClassDescriptor(omnetpp::opp_typename(typeid(omnetpp::cOsgCanvas::Viewpoint)), "")
{
    propertyNames = nullptr;
}

cOsgCanvas__ViewpointDescriptor::~cOsgCanvas__ViewpointDescriptor()
{
    delete[] propertyNames;
}

bool cOsgCanvas__ViewpointDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<cOsgCanvas::Viewpoint *>(obj)!=nullptr;
}

const char **cOsgCanvas__ViewpointDescriptor::getPropertyNames() const
{
    if (!propertyNames) {
        static const char *names[] = { "existingClass",  nullptr };
        omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
        const char **baseNames = base ? base->getPropertyNames() : nullptr;
        propertyNames = mergeLists(baseNames, names);
    }
    return propertyNames;
}

const char *cOsgCanvas__ViewpointDescriptor::getProperty(const char *propertyName) const
{
    if (!strcmp(propertyName, "existingClass")) return "";
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    return base ? base->getProperty(propertyName) : nullptr;
}

int cOsgCanvas__ViewpointDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    return base ? 4+base->getFieldCount() : 4;
}

unsigned int cOsgCanvas__ViewpointDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldTypeFlags(field);
        field -= base->getFieldCount();
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,    // FIELD_valid
        0,    // FIELD_eye
        0,    // FIELD_center
        0,    // FIELD_up
    };
    return (field >= 0 && field < 4) ? fieldTypeFlags[field] : 0;
}

const char *cOsgCanvas__ViewpointDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldName(field);
        field -= base->getFieldCount();
    }
    static const char *fieldNames[] = {
        "valid",
        "eye",
        "center",
        "up",
    };
    return (field >= 0 && field < 4) ? fieldNames[field] : nullptr;
}

int cOsgCanvas__ViewpointDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    int baseIndex = base ? base->getFieldCount() : 0;
    if (strcmp(fieldName, "valid") == 0) return baseIndex + 0;
    if (strcmp(fieldName, "eye") == 0) return baseIndex + 1;
    if (strcmp(fieldName, "center") == 0) return baseIndex + 2;
    if (strcmp(fieldName, "up") == 0) return baseIndex + 3;
    return base ? base->findField(fieldName) : -1;
}

const char *cOsgCanvas__ViewpointDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldTypeString(field);
        field -= base->getFieldCount();
    }
    static const char *fieldTypeStrings[] = {
        "bool",    // FIELD_valid
        "omnetpp::cOsgCanvas::Vec3d",    // FIELD_eye
        "omnetpp::cOsgCanvas::Vec3d",    // FIELD_center
        "omnetpp::cOsgCanvas::Vec3d",    // FIELD_up
    };
    return (field >= 0 && field < 4) ? fieldTypeStrings[field] : nullptr;
}

const char **cOsgCanvas__ViewpointDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldPropertyNames(field);
        field -= base->getFieldCount();
    }
    switch (field) {
        case FIELD_valid: {
            static const char *names[] = { "editable",  nullptr };
            return names;
        }
        default: return nullptr;
    }
}

const char *cOsgCanvas__ViewpointDescriptor::getFieldProperty(int field, const char *propertyName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldProperty(field, propertyName);
        field -= base->getFieldCount();
    }
    switch (field) {
        case FIELD_valid:
            if (!strcmp(propertyName, "editable")) return "";
            return nullptr;
        default: return nullptr;
    }
}

int cOsgCanvas__ViewpointDescriptor::getFieldArraySize(omnetpp::any_ptr object, int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldArraySize(object, field);
        field -= base->getFieldCount();
    }
    cOsgCanvas::Viewpoint *pp = omnetpp::fromAnyPtr<cOsgCanvas::Viewpoint>(object); (void)pp;
    switch (field) {
        default: return 0;
    }
}

void cOsgCanvas__ViewpointDescriptor::setFieldArraySize(omnetpp::any_ptr object, int field, int size) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldArraySize(object, field, size);
            return;
        }
        field -= base->getFieldCount();
    }
    cOsgCanvas::Viewpoint *pp = omnetpp::fromAnyPtr<cOsgCanvas::Viewpoint>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set array size of field %d of class 'cOsgCanvas::Viewpoint'", field);
    }
}

const char *cOsgCanvas__ViewpointDescriptor::getFieldDynamicTypeString(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldDynamicTypeString(object,field,i);
        field -= base->getFieldCount();
    }
    cOsgCanvas::Viewpoint *pp = omnetpp::fromAnyPtr<cOsgCanvas::Viewpoint>(object); (void)pp;
    switch (field) {
        default: return nullptr;
    }
}

std::string cOsgCanvas__ViewpointDescriptor::getFieldValueAsString(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldValueAsString(object,field,i);
        field -= base->getFieldCount();
    }
    cOsgCanvas::Viewpoint *pp = omnetpp::fromAnyPtr<cOsgCanvas::Viewpoint>(object); (void)pp;
    switch (field) {
        case FIELD_valid: return bool2string(pp->valid);
        case FIELD_eye: return pp->eye.str();
        case FIELD_center: return pp->center.str();
        case FIELD_up: return pp->up.str();
        default: return "";
    }
}

void cOsgCanvas__ViewpointDescriptor::setFieldValueAsString(omnetpp::any_ptr object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldValueAsString(object, field, i, value);
            return;
        }
        field -= base->getFieldCount();
    }
    cOsgCanvas::Viewpoint *pp = omnetpp::fromAnyPtr<cOsgCanvas::Viewpoint>(object); (void)pp;
    switch (field) {
        case FIELD_valid: pp->valid = string2bool(value); break;
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'cOsgCanvas::Viewpoint'", field);
    }
}

omnetpp::cValue cOsgCanvas__ViewpointDescriptor::getFieldValue(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldValue(object,field,i);
        field -= base->getFieldCount();
    }
    cOsgCanvas::Viewpoint *pp = omnetpp::fromAnyPtr<cOsgCanvas::Viewpoint>(object); (void)pp;
    switch (field) {
        case FIELD_valid: return pp->valid;
        case FIELD_eye: return pp->eye.str();
        case FIELD_center: return pp->center.str();
        case FIELD_up: return pp->up.str();
        default: throw omnetpp::cRuntimeError("Cannot return field %d of class 'cOsgCanvas::Viewpoint' as cValue -- field index out of range?", field);
    }
}

void cOsgCanvas__ViewpointDescriptor::setFieldValue(omnetpp::any_ptr object, int field, int i, const omnetpp::cValue& value) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldValue(object, field, i, value);
            return;
        }
        field -= base->getFieldCount();
    }
    cOsgCanvas::Viewpoint *pp = omnetpp::fromAnyPtr<cOsgCanvas::Viewpoint>(object); (void)pp;
    switch (field) {
        case FIELD_valid: pp->valid = value.boolValue(); break;
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'cOsgCanvas::Viewpoint'", field);
    }
}

const char *cOsgCanvas__ViewpointDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldStructName(field);
        field -= base->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    };
}

omnetpp::any_ptr cOsgCanvas__ViewpointDescriptor::getFieldStructValuePointer(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldStructValuePointer(object, field, i);
        field -= base->getFieldCount();
    }
    cOsgCanvas::Viewpoint *pp = omnetpp::fromAnyPtr<cOsgCanvas::Viewpoint>(object); (void)pp;
    switch (field) {
        case FIELD_eye: return omnetpp::toAnyPtr(&pp->eye); break;
        case FIELD_center: return omnetpp::toAnyPtr(&pp->center); break;
        case FIELD_up: return omnetpp::toAnyPtr(&pp->up); break;
        default: return omnetpp::any_ptr(nullptr);
    }
}

void cOsgCanvas__ViewpointDescriptor::setFieldStructValuePointer(omnetpp::any_ptr object, int field, int i, omnetpp::any_ptr ptr) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldStructValuePointer(object, field, i, ptr);
            return;
        }
        field -= base->getFieldCount();
    }
    cOsgCanvas::Viewpoint *pp = omnetpp::fromAnyPtr<cOsgCanvas::Viewpoint>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'cOsgCanvas::Viewpoint'", field);
    }
}

class cOsgCanvas__EarthViewpointDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertyNames;
    enum FieldConstants {
        FIELD_valid,
        FIELD_longitude,
        FIELD_latitude,
        FIELD_altitude,
        FIELD_heading,
        FIELD_pitch,
        FIELD_range,
    };
  public:
    cOsgCanvas__EarthViewpointDescriptor();
    virtual ~cOsgCanvas__EarthViewpointDescriptor();

    virtual bool doesSupport(omnetpp::cObject *obj) const override;
    virtual const char **getPropertyNames() const override;
    virtual const char *getProperty(const char *propertyName) const override;
    virtual int getFieldCount() const override;
    virtual const char *getFieldName(int field) const override;
    virtual int findField(const char *fieldName) const override;
    virtual unsigned int getFieldTypeFlags(int field) const override;
    virtual const char *getFieldTypeString(int field) const override;
    virtual const char **getFieldPropertyNames(int field) const override;
    virtual const char *getFieldProperty(int field, const char *propertyName) const override;
    virtual int getFieldArraySize(omnetpp::any_ptr object, int field) const override;
    virtual void setFieldArraySize(omnetpp::any_ptr object, int field, int size) const override;

    virtual const char *getFieldDynamicTypeString(omnetpp::any_ptr object, int field, int i) const override;
    virtual std::string getFieldValueAsString(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldValueAsString(omnetpp::any_ptr object, int field, int i, const char *value) const override;
    virtual omnetpp::cValue getFieldValue(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldValue(omnetpp::any_ptr object, int field, int i, const omnetpp::cValue& value) const override;

    virtual const char *getFieldStructName(int field) const override;
    virtual omnetpp::any_ptr getFieldStructValuePointer(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldStructValuePointer(omnetpp::any_ptr object, int field, int i, omnetpp::any_ptr ptr) const override;
};

Register_ClassDescriptor(cOsgCanvas__EarthViewpointDescriptor)

cOsgCanvas__EarthViewpointDescriptor::cOsgCanvas__EarthViewpointDescriptor() : omnetpp::cClassDescriptor(omnetpp::opp_typename(typeid(omnetpp::cOsgCanvas::EarthViewpoint)), "")
{
    propertyNames = nullptr;
}

cOsgCanvas__EarthViewpointDescriptor::~cOsgCanvas__EarthViewpointDescriptor()
{
    delete[] propertyNames;
}

bool cOsgCanvas__EarthViewpointDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<cOsgCanvas::EarthViewpoint *>(obj)!=nullptr;
}

const char **cOsgCanvas__EarthViewpointDescriptor::getPropertyNames() const
{
    if (!propertyNames) {
        static const char *names[] = { "existingClass",  nullptr };
        omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
        const char **baseNames = base ? base->getPropertyNames() : nullptr;
        propertyNames = mergeLists(baseNames, names);
    }
    return propertyNames;
}

const char *cOsgCanvas__EarthViewpointDescriptor::getProperty(const char *propertyName) const
{
    if (!strcmp(propertyName, "existingClass")) return "";
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    return base ? base->getProperty(propertyName) : nullptr;
}

int cOsgCanvas__EarthViewpointDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    return base ? 7+base->getFieldCount() : 7;
}

unsigned int cOsgCanvas__EarthViewpointDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldTypeFlags(field);
        field -= base->getFieldCount();
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,    // FIELD_valid
        FD_ISEDITABLE,    // FIELD_longitude
        FD_ISEDITABLE,    // FIELD_latitude
        FD_ISEDITABLE,    // FIELD_altitude
        FD_ISEDITABLE,    // FIELD_heading
        FD_ISEDITABLE,    // FIELD_pitch
        FD_ISEDITABLE,    // FIELD_range
    };
    return (field >= 0 && field < 7) ? fieldTypeFlags[field] : 0;
}

const char *cOsgCanvas__EarthViewpointDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldName(field);
        field -= base->getFieldCount();
    }
    static const char *fieldNames[] = {
        "valid",
        "longitude",
        "latitude",
        "altitude",
        "heading",
        "pitch",
        "range",
    };
    return (field >= 0 && field < 7) ? fieldNames[field] : nullptr;
}

int cOsgCanvas__EarthViewpointDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    int baseIndex = base ? base->getFieldCount() : 0;
    if (strcmp(fieldName, "valid") == 0) return baseIndex + 0;
    if (strcmp(fieldName, "longitude") == 0) return baseIndex + 1;
    if (strcmp(fieldName, "latitude") == 0) return baseIndex + 2;
    if (strcmp(fieldName, "altitude") == 0) return baseIndex + 3;
    if (strcmp(fieldName, "heading") == 0) return baseIndex + 4;
    if (strcmp(fieldName, "pitch") == 0) return baseIndex + 5;
    if (strcmp(fieldName, "range") == 0) return baseIndex + 6;
    return base ? base->findField(fieldName) : -1;
}

const char *cOsgCanvas__EarthViewpointDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldTypeString(field);
        field -= base->getFieldCount();
    }
    static const char *fieldTypeStrings[] = {
        "bool",    // FIELD_valid
        "double",    // FIELD_longitude
        "double",    // FIELD_latitude
        "double",    // FIELD_altitude
        "double",    // FIELD_heading
        "double",    // FIELD_pitch
        "double",    // FIELD_range
    };
    return (field >= 0 && field < 7) ? fieldTypeStrings[field] : nullptr;
}

const char **cOsgCanvas__EarthViewpointDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldPropertyNames(field);
        field -= base->getFieldCount();
    }
    switch (field) {
        case FIELD_valid: {
            static const char *names[] = { "editable",  nullptr };
            return names;
        }
        case FIELD_longitude: {
            static const char *names[] = { "editable",  nullptr };
            return names;
        }
        case FIELD_latitude: {
            static const char *names[] = { "editable",  nullptr };
            return names;
        }
        case FIELD_altitude: {
            static const char *names[] = { "editable",  nullptr };
            return names;
        }
        case FIELD_heading: {
            static const char *names[] = { "editable",  nullptr };
            return names;
        }
        case FIELD_pitch: {
            static const char *names[] = { "editable",  nullptr };
            return names;
        }
        case FIELD_range: {
            static const char *names[] = { "editable",  nullptr };
            return names;
        }
        default: return nullptr;
    }
}

const char *cOsgCanvas__EarthViewpointDescriptor::getFieldProperty(int field, const char *propertyName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldProperty(field, propertyName);
        field -= base->getFieldCount();
    }
    switch (field) {
        case FIELD_valid:
            if (!strcmp(propertyName, "editable")) return "";
            return nullptr;
        case FIELD_longitude:
            if (!strcmp(propertyName, "editable")) return "";
            return nullptr;
        case FIELD_latitude:
            if (!strcmp(propertyName, "editable")) return "";
            return nullptr;
        case FIELD_altitude:
            if (!strcmp(propertyName, "editable")) return "";
            return nullptr;
        case FIELD_heading:
            if (!strcmp(propertyName, "editable")) return "";
            return nullptr;
        case FIELD_pitch:
            if (!strcmp(propertyName, "editable")) return "";
            return nullptr;
        case FIELD_range:
            if (!strcmp(propertyName, "editable")) return "";
            return nullptr;
        default: return nullptr;
    }
}

int cOsgCanvas__EarthViewpointDescriptor::getFieldArraySize(omnetpp::any_ptr object, int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldArraySize(object, field);
        field -= base->getFieldCount();
    }
    cOsgCanvas::EarthViewpoint *pp = omnetpp::fromAnyPtr<cOsgCanvas::EarthViewpoint>(object); (void)pp;
    switch (field) {
        default: return 0;
    }
}

void cOsgCanvas__EarthViewpointDescriptor::setFieldArraySize(omnetpp::any_ptr object, int field, int size) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldArraySize(object, field, size);
            return;
        }
        field -= base->getFieldCount();
    }
    cOsgCanvas::EarthViewpoint *pp = omnetpp::fromAnyPtr<cOsgCanvas::EarthViewpoint>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set array size of field %d of class 'cOsgCanvas::EarthViewpoint'", field);
    }
}

const char *cOsgCanvas__EarthViewpointDescriptor::getFieldDynamicTypeString(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldDynamicTypeString(object,field,i);
        field -= base->getFieldCount();
    }
    cOsgCanvas::EarthViewpoint *pp = omnetpp::fromAnyPtr<cOsgCanvas::EarthViewpoint>(object); (void)pp;
    switch (field) {
        default: return nullptr;
    }
}

std::string cOsgCanvas__EarthViewpointDescriptor::getFieldValueAsString(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldValueAsString(object,field,i);
        field -= base->getFieldCount();
    }
    cOsgCanvas::EarthViewpoint *pp = omnetpp::fromAnyPtr<cOsgCanvas::EarthViewpoint>(object); (void)pp;
    switch (field) {
        case FIELD_valid: return bool2string(pp->valid);
        case FIELD_longitude: return double2string(pp->longitude);
        case FIELD_latitude: return double2string(pp->latitude);
        case FIELD_altitude: return double2string(pp->altitude);
        case FIELD_heading: return double2string(pp->heading);
        case FIELD_pitch: return double2string(pp->pitch);
        case FIELD_range: return double2string(pp->range);
        default: return "";
    }
}

void cOsgCanvas__EarthViewpointDescriptor::setFieldValueAsString(omnetpp::any_ptr object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldValueAsString(object, field, i, value);
            return;
        }
        field -= base->getFieldCount();
    }
    cOsgCanvas::EarthViewpoint *pp = omnetpp::fromAnyPtr<cOsgCanvas::EarthViewpoint>(object); (void)pp;
    switch (field) {
        case FIELD_valid: pp->valid = string2bool(value); break;
        case FIELD_longitude: pp->longitude = string2double(value); break;
        case FIELD_latitude: pp->latitude = string2double(value); break;
        case FIELD_altitude: pp->altitude = string2double(value); break;
        case FIELD_heading: pp->heading = string2double(value); break;
        case FIELD_pitch: pp->pitch = string2double(value); break;
        case FIELD_range: pp->range = string2double(value); break;
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'cOsgCanvas::EarthViewpoint'", field);
    }
}

omnetpp::cValue cOsgCanvas__EarthViewpointDescriptor::getFieldValue(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldValue(object,field,i);
        field -= base->getFieldCount();
    }
    cOsgCanvas::EarthViewpoint *pp = omnetpp::fromAnyPtr<cOsgCanvas::EarthViewpoint>(object); (void)pp;
    switch (field) {
        case FIELD_valid: return pp->valid;
        case FIELD_longitude: return pp->longitude;
        case FIELD_latitude: return pp->latitude;
        case FIELD_altitude: return pp->altitude;
        case FIELD_heading: return pp->heading;
        case FIELD_pitch: return pp->pitch;
        case FIELD_range: return pp->range;
        default: throw omnetpp::cRuntimeError("Cannot return field %d of class 'cOsgCanvas::EarthViewpoint' as cValue -- field index out of range?", field);
    }
}

void cOsgCanvas__EarthViewpointDescriptor::setFieldValue(omnetpp::any_ptr object, int field, int i, const omnetpp::cValue& value) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldValue(object, field, i, value);
            return;
        }
        field -= base->getFieldCount();
    }
    cOsgCanvas::EarthViewpoint *pp = omnetpp::fromAnyPtr<cOsgCanvas::EarthViewpoint>(object); (void)pp;
    switch (field) {
        case FIELD_valid: pp->valid = value.boolValue(); break;
        case FIELD_longitude: pp->longitude = value.doubleValue(); break;
        case FIELD_latitude: pp->latitude = value.doubleValue(); break;
        case FIELD_altitude: pp->altitude = value.doubleValue(); break;
        case FIELD_heading: pp->heading = value.doubleValue(); break;
        case FIELD_pitch: pp->pitch = value.doubleValue(); break;
        case FIELD_range: pp->range = value.doubleValue(); break;
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'cOsgCanvas::EarthViewpoint'", field);
    }
}

const char *cOsgCanvas__EarthViewpointDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldStructName(field);
        field -= base->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    };
}

omnetpp::any_ptr cOsgCanvas__EarthViewpointDescriptor::getFieldStructValuePointer(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldStructValuePointer(object, field, i);
        field -= base->getFieldCount();
    }
    cOsgCanvas::EarthViewpoint *pp = omnetpp::fromAnyPtr<cOsgCanvas::EarthViewpoint>(object); (void)pp;
    switch (field) {
        default: return omnetpp::any_ptr(nullptr);
    }
}

void cOsgCanvas__EarthViewpointDescriptor::setFieldStructValuePointer(omnetpp::any_ptr object, int field, int i, omnetpp::any_ptr ptr) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldStructValuePointer(object, field, i, ptr);
            return;
        }
        field -= base->getFieldCount();
    }
    cOsgCanvas::EarthViewpoint *pp = omnetpp::fromAnyPtr<cOsgCanvas::EarthViewpoint>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'cOsgCanvas::EarthViewpoint'", field);
    }
}

class cOsgCanvasDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertyNames;
    enum FieldConstants {
        FIELD_scene,
        FIELD_viewerStyle,
        FIELD_clearColor,
        FIELD_cameraManipulatorType,
        FIELD_fieldOfViewAngle,
        FIELD_zNear,
        FIELD_zFar,
        FIELD_genericViewpoint,
        FIELD_earthViewpoint,
    };
  public:
    cOsgCanvasDescriptor();
    virtual ~cOsgCanvasDescriptor();

    virtual bool doesSupport(omnetpp::cObject *obj) const override;
    virtual const char **getPropertyNames() const override;
    virtual const char *getProperty(const char *propertyName) const override;
    virtual int getFieldCount() const override;
    virtual const char *getFieldName(int field) const override;
    virtual int findField(const char *fieldName) const override;
    virtual unsigned int getFieldTypeFlags(int field) const override;
    virtual const char *getFieldTypeString(int field) const override;
    virtual const char **getFieldPropertyNames(int field) const override;
    virtual const char *getFieldProperty(int field, const char *propertyName) const override;
    virtual int getFieldArraySize(omnetpp::any_ptr object, int field) const override;
    virtual void setFieldArraySize(omnetpp::any_ptr object, int field, int size) const override;

    virtual const char *getFieldDynamicTypeString(omnetpp::any_ptr object, int field, int i) const override;
    virtual std::string getFieldValueAsString(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldValueAsString(omnetpp::any_ptr object, int field, int i, const char *value) const override;
    virtual omnetpp::cValue getFieldValue(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldValue(omnetpp::any_ptr object, int field, int i, const omnetpp::cValue& value) const override;

    virtual const char *getFieldStructName(int field) const override;
    virtual omnetpp::any_ptr getFieldStructValuePointer(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldStructValuePointer(omnetpp::any_ptr object, int field, int i, omnetpp::any_ptr ptr) const override;
};

Register_ClassDescriptor(cOsgCanvasDescriptor)

cOsgCanvasDescriptor::cOsgCanvasDescriptor() : omnetpp::cClassDescriptor(omnetpp::opp_typename(typeid(omnetpp::cOsgCanvas)), "omnetpp::cOwnedObject")
{
    propertyNames = nullptr;
}

cOsgCanvasDescriptor::~cOsgCanvasDescriptor()
{
    delete[] propertyNames;
}

bool cOsgCanvasDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<cOsgCanvas *>(obj)!=nullptr;
}

const char **cOsgCanvasDescriptor::getPropertyNames() const
{
    if (!propertyNames) {
        static const char *names[] = { "existingClass", "overwritePreviousDefinition",  nullptr };
        omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
        const char **baseNames = base ? base->getPropertyNames() : nullptr;
        propertyNames = mergeLists(baseNames, names);
    }
    return propertyNames;
}

const char *cOsgCanvasDescriptor::getProperty(const char *propertyName) const
{
    if (!strcmp(propertyName, "existingClass")) return "";
    if (!strcmp(propertyName, "overwritePreviousDefinition")) return "";
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    return base ? base->getProperty(propertyName) : nullptr;
}

int cOsgCanvasDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    return base ? 9+base->getFieldCount() : 9;
}

unsigned int cOsgCanvasDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldTypeFlags(field);
        field -= base->getFieldCount();
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND | FD_ISPOINTER | FD_ISREPLACEABLE,    // FIELD_scene
        FD_ISEDITABLE,    // FIELD_viewerStyle
        FD_ISEDITABLE,    // FIELD_clearColor
        FD_ISEDITABLE,    // FIELD_cameraManipulatorType
        FD_ISEDITABLE,    // FIELD_fieldOfViewAngle
        FD_ISEDITABLE,    // FIELD_zNear
        FD_ISEDITABLE,    // FIELD_zFar
        FD_ISCOMPOUND,    // FIELD_genericViewpoint
        FD_ISCOMPOUND,    // FIELD_earthViewpoint
    };
    return (field >= 0 && field < 9) ? fieldTypeFlags[field] : 0;
}

const char *cOsgCanvasDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldName(field);
        field -= base->getFieldCount();
    }
    static const char *fieldNames[] = {
        "scene",
        "viewerStyle",
        "clearColor",
        "cameraManipulatorType",
        "fieldOfViewAngle",
        "zNear",
        "zFar",
        "genericViewpoint",
        "earthViewpoint",
    };
    return (field >= 0 && field < 9) ? fieldNames[field] : nullptr;
}

int cOsgCanvasDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    int baseIndex = base ? base->getFieldCount() : 0;
    if (strcmp(fieldName, "scene") == 0) return baseIndex + 0;
    if (strcmp(fieldName, "viewerStyle") == 0) return baseIndex + 1;
    if (strcmp(fieldName, "clearColor") == 0) return baseIndex + 2;
    if (strcmp(fieldName, "cameraManipulatorType") == 0) return baseIndex + 3;
    if (strcmp(fieldName, "fieldOfViewAngle") == 0) return baseIndex + 4;
    if (strcmp(fieldName, "zNear") == 0) return baseIndex + 5;
    if (strcmp(fieldName, "zFar") == 0) return baseIndex + 6;
    if (strcmp(fieldName, "genericViewpoint") == 0) return baseIndex + 7;
    if (strcmp(fieldName, "earthViewpoint") == 0) return baseIndex + 8;
    return base ? base->findField(fieldName) : -1;
}

const char *cOsgCanvasDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldTypeString(field);
        field -= base->getFieldCount();
    }
    static const char *fieldTypeStrings[] = {
        "osg::Node",    // FIELD_scene
        "int",    // FIELD_viewerStyle
        "omnetpp::cFigure::Color",    // FIELD_clearColor
        "int",    // FIELD_cameraManipulatorType
        "double",    // FIELD_fieldOfViewAngle
        "double",    // FIELD_zNear
        "double",    // FIELD_zFar
        "omnetpp::cOsgCanvas::Viewpoint",    // FIELD_genericViewpoint
        "omnetpp::cOsgCanvas::EarthViewpoint",    // FIELD_earthViewpoint
    };
    return (field >= 0 && field < 9) ? fieldTypeStrings[field] : nullptr;
}

const char **cOsgCanvasDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldPropertyNames(field);
        field -= base->getFieldCount();
    }
    switch (field) {
        case FIELD_viewerStyle: {
            static const char *names[] = { "editable", "enum", "group", "enum",  nullptr };
            return names;
        }
        case FIELD_clearColor: {
            static const char *names[] = { "editable", "group",  nullptr };
            return names;
        }
        case FIELD_cameraManipulatorType: {
            static const char *names[] = { "editable", "enum", "group", "enum",  nullptr };
            return names;
        }
        case FIELD_fieldOfViewAngle: {
            static const char *names[] = { "editable", "group",  nullptr };
            return names;
        }
        case FIELD_zNear: {
            static const char *names[] = { "editable", "group",  nullptr };
            return names;
        }
        case FIELD_zFar: {
            static const char *names[] = { "editable", "group",  nullptr };
            return names;
        }
        case FIELD_genericViewpoint: {
            static const char *names[] = { "toValue",  nullptr };
            return names;
        }
        case FIELD_earthViewpoint: {
            static const char *names[] = { "toValue",  nullptr };
            return names;
        }
        default: return nullptr;
    }
}

const char *cOsgCanvasDescriptor::getFieldProperty(int field, const char *propertyName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldProperty(field, propertyName);
        field -= base->getFieldCount();
    }
    switch (field) {
        case FIELD_viewerStyle:
            if (!strcmp(propertyName, "editable")) return "";
            if (!strcmp(propertyName, "enum")) return "omnetpp::cOsgCanvas::ViewerStyle";
            if (!strcmp(propertyName, "group")) return "viewer hints";
            if (!strcmp(propertyName, "enum")) return "omnetpp::cOsgCanvas::ViewerStyle";
            return nullptr;
        case FIELD_clearColor:
            if (!strcmp(propertyName, "editable")) return "";
            if (!strcmp(propertyName, "group")) return "viewer hints";
            return nullptr;
        case FIELD_cameraManipulatorType:
            if (!strcmp(propertyName, "editable")) return "";
            if (!strcmp(propertyName, "enum")) return "omnetpp::cOsgCanvas::CameraManipulatorType";
            if (!strcmp(propertyName, "group")) return "viewer hints";
            if (!strcmp(propertyName, "enum")) return "omnetpp::cOsgCanvas::CameraManipulatorType";
            return nullptr;
        case FIELD_fieldOfViewAngle:
            if (!strcmp(propertyName, "editable")) return "";
            if (!strcmp(propertyName, "group")) return "viewer hints";
            return nullptr;
        case FIELD_zNear:
            if (!strcmp(propertyName, "editable")) return "";
            if (!strcmp(propertyName, "group")) return "viewer hints";
            return nullptr;
        case FIELD_zFar:
            if (!strcmp(propertyName, "editable")) return "";
            if (!strcmp(propertyName, "group")) return "viewer hints";
            return nullptr;
        case FIELD_genericViewpoint:
            if (!strcmp(propertyName, "toValue")) return "omnetpp::toAnyPtr(&$)";
            return nullptr;
        case FIELD_earthViewpoint:
            if (!strcmp(propertyName, "toValue")) return "omnetpp::toAnyPtr(&$)";
            return nullptr;
        default: return nullptr;
    }
}

int cOsgCanvasDescriptor::getFieldArraySize(omnetpp::any_ptr object, int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldArraySize(object, field);
        field -= base->getFieldCount();
    }
    cOsgCanvas *pp = omnetpp::fromAnyPtr<cOsgCanvas>(object); (void)pp;
    switch (field) {
        default: return 0;
    }
}

void cOsgCanvasDescriptor::setFieldArraySize(omnetpp::any_ptr object, int field, int size) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldArraySize(object, field, size);
            return;
        }
        field -= base->getFieldCount();
    }
    cOsgCanvas *pp = omnetpp::fromAnyPtr<cOsgCanvas>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set array size of field %d of class 'cOsgCanvas'", field);
    }
}

const char *cOsgCanvasDescriptor::getFieldDynamicTypeString(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldDynamicTypeString(object,field,i);
        field -= base->getFieldCount();
    }
    cOsgCanvas *pp = omnetpp::fromAnyPtr<cOsgCanvas>(object); (void)pp;
    switch (field) {
        case FIELD_scene: { const ::osg::Node * value = pp->getScene(); return omnetpp::opp_typename(typeid(*value)); }
        default: return nullptr;
    }
}

std::string cOsgCanvasDescriptor::getFieldValueAsString(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldValueAsString(object,field,i);
        field -= base->getFieldCount();
    }
    cOsgCanvas *pp = omnetpp::fromAnyPtr<cOsgCanvas>(object); (void)pp;
    switch (field) {
        case FIELD_scene: return "";
        case FIELD_viewerStyle: return enum2string(pp->getViewerStyle(), "omnetpp::cOsgCanvas::ViewerStyle");
        case FIELD_clearColor: return pp->getClearColor().str();
        case FIELD_cameraManipulatorType: return enum2string(pp->getCameraManipulatorType(), "omnetpp::cOsgCanvas::CameraManipulatorType");
        case FIELD_fieldOfViewAngle: return double2string(pp->getFieldOfViewAngle());
        case FIELD_zNear: return double2string(pp->getZNear());
        case FIELD_zFar: return double2string(pp->getZFar());
        case FIELD_genericViewpoint: return "";
        case FIELD_earthViewpoint: return "";
        default: return "";
    }
}

void cOsgCanvasDescriptor::setFieldValueAsString(omnetpp::any_ptr object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldValueAsString(object, field, i, value);
            return;
        }
        field -= base->getFieldCount();
    }
    cOsgCanvas *pp = omnetpp::fromAnyPtr<cOsgCanvas>(object); (void)pp;
    switch (field) {
        case FIELD_viewerStyle: pp->setViewerStyle((omnetpp::cOsgCanvas::ViewerStyle)string2enum(value, "omnetpp::cOsgCanvas::ViewerStyle")); break;
        case FIELD_clearColor: pp->setClearColor(cFigure::parseColor(value)); break;
        case FIELD_cameraManipulatorType: pp->setCameraManipulatorType((omnetpp::cOsgCanvas::CameraManipulatorType)string2enum(value, "omnetpp::cOsgCanvas::CameraManipulatorType")); break;
        case FIELD_fieldOfViewAngle: pp->setFieldOfViewAngle(string2double(value)); break;
        case FIELD_zNear: pp->setZNear(string2double(value)); break;
        case FIELD_zFar: pp->setZFar(string2double(value)); break;
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'cOsgCanvas'", field);
    }
}

omnetpp::cValue cOsgCanvasDescriptor::getFieldValue(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldValue(object,field,i);
        field -= base->getFieldCount();
    }
    cOsgCanvas *pp = omnetpp::fromAnyPtr<cOsgCanvas>(object); (void)pp;
    switch (field) {
        case FIELD_scene: return omnetpp::toAnyPtr(pp->getScene()); break;
        case FIELD_viewerStyle: return pp->getViewerStyle();
        case FIELD_clearColor: return pp->getClearColor().str();
        case FIELD_cameraManipulatorType: return pp->getCameraManipulatorType();
        case FIELD_fieldOfViewAngle: return pp->getFieldOfViewAngle();
        case FIELD_zNear: return pp->getZNear();
        case FIELD_zFar: return pp->getZFar();
        case FIELD_genericViewpoint: return omnetpp::toAnyPtr(&pp->getGenericViewpoint());
        case FIELD_earthViewpoint: return omnetpp::toAnyPtr(&pp->getEarthViewpoint());
        default: throw omnetpp::cRuntimeError("Cannot return field %d of class 'cOsgCanvas' as cValue -- field index out of range?", field);
    }
}

void cOsgCanvasDescriptor::setFieldValue(omnetpp::any_ptr object, int field, int i, const omnetpp::cValue& value) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldValue(object, field, i, value);
            return;
        }
        field -= base->getFieldCount();
    }
    cOsgCanvas *pp = omnetpp::fromAnyPtr<cOsgCanvas>(object); (void)pp;
    switch (field) {
        case FIELD_scene: pp->setScene(omnetpp::fromAnyPtr<::osg::Node>(value.pointerValue())); break;
        case FIELD_viewerStyle: pp->setViewerStyle((omnetpp::cOsgCanvas::ViewerStyle)value.intValue()); break;
        case FIELD_clearColor: pp->setClearColor(cFigure::parseColor(value)); break;
        case FIELD_cameraManipulatorType: pp->setCameraManipulatorType((omnetpp::cOsgCanvas::CameraManipulatorType)value.intValue()); break;
        case FIELD_fieldOfViewAngle: pp->setFieldOfViewAngle(value.doubleValue()); break;
        case FIELD_zNear: pp->setZNear(value.doubleValue()); break;
        case FIELD_zFar: pp->setZFar(value.doubleValue()); break;
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'cOsgCanvas'", field);
    }
}

const char *cOsgCanvasDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldStructName(field);
        field -= base->getFieldCount();
    }
    switch (field) {
        case FIELD_scene: return omnetpp::opp_typename(typeid(::osg::Node));
        case FIELD_genericViewpoint: return omnetpp::opp_typename(typeid(cOsgCanvas::Viewpoint));
        case FIELD_earthViewpoint: return omnetpp::opp_typename(typeid(cOsgCanvas::EarthViewpoint));
        default: return nullptr;
    };
}

omnetpp::any_ptr cOsgCanvasDescriptor::getFieldStructValuePointer(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldStructValuePointer(object, field, i);
        field -= base->getFieldCount();
    }
    cOsgCanvas *pp = omnetpp::fromAnyPtr<cOsgCanvas>(object); (void)pp;
    switch (field) {
        case FIELD_scene: return omnetpp::toAnyPtr(pp->getScene()); break;
        case FIELD_clearColor: return omnetpp::toAnyPtr(&pp->getClearColor()); break;
        case FIELD_genericViewpoint: return omnetpp::toAnyPtr(&pp->getGenericViewpoint()); break;
        case FIELD_earthViewpoint: return omnetpp::toAnyPtr(&pp->getEarthViewpoint()); break;
        default: return omnetpp::any_ptr(nullptr);
    }
}

void cOsgCanvasDescriptor::setFieldStructValuePointer(omnetpp::any_ptr object, int field, int i, omnetpp::any_ptr ptr) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldStructValuePointer(object, field, i, ptr);
            return;
        }
        field -= base->getFieldCount();
    }
    cOsgCanvas *pp = omnetpp::fromAnyPtr<cOsgCanvas>(object); (void)pp;
    switch (field) {
        case FIELD_scene: pp->setScene(omnetpp::fromAnyPtr<::osg::Node>(ptr)); break;
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'cOsgCanvas'", field);
    }
}

class cObjectOsgNodeDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertyNames;
    enum FieldConstants {
        FIELD_object,
    };
  public:
    cObjectOsgNodeDescriptor();
    virtual ~cObjectOsgNodeDescriptor();

    virtual bool doesSupport(omnetpp::cObject *obj) const override;
    virtual const char **getPropertyNames() const override;
    virtual const char *getProperty(const char *propertyName) const override;
    virtual int getFieldCount() const override;
    virtual const char *getFieldName(int field) const override;
    virtual int findField(const char *fieldName) const override;
    virtual unsigned int getFieldTypeFlags(int field) const override;
    virtual const char *getFieldTypeString(int field) const override;
    virtual const char **getFieldPropertyNames(int field) const override;
    virtual const char *getFieldProperty(int field, const char *propertyName) const override;
    virtual int getFieldArraySize(omnetpp::any_ptr object, int field) const override;
    virtual void setFieldArraySize(omnetpp::any_ptr object, int field, int size) const override;

    virtual const char *getFieldDynamicTypeString(omnetpp::any_ptr object, int field, int i) const override;
    virtual std::string getFieldValueAsString(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldValueAsString(omnetpp::any_ptr object, int field, int i, const char *value) const override;
    virtual omnetpp::cValue getFieldValue(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldValue(omnetpp::any_ptr object, int field, int i, const omnetpp::cValue& value) const override;

    virtual const char *getFieldStructName(int field) const override;
    virtual omnetpp::any_ptr getFieldStructValuePointer(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldStructValuePointer(omnetpp::any_ptr object, int field, int i, omnetpp::any_ptr ptr) const override;
};

Register_ClassDescriptor(cObjectOsgNodeDescriptor)

cObjectOsgNodeDescriptor::cObjectOsgNodeDescriptor() : omnetpp::cClassDescriptor(omnetpp::opp_typename(typeid(omnetpp::cObjectOsgNode)), "osg::Group")
{
    propertyNames = nullptr;
}

cObjectOsgNodeDescriptor::~cObjectOsgNodeDescriptor()
{
    delete[] propertyNames;
}

bool cObjectOsgNodeDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<cObjectOsgNode *>(obj)!=nullptr;
}

const char **cObjectOsgNodeDescriptor::getPropertyNames() const
{
    if (!propertyNames) {
        static const char *names[] = { "existingClass",  nullptr };
        omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
        const char **baseNames = base ? base->getPropertyNames() : nullptr;
        propertyNames = mergeLists(baseNames, names);
    }
    return propertyNames;
}

const char *cObjectOsgNodeDescriptor::getProperty(const char *propertyName) const
{
    if (!strcmp(propertyName, "existingClass")) return "";
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    return base ? base->getProperty(propertyName) : nullptr;
}

int cObjectOsgNodeDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    return base ? 1+base->getFieldCount() : 1;
}

unsigned int cObjectOsgNodeDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldTypeFlags(field);
        field -= base->getFieldCount();
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCOBJECT | FD_ISREPLACEABLE,    // FIELD_object
    };
    return (field >= 0 && field < 1) ? fieldTypeFlags[field] : 0;
}

const char *cObjectOsgNodeDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldName(field);
        field -= base->getFieldCount();
    }
    static const char *fieldNames[] = {
        "object",
    };
    return (field >= 0 && field < 1) ? fieldNames[field] : nullptr;
}

int cObjectOsgNodeDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    int baseIndex = base ? base->getFieldCount() : 0;
    if (strcmp(fieldName, "object") == 0) return baseIndex + 0;
    return base ? base->findField(fieldName) : -1;
}

const char *cObjectOsgNodeDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldTypeString(field);
        field -= base->getFieldCount();
    }
    static const char *fieldTypeStrings[] = {
        "omnetpp::cObject",    // FIELD_object
    };
    return (field >= 0 && field < 1) ? fieldTypeStrings[field] : nullptr;
}

const char **cObjectOsgNodeDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldPropertyNames(field);
        field -= base->getFieldCount();
    }
    switch (field) {
        case FIELD_object: {
            static const char *names[] = { "getter", "toString",  nullptr };
            return names;
        }
        default: return nullptr;
    }
}

const char *cObjectOsgNodeDescriptor::getFieldProperty(int field, const char *propertyName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldProperty(field, propertyName);
        field -= base->getFieldCount();
    }
    switch (field) {
        case FIELD_object:
            if (!strcmp(propertyName, "getter")) return "const_cast<cObject*>($->getObject())";
            if (!strcmp(propertyName, "toString")) return "->str()";
            return nullptr;
        default: return nullptr;
    }
}

int cObjectOsgNodeDescriptor::getFieldArraySize(omnetpp::any_ptr object, int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldArraySize(object, field);
        field -= base->getFieldCount();
    }
    cObjectOsgNode *pp = omnetpp::fromAnyPtr<cObjectOsgNode>(object); (void)pp;
    switch (field) {
        default: return 0;
    }
}

void cObjectOsgNodeDescriptor::setFieldArraySize(omnetpp::any_ptr object, int field, int size) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldArraySize(object, field, size);
            return;
        }
        field -= base->getFieldCount();
    }
    cObjectOsgNode *pp = omnetpp::fromAnyPtr<cObjectOsgNode>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set array size of field %d of class 'cObjectOsgNode'", field);
    }
}

const char *cObjectOsgNodeDescriptor::getFieldDynamicTypeString(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldDynamicTypeString(object,field,i);
        field -= base->getFieldCount();
    }
    cObjectOsgNode *pp = omnetpp::fromAnyPtr<cObjectOsgNode>(object); (void)pp;
    switch (field) {
        case FIELD_object: { const cObject * value = const_cast<cObject*>(pp->getObject()); return omnetpp::opp_typename(typeid(*value)); }
        default: return nullptr;
    }
}

std::string cObjectOsgNodeDescriptor::getFieldValueAsString(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldValueAsString(object,field,i);
        field -= base->getFieldCount();
    }
    cObjectOsgNode *pp = omnetpp::fromAnyPtr<cObjectOsgNode>(object); (void)pp;
    switch (field) {
        case FIELD_object: { auto obj = const_cast<cObject*>(pp->getObject()); return obj == nullptr ? "" : obj->str(); }
        default: return "";
    }
}

void cObjectOsgNodeDescriptor::setFieldValueAsString(omnetpp::any_ptr object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldValueAsString(object, field, i, value);
            return;
        }
        field -= base->getFieldCount();
    }
    cObjectOsgNode *pp = omnetpp::fromAnyPtr<cObjectOsgNode>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'cObjectOsgNode'", field);
    }
}

omnetpp::cValue cObjectOsgNodeDescriptor::getFieldValue(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldValue(object,field,i);
        field -= base->getFieldCount();
    }
    cObjectOsgNode *pp = omnetpp::fromAnyPtr<cObjectOsgNode>(object); (void)pp;
    switch (field) {
        case FIELD_object: return omnetpp::toAnyPtr(const_cast<cObject*>(pp->getObject())); break;
        default: throw omnetpp::cRuntimeError("Cannot return field %d of class 'cObjectOsgNode' as cValue -- field index out of range?", field);
    }
}

void cObjectOsgNodeDescriptor::setFieldValue(omnetpp::any_ptr object, int field, int i, const omnetpp::cValue& value) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldValue(object, field, i, value);
            return;
        }
        field -= base->getFieldCount();
    }
    cObjectOsgNode *pp = omnetpp::fromAnyPtr<cObjectOsgNode>(object); (void)pp;
    switch (field) {
        case FIELD_object: pp->setObject(omnetpp::fromAnyPtr<cObject>(value.pointerValue())); break;
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'cObjectOsgNode'", field);
    }
}

const char *cObjectOsgNodeDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldStructName(field);
        field -= base->getFieldCount();
    }
    switch (field) {
        case FIELD_object: return omnetpp::opp_typename(typeid(cObject));
        default: return nullptr;
    };
}

omnetpp::any_ptr cObjectOsgNodeDescriptor::getFieldStructValuePointer(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldStructValuePointer(object, field, i);
        field -= base->getFieldCount();
    }
    cObjectOsgNode *pp = omnetpp::fromAnyPtr<cObjectOsgNode>(object); (void)pp;
    switch (field) {
        case FIELD_object: return omnetpp::toAnyPtr(const_cast<cObject*>(pp->getObject())); break;
        default: return omnetpp::any_ptr(nullptr);
    }
}

void cObjectOsgNodeDescriptor::setFieldStructValuePointer(omnetpp::any_ptr object, int field, int i, omnetpp::any_ptr ptr) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldStructValuePointer(object, field, i, ptr);
            return;
        }
        field -= base->getFieldCount();
    }
    cObjectOsgNode *pp = omnetpp::fromAnyPtr<cObjectOsgNode>(object); (void)pp;
    switch (field) {
        case FIELD_object: pp->setObject(omnetpp::fromAnyPtr<cObject>(ptr)); break;
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'cObjectOsgNode'", field);
    }
}

}  // namespace omnetpp

namespace osg {

class NodeDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertyNames;
    enum FieldConstants {
        FIELD_descriptions,
        FIELD_children,
    };
  public:
    NodeDescriptor();
    virtual ~NodeDescriptor();

    virtual bool doesSupport(omnetpp::cObject *obj) const override;
    virtual const char **getPropertyNames() const override;
    virtual const char *getProperty(const char *propertyName) const override;
    virtual int getFieldCount() const override;
    virtual const char *getFieldName(int field) const override;
    virtual int findField(const char *fieldName) const override;
    virtual unsigned int getFieldTypeFlags(int field) const override;
    virtual const char *getFieldTypeString(int field) const override;
    virtual const char **getFieldPropertyNames(int field) const override;
    virtual const char *getFieldProperty(int field, const char *propertyName) const override;
    virtual int getFieldArraySize(omnetpp::any_ptr object, int field) const override;
    virtual void setFieldArraySize(omnetpp::any_ptr object, int field, int size) const override;

    virtual const char *getFieldDynamicTypeString(omnetpp::any_ptr object, int field, int i) const override;
    virtual std::string getFieldValueAsString(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldValueAsString(omnetpp::any_ptr object, int field, int i, const char *value) const override;
    virtual omnetpp::cValue getFieldValue(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldValue(omnetpp::any_ptr object, int field, int i, const omnetpp::cValue& value) const override;

    virtual const char *getFieldStructName(int field) const override;
    virtual omnetpp::any_ptr getFieldStructValuePointer(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldStructValuePointer(omnetpp::any_ptr object, int field, int i, omnetpp::any_ptr ptr) const override;
};

Register_ClassDescriptor(NodeDescriptor)

NodeDescriptor::NodeDescriptor() : omnetpp::cClassDescriptor(omnetpp::opp_typename(typeid(osg::Node)), "")
{
    propertyNames = nullptr;
}

NodeDescriptor::~NodeDescriptor()
{
    delete[] propertyNames;
}

bool NodeDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<Node *>(obj)!=nullptr;
}

const char **NodeDescriptor::getPropertyNames() const
{
    if (!propertyNames) {
        static const char *names[] = { "existingClass", "descriptor",  nullptr };
        omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
        const char **baseNames = base ? base->getPropertyNames() : nullptr;
        propertyNames = mergeLists(baseNames, names);
    }
    return propertyNames;
}

const char *NodeDescriptor::getProperty(const char *propertyName) const
{
    if (!strcmp(propertyName, "existingClass")) return "";
    if (!strcmp(propertyName, "descriptor")) return "readonly";
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    return base ? base->getProperty(propertyName) : nullptr;
}

int NodeDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    return base ? 2+base->getFieldCount() : 2;
}

unsigned int NodeDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldTypeFlags(field);
        field -= base->getFieldCount();
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY,    // FIELD_descriptions
        FD_ISARRAY | FD_ISCOMPOUND | FD_ISPOINTER,    // FIELD_children
    };
    return (field >= 0 && field < 2) ? fieldTypeFlags[field] : 0;
}

const char *NodeDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldName(field);
        field -= base->getFieldCount();
    }
    static const char *fieldNames[] = {
        "descriptions",
        "children",
    };
    return (field >= 0 && field < 2) ? fieldNames[field] : nullptr;
}

int NodeDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    int baseIndex = base ? base->getFieldCount() : 0;
    if (strcmp(fieldName, "descriptions") == 0) return baseIndex + 0;
    if (strcmp(fieldName, "children") == 0) return baseIndex + 1;
    return base ? base->findField(fieldName) : -1;
}

const char *NodeDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldTypeString(field);
        field -= base->getFieldCount();
    }
    static const char *fieldTypeStrings[] = {
        "string",    // FIELD_descriptions
        "osg::Node",    // FIELD_children
    };
    return (field >= 0 && field < 2) ? fieldTypeStrings[field] : nullptr;
}

const char **NodeDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldPropertyNames(field);
        field -= base->getFieldCount();
    }
    switch (field) {
        case FIELD_descriptions: {
            static const char *names[] = { "getter", "sizeGetter",  nullptr };
            return names;
        }
        case FIELD_children: {
            static const char *names[] = { "getter", "sizeGetter",  nullptr };
            return names;
        }
        default: return nullptr;
    }
}

const char *NodeDescriptor::getFieldProperty(int field, const char *propertyName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldProperty(field, propertyName);
        field -= base->getFieldCount();
    }
    switch (field) {
        case FIELD_descriptions:
            if (!strcmp(propertyName, "getter")) return "osgNode_getDescription($,i)";
            if (!strcmp(propertyName, "sizeGetter")) return "osgNode_getNumDescriptions($)";
            return nullptr;
        case FIELD_children:
            if (!strcmp(propertyName, "getter")) return "osgNode_getChild($,i)";
            if (!strcmp(propertyName, "sizeGetter")) return "osgNode_getNumChildren($)";
            return nullptr;
        default: return nullptr;
    }
}

int NodeDescriptor::getFieldArraySize(omnetpp::any_ptr object, int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldArraySize(object, field);
        field -= base->getFieldCount();
    }
    Node *pp = omnetpp::fromAnyPtr<Node>(object); (void)pp;
    switch (field) {
        case FIELD_descriptions: return osgNode_getNumDescriptions(pp);
        case FIELD_children: return osgNode_getNumChildren(pp);
        default: return 0;
    }
}

void NodeDescriptor::setFieldArraySize(omnetpp::any_ptr object, int field, int size) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldArraySize(object, field, size);
            return;
        }
        field -= base->getFieldCount();
    }
    Node *pp = omnetpp::fromAnyPtr<Node>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set array size of field %d of class 'Node'", field);
    }
}

const char *NodeDescriptor::getFieldDynamicTypeString(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldDynamicTypeString(object,field,i);
        field -= base->getFieldCount();
    }
    Node *pp = omnetpp::fromAnyPtr<Node>(object); (void)pp;
    switch (field) {
        case FIELD_children: { const Node * value = osgNode_getChild(pp,i); return omnetpp::opp_typename(typeid(*value)); }
        default: return nullptr;
    }
}

std::string NodeDescriptor::getFieldValueAsString(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldValueAsString(object,field,i);
        field -= base->getFieldCount();
    }
    Node *pp = omnetpp::fromAnyPtr<Node>(object); (void)pp;
    switch (field) {
        case FIELD_descriptions: return oppstring2string(osgNode_getDescription(pp,i));
        case FIELD_children: return "";
        default: return "";
    }
}

void NodeDescriptor::setFieldValueAsString(omnetpp::any_ptr object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldValueAsString(object, field, i, value);
            return;
        }
        field -= base->getFieldCount();
    }
    Node *pp = omnetpp::fromAnyPtr<Node>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'Node'", field);
    }
}

omnetpp::cValue NodeDescriptor::getFieldValue(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldValue(object,field,i);
        field -= base->getFieldCount();
    }
    Node *pp = omnetpp::fromAnyPtr<Node>(object); (void)pp;
    switch (field) {
        case FIELD_descriptions: return osgNode_getDescription(pp,i);
        case FIELD_children: return omnetpp::toAnyPtr(osgNode_getChild(pp,i)); break;
        default: throw omnetpp::cRuntimeError("Cannot return field %d of class 'Node' as cValue -- field index out of range?", field);
    }
}

void NodeDescriptor::setFieldValue(omnetpp::any_ptr object, int field, int i, const omnetpp::cValue& value) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldValue(object, field, i, value);
            return;
        }
        field -= base->getFieldCount();
    }
    Node *pp = omnetpp::fromAnyPtr<Node>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'Node'", field);
    }
}

const char *NodeDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldStructName(field);
        field -= base->getFieldCount();
    }
    switch (field) {
        case FIELD_children: return omnetpp::opp_typename(typeid(Node));
        default: return nullptr;
    };
}

omnetpp::any_ptr NodeDescriptor::getFieldStructValuePointer(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldStructValuePointer(object, field, i);
        field -= base->getFieldCount();
    }
    Node *pp = omnetpp::fromAnyPtr<Node>(object); (void)pp;
    switch (field) {
        case FIELD_children: return omnetpp::toAnyPtr(osgNode_getChild(pp,i)); break;
        default: return omnetpp::any_ptr(nullptr);
    }
}

void NodeDescriptor::setFieldStructValuePointer(omnetpp::any_ptr object, int field, int i, omnetpp::any_ptr ptr) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldStructValuePointer(object, field, i, ptr);
            return;
        }
        field -= base->getFieldCount();
    }
    Node *pp = omnetpp::fromAnyPtr<Node>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'Node'", field);
    }
}

class GroupDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertyNames;
    enum FieldConstants {
    };
  public:
    GroupDescriptor();
    virtual ~GroupDescriptor();

    virtual bool doesSupport(omnetpp::cObject *obj) const override;
    virtual const char **getPropertyNames() const override;
    virtual const char *getProperty(const char *propertyName) const override;
    virtual int getFieldCount() const override;
    virtual const char *getFieldName(int field) const override;
    virtual int findField(const char *fieldName) const override;
    virtual unsigned int getFieldTypeFlags(int field) const override;
    virtual const char *getFieldTypeString(int field) const override;
    virtual const char **getFieldPropertyNames(int field) const override;
    virtual const char *getFieldProperty(int field, const char *propertyName) const override;
    virtual int getFieldArraySize(omnetpp::any_ptr object, int field) const override;
    virtual void setFieldArraySize(omnetpp::any_ptr object, int field, int size) const override;

    virtual const char *getFieldDynamicTypeString(omnetpp::any_ptr object, int field, int i) const override;
    virtual std::string getFieldValueAsString(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldValueAsString(omnetpp::any_ptr object, int field, int i, const char *value) const override;
    virtual omnetpp::cValue getFieldValue(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldValue(omnetpp::any_ptr object, int field, int i, const omnetpp::cValue& value) const override;

    virtual const char *getFieldStructName(int field) const override;
    virtual omnetpp::any_ptr getFieldStructValuePointer(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldStructValuePointer(omnetpp::any_ptr object, int field, int i, omnetpp::any_ptr ptr) const override;
};

Register_ClassDescriptor(GroupDescriptor)

GroupDescriptor::GroupDescriptor() : omnetpp::cClassDescriptor(omnetpp::opp_typename(typeid(osg::Group)), "osg::Node")
{
    propertyNames = nullptr;
}

GroupDescriptor::~GroupDescriptor()
{
    delete[] propertyNames;
}

bool GroupDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<Group *>(obj)!=nullptr;
}

const char **GroupDescriptor::getPropertyNames() const
{
    if (!propertyNames) {
        static const char *names[] = { "existingClass",  nullptr };
        omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
        const char **baseNames = base ? base->getPropertyNames() : nullptr;
        propertyNames = mergeLists(baseNames, names);
    }
    return propertyNames;
}

const char *GroupDescriptor::getProperty(const char *propertyName) const
{
    if (!strcmp(propertyName, "existingClass")) return "";
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    return base ? base->getProperty(propertyName) : nullptr;
}

int GroupDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    return base ? 0+base->getFieldCount() : 0;
}

unsigned int GroupDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldTypeFlags(field);
        field -= base->getFieldCount();
    }
    return 0;
}

const char *GroupDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldName(field);
        field -= base->getFieldCount();
    }
    return nullptr;
}

int GroupDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    return base ? base->findField(fieldName) : -1;
}

const char *GroupDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldTypeString(field);
        field -= base->getFieldCount();
    }
    return nullptr;
}

const char **GroupDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldPropertyNames(field);
        field -= base->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

const char *GroupDescriptor::getFieldProperty(int field, const char *propertyName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldProperty(field, propertyName);
        field -= base->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

int GroupDescriptor::getFieldArraySize(omnetpp::any_ptr object, int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldArraySize(object, field);
        field -= base->getFieldCount();
    }
    Group *pp = omnetpp::fromAnyPtr<Group>(object); (void)pp;
    switch (field) {
        default: return 0;
    }
}

void GroupDescriptor::setFieldArraySize(omnetpp::any_ptr object, int field, int size) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldArraySize(object, field, size);
            return;
        }
        field -= base->getFieldCount();
    }
    Group *pp = omnetpp::fromAnyPtr<Group>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set array size of field %d of class 'Group'", field);
    }
}

const char *GroupDescriptor::getFieldDynamicTypeString(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldDynamicTypeString(object,field,i);
        field -= base->getFieldCount();
    }
    Group *pp = omnetpp::fromAnyPtr<Group>(object); (void)pp;
    switch (field) {
        default: return nullptr;
    }
}

std::string GroupDescriptor::getFieldValueAsString(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldValueAsString(object,field,i);
        field -= base->getFieldCount();
    }
    Group *pp = omnetpp::fromAnyPtr<Group>(object); (void)pp;
    switch (field) {
        default: return "";
    }
}

void GroupDescriptor::setFieldValueAsString(omnetpp::any_ptr object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldValueAsString(object, field, i, value);
            return;
        }
        field -= base->getFieldCount();
    }
    Group *pp = omnetpp::fromAnyPtr<Group>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'Group'", field);
    }
}

omnetpp::cValue GroupDescriptor::getFieldValue(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldValue(object,field,i);
        field -= base->getFieldCount();
    }
    Group *pp = omnetpp::fromAnyPtr<Group>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot return field %d of class 'Group' as cValue -- field index out of range?", field);
    }
}

void GroupDescriptor::setFieldValue(omnetpp::any_ptr object, int field, int i, const omnetpp::cValue& value) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldValue(object, field, i, value);
            return;
        }
        field -= base->getFieldCount();
    }
    Group *pp = omnetpp::fromAnyPtr<Group>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'Group'", field);
    }
}

const char *GroupDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldStructName(field);
        field -= base->getFieldCount();
    }
    return nullptr;
}

omnetpp::any_ptr GroupDescriptor::getFieldStructValuePointer(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldStructValuePointer(object, field, i);
        field -= base->getFieldCount();
    }
    Group *pp = omnetpp::fromAnyPtr<Group>(object); (void)pp;
    switch (field) {
        default: return omnetpp::any_ptr(nullptr);
    }
}

void GroupDescriptor::setFieldStructValuePointer(omnetpp::any_ptr object, int field, int i, omnetpp::any_ptr ptr) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldStructValuePointer(object, field, i, ptr);
            return;
        }
        field -= base->getFieldCount();
    }
    Group *pp = omnetpp::fromAnyPtr<Group>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'Group'", field);
    }
}

}  // namespace osg

namespace omnetpp {

}  // namespace omnetpp

