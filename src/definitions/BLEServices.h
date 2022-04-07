/*
  This file is part of the ArduinoBLE library.
  Copyright (c) 2018 Arduino SA. All rights reserved.
  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _BLE_GATT_SERVICES_H_
#define _BLE_GATT_SERVICES_H_

/*
 * GATT Services (GBS)
 */
const char GbsGenericAccess[] = "1800"; /* Generic Access */
const char GbsGenericAttribute[] = "1801"; /* Generic Attribute */
const char GbsImmediateAlert[] = "1802"; /* Immediate Alert */
const char GbsLinkLoss[] = "1803"; /* Link Loss */
const char GbsTxPower[] = "1804"; /* Tx Power */
const char GbsCurrentTime[] = "1805"; /* Current Time */
const char GbsReferenceTimeUpdate[] = "1806"; /* Reference Time Update  */
const char GbsNextDstChange[] = "1807"; /* Next DST Change  */
const char GbsGlucose[] = "1808"; /* Glucose */
const char GbsHealthThermometer[] = "1809"; /* Health Thermometer */
const char GbsDeviceInformation[] = "180A"; /* Device Information */
const char GbsHeartRate[] = "180D"; /* Heart Rate */
const char GbsPhoneAlertStatus[] = "180E"; /* Phone Alert Status  */
const char GbsBattery[] = "180F"; /* Battery */
const char GbsBloodPressure[] = "1810"; /* Blood Pressure */
const char GbsAlertNotification[] = "1811"; /* Alert Notification  */
const char GbsHumanInterfaceDevice[] = "1812"; /* Human Interface Device */
const char GbsScanParameters[] = "1813"; /* Scan Parameters */
const char GbsRunningSpeedCadence[] = "1814"; /* Running Speed and Cadence */
const char GbsAutomationIo[] = "1815"; /* Automation IO */
const char GbsCyclingSpeedCadence[] = "1816"; /* Cycling Speed and Cadence */
const char GbsCyclingPower[] = "1818"; /* Cycling Power */
const char GbsLocationNavigation[] = "1819"; /* Location and Navigation */
const char GbsEnvironmentalSensing[] = "181A"; /* Environmental Sensing */
const char GbsBodyComposition[] = "181B"; /* Body Composition */
const char GbsUserData[] = "181C"; /* User Data */
const char GbsWeightScale[] = "181D"; /* Weight Scale */
const char GbsBondManagement[] = "181E"; /* Bond Management  */
const char GbsContinuousGlucoseMonitoring[] = "181F"; /* Continuous Glucose Monitoring  */
const char GbsInternetProtocolSupport[] = "1820"; /* Internet Protocol Support */
const char GbsIndoorPositioning[] = "1821"; /* Indoor Positioning  */
const char GbsPulseOximeter[] = "1822"; /* Pulse Oximeter */
const char GbsHttpProxy[] = "1823"; /* HTTP Proxy */
const char GbsTransportDiscovery[] = "1824"; /* Transport Discovery  */
const char GbsObjectTransfer[] = "1825"; /* Object Transfer  */
const char GbsFitnessMachine[] = "1826"; /* Fitness Machine */
const char GbsMeshProvisioning[] = "1827"; /* Mesh Provisioning  */
const char GbsMeshProxy[] = "1828"; /* Mesh Proxy */
const char GbsReconnectionConfiguration[] = "1829"; /* Reconnection Configuration  */
const char GbsInsulinDelivery[] = "183A"; /* Insulin Delivery  */
const char GbsBinarySensor[] = "183B"; /* Binary Sensor */
const char GbsEmergencyConfiguration[] = "183C"; /* Emergency Configuration */
const char GbsPhysicalActivityMonitor[] = "183E"; /* Physical Activity Monitor  */
const char GbsAudioInputControl[] = "1843"; /* Audio Input Control  */
const char GbsVolumeControl[] = "1844"; /* Volume Control */
const char GbsVolumeOffsetControl[] = "1845"; /* Volume Offset Control */
const char GbsCoordinatedSetIdentification[] = "1846"; /* Coordinated Set Identification */
const char GbsDeviceTime[] = "1847"; /* Device Time */
const char GbsMediaControl[] = "1848"; /* Media Control  */
const char GbsGenericMediaControl[] = "1849"; /* Generic Media Control  */
const char GbsConstantToneExtension[] = "184A"; /* Constant Tone Extension */
const char GbsTelephoneBearer[] = "184B"; /* Telephone Bearer */
const char GbsGenericTelephoneBearer[] = "184C"; /* Generic Telephone Bearer */
const char GbsMicrophoneControl[] = "184D"; /* Microphone Control */
const char GbsAudioStreamControl[] = "184E"; /* Audio Stream Control  */
const char GbsBroadcastAudioScan[] = "184F"; /* Broadcast Audio Scan  */
const char GbsPublishedAudioCapabilities[] = "1850"; /* Published Audio Capabilities  */
const char GbsBasicAudioAnnouncement[] = "1851"; /* Basic Audio Announcement  */
const char GbsBroadcastAudioAnnouncement[] = "1852"; /* Broadcast Audio Announcement  */

#endif
