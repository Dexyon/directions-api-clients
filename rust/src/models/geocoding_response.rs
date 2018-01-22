/* 
 * GraphHopper Directions API
 *
 * You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.
 *
 * OpenAPI spec version: 1.0.0
 * 
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */


#[allow(unused_imports)]
use serde_json::Value;

#[derive(Debug, Serialize, Deserialize)]
pub struct GeocodingResponse {
  #[serde(rename = "hits")]
  hits: Option<Vec<::models::GeocodingLocation>>,
  #[serde(rename = "locale")]
  locale: Option<String>
}

impl GeocodingResponse {
  pub fn new() -> GeocodingResponse {
    GeocodingResponse {
      hits: None,
      locale: None
    }
  }

  pub fn set_hits(&mut self, hits: Vec<::models::GeocodingLocation>) {
    self.hits = Some(hits);
  }

  pub fn with_hits(mut self, hits: Vec<::models::GeocodingLocation>) -> GeocodingResponse {
    self.hits = Some(hits);
    self
  }

  pub fn hits(&self) -> Option<&Vec<::models::GeocodingLocation>> {
    self.hits.as_ref()
  }

  pub fn reset_hits(&mut self) {
    self.hits = None;
  }

  pub fn set_locale(&mut self, locale: String) {
    self.locale = Some(locale);
  }

  pub fn with_locale(mut self, locale: String) -> GeocodingResponse {
    self.locale = Some(locale);
    self
  }

  pub fn locale(&self) -> Option<&String> {
    self.locale.as_ref()
  }

  pub fn reset_locale(&mut self) {
    self.locale = None;
  }

}


