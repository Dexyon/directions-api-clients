# GraphHopper Directions API
# 
# You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.
# 
# OpenAPI spec version: 1.0.0
# 
# Generated by: https://github.com/swagger-api/swagger-codegen.git


#' ResponseInstruction Class
#'
#' @field text 
#' @field street_name 
#' @field distance 
#' @field time 
#' @field interval 
#' @field sign 
#' @field annotation_text 
#' @field annotation_importance 
#' @field exit_number 
#' @field turn_angle 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ResponseInstruction <- R6::R6Class(
  'ResponseInstruction',
  public = list(
    `text` = NULL,
    `street_name` = NULL,
    `distance` = NULL,
    `time` = NULL,
    `interval` = NULL,
    `sign` = NULL,
    `annotation_text` = NULL,
    `annotation_importance` = NULL,
    `exit_number` = NULL,
    `turn_angle` = NULL,
    initialize = function(`text`, `street_name`, `distance`, `time`, `interval`, `sign`, `annotation_text`, `annotation_importance`, `exit_number`, `turn_angle`){
      if (!missing(`text`)) {
        stopifnot(is.character(`text`), length(`text`) == 1)
        self$`text` <- `text`
      }
      if (!missing(`street_name`)) {
        stopifnot(is.character(`street_name`), length(`street_name`) == 1)
        self$`street_name` <- `street_name`
      }
      if (!missing(`distance`)) {
        stopifnot(is.numeric(`distance`), length(`distance`) == 1)
        self$`distance` <- `distance`
      }
      if (!missing(`time`)) {
        stopifnot(is.numeric(`time`), length(`time`) == 1)
        self$`time` <- `time`
      }
      if (!missing(`interval`)) {
        stopifnot(is.list(`interval`), length(`interval`) != 0)
        lapply(`interval`, function(x) stopifnot(is.character(x)))
        self$`interval` <- `interval`
      }
      if (!missing(`sign`)) {
        stopifnot(is.numeric(`sign`), length(`sign`) == 1)
        self$`sign` <- `sign`
      }
      if (!missing(`annotation_text`)) {
        stopifnot(is.character(`annotation_text`), length(`annotation_text`) == 1)
        self$`annotation_text` <- `annotation_text`
      }
      if (!missing(`annotation_importance`)) {
        stopifnot(is.numeric(`annotation_importance`), length(`annotation_importance`) == 1)
        self$`annotation_importance` <- `annotation_importance`
      }
      if (!missing(`exit_number`)) {
        stopifnot(is.numeric(`exit_number`), length(`exit_number`) == 1)
        self$`exit_number` <- `exit_number`
      }
      if (!missing(`turn_angle`)) {
        stopifnot(is.numeric(`turn_angle`), length(`turn_angle`) == 1)
        self$`turn_angle` <- `turn_angle`
      }
    },
    toJSON = function() {
      ResponseInstructionObject <- list()
      if (!is.null(self$`text`)) {
        ResponseInstructionObject[['text']] <- self$`text`
      }
      if (!is.null(self$`street_name`)) {
        ResponseInstructionObject[['street_name']] <- self$`street_name`
      }
      if (!is.null(self$`distance`)) {
        ResponseInstructionObject[['distance']] <- self$`distance`
      }
      if (!is.null(self$`time`)) {
        ResponseInstructionObject[['time']] <- self$`time`
      }
      if (!is.null(self$`interval`)) {
        ResponseInstructionObject[['interval']] <- self$`interval`
      }
      if (!is.null(self$`sign`)) {
        ResponseInstructionObject[['sign']] <- self$`sign`
      }
      if (!is.null(self$`annotation_text`)) {
        ResponseInstructionObject[['annotation_text']] <- self$`annotation_text`
      }
      if (!is.null(self$`annotation_importance`)) {
        ResponseInstructionObject[['annotation_importance']] <- self$`annotation_importance`
      }
      if (!is.null(self$`exit_number`)) {
        ResponseInstructionObject[['exit_number']] <- self$`exit_number`
      }
      if (!is.null(self$`turn_angle`)) {
        ResponseInstructionObject[['turn_angle']] <- self$`turn_angle`
      }

      ResponseInstructionObject
    },
    fromJSON = function(ResponseInstructionJson) {
      ResponseInstructionObject <- jsonlite::fromJSON(ResponseInstructionJson)
      if (!is.null(ResponseInstructionObject$`text`)) {
        self$`text` <- ResponseInstructionObject$`text`
      }
      if (!is.null(ResponseInstructionObject$`street_name`)) {
        self$`street_name` <- ResponseInstructionObject$`street_name`
      }
      if (!is.null(ResponseInstructionObject$`distance`)) {
        self$`distance` <- ResponseInstructionObject$`distance`
      }
      if (!is.null(ResponseInstructionObject$`time`)) {
        self$`time` <- ResponseInstructionObject$`time`
      }
      if (!is.null(ResponseInstructionObject$`interval`)) {
        self$`interval` <- ResponseInstructionObject$`interval`
      }
      if (!is.null(ResponseInstructionObject$`sign`)) {
        self$`sign` <- ResponseInstructionObject$`sign`
      }
      if (!is.null(ResponseInstructionObject$`annotation_text`)) {
        self$`annotation_text` <- ResponseInstructionObject$`annotation_text`
      }
      if (!is.null(ResponseInstructionObject$`annotation_importance`)) {
        self$`annotation_importance` <- ResponseInstructionObject$`annotation_importance`
      }
      if (!is.null(ResponseInstructionObject$`exit_number`)) {
        self$`exit_number` <- ResponseInstructionObject$`exit_number`
      }
      if (!is.null(ResponseInstructionObject$`turn_angle`)) {
        self$`turn_angle` <- ResponseInstructionObject$`turn_angle`
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "text": %s,
           "street_name": %s,
           "distance": %d,
           "time": %s,
           "interval": [%s],
           "sign": %s,
           "annotation_text": %s,
           "annotation_importance": %s,
           "exit_number": %s,
           "turn_angle": %d
        }',
        self$`text`,
        self$`street_name`,
        self$`distance`,
        self$`time`,
        lapply(self$`interval`, function(x) paste(paste0('"', x, '"'), sep=",")),
        self$`sign`,
        self$`annotation_text`,
        self$`annotation_importance`,
        self$`exit_number`,
        self$`turn_angle`
      )
    },
    fromJSONString = function(ResponseInstructionJson) {
      ResponseInstructionObject <- jsonlite::fromJSON(ResponseInstructionJson)
      self$`text` <- ResponseInstructionObject$`text`
      self$`street_name` <- ResponseInstructionObject$`street_name`
      self$`distance` <- ResponseInstructionObject$`distance`
      self$`time` <- ResponseInstructionObject$`time`
      self$`interval` <- ResponseInstructionObject$`interval`
      self$`sign` <- ResponseInstructionObject$`sign`
      self$`annotation_text` <- ResponseInstructionObject$`annotation_text`
      self$`annotation_importance` <- ResponseInstructionObject$`annotation_importance`
      self$`exit_number` <- ResponseInstructionObject$`exit_number`
      self$`turn_angle` <- ResponseInstructionObject$`turn_angle`
    }
  )
)
