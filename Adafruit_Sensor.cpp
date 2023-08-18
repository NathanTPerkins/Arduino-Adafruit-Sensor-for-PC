#include "Adafruit_Sensor.h"

void Adafruit_Sensor::printSensorDetails(void){
    sensor_t sensor;
    getSensor(&sensor);

    Serial.println(("------------------------------------"));
    Serial.print(("Sensor:       "));
    Serial.println(sensor.name);
    Serial.print(("Type:         "));

    switch ((sensors_type_t)sensor.type) {
    case SENSOR_TYPE_ACCELEROMETER:
        Serial.print(("Acceleration (m/s2)"));
        break;
    case SENSOR_TYPE_MAGNETIC_FIELD:
        Serial.print(("Magnetic (uT)"));
        break;
    case SENSOR_TYPE_ORIENTATION:
        Serial.print(("Orientation (degrees)"));
        break;
    case SENSOR_TYPE_GYROSCOPE:
        Serial.print(("Gyroscopic (rad/s)"));
        break;
    case SENSOR_TYPE_LIGHT:
        Serial.print(("Light (lux)"));
        break;
    case SENSOR_TYPE_PRESSURE:
        Serial.print(("Pressure (hPa)"));
        break;
    case SENSOR_TYPE_PROXIMITY:
        Serial.print(("Distance (cm)"));
        break;
    case SENSOR_TYPE_GRAVITY:
        Serial.print(("Gravity (m/s2)"));
        break;
    case SENSOR_TYPE_LINEAR_ACCELERATION:
        Serial.print(("Linear Acceleration (m/s2)"));
        break;
    case SENSOR_TYPE_ROTATION_VECTOR:
        Serial.print(("Rotation vector"));
        break;
    case SENSOR_TYPE_RELATIVE_HUMIDITY:
        Serial.print(("Relative Humidity (%)"));
        break;
    case SENSOR_TYPE_AMBIENT_TEMPERATURE:
        Serial.print(("Ambient Temp (C)"));
        break;
    case SENSOR_TYPE_OBJECT_TEMPERATURE:
        Serial.print(("Object Temp (C)"));
        break;
    case SENSOR_TYPE_VOLTAGE:
        Serial.print(("Voltage (V)"));
        break;
    case SENSOR_TYPE_CURRENT:
        Serial.print(("Current (mA)"));
        break;
    case SENSOR_TYPE_COLOR:
        Serial.print(("Color (RGBA)"));
        break;
    case SENSOR_TYPE_TVOC:
        Serial.print(("Total Volatile Organic Compounds (ppb)"));
        break;
    case SENSOR_TYPE_VOC_INDEX:
        Serial.print(("Volatile Organic Compounds (Index)"));
        break;
    case SENSOR_TYPE_NOX_INDEX:
        Serial.print(("Nitrogen Oxides (Index)"));
        break;
    case SENSOR_TYPE_CO2:
        Serial.print(("Carbon Dioxide (ppm)"));
        break;
    case SENSOR_TYPE_ECO2:
        Serial.print(("Equivalent/estimated CO2 (ppm)"));
        break;
    case SENSOR_TYPE_PM10_STD:
        Serial.print(("Standard Particulate Matter 1.0 (ppm)"));
        break;
    case SENSOR_TYPE_PM25_STD:
        Serial.print(("Standard Particulate Matter 2.5 (ppm)"));
        break;
    case SENSOR_TYPE_PM100_STD:
        Serial.print(("Standard Particulate Matter 10.0 (ppm)"));
        break;
    case SENSOR_TYPE_PM10_ENV:
        Serial.print(("Environmental Particulate Matter 1.0 (ppm)"));
        break;
    case SENSOR_TYPE_PM25_ENV:
        Serial.print(("Environmental Particulate Matter 2.5 (ppm)"));
        break;
    case SENSOR_TYPE_PM100_ENV:
        Serial.print(("Environmental Particulate Matter 10.0 (ppm)"));
        break;
    case SENSOR_TYPE_GAS_RESISTANCE:
        Serial.print(("Gas Resistance (ohms)"));
        break;
    case SENSOR_TYPE_UNITLESS_PERCENT:
        Serial.print(("Unitless Percent (%)"));
        break;
    case SENSOR_TYPE_ALTITUDE:
        Serial.print(("Altitude (m)"));
        break;
    }

    Serial.println();
    Serial.print(("Driver Ver:   "));
    Serial.println(sensor.version);
    Serial.print(("Unique ID:    "));
    Serial.println(sensor.sensor_id);
    Serial.print(("Min Value:    "));
    Serial.println(sensor.min_value);
    Serial.print(("Max Value:    "));
    Serial.println(sensor.max_value);
    Serial.print(("Resolution:   "));
    Serial.println(sensor.resolution);
    Serial.println(("------------------------------------\n"));
}