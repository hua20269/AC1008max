#ifndef _Background_H
#define _Background_H
void DisplayInit(); // 初始化函数
void lcdRotation(); // 连接蓝牙实时刷新屏幕方向

void RefreshDisplay(); // 刷新画面
void SYSinit(uint16_t timenum);
void PowerLOGO(String imgName);

//-------------------sw6306

// 经典主题  HUA
void Theme1(float bat_v, float sys_v, float sys_a, float ic_temp, float ntc_temp, float bat_m,
            uint8_t bat_per, uint8_t sys_state, uint8_t ac_state, uint8_t sinkProtocol, uint8_t sourceProtocol, uint8_t smalla, uint8_t ble_state, uint8_t cycle);

void BackgroundTime2(uint8_t ac_state, uint8_t ble_state, float sys_state_outinv, float sys_a, float ic_temp,
                     float bat_ntc, uint8_t bat_per, uint16_t cycle);
void BackgroundTime3(uint8_t week, float bat_v, float sys_v, float sys_a, uint16_t sys_state, uint16_t ac_state,
                     float bat_m, int cycle, uint16_t bat_per, uint8_t ble_state);
void BackgroundTime3_2(uint8_t month, uint8_t day, float ntc_temp, float temp, uint8_t hour, uint8_t minute, uint8_t sec, uint8_t smalla);

void BackgroundTime4(float bat_v, float sys_state_outinv, uint8_t sys_state, float sys_a, uint8_t bat_per,
                     uint8_t ble_state, float ic_temp, float bat_ntc);
void BackgroundTime5(float bat_v, float sys_state_outinv, uint8_t sys_state, uint8_t ac_state, float sys_a, uint8_t bat_per, float bat_m, uint8_t ble_state,
                     float ic_temp, float bat_ntc, uint8_t month, uint8_t day, uint8_t hour, uint8_t minute, uint8_t sec, uint8_t week);

//------------------BQ40Z50

void BQScreenLayout1(float bq_battemp, float bq_batv, float bq_bata, float bq_batv4, float bq_batv3, float bq_batv2, float bq_batv1, uint16_t bq_chargetime, uint16_t bq_dischargetime,
                     uint8_t bq_bat_per, uint16_t bq_batm, uint16_t bq_capacity, uint16_t bq_cycle);

void offscreen();
void onscreen();

void lost_Page(); // 非正当获得设备采取措施

void WiFi_Page();            // 等待连接WiFi页面
void ota_AP();               // 配网信息提示
void ota_Page(int a, int b); // 更新页面

#endif
