/* 
 * GraphHopper Directions API
 *
 * You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.
 *
 * OpenAPI spec version: 1.0.0
 * 
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;

namespace IO.Swagger.Model
{
    /// <summary>
    /// Response
    /// </summary>
    [DataContract]
    public partial class Response :  IEquatable<Response>, IValidatableObject
    {
        /// <summary>
        /// indicates the current status of the job
        /// </summary>
        /// <value>indicates the current status of the job</value>
        [JsonConverter(typeof(StringEnumConverter))]
        public enum StatusEnum
        {
            
            /// <summary>
            /// Enum Waitinginqueue for "waiting_in_queue"
            /// </summary>
            [EnumMember(Value = "waiting_in_queue")]
            Waitinginqueue,
            
            /// <summary>
            /// Enum Processing for "processing"
            /// </summary>
            [EnumMember(Value = "processing")]
            Processing,
            
            /// <summary>
            /// Enum Finished for "finished"
            /// </summary>
            [EnumMember(Value = "finished")]
            Finished
        }

        /// <summary>
        /// indicates the current status of the job
        /// </summary>
        /// <value>indicates the current status of the job</value>
        [DataMember(Name="status", EmitDefaultValue=false)]
        public StatusEnum? Status { get; set; }
        /// <summary>
        /// Initializes a new instance of the <see cref="Response" /> class.
        /// </summary>
        /// <param name="Copyrights">Copyrights.</param>
        /// <param name="JobId">unique identify of job - which you get when posting your request to the large problem solver.</param>
        /// <param name="Status">indicates the current status of the job.</param>
        /// <param name="WaitingInQueue">waiting time in ms.</param>
        /// <param name="ProcessingTime">processing time in ms. if job is still waiting in queue, processing_time is 0.</param>
        /// <param name="Solution">the solution. only available if status field indicates finished.</param>
        public Response(List<string> Copyrights = default(List<string>), string JobId = default(string), StatusEnum? Status = default(StatusEnum?), long? WaitingInQueue = default(long?), long? ProcessingTime = default(long?), Solution Solution = default(Solution))
        {
            this.Copyrights = Copyrights;
            this.JobId = JobId;
            this.Status = Status;
            this.WaitingInQueue = WaitingInQueue;
            this.ProcessingTime = ProcessingTime;
            this.Solution = Solution;
        }
        
        /// <summary>
        /// Gets or Sets Copyrights
        /// </summary>
        [DataMember(Name="copyrights", EmitDefaultValue=false)]
        public List<string> Copyrights { get; set; }
        /// <summary>
        /// unique identify of job - which you get when posting your request to the large problem solver
        /// </summary>
        /// <value>unique identify of job - which you get when posting your request to the large problem solver</value>
        [DataMember(Name="job_id", EmitDefaultValue=false)]
        public string JobId { get; set; }
        /// <summary>
        /// waiting time in ms
        /// </summary>
        /// <value>waiting time in ms</value>
        [DataMember(Name="waiting_in_queue", EmitDefaultValue=false)]
        public long? WaitingInQueue { get; set; }
        /// <summary>
        /// processing time in ms. if job is still waiting in queue, processing_time is 0
        /// </summary>
        /// <value>processing time in ms. if job is still waiting in queue, processing_time is 0</value>
        [DataMember(Name="processing_time", EmitDefaultValue=false)]
        public long? ProcessingTime { get; set; }
        /// <summary>
        /// the solution. only available if status field indicates finished
        /// </summary>
        /// <value>the solution. only available if status field indicates finished</value>
        [DataMember(Name="solution", EmitDefaultValue=false)]
        public Solution Solution { get; set; }
        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Response {\n");
            sb.Append("  Copyrights: ").Append(Copyrights).Append("\n");
            sb.Append("  JobId: ").Append(JobId).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("  WaitingInQueue: ").Append(WaitingInQueue).Append("\n");
            sb.Append("  ProcessingTime: ").Append(ProcessingTime).Append("\n");
            sb.Append("  Solution: ").Append(Solution).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            return this.Equals(obj as Response);
        }

        /// <summary>
        /// Returns true if Response instances are equal
        /// </summary>
        /// <param name="other">Instance of Response to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(Response other)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            if (other == null)
                return false;

            return 
                (
                    this.Copyrights == other.Copyrights ||
                    this.Copyrights != null &&
                    this.Copyrights.SequenceEqual(other.Copyrights)
                ) && 
                (
                    this.JobId == other.JobId ||
                    this.JobId != null &&
                    this.JobId.Equals(other.JobId)
                ) && 
                (
                    this.Status == other.Status ||
                    this.Status != null &&
                    this.Status.Equals(other.Status)
                ) && 
                (
                    this.WaitingInQueue == other.WaitingInQueue ||
                    this.WaitingInQueue != null &&
                    this.WaitingInQueue.Equals(other.WaitingInQueue)
                ) && 
                (
                    this.ProcessingTime == other.ProcessingTime ||
                    this.ProcessingTime != null &&
                    this.ProcessingTime.Equals(other.ProcessingTime)
                ) && 
                (
                    this.Solution == other.Solution ||
                    this.Solution != null &&
                    this.Solution.Equals(other.Solution)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            // credit: http://stackoverflow.com/a/263416/677735
            unchecked // Overflow is fine, just wrap
            {
                int hash = 41;
                // Suitable nullity checks etc, of course :)
                if (this.Copyrights != null)
                    hash = hash * 59 + this.Copyrights.GetHashCode();
                if (this.JobId != null)
                    hash = hash * 59 + this.JobId.GetHashCode();
                if (this.Status != null)
                    hash = hash * 59 + this.Status.GetHashCode();
                if (this.WaitingInQueue != null)
                    hash = hash * 59 + this.WaitingInQueue.GetHashCode();
                if (this.ProcessingTime != null)
                    hash = hash * 59 + this.ProcessingTime.GetHashCode();
                if (this.Solution != null)
                    hash = hash * 59 + this.Solution.GetHashCode();
                return hash;
            }
        }

        public IEnumerable<ValidationResult> Validate(ValidationContext validationContext)
        { 
            yield break;
        }
    }

}