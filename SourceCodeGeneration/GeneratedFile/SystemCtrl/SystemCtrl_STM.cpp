#include "SystemCtrl_STM.h"

static SystemCtrl_State;


/* @brief Event callback of SystemCtrl Module
 *        status : Idle
 *        event  : SetTemperature
 *        reference sequence id list:
 *               xxxx
 *               yyyy
 * 
 * @param _msg : SystemCtrlEvent
 * @return STM_Status
 */
STM_Status SystemCtrl_ECB_Idle_SetTemperature(SystemCtrlEvent const & _msg) {
    assert(_msg.has_msg_set_temperature());
    SetTemperature * p_msg_body = _msg.get_msg_set_temperature();
    assert(p_msg_body != nullptr);

    //> implementation of Idle SetTemperature
    //> Motor_API_SendMessage_SetTemperature(param)
    Motor_API_SendMessage_SetTemperature(param);

    return STM_STATS_OK;
}

/* @brief Event callback of SystemCtrl Module
 *        status : Idle
 *        event  : SetTemperatureResult
 *        reference sequence id list:
 *               xxxx
 *               yyyy
 * 
 * @param _msg : SystemCtrlEvent
 * @return STM_Status
 */
STM_Status SystemCtrl_ECB_Idle_SetTemperatureResult(SystemCtrlEvent const & _msg) {
    assert(_msg.has_msg_set_temperature_result());
    SetTemperatureResult * p_msg_body = _msg.get_msg_set_temperature_result();
    assert(p_msg_body != nullptr);

    //> implementation of Idle SetTemperatureResult

    return STM_STATS_OK;
}

/* @brief Event callback of SystemCtrl Module
 *        status : Idle
 *        event  : ShowTemperatureResult
 *        reference sequence id list:
 *               xxxx
 *               yyyy
 * 
 * @param _msg : SystemCtrlEvent
 * @return STM_Status
 */
STM_Status SystemCtrl_ECB_Idle_ShowTemperatureResult(SystemCtrlEvent const & _msg) {
    assert(_msg.has_msg_show_temperature_result());
    ShowTemperatureResult * p_msg_body = _msg.get_msg_show_temperature_result();
    assert(p_msg_body != nullptr);

    //> implementation of Idle ShowTemperatureResult

    return STM_STATS_OK;
}

/* @brief Event callback of SystemCtrl Module
 *        status : Idle
 *        event  : PowerOff
 *        reference sequence id list:
 *               xxxx
 *               yyyy
 * 
 * @param _msg : SystemCtrlEvent
 * @return STM_Status
 */
STM_Status SystemCtrl_ECB_Idle_PowerOff(SystemCtrlEvent const & _msg) {
    assert(_msg.has_msg_power_off());
    PowerOff * p_msg_body = _msg.get_msg_power_off();
    assert(p_msg_body != nullptr);

    //> implementation of Idle PowerOff

    return STM_STATS_OK;
}

/* @brief Event callback of SystemCtrl Module
 *        status : Idle
 *        event  : PowerOffResult
 *        reference sequence id list:
 *               xxxx
 *               yyyy
 * 
 * @param _msg : SystemCtrlEvent
 * @return STM_Status
 */
STM_Status SystemCtrl_ECB_Idle_PowerOffResult(SystemCtrlEvent const & _msg) {
    assert(_msg.has_msg_power_off_result());
    PowerOffResult * p_msg_body = _msg.get_msg_power_off_result();
    assert(p_msg_body != nullptr);

    //> implementation of Idle PowerOffResult
    //> Display_API_SendMessage_TurnOffDisplay()
    Display_API_SendMessage_TurnOffDisplay();

    return STM_STATS_OK;
}

/* @brief Event callback of SystemCtrl Module
 *        status : Idle
 *        event  : TurnOffDisplayResult
 *        reference sequence id list:
 *               xxxx
 *               yyyy
 * 
 * @param _msg : SystemCtrlEvent
 * @return STM_Status
 */
STM_Status SystemCtrl_ECB_Idle_TurnOffDisplayResult(SystemCtrlEvent const & _msg) {
    assert(_msg.has_msg_turn_off_display_result());
    TurnOffDisplayResult * p_msg_body = _msg.get_msg_turn_off_display_result();
    assert(p_msg_body != nullptr);

    //> implementation of Idle TurnOffDisplayResult
    //> RFComm_API_SendMessage_PowerOffResult(OK)
    RFComm_API_SendMessage_PowerOffResult(OK);

    return STM_STATS_OK;
}

/* @brief Event callback of SystemCtrl Module
 *        status : Idle
 *        event  : PowerOn
 *        reference sequence id list:
 *               xxxx
 *               yyyy
 * 
 * @param _msg : SystemCtrlEvent
 * @return STM_Status
 */
STM_Status SystemCtrl_ECB_Idle_PowerOn(SystemCtrlEvent const & _msg) {
    assert(_msg.has_msg_power_on());
    PowerOn * p_msg_body = _msg.get_msg_power_on();
    assert(p_msg_body != nullptr);

    //> implementation of Idle PowerOn

    return STM_STATS_OK;
}

/* @brief Event callback of SystemCtrl Module
 *        status : Idle
 *        event  : PowerOnResult
 *        reference sequence id list:
 *               xxxx
 *               yyyy
 * 
 * @param _msg : SystemCtrlEvent
 * @return STM_Status
 */
STM_Status SystemCtrl_ECB_Idle_PowerOnResult(SystemCtrlEvent const & _msg) {
    assert(_msg.has_msg_power_on_result());
    PowerOnResult * p_msg_body = _msg.get_msg_power_on_result();
    assert(p_msg_body != nullptr);

    //> implementation of Idle PowerOnResult

    return STM_STATS_OK;
}

/* @brief Event callback of SystemCtrl Module
 *        status : Working
 *        event  : SetTemperature
 *        reference sequence id list:
 *               xxxx
 *               yyyy
 * 
 * @param _msg : SystemCtrlEvent
 * @return STM_Status
 */
STM_Status SystemCtrl_ECB_Working_SetTemperature(SystemCtrlEvent const & _msg) {
    assert(_msg.has_msg_set_temperature());
    SetTemperature * p_msg_body = _msg.get_msg_set_temperature();
    assert(p_msg_body != nullptr);

    //> implementation of Working SetTemperature

    return STM_STATS_OK;
}

/* @brief Event callback of SystemCtrl Module
 *        status : Working
 *        event  : SetTemperatureResult
 *        reference sequence id list:
 *               xxxx
 *               yyyy
 * 
 * @param _msg : SystemCtrlEvent
 * @return STM_Status
 */
STM_Status SystemCtrl_ECB_Working_SetTemperatureResult(SystemCtrlEvent const & _msg) {
    assert(_msg.has_msg_set_temperature_result());
    SetTemperatureResult * p_msg_body = _msg.get_msg_set_temperature_result();
    assert(p_msg_body != nullptr);

    //> implementation of Working SetTemperatureResult
    //> alt: ?????
    //> opt: SystemCtrl_apiSucceed()
    if (SystemCtrl_apiSucceed()) {
        //> A_API_SendMessage_Test1()
        A_API_SendMessage_Test1();
        //> alt: ?????
        //> opt: SystemCtrl_apiOk()
        if (SystemCtrl_apiOk()) {
            //> loop: SystemCtrl_api100times()
            while (SystemCtrl_api100times()) {
                //> Motor_API_SendMessage_Test2()
                Motor_API_SendMessage_Test2();
            }
            //> :end
        }
        //> opt: SystemCtrl_apiNg()
        else if (SystemCtrl_apiNg()) {
            //> loop: SystemCtrl_api100times()
            while (SystemCtrl_api100times()) {
                //> alt: ?????
                //> opt: SystemCtrl_apiOk()
                if (SystemCtrl_apiOk()) {
                    //> Motor_API_SendMessage_Test3()
                    Motor_API_SendMessage_Test3();
                }
                //> opt: 
                else {
                    //> Motor_API_SendMessage_Test4()
                    Motor_API_SendMessage_Test4();
                }
                //> :end
            }
            //> :end
        }
        //> :end
    }
    //> opt: SystemCtrl_apiFailed()
    else if (SystemCtrl_apiFailed()) {
        //> A_API_SendMessage_Test11()
        A_API_SendMessage_Test11();
    }
    //> :end
    //> Display_API_SendMessage_ShowTemperature(param)
    Display_API_SendMessage_ShowTemperature(param);

    return STM_STATS_OK;
}

/* @brief Event callback of SystemCtrl Module
 *        status : Working
 *        event  : ShowTemperatureResult
 *        reference sequence id list:
 *               xxxx
 *               yyyy
 * 
 * @param _msg : SystemCtrlEvent
 * @return STM_Status
 */
STM_Status SystemCtrl_ECB_Working_ShowTemperatureResult(SystemCtrlEvent const & _msg) {
    assert(_msg.has_msg_show_temperature_result());
    ShowTemperatureResult * p_msg_body = _msg.get_msg_show_temperature_result();
    assert(p_msg_body != nullptr);

    //> implementation of Working ShowTemperatureResult
    //> ShareOBJ_API_SetTemperature(param)
    ShareOBJ_API_SetTemperature(param);
    //> RFComm_API_SendMessage_SetTemperatureResult(OK)
    RFComm_API_SendMessage_SetTemperatureResult(OK);

    return STM_STATS_OK;
}

/* @brief Event callback of SystemCtrl Module
 *        status : Working
 *        event  : PowerOff
 *        reference sequence id list:
 *               xxxx
 *               yyyy
 * 
 * @param _msg : SystemCtrlEvent
 * @return STM_Status
 */
STM_Status SystemCtrl_ECB_Working_PowerOff(SystemCtrlEvent const & _msg) {
    assert(_msg.has_msg_power_off());
    PowerOff * p_msg_body = _msg.get_msg_power_off();
    assert(p_msg_body != nullptr);

    //> implementation of Working PowerOff

    return STM_STATS_OK;
}

/* @brief Event callback of SystemCtrl Module
 *        status : Working
 *        event  : PowerOffResult
 *        reference sequence id list:
 *               xxxx
 *               yyyy
 * 
 * @param _msg : SystemCtrlEvent
 * @return STM_Status
 */
STM_Status SystemCtrl_ECB_Working_PowerOffResult(SystemCtrlEvent const & _msg) {
    assert(_msg.has_msg_power_off_result());
    PowerOffResult * p_msg_body = _msg.get_msg_power_off_result();
    assert(p_msg_body != nullptr);

    //> implementation of Working PowerOffResult

    return STM_STATS_OK;
}

/* @brief Event callback of SystemCtrl Module
 *        status : Working
 *        event  : TurnOffDisplayResult
 *        reference sequence id list:
 *               xxxx
 *               yyyy
 * 
 * @param _msg : SystemCtrlEvent
 * @return STM_Status
 */
STM_Status SystemCtrl_ECB_Working_TurnOffDisplayResult(SystemCtrlEvent const & _msg) {
    assert(_msg.has_msg_turn_off_display_result());
    TurnOffDisplayResult * p_msg_body = _msg.get_msg_turn_off_display_result();
    assert(p_msg_body != nullptr);

    //> implementation of Working TurnOffDisplayResult

    return STM_STATS_OK;
}

/* @brief Event callback of SystemCtrl Module
 *        status : Working
 *        event  : PowerOn
 *        reference sequence id list:
 *               xxxx
 *               yyyy
 * 
 * @param _msg : SystemCtrlEvent
 * @return STM_Status
 */
STM_Status SystemCtrl_ECB_Working_PowerOn(SystemCtrlEvent const & _msg) {
    assert(_msg.has_msg_power_on());
    PowerOn * p_msg_body = _msg.get_msg_power_on();
    assert(p_msg_body != nullptr);

    //> implementation of Working PowerOn

    return STM_STATS_OK;
}

/* @brief Event callback of SystemCtrl Module
 *        status : Working
 *        event  : PowerOnResult
 *        reference sequence id list:
 *               xxxx
 *               yyyy
 * 
 * @param _msg : SystemCtrlEvent
 * @return STM_Status
 */
STM_Status SystemCtrl_ECB_Working_PowerOnResult(SystemCtrlEvent const & _msg) {
    assert(_msg.has_msg_power_on_result());
    PowerOnResult * p_msg_body = _msg.get_msg_power_on_result();
    assert(p_msg_body != nullptr);

    //> implementation of Working PowerOnResult

    return STM_STATS_OK;
}

/* @brief Event callback of SystemCtrl Module
 *        status : SC_uninitialized
 *        event  : SetTemperature
 *        reference sequence id list:
 *               xxxx
 *               yyyy
 * 
 * @param _msg : SystemCtrlEvent
 * @return STM_Status
 */
STM_Status SystemCtrl_ECB_SC_uninitialized_SetTemperature(SystemCtrlEvent const & _msg) {
    assert(_msg.has_msg_set_temperature());
    SetTemperature * p_msg_body = _msg.get_msg_set_temperature();
    assert(p_msg_body != nullptr);

    //> implementation of SC_uninitialized SetTemperature

    return STM_STATS_OK;
}

/* @brief Event callback of SystemCtrl Module
 *        status : SC_uninitialized
 *        event  : SetTemperatureResult
 *        reference sequence id list:
 *               xxxx
 *               yyyy
 * 
 * @param _msg : SystemCtrlEvent
 * @return STM_Status
 */
STM_Status SystemCtrl_ECB_SC_uninitialized_SetTemperatureResult(SystemCtrlEvent const & _msg) {
    assert(_msg.has_msg_set_temperature_result());
    SetTemperatureResult * p_msg_body = _msg.get_msg_set_temperature_result();
    assert(p_msg_body != nullptr);

    //> implementation of SC_uninitialized SetTemperatureResult

    return STM_STATS_OK;
}

/* @brief Event callback of SystemCtrl Module
 *        status : SC_uninitialized
 *        event  : ShowTemperatureResult
 *        reference sequence id list:
 *               xxxx
 *               yyyy
 * 
 * @param _msg : SystemCtrlEvent
 * @return STM_Status
 */
STM_Status SystemCtrl_ECB_SC_uninitialized_ShowTemperatureResult(SystemCtrlEvent const & _msg) {
    assert(_msg.has_msg_show_temperature_result());
    ShowTemperatureResult * p_msg_body = _msg.get_msg_show_temperature_result();
    assert(p_msg_body != nullptr);

    //> implementation of SC_uninitialized ShowTemperatureResult
    //> RFComm_API_SendMessage_PowerOn(OK)
    RFComm_API_SendMessage_PowerOn(OK);

    return STM_STATS_OK;
}

/* @brief Event callback of SystemCtrl Module
 *        status : SC_uninitialized
 *        event  : PowerOff
 *        reference sequence id list:
 *               xxxx
 *               yyyy
 * 
 * @param _msg : SystemCtrlEvent
 * @return STM_Status
 */
STM_Status SystemCtrl_ECB_SC_uninitialized_PowerOff(SystemCtrlEvent const & _msg) {
    assert(_msg.has_msg_power_off());
    PowerOff * p_msg_body = _msg.get_msg_power_off();
    assert(p_msg_body != nullptr);

    //> implementation of SC_uninitialized PowerOff

    return STM_STATS_OK;
}

/* @brief Event callback of SystemCtrl Module
 *        status : SC_uninitialized
 *        event  : PowerOffResult
 *        reference sequence id list:
 *               xxxx
 *               yyyy
 * 
 * @param _msg : SystemCtrlEvent
 * @return STM_Status
 */
STM_Status SystemCtrl_ECB_SC_uninitialized_PowerOffResult(SystemCtrlEvent const & _msg) {
    assert(_msg.has_msg_power_off_result());
    PowerOffResult * p_msg_body = _msg.get_msg_power_off_result();
    assert(p_msg_body != nullptr);

    //> implementation of SC_uninitialized PowerOffResult

    return STM_STATS_OK;
}

/* @brief Event callback of SystemCtrl Module
 *        status : SC_uninitialized
 *        event  : TurnOffDisplayResult
 *        reference sequence id list:
 *               xxxx
 *               yyyy
 * 
 * @param _msg : SystemCtrlEvent
 * @return STM_Status
 */
STM_Status SystemCtrl_ECB_SC_uninitialized_TurnOffDisplayResult(SystemCtrlEvent const & _msg) {
    assert(_msg.has_msg_turn_off_display_result());
    TurnOffDisplayResult * p_msg_body = _msg.get_msg_turn_off_display_result();
    assert(p_msg_body != nullptr);

    //> implementation of SC_uninitialized TurnOffDisplayResult

    return STM_STATS_OK;
}

/* @brief Event callback of SystemCtrl Module
 *        status : SC_uninitialized
 *        event  : PowerOn
 *        reference sequence id list:
 *               xxxx
 *               yyyy
 * 
 * @param _msg : SystemCtrlEvent
 * @return STM_Status
 */
STM_Status SystemCtrl_ECB_SC_uninitialized_PowerOn(SystemCtrlEvent const & _msg) {
    assert(_msg.has_msg_power_on());
    PowerOn * p_msg_body = _msg.get_msg_power_on();
    assert(p_msg_body != nullptr);

    //> implementation of SC_uninitialized PowerOn
    //> SystemCtrl_api_Initilize()
    SystemCtrl_api_Initilize();
    //> ShareOBJ_API_ReadLastTemeprature()
    ShareOBJ_API_ReadLastTemeprature();
    //> ShareOBJ_API_ReadLastMode()
    ShareOBJ_API_ReadLastMode();
    //> Motor_API_SendMessage_PowerOn(lv_last_temprature, lv_last_mode)
    Motor_API_SendMessage_PowerOn(lv_last_temprature, lv_last_mode);

    return STM_STATS_OK;
}

/* @brief Event callback of SystemCtrl Module
 *        status : SC_uninitialized
 *        event  : PowerOnResult
 *        reference sequence id list:
 *               xxxx
 *               yyyy
 * 
 * @param _msg : SystemCtrlEvent
 * @return STM_Status
 */
STM_Status SystemCtrl_ECB_SC_uninitialized_PowerOnResult(SystemCtrlEvent const & _msg) {
    assert(_msg.has_msg_power_on_result());
    PowerOnResult * p_msg_body = _msg.get_msg_power_on_result();
    assert(p_msg_body != nullptr);

    //> implementation of SC_uninitialized PowerOnResult
    //> Display_API_SendMessage_ShowTemperature(lv_last_temprature)
    Display_API_SendMessage_ShowTemperature(lv_last_temprature);

    return STM_STATS_OK;
}


void SystemCtrl_SetStatus(SystemCtrl_State state){
    SystemCtrl_State = state;
}

SystemCtrl_State SystemCtrl_GetStatus(){
    return SystemCtrl_State;
}