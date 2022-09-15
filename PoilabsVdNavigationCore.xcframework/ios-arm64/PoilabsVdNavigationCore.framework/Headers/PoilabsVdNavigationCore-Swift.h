// Generated by Apple Swift version 5.5.2 (swiftlang-1300.0.47.5 clang-1300.0.29.30)
#ifndef POILABSVDNAVIGATIONCORE_SWIFT_H
#define POILABSVDNAVIGATIONCORE_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreData;
@import CoreLocation;
@import Foundation;
@import ObjectiveC;
@import PoilabsPositioning;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="PoilabsVdNavigationCore",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSEntityDescription;
@class NSManagedObjectContext;

SWIFT_CLASS_NAMED("BeaconMO")
@interface BeaconMO : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@class NSNumber;
@class NSString;

@interface BeaconMO (SWIFT_EXTENSION(PoilabsVdNavigationCore))
@property (nonatomic) int64_t major;
@property (nonatomic) int64_t minor;
@property (nonatomic, copy) NSString * _Nullable uuid;
@property (nonatomic, copy) NSString * _Nullable placeId;
@property (nonatomic) double lat;
@property (nonatomic) double lon;
@property (nonatomic) int64_t floor;
@end



SWIFT_CLASS_NAMED("ChildsMO")
@interface ChildsMO : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@class PointMO;
@class NSSet;

@interface ChildsMO (SWIFT_EXTENSION(PoilabsVdNavigationCore))
- (void)addPointsObject:(PointMO * _Nonnull)value;
- (void)removePointsObject:(PointMO * _Nonnull)value;
- (void)addPoints:(NSSet * _Nonnull)values;
- (void)removePoints:(NSSet * _Nonnull)values;
@end

@class FloorMO;
@class FacilityMO;

@interface ChildsMO (SWIFT_EXTENSION(PoilabsVdNavigationCore))
@property (nonatomic, copy) NSString * _Nullable placeId;
@property (nonatomic, copy) NSString * _Nullable lang;
@property (nonatomic, copy) NSString * _Nonnull placeTitle;
@property (nonatomic, copy) NSSet<PointMO *> * _Nullable points;
@property (nonatomic, copy) NSSet<FloorMO *> * _Nullable floors;
@property (nonatomic, copy) NSSet<FacilityMO *> * _Nullable facilities;
@property (nonatomic, copy) NSString * _Nonnull hoMallDescription;
@end


SWIFT_CLASS("_TtC23PoilabsVdNavigationCore8ConfigMO")
@interface ConfigMO : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@class PlaceMO;

@interface ConfigMO (SWIFT_EXTENSION(PoilabsVdNavigationCore))
- (void)addPlacesObject:(PlaceMO * _Nonnull)value;
- (void)removePlacesObject:(PlaceMO * _Nonnull)value;
- (void)addPlaces:(NSSet * _Nonnull)values;
- (void)removePlaces:(NSSet * _Nonnull)values;
@end


@interface ConfigMO (SWIFT_EXTENSION(PoilabsVdNavigationCore))
@property (nonatomic, copy) NSString * _Nullable uuid;
@property (nonatomic) double messagingTime;
@property (nonatomic, copy) NSString * _Nullable childsUrl;
@property (nonatomic) int64_t minRssiLimit;
@property (nonatomic) int64_t menuLevel;
@property (nonatomic, copy) NSString * _Nonnull appId;
@property (nonatomic, copy) NSString * _Nonnull lang;
@property (nonatomic, copy) NSSet<PlaceMO *> * _Nullable places;
@end


SWIFT_CLASS_NAMED("FacilityMO")
@interface FacilityMO : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface FacilityMO (SWIFT_EXTENSION(PoilabsVdNavigationCore))
@property (nonatomic, copy) NSString * _Nullable title;
@property (nonatomic, copy) NSString * _Nullable pointType;
@property (nonatomic) NSInteger order;
@property (nonatomic, strong) ChildsMO * _Nullable origin;
@end


SWIFT_CLASS_NAMED("FiltersMO")
@interface FiltersMO : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface FiltersMO (SWIFT_EXTENSION(PoilabsVdNavigationCore))
@property (nonatomic, copy) NSArray<NSString *> * _Nullable pointType;
@property (nonatomic, strong) PointMO * _Nullable origin;
@end


SWIFT_CLASS_NAMED("FloorMO")
@interface FloorMO : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface FloorMO (SWIFT_EXTENSION(PoilabsVdNavigationCore))
@property (nonatomic) int64_t level;
@property (nonatomic) int64_t mapRotateAngle;
@property (nonatomic, copy) NSString * _Nullable title;
@property (nonatomic) double conversionFactor;
@property (nonatomic) double routeConversionFactorDividend;
@property (nonatomic) double conversionFactorDividend;
@property (nonatomic, strong) ChildsMO * _Nullable origin;
@end


SWIFT_CLASS_NAMED("GeometryMO")
@interface GeometryMO : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@class LocationMO;

@interface GeometryMO (SWIFT_EXTENSION(PoilabsVdNavigationCore))
@property (nonatomic, copy) NSArray<NSNumber *> * _Nullable coordinates;
@property (nonatomic, strong) LocationMO * _Nullable origin;
@end


SWIFT_CLASS_NAMED("LocationMO")
@interface LocationMO : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@class LocationPropertiesMO;

@interface LocationMO (SWIFT_EXTENSION(PoilabsVdNavigationCore))
@property (nonatomic, strong) GeometryMO * _Nullable geometry;
@property (nonatomic, strong) PointMO * _Nullable origin;
@property (nonatomic, strong) LocationPropertiesMO * _Nullable properties;
@end


SWIFT_CLASS_NAMED("LocationPropertiesMO")
@interface LocationPropertiesMO : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface LocationPropertiesMO (SWIFT_EXTENSION(PoilabsVdNavigationCore))
@property (nonatomic) int64_t floorLevel;
@property (nonatomic, copy) NSArray<NSNumber *> * _Nullable shopCenterPoint;
@property (nonatomic, strong) LocationMO * _Nullable origin;
@end


SWIFT_CLASS_NAMED("NavigationMO")
@interface NavigationMO : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@class SegmentMO;

@interface NavigationMO (SWIFT_EXTENSION(PoilabsVdNavigationCore))
- (void)addSegmentsObject:(SegmentMO * _Nonnull)value;
- (void)removeSegmentsObject:(SegmentMO * _Nonnull)value;
- (void)addSegments:(NSSet * _Nonnull)values;
- (void)removeSegments:(NSSet * _Nonnull)values;
@end

@class NavigationPropertiesMO;

@interface NavigationMO (SWIFT_EXTENSION(PoilabsVdNavigationCore))
@property (nonatomic, strong) NavigationPropertiesMO * _Nullable properties;
@property (nonatomic, strong) PointMO * _Nullable origin;
@property (nonatomic, strong) NSSet * _Nullable segments;
@end


SWIFT_CLASS_NAMED("NavigationPropertiesMO")
@interface NavigationPropertiesMO : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end




@interface NavigationPropertiesMO (SWIFT_EXTENSION(PoilabsVdNavigationCore))
@property (nonatomic) BOOL isVisibleOnList;
@property (nonatomic) BOOL isVisibleOnMap;
@property (nonatomic, strong) NavigationMO * _Nullable origin;
@property (nonatomic, copy) NSSet<SegmentMO *> * _Nullable segments;
@end


SWIFT_CLASS("_TtC23PoilabsVdNavigationCore16PlaceListManager")
@interface PlaceListManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class CLLocationManager;
@class CLLocation;

@interface PlaceListManager (SWIFT_EXTENSION(PoilabsVdNavigationCore)) <CLLocationManagerDelegate>
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didChangeAuthorizationStatus:(CLAuthorizationStatus)status;
@end


SWIFT_CLASS("_TtC23PoilabsVdNavigationCore7PlaceMO")
@interface PlaceMO : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface PlaceMO (SWIFT_EXTENSION(PoilabsVdNavigationCore))
@property (nonatomic, copy) NSString * _Nullable title;
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic, copy) NSString * _Nullable categoryTitle;
@property (nonatomic, copy) NSString * _Nullable categoryKey;
@property (nonatomic, copy) NSArray<NSNumber *> * _Nullable major;
@property (nonatomic, copy) NSString * _Nullable address;
@property (nonatomic) double lat;
@property (nonatomic) double lon;
@property (nonatomic, strong) ConfigMO * _Nullable origin;
@end


SWIFT_CLASS_NAMED("PointMO")
@interface PointMO : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@class PropertiesMO;

@interface PointMO (SWIFT_EXTENSION(PoilabsVdNavigationCore))
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic, copy) NSString * _Nullable title;
@property (nonatomic, copy) NSString * _Nullable category;
@property (nonatomic, strong) ChildsMO * _Nullable origin;
@property (nonatomic, strong) LocationMO * _Nullable location;
@property (nonatomic, strong) FiltersMO * _Nullable filters;
@property (nonatomic, strong) NavigationMO * _Nullable navigation;
@property (nonatomic, strong) PropertiesMO * _Nullable properties;
@end


SWIFT_CLASS("_TtC23PoilabsVdNavigationCore18PositioningManager")
@interface PositioningManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class PLPBeaconNode;
@class CLHeading;

@interface PositioningManager (SWIFT_EXTENSION(PoilabsVdNavigationCore)) <PoilabsPositioningDelegate>
- (void)poilabsPositioningDidStart;
- (void)poilabsPositioningWithDidStatusChange:(enum PLPStatus)status reason:(enum PLPLocationStatusReason)reason;
- (void)poilabsPositioningWithDidFindBeacon:(NSString * _Nonnull)uuid major:(NSString * _Nonnull)major minor:(NSString * _Nonnull)minor;
- (void)poilabsPositioningWithDidFail:(enum PoilabsPositioningError)error;
- (void)poilabsPositioningWithDidUpdateLocation:(PLPBeaconNode * _Nonnull)location;
- (void)poilabsPositioningWithDidUpdateHeading:(CLHeading * _Nonnull)heading;
@end


SWIFT_CLASS_NAMED("PropertiesMO")
@interface PropertiesMO : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface PropertiesMO (SWIFT_EXTENSION(PoilabsVdNavigationCore))
@property (nonatomic, copy) NSString * _Nullable content;
@property (nonatomic, copy) NSString * _Nullable hoMallDescription;
@property (nonatomic, strong) PointMO * _Nullable origin;
@end


SWIFT_CLASS_NAMED("SegmentMO")
@interface SegmentMO : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface SegmentMO (SWIFT_EXTENSION(PoilabsVdNavigationCore))
@property (nonatomic, copy) NSString * _Nullable startId;
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic) double weight;
@property (nonatomic) BOOL isAvailableForDisabledPerson;
@property (nonatomic, strong) NavigationMO * _Nullable origin;
@end


#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
