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

package io.swagger.client.model


case class Request (
  /* An array of vehicles that can be employed */
  vehicles: List[Vehicle],
  /* An array of vehicle types */
  vehicleTypes: List[VehicleType],
  /* An array of services */
  services: List[Service],
  /* An array of shipments */
  shipments: List[Shipment],
  /* An array of relations */
  relations: List[Relation],
  algorithm: Algorithm,
  /* An array of objectives */
  objectives: List[Objective],
  /* An array of cost matrices */
  costMatrices: List[CostMatrix],
  configuration: Configuration
)