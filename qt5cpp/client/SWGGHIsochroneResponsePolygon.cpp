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


#include "SWGGHIsochroneResponsePolygon.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGGHIsochroneResponsePolygon::SWGGHIsochroneResponsePolygon(QString* json) {
    init();
    this->fromJson(*json);
}

SWGGHIsochroneResponsePolygon::SWGGHIsochroneResponsePolygon() {
    init();
}

SWGGHIsochroneResponsePolygon::~SWGGHIsochroneResponsePolygon() {
    this->cleanup();
}

void
SWGGHIsochroneResponsePolygon::init() {
    properties = new SWGGHIsochroneResponsePolygon_properties();
    type = new QString("");
    geometry = new SWGGHIsochroneResponsePolygon_geometry();
}

void
SWGGHIsochroneResponsePolygon::cleanup() {
    
    if(properties != nullptr) {
        delete properties;
    }

    if(type != nullptr) {
        delete type;
    }

    if(geometry != nullptr) {
        delete geometry;
    }
}

SWGGHIsochroneResponsePolygon*
SWGGHIsochroneResponsePolygon::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGGHIsochroneResponsePolygon::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&properties, pJson["properties"], "SWGGHIsochroneResponsePolygon_properties", "SWGGHIsochroneResponsePolygon_properties");
    ::Swagger::setValue(&type, pJson["type"], "QString", "QString");
    ::Swagger::setValue(&geometry, pJson["geometry"], "SWGGHIsochroneResponsePolygon_geometry", "SWGGHIsochroneResponsePolygon_geometry");
}

QString
SWGGHIsochroneResponsePolygon::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGGHIsochroneResponsePolygon::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("properties"), properties, obj, QString("SWGGHIsochroneResponsePolygon_properties"));

    toJsonValue(QString("type"), type, obj, QString("QString"));

    toJsonValue(QString("geometry"), geometry, obj, QString("SWGGHIsochroneResponsePolygon_geometry"));

    return obj;
}

SWGGHIsochroneResponsePolygon_properties*
SWGGHIsochroneResponsePolygon::getProperties() {
    return properties;
}
void
SWGGHIsochroneResponsePolygon::setProperties(SWGGHIsochroneResponsePolygon_properties* properties) {
    this->properties = properties;
}

QString*
SWGGHIsochroneResponsePolygon::getType() {
    return type;
}
void
SWGGHIsochroneResponsePolygon::setType(QString* type) {
    this->type = type;
}

SWGGHIsochroneResponsePolygon_geometry*
SWGGHIsochroneResponsePolygon::getGeometry() {
    return geometry;
}
void
SWGGHIsochroneResponsePolygon::setGeometry(SWGGHIsochroneResponsePolygon_geometry* geometry) {
    this->geometry = geometry;
}



} /* namespace Swagger */
