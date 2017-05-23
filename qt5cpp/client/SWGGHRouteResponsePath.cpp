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


#include "SWGGHRouteResponsePath.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGGHRouteResponsePath::SWGGHRouteResponsePath(QString* json) {
    init();
    this->fromJson(*json);
}

SWGGHRouteResponsePath::SWGGHRouteResponsePath() {
    init();
}

SWGGHRouteResponsePath::~SWGGHRouteResponsePath() {
    this->cleanup();
}

void
SWGGHRouteResponsePath::init() {
    distance = 0.0;
    time = 0L;
    ascend = 0.0;
    descend = 0.0;
    points = new SWGGHResponseCoordinates();
    points_encoded = false;
    bbox = new QList<double>();
    snapped_waypoints = new SWGGHResponseCoordinates();
    instructions = new SWGGHResponseInstructions();
}

void
SWGGHRouteResponsePath::cleanup() {
    




    if(points != nullptr) {
        delete points;
    }



    if(snapped_waypoints != nullptr) {
        delete snapped_waypoints;
    }

    if(instructions != nullptr) {
        delete instructions;
    }
}

SWGGHRouteResponsePath*
SWGGHRouteResponsePath::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGGHRouteResponsePath::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&distance, pJson["distance"], "double", "");
    ::Swagger::setValue(&time, pJson["time"], "qint64", "");
    ::Swagger::setValue(&ascend, pJson["ascend"], "double", "");
    ::Swagger::setValue(&descend, pJson["descend"], "double", "");
    ::Swagger::setValue(&points, pJson["points"], "SWGGHResponseCoordinates", "SWGGHResponseCoordinates");
    ::Swagger::setValue(&points_encoded, pJson["points_encoded"], "bool", "");
    
    
    ::Swagger::setValue(&bbox, pJson["bbox"], "QList", "double");
    ::Swagger::setValue(&snapped_waypoints, pJson["snapped_waypoints"], "SWGGHResponseCoordinates", "SWGGHResponseCoordinates");
    ::Swagger::setValue(&instructions, pJson["instructions"], "SWGGHResponseInstructions", "SWGGHResponseInstructions");
}

QString
SWGGHRouteResponsePath::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGGHRouteResponsePath::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("distance", QJsonValue(distance));

    obj->insert("time", QJsonValue(time));

    obj->insert("ascend", QJsonValue(ascend));

    obj->insert("descend", QJsonValue(descend));

    toJsonValue(QString("points"), points, obj, QString("SWGGHResponseCoordinates"));

    obj->insert("points_encoded", QJsonValue(points_encoded));

    QJsonArray bboxJsonArray;
    toJsonArray((QList<void*>*)bbox, &bboxJsonArray, "bbox", "double");
    obj->insert("bbox", bboxJsonArray);

    toJsonValue(QString("snapped_waypoints"), snapped_waypoints, obj, QString("SWGGHResponseCoordinates"));

    toJsonValue(QString("instructions"), instructions, obj, QString("SWGGHResponseInstructions"));

    return obj;
}

double
SWGGHRouteResponsePath::getDistance() {
    return distance;
}
void
SWGGHRouteResponsePath::setDistance(double distance) {
    this->distance = distance;
}

qint64
SWGGHRouteResponsePath::getTime() {
    return time;
}
void
SWGGHRouteResponsePath::setTime(qint64 time) {
    this->time = time;
}

double
SWGGHRouteResponsePath::getAscend() {
    return ascend;
}
void
SWGGHRouteResponsePath::setAscend(double ascend) {
    this->ascend = ascend;
}

double
SWGGHRouteResponsePath::getDescend() {
    return descend;
}
void
SWGGHRouteResponsePath::setDescend(double descend) {
    this->descend = descend;
}

SWGGHResponseCoordinates*
SWGGHRouteResponsePath::getPoints() {
    return points;
}
void
SWGGHRouteResponsePath::setPoints(SWGGHResponseCoordinates* points) {
    this->points = points;
}

bool
SWGGHRouteResponsePath::getPointsEncoded() {
    return points_encoded;
}
void
SWGGHRouteResponsePath::setPointsEncoded(bool points_encoded) {
    this->points_encoded = points_encoded;
}

QList<double>*
SWGGHRouteResponsePath::getBbox() {
    return bbox;
}
void
SWGGHRouteResponsePath::setBbox(QList<double>* bbox) {
    this->bbox = bbox;
}

SWGGHResponseCoordinates*
SWGGHRouteResponsePath::getSnappedWaypoints() {
    return snapped_waypoints;
}
void
SWGGHRouteResponsePath::setSnappedWaypoints(SWGGHResponseCoordinates* snapped_waypoints) {
    this->snapped_waypoints = snapped_waypoints;
}

SWGGHResponseInstructions*
SWGGHRouteResponsePath::getInstructions() {
    return instructions;
}
void
SWGGHRouteResponsePath::setInstructions(SWGGHResponseInstructions* instructions) {
    this->instructions = instructions;
}



} /* namespace Swagger */
