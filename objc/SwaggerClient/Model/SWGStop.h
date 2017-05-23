#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* GraphHopper Directions API
* You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.
*
* OpenAPI spec version: 1.0.0
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "SWGAddress.h"
#import "SWGTimeWindow.h"


@protocol SWGStop
@end

@interface SWGStop : SWGObject


@property(nonatomic) SWGAddress* address;
/* duration of stop, i.e. time in ms the corresponding activity takes [optional]
 */
@property(nonatomic) NSNumber* duration;
/* preparation time of service, e.g. search for a parking space. it only falls due if the location of previous activity differs from this location [optional]
 */
@property(nonatomic) NSNumber* preparationTime;
/* array of time windows. currently, only a single time window is allowed [optional]
 */
@property(nonatomic) NSArray<SWGTimeWindow>* timeWindows;

@end