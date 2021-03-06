// Generated by Apple Swift version 1.2 (swiftlang-602.0.53.1 clang-602.0.53)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

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
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
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
#endif
#if __has_feature(nullability)
#  define SWIFT_NULLABILITY(X) X
#else
# if !defined(__nonnull)
#  define __nonnull
# endif
# if !defined(__nullable)
#  define __nullable
# endif
# if !defined(__null_unspecified)
#  define __null_unspecified
# endif
#  define SWIFT_NULLABILITY(X)
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import Foundation;
@import CoreLocation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class NSDate;
@class CMMotionActivity;


/// A container class which holds and provides access to a variety of activity data.
SWIFT_CLASS("_TtC5trnql13ActivityEntry")
@interface ActivityEntry : NSObject

/// \returns Returns a string constant that represents the type of user activity.
- (NSString * __nonnull)getActivityString;

/// \returns Returns the confidence for current detected activity.
- (NSString * __nonnull)getConfidence;

/// \returns Returns the date & time of when the reading was created as a <code>NSDate</code> object.
- (NSDate * __nonnull)getTimestampAsDate;

/// \returns Returns the time of when the reading was created in a human readable string.
- (NSString * __nonnull)getTimestampAsString;

/// \returns A Boolean indicating whether or not user is in a vehicle.
- (BOOL)isInVehicle;

/// \returns A Boolean indicating whether or not user is on a bicycle.
- (BOOL)isOnBicycle;

/// \returns A Boolean indicating whether or not user is on foot.
- (BOOL)isOnFoot;

/// \returns A Boolean indicating whether or not user is running.
- (BOOL)isRunning;

/// \returns A Boolean indicating whether or not user is still.
- (BOOL)isStill;

/// \returns A Boolean indicating whether or not user is walking.
- (BOOL)isWalking;

/// \returns Returns the <code>CMMotionActivity</code> object generated by the <code>CoreMotion</code> framework.
- (CMMotionActivity * __nullable)getMotionActivity;
@end

@class CLPlacemark;


/// A container class which holds and provides access to a variety of address data.
SWIFT_CLASS("_TtC5trnql12AddressEntry")
@interface AddressEntry : NSObject

/// \returns Returns the administrative area name of the address, for example, "CA", or nil if it is unknown.
- (NSString * __nullable)getAdminArea;

/// \returns Returns the country code of the address, for example "US", or nil if it is unknown.
- (NSString * __nullable)getCountryCode;

/// \returns Returns the localized country name of the address, for example "Iceland", or nil if it is unknown.
- (NSString * __nullable)getCountryName;

/// \returns Returns the feature name of the address, for example, "Golden Gate Bridge", or nil if it is unknown.
- (NSString * __nullable)getFeatureName;

/// \returns Returns the latitude of the address, or nil if it is unknown.
- (NSString * __nullable)getLat;

/// \returns Returns the longitude of the address, or nil if it is unknown.
- (NSString * __nullable)getLng;

/// \returns Returns the city of the address, for example "Mountain View", or nil if it is unknown.
- (NSString * __nullable)getLocality;

/// \returns Returns the postal code of the address, for example "94110", or nil if it is unknown.
- (NSString * __nullable)getPostalCode;

/// \returns Returns the sub-administrative area name of the address, for example, "Santa Clara County", or nil if it is unknown.
- (NSString * __nullable)getSubAdminArea;

/// \returns Returns the sub-locality of the address, or nil if it is unknown.
- (NSString * __nullable)getSubLocality;

/// \returns Returns the street number of the address, or nil if it is unknown.
- (NSString * __nullable)getSubThoroughfare;

/// \returns Returns the street name, or nil if it is unknown.
- (NSString * __nullable)getThoroughfare;

/// \returns Returns the whole address.
- (NSString * __nullable)getAddress;

/// \returns Returns the <code>CLPlacemark</code> object generated by the <code>CoreLocation</code> framework.
- (CLPlacemark * __nullable)getPlacemark;
@end



/// A container class which holds and provides access to a variety of weather data for the current day.
SWIFT_CLASS("_TtC5trnql17CurrentConditions")
@interface CurrentConditions : NSObject

/// \returns An NSDate object representing today's sunrise time.
- (NSDate * __nullable)getSunriseTime;

/// <strong>Note:</strong> Please reference <code>usesEnglishUnits()</code> for the units.
///
/// \returns The dew point temperature with units, as a string.
- (NSString * __nullable)getDewpointTemperatureString;

/// \returns The current "feels like" temperature, which takes wind and lighting into account.
- (NSString * __nullable)getFeelsLikeTemperatureString;

/// \returns The URL that you can download an image from, that represents the current weather conditions icon.
- (NSString * __nullable)getIconURL;

/// \returns A String that describes the current conditions.
- (NSString * __nullable)getDescriptionString;

/// \returns The high wind speed.
- (NSString * __nullable)getWindGustString;

/// <strong>Note:</strong> Please reference <code>usesEnglishUnits()</code> for the units.
///
/// \returns The barometric pressure as a String.
- (NSString * __nullable)getpressureString;

/// \returns An NSDate object that represents the time that this data was generated.
- (NSDate * __nullable)getObservationTimeAsDate;

/// \returns A human readable String that represents the time that this data was generated.
- (NSString * __nullable)getObservationTimeAsString;

/// \returns An NSDate object that represents the time when the high temperature will be reached.
- (NSDate * __nullable)getTemperatureHighTime;

/// \returns An NSDate object that holds the sunset time.
- (NSDate * __nullable)getSunsetTime;

/// \returns The current wind speed.
- (NSString * __nullable)getWindNormalString;

/// \returns A simple string that can be displayed in a UI, which includes both high and low temp values for the day. Eg: "Hi: 80F | Lo: 50F".
- (NSString * __nullable)getTemperatureString;

/// \returns The low temp forecast.
- (NSString * __nullable)getTemperatureLowString;

/// \returns The amount of rain.
- (NSString * __nullable)getRainTodayString;

/// \returns The current wind speed.
- (NSString * __nullable)getWindGustShortString;

/// \returns The high wind speed.
- (NSString * __nullable)getWindNormalShortString;

/// \returns The high temp forecast.
- (NSString * __nullable)getTemperatureHighString;

/// \returns The current humidity.
- (NSString * __nullable)getHumidityString;

/// \returns An NSDate object that represents the time when the lowest temperature will be reached.
- (NSDate * __nullable)getTemperatureLowTime;
@end



/// The DayForecast object contains information relevant to the weather forecast for a particular day. This object is most commonly seen when <code>WeatherEntry</code>'s <code>getWeeklyForecast()</code> method is called, which returns and ArrayList of DayForecast objects. The data for each DayForcast object is broken out into daytime forecast information and nighttime forecast information. A DayForecast object is not gauranteed to have both daytime and nighttime data. You can determine if a DayForecast object has daytime data by calling the <code>isDayForecastAvailable()</code> method, or if the object has nighttime data by calling the <code>isNightForecastAvailable()</code> method. You can access the data pertaining to these by calling the <code>getDay()</code> and <code>getNight()</code> accessor methods for each one.
SWIFT_CLASS("_TtC5trnql11DayForecast")
@interface DayForecast : NSObject

/// \returns A concise prediction of the night's conditons as a String.
- (NSString * __nullable)getNightShortPrediction;

/// \returns A concise prediction of the days's conditons as a String.
- (NSString * __nullable)getDayShortPredicition;

/// \returns A more verbose prediction of the days's conditons as a String.
- (NSString * __nullable)getDayLongPrediction;

/// \returns The URL that you can download an image from, that represents the night's weather conditions icon.
- (NSString * __nullable)getNightIconURL;

/// \returns The high temp forecast.
- (NSString * __nullable)getHighTempAsString;

/// \returns The low temp forecast.
- (NSString * __nullable)getLowTempAsString;

/// \returns The URL that you can download an image from, that represents the day's weather conditions icon.
- (NSString * __nullable)getDayIconURL;

/// \returns A more verbose prediction of the night's conditons as a String.
- (NSString * __nullable)getNightLongPrediction;
@end

@class CLLocation;


/// A container class which holds and provides access to a variety of location data.
SWIFT_CLASS("_TtC5trnql13LocationEntry")
@interface LocationEntry : NSObject

/// \returns Returns the time at which the location was determined as a <code>NSDate</code> object.
- (NSDate * __nullable)getTime;

/// \returns Returns the <code>CLLocation</code> object generated by the <code>CoreLocation</code> framework.
- (CLLocation * __nonnull)getLocation;
@end


@interface NSNumber (SWIFT_EXTENSION(trnql))
@end

@protocol TrnqlDelegate;
@class CLLocationManager;
@class NSError;


/// trnql is an SDK that makes iOS apps smarter in minutes. Quickly and effortlessly get activity, address & location, and weather updates with just a few lines of code.
SWIFT_CLASS("_TtC5trnql5Trnql")
@interface Trnql : NSObject <CLLocationManagerDelegate>

/// <dl><dt>nodoc</dt><dd></dd></dl>
+ (Trnql * __nonnull)sharedInstance;

/// The class conforming to and implementing the methods of the <code>TrnqlDelegate</code> protocol.
@property (nonatomic) id <TrnqlDelegate> __nullable delegate;

/// <dl><dt>nodoc</dt><dd></dd></dl>
- (SWIFT_NULLABILITY(nonnull) instancetype)init OBJC_DESIGNATED_INITIALIZER;

/// Sets the API key.
///
/// \param key The API key.
+ (void)setAPIKey:(NSString * __nonnull)key;

/// Sets whether or not the application requires background execution. 
///
/// By default (<code>requiresBackgroundExecution = false</code>), when the application enters background all services are paused. Services are then automatically resumed when the application enters foreground.
///
/// If the application needs continuous updates while in the background, set <code>requiresBackgroundExecution = true</code>.
///
/// Note that <code>SmartLocation</code> must be enabled in order to receive updates in the background for any service.
///
/// \param value Boolean indicating whether or not the application requires background execution.
- (void)setRequiresBackgroundExecution:(BOOL)value;

/// Starts all services including <code>SmartActivity</code>, <code>SmartLocation</code>, and <code>SmartWeather</code>.
- (void)startAllServices;

/// Stops all services including <code>SmartActivity</code>, <code>SmartLocation</code>, and <code>SmartWeather</code>.
- (void)stopAllServices;

/// Starts the <code>SmartActivity</code> service. 
///
/// Changes in activity are sent to the delegate in the form of an <code>ActivityEntry</code> object.
- (void)startSmartActivity;

/// Stops the <code>SmartActivity</code> service.
- (void)stopSmartActivity;

/// Starts the SmartLocation service.
///
/// Changes in location are sent to the delegate in the form of an <code>AddressEntry</code> object and <code>LocationEntry</code> object.
///
/// Location monitoring will begin immediately after the user has granted authorization; there is no need to stop and restart the service.
///
/// If <code>SmartActivity</code> is enabled, location accuracy will automatically be determined based on the user's activity. Otherwise location accuracy will be set to Best.
- (void)startSmartLocation;

/// Stops the SmartLocation service.
- (void)stopSmartLocation;

/// Checks whether or not authorization has been granted for location monitoring.
///
/// \returns A Boolean indicating whether or not authorization has been granted for location monitoring.
- (BOOL)isAuthorizedForLocationMonitoring;

/// <dl><dt>nodoc</dt><dd></dd></dl>
- (void)locationManager:(CLLocationManager * __nonnull)manager didChangeAuthorizationStatus:(CLAuthorizationStatus)status;

/// <dl><dt>nodoc</dt><dd></dd></dl>
- (void)locationManager:(CLLocationManager * __nonnull)manager didFailWithError:(NSError * __nonnull)error;

/// <dl><dt>nodoc</dt><dd></dd></dl>
- (void)locationManager:(CLLocationManager * __nonnull)manager didUpdateLocations:(NSArray * __nonnull)locations;

/// Starts the SmartWeather service.
///
/// Changes in weather are sent to the delegate in the form of a <code>WeatherEntry</code> object.
///
/// Weather data is updated every 1000 meters or 15 minutes, whichever comes first.
///
/// <code>SmartLocation</code> must be enabled in order to receive new weather data.
- (void)startSmartWeather;

/// Stop the SmartWeather service.
- (void)stopSmartWeather;
@end

@class WeatherEntry;


/// The <code>TrnqlDelegate</code> protocol defines the methods used to receive <code>SmartActivity</code>, <code>SmartAddress</code>, <code>SmartLocation</code>, and <code>SmartWeather</code> updates from the <code>Trnql.sharedInstance</code> object.
SWIFT_PROTOCOL("_TtP5trnql13TrnqlDelegate_")
@protocol TrnqlDelegate
@optional

/// Tells the delegate that new activity data is available.
///
/// \param activityEntry An <code>ActivityEntry</code> object containing the activity data.
///
/// \param error The error object containing the reason the activity could not be retrieved.
- (void)smartActivityChanged:(ActivityEntry * __nullable)activityEntry error:(NSError * __nullable)error;

/// Tells the delegate that new address data is available.
///
/// \param addressEntry An <code>AddressEntry</code> object containing the address data.
///
/// \param error The error object containing the reason the address could not be retrieved.
- (void)smartAddressChanged:(AddressEntry * __nullable)addressEntry error:(NSError * __nullable)error;

/// Tells the delegate that new location data is available.
///
/// \param locationEntry An <code>ActivityEntry</code> object containing the location data.
///
/// \param error The error object containing the reason the location could not be retrieved.
- (void)smartLocationChanged:(LocationEntry * __nullable)locationEntry error:(NSError * __nullable)error;

/// Tells the delegate that new weather data is available.
///
/// \param weatherEntry A <code>WeatherEntry</code> object containing the weather data.
///
/// \param error The error object containing the reason the weather could not be retrieved.
- (void)smartWeatherChanged:(WeatherEntry * __nullable)weatherEntry error:(NSError * __nullable)error;
@end



/// A container class which holds and provides access to a variety of weather data.
SWIFT_CLASS("_TtC5trnql12WeatherEntry")
@interface WeatherEntry : NSObject

/// \returns Details about the current weather conditions (not the weekly forecast)
- (CurrentConditions * __nullable)getCurrentConditions;

/// \returns An array which holds up to 10 days worth of forecast data. Each forecast is stored in a <code>ForecastForDay</code> object.
- (NSArray * __nullable)getWeatherForecastArray;

/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// <blockquote><dl><dt>returns</dt><dd><p>The weather report is for this address (this is useful when you perform weather update requests for an address that is not where the device is right now).</p></dd></dl></blockquote>
- (NSString * __nullable)getAddress;

/// \returns An NSDate object representing today's sunrise time.
- (NSDate * __nullable)getSunriseTime;

/// \returns An NSDate object representing today's sunset time.
- (NSDate * __nullable)getSunsetTime;

/// \returns A summary of the current weather conditions.
- (NSString * __nullable)getCurrentConditionsDescriptionAsString;

/// \returns A nicely formatted string of the address.
- (NSString * __nullable)getAddressAsString;

/// \returns The "feels like" description of the current conditions.
- (NSString * __nullable)getFeelsLikeTempAsString;

/// \returns A formatted version of the humidity (with units).
- (NSString * __nullable)getHumidityAsString;

/// \returns A formatted version of the wind (with units).
- (NSString * __nullable)getWindAsString;

/// \returns A formatted version of the rain (with units).
- (NSString * __nullable)getRainAsString;

/// \returns A summary of up to 10 days of weather forecast information for debugging.
- (NSString * __nullable)getForecastAsString;

/// \returns A human readable time for sunrise (for display in UI).
- (NSString * __nullable)getSunriseAsString;

/// \returns A human readable time for sunset (for display in UI).
- (NSString * __nullable)getSunsetAsString;

/// \returns A human readable version of UV index (eg: high, medium, low), instead of just a number.
- (NSString * __nullable)getUVIndexAsString;

/// \returns A summary of the entire WeatherEntry object for debugging purposes.
- (NSString * __nullable)getWeatherSummaryAsString;

/// Returns a simple string that can be displayed in a UI, which includes both high and low temp values for the day. Eg: "Hi: 80F | Lo: 50F".
- (NSString * __nullable)getHiLoAsString;

/// Returns a simple string that can be displayed in a UI, which includes both the humidity and rain forecasts for the day. Eg: "Rain: 1 in, Humidity: 80%".
- (NSString * __nullable)getHumidityAndRainAsString;
@end



/// A convenience class used to return some <code>CurrentConditions</code> properties as nicely formatted Strings.
SWIFT_CLASS("_TtC5trnql18WeatherStringUtils")
@interface WeatherStringUtils : NSObject

/// \returns A summary of the current weather conditions.
+ (NSString * __nullable)getCurrentConditionsDescriptionAsString:(WeatherEntry * __nonnull)we;

/// \returns A nicely formatted string of the address.
+ (NSString * __nullable)getAddressAsString:(WeatherEntry * __nonnull)we;

/// \returns The "feels like" description of the current conditions.
+ (NSString * __nullable)getFeelsLikeTempAsString:(WeatherEntry * __nonnull)we;

/// \returns A formatted version of the humidity (with units).
+ (NSString * __nullable)getHumidityAsString:(WeatherEntry * __nonnull)we;

/// \returns A formatted version of the wind (with units).
+ (NSString * __nullable)getWindAsString:(WeatherEntry * __nonnull)we;

/// \returns A formatted version of the rain (with units).
+ (NSString * __nullable)getRainAsString:(WeatherEntry * __nonnull)we;

/// \returns A summary of up to 10 days of weather forecast information for debugging.
+ (NSString * __nullable)getForecastAsString:(WeatherEntry * __nonnull)we;

/// \returns A human readable time for sunrise (for display in UI).
+ (NSString * __nullable)getSunriseAsString:(WeatherEntry * __nonnull)we;

/// \returns A human readable time for sunset (for display in UI).
+ (NSString * __nullable)getSunsetAsString:(WeatherEntry * __nonnull)we;

/// \returns A human readable version of UV index (eg: high, medium, low), instead of just a number.
+ (NSString * __nullable)getUVIndexAsString:(WeatherEntry * __nonnull)we;

/// \returns A summary of the entire WeatherEntry object for debugging purposes.
+ (NSString * __nullable)getWeatherSummaryAsString:(WeatherEntry * __nonnull)we;

/// \returns A simple string that can be displayed in a UI, which includes both high and low temp values for the day. Eg: "Hi: 80F | Lo: 50F".
+ (NSString * __nullable)getHiLoAsString:(WeatherEntry * __nonnull)we;

/// \returns A simple string that can be displayed in a UI, which includes both the humidity and rain forecasts for the day. Eg: "Rain: 1 in, Humidity: 80%".
+ (NSString * __nullable)getHumidityAndRainAsString:(WeatherEntry * __nonnull)we;
- (SWIFT_NULLABILITY(nonnull) instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
