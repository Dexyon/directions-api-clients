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

#include "SWGMatrixApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGMatrixApi::SWGMatrixApi() {}

SWGMatrixApi::~SWGMatrixApi() {}

SWGMatrixApi::SWGMatrixApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGMatrixApi::matrixGet(QString* key, QList<QString*>* point, QString* from_point, QString* to_point, QList<QString*>* out_array, QString* vehicle) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/matrix");




    if (point->size() > 0) {
      if (QString("multi").indexOf("multi") == 0) {
        foreach(QString* t, *point) {
          if (fullPath.indexOf("?") > 0)
            fullPath.append("&");
          else 
            fullPath.append("?");
          fullPath.append("point=").append(stringValue(t));
        }
      }
      else if (QString("multi").indexOf("ssv") == 0) {
        if (fullPath.indexOf("?") > 0)
          fullPath.append("&");
        else 
          fullPath.append("?");
        fullPath.append("point=");
        qint32 count = 0;
        foreach(QString* t, *point) {
          if (count > 0) {
            fullPath.append(" ");
          }
          fullPath.append(stringValue(t));
        }
      }
      else if (QString("multi").indexOf("tsv") == 0) {
        if (fullPath.indexOf("?") > 0)
          fullPath.append("&");
        else 
          fullPath.append("?");
        fullPath.append("point=");
        qint32 count = 0;
        foreach(QString* t, *point) {
          if (count > 0) {
            fullPath.append("\t");
          }
          fullPath.append(stringValue(t));
        }
      }
    }

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("from_point"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(from_point)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("to_point"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(to_point)));



    if (out_array->size() > 0) {
      if (QString("multi").indexOf("multi") == 0) {
        foreach(QString* t, *out_array) {
          if (fullPath.indexOf("?") > 0)
            fullPath.append("&");
          else 
            fullPath.append("?");
          fullPath.append("out_array=").append(stringValue(t));
        }
      }
      else if (QString("multi").indexOf("ssv") == 0) {
        if (fullPath.indexOf("?") > 0)
          fullPath.append("&");
        else 
          fullPath.append("?");
        fullPath.append("out_array=");
        qint32 count = 0;
        foreach(QString* t, *out_array) {
          if (count > 0) {
            fullPath.append(" ");
          }
          fullPath.append(stringValue(t));
        }
      }
      else if (QString("multi").indexOf("tsv") == 0) {
        if (fullPath.indexOf("?") > 0)
          fullPath.append("&");
        else 
          fullPath.append("?");
        fullPath.append("out_array=");
        qint32 count = 0;
        foreach(QString* t, *out_array) {
          if (count > 0) {
            fullPath.append("\t");
          }
          fullPath.append(stringValue(t));
        }
      }
    }

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("vehicle"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(vehicle)));

    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("key"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(key)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    



    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMatrixApi::matrixGetCallback);

    worker->execute(&input);
}

void
SWGMatrixApi::matrixGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGGHMatrixResponse* output = static_cast<SWGGHMatrixResponse*>(create(json, QString("SWGGHMatrixResponse")));
    

    worker->deleteLater();

    emit matrixGetSignal(output);
    
}
void
SWGMatrixApi::matrixPost(QString* key, SWGGHMatrixRequest body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/matrix");


    if (fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("key"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(key)));


    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "POST");

    
    QString output = body.asJson();
    input.request_body.append(output);
    


    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGMatrixApi::matrixPostCallback);

    worker->execute(&input);
}

void
SWGMatrixApi::matrixPostCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    SWGGHMatrixResponse* output = static_cast<SWGGHMatrixResponse*>(create(json, QString("SWGGHMatrixResponse")));
    

    worker->deleteLater();

    emit matrixPostSignal(output);
    
}
} /* namespace Swagger */