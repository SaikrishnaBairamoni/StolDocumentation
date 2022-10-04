/**
 * Intersection Model API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAILanelet_info.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAILanelet_info::OAILanelet_info(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAILanelet_info::OAILanelet_info() {
    this->initializeModel();
}

OAILanelet_info::~OAILanelet_info() {}

void OAILanelet_info::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_speed_limit_isSet = false;
    m_speed_limit_isValid = false;

    m_conflict_lanelet_ids_isSet = false;
    m_conflict_lanelet_ids_isValid = false;

    m_length_isSet = false;
    m_length_isValid = false;

    m_turn_direction_isSet = false;
    m_turn_direction_isValid = false;

    m_signal_group_id_isSet = false;
    m_signal_group_id_isValid = false;

    m_connecting_lanelet_ids_isSet = false;
    m_connecting_lanelet_ids_isValid = false;
}

void OAILanelet_info::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAILanelet_info::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_speed_limit_isValid = ::OpenAPI::fromJsonValue(speed_limit, json[QString("speed_limit")]);
    m_speed_limit_isSet = !json[QString("speed_limit")].isNull() && m_speed_limit_isValid;

    m_conflict_lanelet_ids_isValid = ::OpenAPI::fromJsonValue(conflict_lanelet_ids, json[QString("conflict_lanelet_ids")]);
    m_conflict_lanelet_ids_isSet = !json[QString("conflict_lanelet_ids")].isNull() && m_conflict_lanelet_ids_isValid;

    m_length_isValid = ::OpenAPI::fromJsonValue(length, json[QString("length")]);
    m_length_isSet = !json[QString("length")].isNull() && m_length_isValid;

    m_turn_direction_isValid = ::OpenAPI::fromJsonValue(turn_direction, json[QString("turn_direction")]);
    m_turn_direction_isSet = !json[QString("turn_direction")].isNull() && m_turn_direction_isValid;

    m_signal_group_id_isValid = ::OpenAPI::fromJsonValue(signal_group_id, json[QString("signal_group_id")]);
    m_signal_group_id_isSet = !json[QString("signal_group_id")].isNull() && m_signal_group_id_isValid;

    m_connecting_lanelet_ids_isValid = ::OpenAPI::fromJsonValue(connecting_lanelet_ids, json[QString("connecting_lanelet_ids")]);
    m_connecting_lanelet_ids_isSet = !json[QString("connecting_lanelet_ids")].isNull() && m_connecting_lanelet_ids_isValid;
}

QString OAILanelet_info::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAILanelet_info::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if (m_speed_limit_isSet) {
        obj.insert(QString("speed_limit"), ::OpenAPI::toJsonValue(speed_limit));
    }
    if (conflict_lanelet_ids.size() > 0) {
        obj.insert(QString("conflict_lanelet_ids"), ::OpenAPI::toJsonValue(conflict_lanelet_ids));
    }
    if (m_length_isSet) {
        obj.insert(QString("length"), ::OpenAPI::toJsonValue(length));
    }
    if (m_turn_direction_isSet) {
        obj.insert(QString("turn_direction"), ::OpenAPI::toJsonValue(turn_direction));
    }
    if (m_signal_group_id_isSet) {
        obj.insert(QString("signal_group_id"), ::OpenAPI::toJsonValue(signal_group_id));
    }
    if (connecting_lanelet_ids.size() > 0) {
        obj.insert(QString("connecting_lanelet_ids"), ::OpenAPI::toJsonValue(connecting_lanelet_ids));
    }
    return obj;
}

qint32 OAILanelet_info::getId() const {
    return id;
}
void OAILanelet_info::setId(const qint32 &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAILanelet_info::is_id_Set() const{
    return m_id_isSet;
}

bool OAILanelet_info::is_id_Valid() const{
    return m_id_isValid;
}

double OAILanelet_info::getSpeedLimit() const {
    return speed_limit;
}
void OAILanelet_info::setSpeedLimit(const double &speed_limit) {
    this->speed_limit = speed_limit;
    this->m_speed_limit_isSet = true;
}

bool OAILanelet_info::is_speed_limit_Set() const{
    return m_speed_limit_isSet;
}

bool OAILanelet_info::is_speed_limit_Valid() const{
    return m_speed_limit_isValid;
}

QList<qint32> OAILanelet_info::getConflictLaneletIds() const {
    return conflict_lanelet_ids;
}
void OAILanelet_info::setConflictLaneletIds(const QList<qint32> &conflict_lanelet_ids) {
    this->conflict_lanelet_ids = conflict_lanelet_ids;
    this->m_conflict_lanelet_ids_isSet = true;
}

bool OAILanelet_info::is_conflict_lanelet_ids_Set() const{
    return m_conflict_lanelet_ids_isSet;
}

bool OAILanelet_info::is_conflict_lanelet_ids_Valid() const{
    return m_conflict_lanelet_ids_isValid;
}

double OAILanelet_info::getLength() const {
    return length;
}
void OAILanelet_info::setLength(const double &length) {
    this->length = length;
    this->m_length_isSet = true;
}

bool OAILanelet_info::is_length_Set() const{
    return m_length_isSet;
}

bool OAILanelet_info::is_length_Valid() const{
    return m_length_isValid;
}

QString OAILanelet_info::getTurnDirection() const {
    return turn_direction;
}
void OAILanelet_info::setTurnDirection(const QString &turn_direction) {
    this->turn_direction = turn_direction;
    this->m_turn_direction_isSet = true;
}

bool OAILanelet_info::is_turn_direction_Set() const{
    return m_turn_direction_isSet;
}

bool OAILanelet_info::is_turn_direction_Valid() const{
    return m_turn_direction_isValid;
}

qint32 OAILanelet_info::getSignalGroupId() const {
    return signal_group_id;
}
void OAILanelet_info::setSignalGroupId(const qint32 &signal_group_id) {
    this->signal_group_id = signal_group_id;
    this->m_signal_group_id_isSet = true;
}

bool OAILanelet_info::is_signal_group_id_Set() const{
    return m_signal_group_id_isSet;
}

bool OAILanelet_info::is_signal_group_id_Valid() const{
    return m_signal_group_id_isValid;
}

QList<qint32> OAILanelet_info::getConnectingLaneletIds() const {
    return connecting_lanelet_ids;
}
void OAILanelet_info::setConnectingLaneletIds(const QList<qint32> &connecting_lanelet_ids) {
    this->connecting_lanelet_ids = connecting_lanelet_ids;
    this->m_connecting_lanelet_ids_isSet = true;
}

bool OAILanelet_info::is_connecting_lanelet_ids_Set() const{
    return m_connecting_lanelet_ids_isSet;
}

bool OAILanelet_info::is_connecting_lanelet_ids_Valid() const{
    return m_connecting_lanelet_ids_isValid;
}

bool OAILanelet_info::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_speed_limit_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (conflict_lanelet_ids.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_length_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_turn_direction_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_signal_group_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (connecting_lanelet_ids.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAILanelet_info::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
