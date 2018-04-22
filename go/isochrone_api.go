/* 
 * GraphHopper Directions API
 *
 * You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.
 *
 * OpenAPI spec version: 1.0.0
 * 
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

package graphhopper

import (
	"net/url"
	"strings"
	"encoding/json"
)

type IsochroneApi struct {
	Configuration *Configuration
}

func NewIsochroneApi() *IsochroneApi {
	configuration := NewConfiguration()
	return &IsochroneApi{
		Configuration: configuration,
	}
}

func NewIsochroneApiWithBasePath(basePath string) *IsochroneApi {
	configuration := NewConfiguration()
	configuration.BasePath = basePath

	return &IsochroneApi{
		Configuration: configuration,
	}
}

/**
 * Isochrone Request
 * The GraphHopper Isochrone API allows calculating an isochrone of a locations means to calculate &#39;a line connecting points at which a vehicle arrives at the same time,&#39; see [Wikipedia](http://en.wikipedia.org/wiki/Isochrone_map). It is also called **reachability** or **walkability**. 
 *
 * @param point Specify the start coordinate
 * @param key Get your key at graphhopper.com
 * @param timeLimit Specify which time the vehicle should travel. In seconds.
 * @param distanceLimit Specify which distance the vehicle should travel. In meter.
 * @param vehicle Possible vehicles are bike, car, foot and [more](https://graphhopper.com/api/1/docs/supported-vehicle-profiles/)
 * @param buckets For how many sub intervals an additional polygon should be calculated.
 * @param reverseFlow If &#x60;false&#x60; the flow goes from point to the polygon, if &#x60;true&#x60; the flow goes from the polygon \&quot;inside\&quot; to the point. Example usage for &#x60;false&#x60;&amp;#58; *How many potential customer can be reached within 30min travel time from your store* vs. &#x60;true&#x60;&amp;#58; *How many customers can reach your store within 30min travel time.*
 * @return *IsochroneResponse
 */
func (a IsochroneApi) IsochroneGet(point string, key string, timeLimit int32, distanceLimit int32, vehicle string, buckets int32, reverseFlow bool) (*IsochroneResponse, *APIResponse, error) {

	var localVarHttpMethod = strings.ToUpper("Get")
	// create path and map variables
	localVarPath := a.Configuration.BasePath + "/isochrone"

	localVarHeaderParams := make(map[string]string)
	localVarQueryParams := url.Values{}
	localVarFormParams := make(map[string]string)
	var localVarPostBody interface{}
	var localVarFileName string
	var localVarFileBytes []byte
	// add default headers if any
	for key := range a.Configuration.DefaultHeader {
		localVarHeaderParams[key] = a.Configuration.DefaultHeader[key]
	}
	localVarQueryParams.Add("point", a.Configuration.APIClient.ParameterToString(point, ""))
	localVarQueryParams.Add("time_limit", a.Configuration.APIClient.ParameterToString(timeLimit, ""))
	localVarQueryParams.Add("distance_limit", a.Configuration.APIClient.ParameterToString(distanceLimit, ""))
	localVarQueryParams.Add("vehicle", a.Configuration.APIClient.ParameterToString(vehicle, ""))
	localVarQueryParams.Add("buckets", a.Configuration.APIClient.ParameterToString(buckets, ""))
	localVarQueryParams.Add("reverse_flow", a.Configuration.APIClient.ParameterToString(reverseFlow, ""))
	localVarQueryParams.Add("key", a.Configuration.APIClient.ParameterToString(key, ""))

	// to determine the Content-Type header
	localVarHttpContentTypes := []string{  }

	// set Content-Type header
	localVarHttpContentType := a.Configuration.APIClient.SelectHeaderContentType(localVarHttpContentTypes)
	if localVarHttpContentType != "" {
		localVarHeaderParams["Content-Type"] = localVarHttpContentType
	}
	// to determine the Accept header
	localVarHttpHeaderAccepts := []string{
		"application/json",
		}

	// set Accept header
	localVarHttpHeaderAccept := a.Configuration.APIClient.SelectHeaderAccept(localVarHttpHeaderAccepts)
	if localVarHttpHeaderAccept != "" {
		localVarHeaderParams["Accept"] = localVarHttpHeaderAccept
	}
	var successPayload = new(IsochroneResponse)
	localVarHttpResponse, err := a.Configuration.APIClient.CallAPI(localVarPath, localVarHttpMethod, localVarPostBody, localVarHeaderParams, localVarQueryParams, localVarFormParams, localVarFileName, localVarFileBytes)

	var localVarURL, _ = url.Parse(localVarPath)
	localVarURL.RawQuery = localVarQueryParams.Encode()
	var localVarAPIResponse = &APIResponse{Operation: "IsochroneGet", Method: localVarHttpMethod, RequestURL: localVarURL.String()}
	if localVarHttpResponse != nil {
		localVarAPIResponse.Response = localVarHttpResponse.RawResponse
		localVarAPIResponse.Payload = localVarHttpResponse.Body()
	}

	if err != nil {
		return successPayload, localVarAPIResponse, err
	}
	err = json.Unmarshal(localVarHttpResponse.Body(), &successPayload)
	return successPayload, localVarAPIResponse, err
}
