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

#ifndef _SWG_SWGRoutingApi_H_
#define _SWG_SWGRoutingApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGGHError.h"
#include "SWGGHRouteResponse.h"

#include <QObject>

namespace Swagger {

class SWGRoutingApi: public QObject {
    Q_OBJECT

public:
    SWGRoutingApi();
    SWGRoutingApi(QString host, QString basePath);
    ~SWGRoutingApi();

    QString host;
    QString basePath;

    void routeGet(QList<QString*>* point, bool points_encoded, QString* key, QString* locale, bool instructions, QString* vehicle, bool elevation, bool calc_points, QList<QString*>* point_hint, bool ch_disable, QString* weighting, bool edge_traversal, QString* algorithm, qint32 heading, qint32 heading_penalty, bool pass_through, qint32 round_trip_distance, qint64 round_trip_seed, qint32 alternative_route_max_paths, qint32 alternative_route_max_weight_factor, qint32 alternative_route_max_share_factor);
    
private:
    void routeGetCallback (HttpRequestWorker * worker);
    
signals:
    void routeGetSignal(SWGGHRouteResponse* summary);
    
};
}
#endif