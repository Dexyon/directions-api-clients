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
package io.swagger.client.models

import io.swagger.client.models.Address

/**
 * 
 * @param type type of activity
 * @param id id referring to the underlying service or shipment, i.e. the shipment or service this activity belongs to
 * @param location_id id that refers to address
 * @param address address of activity
 * @param arr_time arrival time at this activity in seconds
 * @param end_time end time of and thus departure time at this activity
 * @param end_date_time end date time with offset like this 1970-01-01T01:00+01:00
 * @param arr_date_time arrival date time with offset like this 1970-01-01T01:00+01:00
 * @param waiting_time waiting time at this activity in seconds
 * @param preparation_time preparation time at this activity in seconds
 * @param distance cumulated distance from start to this activity in m
 * @param driving_time driving time of driver in seconds
 * @param load_before Array with size/capacity dimensions before this activity
 * @param load_after Array with size/capacity dimensions after this activity
 */
data class Activity (
    /* type of activity */
    val type: Activity.Type? = null,
    /* id referring to the underlying service or shipment, i.e. the shipment or service this activity belongs to */
    val id: kotlin.String? = null,
    /* id that refers to address */
    val location_id: kotlin.String? = null,
    /* address of activity */
    val address: Address? = null,
    /* arrival time at this activity in seconds */
    val arr_time: kotlin.Long? = null,
    /* end time of and thus departure time at this activity */
    val end_time: kotlin.Long? = null,
    /* end date time with offset like this 1970-01-01T01:00+01:00 */
    val end_date_time: kotlin.String? = null,
    /* arrival date time with offset like this 1970-01-01T01:00+01:00 */
    val arr_date_time: kotlin.String? = null,
    /* waiting time at this activity in seconds */
    val waiting_time: kotlin.Long? = null,
    /* preparation time at this activity in seconds */
    val preparation_time: kotlin.Long? = null,
    /* cumulated distance from start to this activity in m */
    val distance: kotlin.Long? = null,
    /* driving time of driver in seconds */
    val driving_time: kotlin.Long? = null,
    /* Array with size/capacity dimensions before this activity */
    val load_before: kotlin.Array<kotlin.Int>? = null,
    /* Array with size/capacity dimensions after this activity */
    val load_after: kotlin.Array<kotlin.Int>? = null
) {

    /**
    * type of activity
    * Values: start,end,service,pickupShipment,deliverShipment,pickup,delivery,`break`
    */
    enum class Type(val value: kotlin.Any){
    
        start("start"),
    
        end("end"),
    
        service("service"),
    
        pickupShipment("pickupShipment"),
    
        deliverShipment("deliverShipment"),
    
        pickup("pickup"),
    
        delivery("delivery"),
    
        `break`("break");
    
    }

}

