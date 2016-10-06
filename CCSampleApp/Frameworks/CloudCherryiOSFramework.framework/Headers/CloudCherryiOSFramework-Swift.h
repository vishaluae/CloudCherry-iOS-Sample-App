// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.8 clang-703.0.31)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
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
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
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
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
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
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIImage;
@class NSCoder;
@class UITouch;
@class UIEvent;
@protocol FloatRatingViewDelegate;


/// A simple rating view that can set whole, half or floating point ratings.
SWIFT_CLASS("_TtC23CloudCherryiOSFramework15FloatRatingView")
@interface FloatRatingView : UIView
@property (nonatomic, weak) id <FloatRatingViewDelegate> _Nullable delegate;

/// Sets the empty image (e.g. a star outline)
@property (nonatomic, strong) UIImage * _Nullable emptyImage;

/// Sets the full image that is overlayed on top of the empty image. Should be same size and shape as the empty image.
@property (nonatomic, strong) UIImage * _Nullable fullImage;

/// Minimum rating.
@property (nonatomic) NSInteger minRating;

/// Max rating value.
@property (nonatomic) NSInteger maxRating;

/// Minimum image size.
@property (nonatomic) CGSize minImageSize;

/// Set the current rating.
@property (nonatomic) float rating;

/// Sets whether or not the rating view can be changed by panning.
@property (nonatomic) BOOL editable;

/// Ratings change by 0.5. Takes priority over floatRatings property.
@property (nonatomic) BOOL halfRatings;

/// Ratings change by floating point values.
@property (nonatomic) BOOL floatRatings;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesMoved:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
@end


SWIFT_PROTOCOL("_TtP23CloudCherryiOSFramework23FloatRatingViewDelegate_")
@protocol FloatRatingViewDelegate

/// Returns the rating value when touch events end
- (void)floatRatingView:(FloatRatingView * _Nonnull)ratingView didUpdate:(float)rating;
@optional

/// Returns the rating value as the user pans
- (void)floatRatingView:(FloatRatingView * _Nonnull)ratingView isUpdating:(float)rating;
@end

@class UIViewController;

SWIFT_CLASS("_TtC23CloudCherryiOSFramework8SurveyCC")
@interface SurveyCC : NSObject

/// Initalize the CloudCherry SDK with username and password. This method has to be called mandatorily.
///
/// \param iUsername Username for user authentication
///
/// \param iPassword Password for user authentication
- (void)setCredentials:(NSString * _Nonnull)iUsername iPassword:(NSString * _Nonnull)iPassword;

/// Initializes SDK using Static token generated from Dashboard
///
/// \param iStaticToken Static Token for authentication
- (void)setStaticToken:(NSString * _Nonnull)iStaticToken;

/// Sets prefill details. This method is optional
///
/// \param iPrefillDictionary Sets custom prefill key-values
- (void)setPrefill:(NSDictionary<NSString *, id> * _Nonnull)iPrefillDictionary;

/// Sets Config Data. This method is optional
///
/// \param iValidUses Sets number of valis uses the token can be used
///
/// \param iMobileNumber Sets location string
- (void)setConfig:(NSInteger)iValidUses iLocation:(NSString * _Nonnull)iLocation;

/// Sets custom assets for Smiley Rating Question. This method is optional. If not called, emojis will be used
///
/// \param iSmileyUnselectedAssets Array of unselected UIImage assets to be provided in 'Sad' to 'Happy' order
///
/// \param iSmileySelectedAssets Array of selected UIImage assets to be provided in 'Sad' to 'Happy' order
- (void)setCustomSmileyRatingAssets:(NSArray<UIImage *> * _Nonnull)iSmileyUnselectedAssets iSmileySelectedAssets:(NSArray<UIImage *> * _Nonnull)iSmileySelectedAssets;

/// Sets Config Data. This method is optional
///
/// \param iStarUnselectedAsset Selected UIImage asset to be provided
///
/// \param iStarSelectedAsset Unselected UIImage asset to be provided
- (void)setCustomStarRatingAssets:(UIImage * _Nonnull)iStarUnselectedAsset iStarSelectedAsset:(UIImage * _Nonnull)iStarSelectedAsset;

/// Presenting the CloudCherry Survey
///
/// \param iController The Parent Controller on which the Survey has to be presented.
- (void)showSurveyInController:(UIViewController * _Nonnull)iController;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
