#ifndef _L1SP_TRC_H
#define _L1SP_TRC_H

#ifndef GEN_FOR_PC

   #ifndef _STACK_CONFIG_H
   #error "stack_config.h should be included before l1sp_trc.h"
   #endif

#else
   #include "kal_trace.h"
#endif /* GEN_FOR_PC */

#ifndef _KAL_TRACE_H
   #error "kal_trace.h should be included before nvram_trc.h"
#endif

#define TRACE_GROUP_DDLOAD       TRACE_GROUP_1
#define TRACE_GROUP_SND          TRACE_GROUP_2
#define TRACE_GROUP_AUD_PROCESS  TRACE_GROUP_3
#define TRACE_GROUP_SP_DEBUG     TRACE_GROUP_5
#define TRACE_GROUP_SP3G         TRACE_GROUP_8
#define TRACE_GROUP_AUD_PLAYBACK TRACE_GROUP_9
#define TRACE_GROUP_ECALL        TRACE_GROUP_1
#define TRACE_GROUP_AUD_MD2GCTRL TRACE_GROUP_1
#define TRACE_GROUP_SCO          TRACE_INFO

#if !defined(GEN_FOR_PC)
#if defined(__TST_MODULE__) || defined(__CUSTOM_RELEASE__)
    #include "l1sp_trc_gen.h"
#endif /* TST Trace Defintion */
#endif
BEGIN_TRACE_MAP(MOD_L1SP)

   // AFE
   TRC_MSG(AFE_SWITCH_FIR, "AFE Switch FIR %c for aud_func %X")
   TRC_MSG(AFE_SWITCH_LOOPBACK, "AFE Switch Loopback %c")
   TRC_MSG(AFE_SWITCH_MIC, "AFE Switch MIC %c for aud_func %X")
   TRC_MSG(AFE_SET_INPUT_SRC, "AFE SetInputSource: %X")
   TRC_MSG(AFE_GAIN, "AFE_VAG_CON:%X, AFE_AAG_CON:%X, DP_SIDETONE:%X")
   TRC_MSG(AFE_DIGI_GAIN, "DP_VOL_OUT_PCM:%X, DP_DigiGain_Setting:%X, DP_EnhRefDigiGain_Setting:%X")
   TRC_MSG(AFE_SET_MIC_VOLUME, "AFE SetMicrophoneVolume: %X")
   TRC_MSG(AFE_SET_SIDETONE_VOLUME, "AFE SetSideToneVolume: %X")
   TRC_MSG(AFE_SET_OUTPUT_DEVICE, "AFE Set aud_func %X OutputDevice %X")
   TRC_MSG(AFE_SET_OUTPUT_VOLUME, "AFE Set aud_func %X OutputVolume %d %d")
   TRC_MSG(AFE_SET_LEVEL_VOLUME, "AFE Set aud_func %X MaxAnalogGain %d , step %d, level %d")
   TRC_MSG(AFE_SET_GIDI_GAIN, "AFE Set aud_func %X digital gain level %d")
   TRC_MSG(AFE_SET_SPH_REF_GIDI_GAIN, "AFE Set speech enhancement reference digital gain %d")
   TRC_MSG(AFE_MUTE_SPEAKER, "AFE mute aud_func %X speaker %d")
   TRC_MSG(AFE_SET_EDI, "AFE Set EDI dir %d cycle %d fmt %d")
   TRC_MSG(AFE_SWITCH_HW_MUTE_SLEEP, "AFE Switch HW mute sleep %d")
   TRC_MSG(AFE_EXT_AU_AMP_CHANNEL_AND_DEVICE, "External audio amplifer debug: v_lowest=%d,v_device=%d, a_lowest=%d, a_lowest=%d")
   TRC_MSG(AFE_EXT_AU_AMP_FOUND_TWO_CHANNEL, "External audio amplifer debug: v_lowest=%d,a_lowest=%d, v_cmd=%d, a_cmd=%d")
   TRC_MSG(AFE_CHG_STATE, "AFE Change State (%d -> %d)")
   TRC_MSG(AFE_TURN_ON_AUDIO_CLK, "AFE Turn On Audio Clock: %d")
   TRC_MSG(AFE_STATE_INFO, "In AFE State(%d), v(%d, %d), a(%d, %d)")
   TRC_MSG(AFE_SET_DUAL_PATH_GAIN, "AFE set dual path gain 0x%X")
   TRC_MSG(AFE_SET_MIC_GAIN_CONTROL, "AFE set mic gain_ctrl Ana %d Dig %d(%d)")
   TRC_MSG(AFE_SET_OUTPUT_GAIN_CONTROL, "AFE set func %d gain_ctrl Ana %d Dig %d(%d) Ext 0x%x")
   TRC_MSG(AFE_TURN_OFF_AUDIO_CLOCK, "AFE_TurnOffAudioClock")
   TRC_MSG(AFE_TURN_ON_AUDIO_CLOCK, "AFE_TurnOnAudioClock")
   TRC_MSG(AFE_SWITCH_2_CLASSD, "AFE Switch to Class-D")
   TRC_MSG(AFE_SWITCH_2_CLASSAB, "AFE Switch to Class-AB")
   TRC_MSG(AFE_ACLK_SET_HARDWARE_MUTE, "_AfeAclkSetHardwareMute (%d)")
   TRC_MSG(AFE_HARDWARE_MUTE_CTRL, "_AfeHardwareMuteCtrl (%d)")
   TRC_MSG(AFE_SWITCH_VCM, "Switch VCM = (%d)")

   // L1CTM
   TRC_MSG(L1CTM_OPEN, "Call L1Ctm_Open")
   TRC_MSG(L1CTM_CLOSE, "Call L1Ctm_Close")
   TRC_MSG(L1CTM_SET_INTERFACE, "Call L1Ctm_SetInterface")
   TRC_MSG(L1CTM_START_NEGOTIATION, "Call L1Ctm_StartNegotiation")
   TRC_MSG(L1CTM_TX_PUT_TEXT, "Call L1Ctm_TxPutText")
   TRC_MSG(L1CTM_RX_GET_TEXT, "Call L1Ctm_RxGetText")

   TRC_MSG(L1CTM_FAR_END_CTM_DETECTED, "L1Ctm far-end CTM detected")
   TRC_MSG(L1CTM_NEGOTIATION_SUCCESS, "L1Ctm negotiation success")
   TRC_MSG(L1CTM_NEGOTIATION_FAIL, "L1Ctm negotiation fail")
   TRC_MSG(L1CTM_DEMAND_CTM_ACK, "L1Ctm is demanded to send CTM ACK")
   TRC_MSG(L1CTM_UL_SEND_IDLE_AS_ACK, "L1CtmTx ul-path send IDLE as ACK")
   TRC_MSG(L1CTM_DL_DETECT_CTM_SYNC, "L1Ctm dl-path detect CTM Sync")
   TRC_MSG(L1CTM_DL_CTM_BURST_END, "L1Ctm dl-path detect CTM burst-end")

   TRC_MSG(L1CTM_UL_SEND_ENQUIRY_CHAR, "L1Ctm ul-path send %d-time ENQUIRY char")
   TRC_MSG(L1CTM_UL_GET_DECODED_TTY_CHAR, "L1Ctm ul-path get decoded TTY-char 0x%02X")
   TRC_MSG(L1CTM_UL_SEND_CTM_CHAR, "L1Ctm ul-path send CTM-char 0x%02X")
   TRC_MSG(L1CTM_DL_GET_RECEIVED_CTM_CHAR, "L1Ctm dl-path get received CTM-char 0x%02X")
   TRC_MSG(L1CTM_DL_SEND_TTY_CHAR, "L1Ctm dl-path send TTY-char 0x%02X")
   TRC_MSG(L1CTM_REC_DIR_NO, "L1Ctm record to dir REC_%02u")
   TRC_MSG(L1CTM_SAVE_DECODED_CHAR, "L1Ctm dl-path save decoded char 0x%02X")   
   
   TRC_MSG(L1CTM_DEBUG_SHOW_SETTING1, "[CTM Setting 6229] AEC, EES, ES (Address 0x1A0~0x1A2): %d,%d,%d")
   TRC_MSG(L1CTM_DEBUG_SHOW_SETTING2, "[CTM Setting 6229] AMR codebook threshold=%d, gain=%d")
   TRC_MSG(L1CTM_DEBUG_SHOW_SETTING3, "[CTM Setting 6229] DSP_AFS/AHS_SP_BFI_THRESHOLD 0: %d,%d")
   TRC_MSG(L1CTM_DEBUG_SHOW_SETTING4, "[CTM Setting 6229] DSP_AFS/AHS_SP_BFI_THRESHOLD 1: %d,%d")
   TRC_MSG(L1CTM_DEBUG_SHOW_SETTING5, "[CTM Setting 6229] DSP_AFS/AHS_SP_BFI_THRESHOLD 2: %d,%d")
   TRC_MSG(L1CTM_DEBUG_SHOW_SETTING6, "[CTM Setting 6229] DSP_AFS/AHS_SP_BFI_THRESHOLD 3: %d,%d")
   TRC_MSG(L1CTM_DEBUG_SHOW_SETTING7, "[CTM Setting]: Audio Coefficient for input : %d, %d, %d, %d")
   TRC_MSG(L1CTM_DEBUG_SHOW_SETTING8, "[CTM Setting]: Audio Coefficient for output: %d, %d, %d, %d")
   TRC_MSG(L1CTM_FAKE_COSIM, "Turning on COSIM bit in DP_CTM_COSIM_CTRL")
   TRC_MSG(L1CTM_BUF_OVFLOW, "l1ctm buffer overflow")
   TRC_MSG(L1CTM_COSIM, "Turning on COSIM bit in DP_CTM_COSIM_CTRL")
   TRC_MSG(L1CTM_BFI_INFO, "l1ctm_in_hisr in cosim mode(buf_idx=%x, bfi_store_idx=%x, dsp_tch_bfi=%x, bfi flag=%x)")
   TRC_MSG(L1CTM_HCO_MODE, "Opening ctm in HCO mode.")
   TRC_MSG(L1CTM_VCO_MODE, "Opening ctm in VCO mode.")
   TRC_MSG(L1CTM_COSIM_MODE, "Opening CTM in cosim mode")
   TRC_MSG(L1CTM_NORMAL_MODE,"Opening ctm in normal mode (no HCO/VCO).")
   TRC_MSG(L1CTM_OPEN_PARAM, "ctm param is not null, cprm_debug_flag=%x")
   
   // SND
   TRC_MSG(L1SND_DSP_BUFFER_INFO, "BGSND buf count:%d; dsp_buf_addr(toPtr): %x, dsp_buf_len: %d word")
   TRC_MSG(L1SND_FILLBUFFER, "BGSND[%d] Filled %d word to DSP, bgSnd.bufRead=%d, bgSnd.bufWrite=%d")
   TRC_MSG(L1SND_PUT_SILENCE, "BGSND Filled %d word to DSP with silence pattern %x")
   TRC_MSG(L1SND_WRITE_DATA, "BGSND[%d] Write data %d word to buffer %d, bgSnd.bufRead=%d, bgSnd.bufWrite=%d")
   TRC_MSG(L1SND_STOP_FLUSH_COUNT, "BGSND Flush count: %d word")
   TRC_MSG(L1SND_STOP_FLUSH_LEAVE, "BGSND Flush Still Leave: %d word")
   
   TRC_MSG(L1SND_ENTER_BGSND_START, "Enter BGSND_Start")
   TRC_MSG(L1SND_ENTER_BGSND_STOP, "Enter BGSND_Stop")
   TRC_MSG(L1SND_ENTER_EVENT_HANDLER, "Enter bgsndEventHandler with state=%d")
   TRC_MSG(L1SND_CONFIG_ULMIXER, "BGSND ConfigULMixer, flag:%d, gain:%d")
   TRC_MSG(L1SND_CONFIG_DLMIXER, "BGSND ConfigDLMixer, flag:%d, gain:%d")

   TRC_MSG(L1SND_REENTER_HISR, "SND re-enter HISR with isDlHisrCome=%d, isUlHisrCome=%d")

   // L1AUDIO
   TRC_MSG(L1AUDIO_OPEN_FILE, "Enter AUD_Open file, type = %d")
   TRC_MSG(L1AUDIO_OPEN_STREAM, "Enter AUD_Open stream, type = %d")
   TRC_MSG(L1AUDIO_PLAY_FILE, "Enter AUD_Play file, type = %d")
   TRC_MSG(L1AUDIO_PLAY_STREAM, "Enter AUD_Play stream, type = %d")
   TRC_MSG(L1AUDIO_RECORD, "Enter AUD_Record stream, type = %d")
   TRC_MSG(L1AUDIO_PROCESS, "Enter AUD_Process, type = %d")
   TRC_MSG(L1AUDIO_PAUSE, "Enter AUD_Pause, type = %d")
   TRC_MSG(L1AUDIO_RESUME, "Enter AUD_Resume, type = %d")
   TRC_MSG(L1AUDIO_STOP, "Enter AUD_Stop, type = %d")
   TRC_MSG(L1AUDIO_CLOSE, "Enter AUD_Close, type = %d")
   TRC_MSG(L1AUDIO_SEEK, "Enter AUD_Seek, type = %d")
   TRC_MSG(L1AUDIO_SET_START_TIME, "Set audio start time, start time = %d ms, type = %d")
   TRC_MSG(L1AUDIO_SET_STOP_TIME, "Set audio stop time, stop time = %d ms, type = %d")
   TRC_MSG(L1AUDIO_CONTENT, "Enter AUD_GetContentDescInfo, type = %d")

   TRC_MSG(L1AUDIO_INIT_STATE, "Audio function in initial state")
   TRC_MSG(L1AUDIO_RUNNING_STATE, "Audio function in running state")
   TRC_MSG(L1AUDIO_STOP_STATE, "Audio function in stop state")
   TRC_MSG(L1AUDIO_END_STATE, "Audio function in end state")
   TRC_MSG(L1AUDIO_IDLE_STATE, "Audio function in idle state")

   TRC_MSG(L1AUDIO_READ_BYTE, "Read %d bytes from media buffer")
   TRC_MSG(L1AUDIO_WRITE_DSP_FIRST_SEGMENT, "1stDSPStrAddr=%d, Len=%d")
   TRC_MSG(L1AUDIO_WRITE_DSP_SECOND_SEGMENT, "2ndDSPStrAddr=%d, Len=%d")
   TRC_MSG(L1AUDIO_WRITE_MCU_FIRST_SEGMENT, "1st, MBR=%d, %dW")
   TRC_MSG(L1AUDIO_WRITE_MCU_SECOND_SEGMENT, "2nd, MBR=%d, %dW")

   TRC_MSG(L1AUDIO_DSP_ERROR, "ERROR! DSP decodes bitstream")
   TRC_MSG(L1AUDIO_MCU_ERROR, "ERROR! MCU parses packet")
   TRC_MSG(L1AUDIO_READ_FILE_ERROR, "ERROR! File Error = %d")
   TRC_MSG(L1AUDIO_PARAMETER_ERROR, "ERROR! DSP returns parameter error")
   TRC_MSG(L1AUDIO_TRIM_INFO, "[L1AU][INFO]Infoindex: %d, (1) %d, (2): %d, (3): %d")
   TRC_MSG(L1AUDIO_TRIM_RANGE, "[L1AU][TRIM]Start: %d END: %d, time(0)/offset(1): %d")

   // L1Audio MD2G
   TRC_MSG(L1AUDIO_MD2G_PWR_CTRL, "MD2G PWR CTRL, audioid= %d, flag = %d")
   TRC_MSG(L1AUDIO_MD2G_PWR_CTRL_DONE, "MD2G PWR CTRL DONE, audioid= %d, flag = %d")

   TRC_MSG(L1AUDIO_SETFLAG_A, "MD2G L1Audio_SetFlag , audioid= %d, runningState = %d")
   TRC_MSG(L1AUDIO_CLEARFLAG_A, "MD2G L1Audio_ClearFlag, audioid= %d, runningState = %d")

   //pcm strm drv
   // TRC_MSG(L1AUDIO_PCM_STRM_BUF_OVFLOW, "PCM STRM: BUF_OverFlow") 
   // TRC_MSG(L1AUDIO_PCM_STRM_IDLE, "PCM STRM: IDLE_STATE")
   // TRC_MSG(L1AUDIO_PCM_STRM_END, "PCM STRM: END_STATE")
   // TRC_MSG(L1AUDIO_PCM_STRM_RUN, "PCM STRM: RUN_STATE")
   // TRC_MSG(L1AUDIO_PCM_STRM_SILENCE, "PCM STRM: Silence %d")
   // TRC_MSG(L1AUDIO_PCM_STRM_WDATA_IDMA, "PCM STRM: Addr=%d, Len=%d")


   TRC_MSG(AM_ENQUEUE, "[Phonecall] AM_Enqueue isCritical=%d")

   // L1SP
   TRC_MSG(L1SP_PHONE_CALL, "[PHONECALL]pos=%d, %d, %d")
   TRC_MSG(L1SP_MODE_VALUE, "[PHONECALL]Mode value: m0=%d, m1=%d, m2=%d, m3=%d, m4=%d, m5=%d, m6=%d, m7=%d, m8=%d, m9=%d, m10=%d, m11=%d, m12=%d, m13=%d, m14=%d, m15=%d")
   TRC_MSG(L1SP_SET_MODE, "L1SP set mode=%d, spk_lev=%d, mic_lev=%d")
   TRC_MSG(L1SP_APPLY_MODE, "L1SP on=%d, mode=%d, spk_lev=%d, mic_lev=%d")
   TRC_MSG(L1SP_SPEECH_ENHANCEMENT, "L1SP turn on speech enhancement flag=%d, m0=%d, m1=%d, c0=%d, c1=%d")
   TRC_MSG(L1SP_SET_MIC_VOL, "L1SP Set Mic Vol %d, sph_par %d")
   TRC_MSG(L1SP_ADAPT_MIC_VOL, "L1SP Adapt Mic Vol %d")
   TRC_MSG(L1SP_INC_SPK_VOL, "L1SP DSP Inc Spk Vol to %d, report %d")
   TRC_MSG(L1SP_L4C_EVENT,   "L1SP L4C Event %d mode=%d pre_mode=%d")
   TRC_MSG(L1SP_MUTE_CONTROL_STATUS,  "L1SP MuteControl(%x) apULmute=%x apDLmute=%x codec_mute=%x forcedUnmute=%x")
   TRC_MSG(L1SP_FORCED_UNMUTE_CONTROLLER, "SP_SetForcedUnMuteController forcedUnmuteController %x mask %x b = %x")
   TRC_MSG(L1SP_FORCED_UNMUTE_CONTROLLER_1, "SP_SetForcedUnMuteController forcedUnmuteController %x ")

   TRC_MSG(DACA_EXCEPTION,    "[DATACARD]Expection %d")
   TRC_MSG(DACA_OPEN_PORT,     "[DATACARD]mode=%d port %d")
   TRC_MSG(DACA_GET_DATA,      "[DATACARD]Audl Get %d Bytes from mode=%d, ori req %d")
   TRC_MSG(DACA_PUT_DATA,      "[DATACARD]Audl Put %d Bytes to mode=%d")
   TRC_MSG(DACA_BUFFER_IDX,    "[DATACARD]ss_buf_idx %d")	 	 
   TRC_MSG(DACA_PLUGIN,        "[DATACARD]PlugIn mode=%d")	 
   TRC_MSG(DACA_STRM_ENABLE,   "[DATACARD]Enable mode=%d")	
   TRC_MSG(DACA_STRM_DISABLE,  "[DATACARD]Disable mode=%d")	
	
   TRC_MSG(DACA_ENTER_REQUEST_EXCHANGE_DL_DATA,  "[DataCard]##l1audio Enter MSG_SAC2L1AUDIO_SPEECH_DATACARD_REQUEST_EXCHANGE_DL_DATA is_strmOn=%d dl_ready=%d") 
   TRC_MSG(DACA_ENTER_REQUEST_EXCHANGE_UL_DATA,  "[DataCard]##l1audio Enter MSG_SAC2L1AUDIO_SPEECH_DATACARD_REQUEST_EXCHANGE_UL_DATA is_strmOn=%d ul_ready=%d")
   TRC_MSG(DACA_UL_HAS_NO_DATA,                  "[DataCard]##l1audio UL has no data")
   TRC_MSG(DACA_UL_HAS_DATA,                     "[DataCard]##l1audio UL has data")
   TRC_MSG(DACA_LEAVE_REQUEST_EXCHANGE_UL_DATA,  "[DataCard]##l1audio Leave MSG_SAC2L1AUDIO_SPEECH_DATACARD_REQUEST_EXCHANGE_UL_DATA")
   TRC_MSG(DACA_ENTER_STRMONHANDLER,             "[DataCard]##spStrmOnHandler")
   TRC_MSG(DACA_ENTER_STRMOFFHANDLER,            "[DataCard]##spStrmOffHandler")
   TRC_MSG(DACA_ENTER_GETDATA1,                  "[DataCard]##Enter GetData1 is_strmOn=%d ul_ready=%d")   
   TRC_MSG(DACA_ENTER_GETDATA2,                  "[DataCard]##Enter GetData2")
   TRC_MSG(DACA_ENTER_PUTDATA1,                  "[DataCard]##Enter PutData1 is_strmOn=%d dl_ready=%d") 
   TRC_MSG(DACA_GET_SUFFICIENT_DATA,             "[DataCard]##GetData Data sufficient")
   TRC_MSG(DACA_GET_INSUFFICIENT_DATA,           "[DataCard]##GetData Data Insufficient")	
   TRC_MSG(DACA_LEAVE_GETDATA,                   "[DataCard]##Leave GetData")   
   
   TRC_MSG(L1SP_DEC_SPK_VOL, "L1SP DSP Dec Spk Vol to %d, report %d")
   TRC_MSG(L1SP_2MIC_STATE, "L1SP 2Mic Enter Speech Mode %d, sph_state %d")
   TRC_MSG(L1SP_2MIC_SLEEP, "L1SP 2Mic Enter Sleep Mode")
   TRC_MSG(L1SP_2MIC_ENTER_BYPASS, "L1SP 2Mic Enter Bypass mode")
   TRC_MSG(L1SP_2MIC_EXIT_BYPASS, "L1SP 2Mic Exit Bypass Mode(Enter Sleep mode)")

	TRC_MSG(L1SP_USELESS_SET, "SPH[ENH] %d, %d, %d, %d")
	TRC_MSG(SPC_ILLEGAL_SPC_APP_BEHAVIOR_CHECK, "[SPC] Illegle app control to turn on %MMSG_SPC_APP_T when (%d)%MMSG_SPC_APP_T, gSpc.spcAppUsage=%x")
	TRC_MSG(SPC_ILLEGAL_SPC_APP_BEHAVIOR, "[SPC] Illegle app control with (%d)%MMSG_SPC_APP_T, %d")
	TRC_MSG(SPC_APP_DATA_SEND_FAIL, "[SPC] (%d)%MMSG_SPC_APP_T app send data fail at pos %d") 
	TRC_MSG(SPC_M2A_DROP, "[SPC] Drop app (%d)%MMSG_SPC_APP_T data send, %d")
	TRC_MSG(SPC_INVALID_MSG, "[SPC]INVALID CCCI A2M MSG (%08X)")
	TRC_MSG(SPC_M2A_DONE, "[SPC] CCCI A2M %x done")
	TRC_MSG(SPC_SPEECH_ON,              "Spc_Speech_On %d")
	TRC_MSG(SPC_SPEECH_OFF,             "Spc_Speech_Off")
	TRC_MSG(SPC_SET_DROP_UL_MUTE,       "spc_gain_UlMuteSet mute is not apply")
	TRC_MSG(SPC_SET_DROP_DL_MUTE,       "spc_gain_DlMuteSet mute is not apply")
	TRC_MSG(SPC_SET_DROP_UL_ENH_RESULT_MUTE,       "spc_gain_UlEnhResultMuteSet mute is not apply")
	TRC_MSG(SPC_SET_DROP_UL_SOURCE_MUTE,           "spc_gain_UlSourceMuteSet mute is not apply")
	TRC_MSG(SPC_SET_SPEECHMODE_ADAPT,   "Spc_SetSpeechMode_Adaptation mode = %d")
	TRC_MSG(SPC_EM_DEFAULT_INIT,        "spc_EmInit, default used common=%d, wb=%d, dmnr=%d, lspkDmnr=%d")
    TRC_MSG(SPC_EPOF_NOTIFY, "[SPC] Receive EPOF from L4C, application usage = %x")
    
	TRC_MSG(SPC_AC_LOOPBACK_FROM_MIC,            "[SPC AC Loopback]FromMic %d %d %d %d")
   TRC_MSG(SPC_AC_LOOPBACK_SKIP_MIC,            "[SPC AC Loopback]Skip FromMic")
   TRC_MSG(SPC_AC_LOOPBACK_TO_SE,               "[SPC AC Loopback]ToSE %d %d %d %d")
   TRC_MSG(SPC_AC_LOOPBACK_FILL_SE,             "[SPC AC Loopback]FillSE")
   TRC_MSG(SPC_AC_LOOPBACK_FROM_SD,             "[SPC AC Loopback]FromSD %d %d %d %d")
   TRC_MSG(SPC_AC_LOOPBACK_SKIP_SD,             "[SPC AC Loopback]Skip FromSD")
   TRC_MSG(SPC_AC_LOOPBACK_TO_SPK,              "[SPC AC Loopback]ToSPK %d %d %d %d")
   TRC_MSG(SPC_AC_LOOPBACK_FILL_SPK,            "[SPC AC Loopback]FillSpk")
   TRC_MSG(SPC_AC_LOOPBACK_UL_DL_INDEX,         "[SPC AC Loopback]Dw, Dr, Uw, Ur %d %d %d %d")

	TRC_MSG(SPC_NOTIFY_RF_INFO,                  "[SPC NOTIFY RF INFO]rf_info:%x 2g:%x 3g:%x 4g:%x")
	TRC_MSG(SPC_NOTIFY_NETWORK_STATUS,           "[SPC_NOTIFY_NETWORK_STATUS]tmp:%x isWB:%x RAT:%x")

   TRC_MSG(L1SP_SET_ENHANCEMENT, "L1SP Set Enhancement keep=0x%x, turnOn=0x%x, turnOff=0x%x")
   TRC_MSG(L1SP_SET_ENHANCEMENT_SUB_MASK, "L1SP Set Enhancement submask[%d]=%x")
   TRC_MSG(L1SP_ENHANCE_ON_OFF, "[SPE]L1SP turn enhance =%d, with state=%x")
   TRC_MSG(SPE_AGC_CONFIG_INFO, "[SPE]AGC turnOn/Off=%d, gain=0x%x, isNxpPaOn=%d, micInfo=0x%x, dspParam=0x%x, enhMasEchoRef=%d")
   TRC_MSG(L1SP_SET_ENH_FIR, "SPH[ENH] enhancement mode %d, enhance Index %d, inFIR Index %d, outFIR Index %d, updateMask %d to value %d")
   TRC_MSG(L1SP_CHANGE_ENH_MODE, "SPH[ENH] ChangeSpeechMode premode=%d, aftermode=%d, currentMode=%d")
   TRC_MSG(L1SP_WRITE_FIR, "SPH[ENH] Write FIR isWB=%d")
   TRC_MSG(L1SP_UPDATE_SPE_MASKS, "SPH[ENH] Update spe Masks[%d], spe_app_mask=%x, spe_usr_mask=%x, spe_usr_sub_mask=%x, newVale=%x, on/off=%x")
   TRC_MSG(L1SP_SET_MIC_GAIN_CONTROL,              "[MIC GAIN CONTROL]L1SP set mic gain control %x")
   TRC_MSG(L1SP_ADAPT_MIC_GAIN_CONTROL,            "[MIC GAIN CONTROL]L1SP adapt mic gain control %x")   
	TRC_MSG(L1SP_MUTE_DSP_UL_CODEC_CONTROL,         "[MUTE] AM_Mute_UL_Codec_Speech: %x")  
	TRC_MSG(L1SP_MUTE_DSP_DL_TRAFFIC_CONTROL,         "[MUTE] AM_Mute_DL_Speech_Traffic: %x")  
	TRC_MSG(L1SP_MUTE_DSP_DL_8K_CONTROL,            "[MUTE] AM_Mute_DL_8k_Speech: %x")  	
	TRC_MSG(L1SP_MUTE_DSP_UL_ENH_RESULT_CONTROL, "[MUTE] mute dsp uplink enhancement result(inAM): %x")  
	TRC_MSG(L1SP_MUTE_DSP_UL_SOURCE_CONTROL,     "[MUTE] mute dsp uplink source(inAM): %x")  
   // DAF stream sender over RTP, [REMOVE]

// 3G speech
   TRC_MSG(L1D_RESYNC_UPDATE, "[SP3G L1D Resync]Update %d")
   TRC_MSG(L1D_RESYNC_RESET, "[SP3G L1D Resync]Reset")
   TRC_MSG(SP3G_L1D_Resync, "[SP3G L1D Resync] %d offeset=%d")

   TRC_MSG(SP3G_RAB_EST, "SP3G CSR notify RAB establish")
   TRC_MSG(SP3G_RAB_DEEST, "SP3G CSR notify RAB De-establish")
   TRC_MSG(SP3G_TX_SID_FIRST, "SP3G_HISR TX SID FISRT")
   TRC_MSG(SP3G_RX_FORCE_NO_DATA_WHEN_CHANGE_BAND, "SP3G_HISR RX Band Change,force speech frame to NO_DATA")
   TRC_MSG(SP3G_TX_SID_UPDATE, "SP3G_HISR TX SID UPDATE")
   TRC_MSG(SP3G_RX_SID_FIRST, "SP3G_HISR RX SID FISRT")
   TRC_MSG(SP3G_RX_SID_UPDATE, "SP3G_HISR RX SID UPDATE")
   TRC_MSG(SP3G_RX_NO_DATA, "SP3G_HISR RX GET NO DATA FRAME")
   TRC_MSG(SP3G_DTX_NO_DATA, "SP3G_HISR INSERT NO DATA")
   TRC_MSG(SP3G_BUFFER_STATUS, "SP3G_HISR DL r = %d, w = %d, num = %d, 1st byte = %x")
   TRC_MSG(SP3G_UL_DELAY, "SP3G UL delay %d")
   TRC_MSG(SP3G_REQUEST, "SP3G Request")
   TRC_MSG(SP3G_REQUEST_UL_FRAME_TYPE, "SP3G set UL frame type %MtSP3G_SpeechCodecType")
   TRC_MSG(SP3G_UL_GET_SPEECH_FRAME, "SP3G UL GetSpFrame")
   TRC_MSG(SP3G_DL_BUFFER_FINISH, "SP3G DL Buffering finished")
   TRC_MSG(SP3G_DL_PUT_SPEECH_FRAME, "SP3G DL sub_flow %d, frame_type %MtSP3G_SpeechCodecType, crc_status %d")
   TRC_MSG(SP3G_LOG_L1_INFO, "SP3G CFN=%x, l1info=%x, crc = %x, s_val =%x, %x, %x")
   TRC_MSG(SP3G_L1A_UPDATE_INFO, "SP3G Update Info bitmap %d, val %d")
   TRC_MSG(SP3G_INVALID_UL_CODEC_MODE, "SP3G invalid UL codec mode %d")
   TRC_MSG(SP3G_SET_DTX, "SP3G Set DTX %d")
   
   TRC_MSG(SP3G_UL_BIT_TRUE_DSP_F8, "SP3GHISR UL DSP len %d, %hx %hx %hx %hx %hx %hx %hx %hx")
   TRC_MSG(SP3G_UL_BIT_TRUE_DSP_N8, "SP3GHISR UL DSP %hx %hx %hx %hx %hx %hx %hx %hx")
   TRC_MSG(SP3G_TX_SPEECH_GOOD, "SP3G_HISR UL is TX_SPEECH_GOOD")
   TRC_MSG(SP3G_UL_NO_DATA, "SP3G_HISR UL is NO DATA")
   TRC_MSG(SP3G_UL_BIT_TRUE_F8, "SP3G_HISR=%d UL Type %dtSP3G_SpeechCodecType, Frm %hx %hx %hx %hx %hx %hx %hx %hx")
   TRC_MSG(SP3G_UL_BIT_TRUE_N13, "SP3G UL %hx %hx %hx %hx %hx %hx %hx %hx %hx %hx %hx %hx %hx")
   TRC_MSG(SP3G_UL_BUFFER, "SP3GVT UL cnt=%d,r=%d,w=%d")
   TRC_MSG(SP3G_DL_BIT_TRUE, "SP3G_HISR DL Type %d, Frm %x %x %x %x %x")
   TRC_MSG(SP3G_DL_BIT_TRUE_TASK, "SP3G DL Frm %x %x %x %x %x")
   TRC_MSG(SP3G_DL_BIT_TRUE_DSP_F8, "SP3GHISR DL DSP len %d, %hx %hx %hx %hx %hx %hx %hx %hx") 
   TRC_MSG(SP3G_DL_BIT_TRUE_DSP_N8, "SP3GHISR DL DSP %hx %hx %hx %hx %hx %hx %hx %hx")
   TRC_MSG(SP3GVT_FAKE_NODATA, "SP3GVT Fake NoData")
   TRC_MSG(SP3G_DL_TIMING, "SP3G DL Timing %d")
   TRC_MSG(SP3G_UL_TIMING, "SP3G UL Timing %d")
   TRC_MSG(SP3G_D2M_UL_TIMING, "SP3G D2M UL Timing %d")
   TRC_MSG(SP3G_D2M_DL_TIMING, "SP3G D2M DL Timing %d")  
   TRC_MSG(SP3G_FORCE_NODATA_WHEN_RESYNC, "SP3G force one AMR_NO_DATA frame before resync")
   TRC_MSG(SP3G_UL_DSP_NOT_READY_WARNING_AND_FILL_SILENCE, "SP3G_HISR UL NOT READY, Force Using Silence Pattern")
   TRC_MSG(SP3G_FOUND_UL_SYNC_TIMING_ERROR, "SP3G found UL resync timing error")
   TRC_MSG(SP3G_FOUND_DL_SYNC_TIMING_ERROR, "SP3G found DL resync timing error")
 
   //CSoHS
   TRC_MSG(SP3G_HSPA_UL_GET_SPEECH_FRAME, "SP3GHSPA UL GetSpFrame type %MtSP3G_SpeechCodecType, len %d, %hx %hx")
   TRC_MSG(SP3G_HSPA_DL_PUT_SPEECH_FRAME, "SP3GHSPA DL PutSpFrame type %MtSP3G_SpeechCodecType, CFN %d, crc %d, %hx %hx")
   TRC_MSG(SP3G_HSPA_DL_MAX_CS_DELAY, "SP3GHSPA set Max CS delay %d")
   
   //VT
   TRC_MSG(SP3GVT_UL_GET_SPEECH_FRAME, "SP3GVT UL GetSpFrm, CurFrmCount %d")
   TRC_MSG(SP3GVT_UL_FRAME_INFO, "SP3GVT UL Frm len %d, first 3 byte %x %x %x")
   TRC_MSG(SP3GVT_DL_FRAME_INFO, "SP3GVT DL Frm len %d, first 3 byte %x %x %x")
   TRC_MSG(SP3GVT_DL_FRAME_ERROR, "SP3GVT DL FrmType Err Warning %d !!")
   TRC_MSG(SP3GVT_SET_DELAY, "SP3GVT SetDelay %d ms, about %d frame")
      
   //VM
   TRC_MSG(VM_CONTROL, "[VMREC] vm_con : %x")
   TRC_MSG(VM_SP3G_VM_L1T, "[VMREC] SP3G VM L1T %x")
   TRC_MSG(VM_REC_DEBUG_INFO, "[VMREC] VM_DEBUG_INFO = %x")
   TRC_MSG(VM_REC_HISR_VM_DATA_LOST, "[VMREC] hisr data lost with count=%d, pos = %d")
   TRC_MSG(VM_REC_HISR_PCM_DATA_LOST, "[VMREC] some vm's pcm data is missing, pos = %d")
   
   // CCCI Message
   TRC_MSG(SPCIO_ORG_RECEIVE_COMMAND, "SPCIO rece ORG A2M Msg 0x%08X [(%d)%MSPC_MSG_ID_T][(%d)%MAUD_CCCI_MSG_TYPE_T][(%d)%MAUD_CCCI_MSG_T]")
   TRC_MSG(SPCIO_ORG_RECEIVE_DATA_NOTIFY, "SPCIO rece ORG A2M data_ntf 0x%08X [(%d)%MSPC_MSG_ID_T][(%d)%MAUD_CCCI_MSG_TYPE_T][(%d)%MAUD_CCCI_MSG_T], offset 0x%x, len 0x%x")
   TRC_MSG(SPCIO_ORG_PROCESS_COMMAND, "SPC proc ORG A2M Msg 0x%08X [(%d)%MSPC_MSG_ID_T][(%d)%MAUD_CCCI_MSG_TYPE_T][(%d)%MAUD_CCCI_MSG_T]")
   TRC_MSG(SPCIO_ORG_PROCESS_DATA_NOTIFY, "SPC proc ORG A2M data_ntf 0x%08X [(%d)%MSPC_MSG_ID_T][(%d)%MAUD_CCCI_MSG_TYPE_T][(%d)%MAUD_CCCI_MSG_T], offset 0x%x, len 0x%x")
   TRC_MSG(SPCIO_ORG_FINISH_COMMAND, "SPC done ORG A2M Msg 0x%08X [(%d)%MSPC_MSG_ID_T][(%d)%MAUD_CCCI_MSG_TYPE_T][(%d)%MAUD_CCCI_MSG_T]")
   TRC_MSG(SPCIO_ORG_FINISH_DATA_NOTIFY, "SPC done ORG A2M data_ntf 0x%08X [(%d)%MSPC_MSG_ID_T][(%d)%MAUD_CCCI_MSG_TYPE_T][(%d)%MAUD_CCCI_MSG_T], offset 0x%x, len 0x%x") 

	TRC_MSG(SPCIO_RECEIVE_MSG, "SPC rece A2M 0x%08X [(%d)%MSPC_MSG_ID_T][(0x%04X)%MAUD_CCCI_MSG_T], data16 = 0x%04X, ata32 = 0x%08X")
	TRC_MSG(SPCIO_PROCESS_MSG, "SPC proc A2M 0x%08X [(%d)%MSPC_MSG_ID_T][(0x%04X)%MAUD_CCCI_MSG_T], data16 = 0x%04X, ata32 = 0x%08X")
	TRC_MSG(SPCIO_FINISH_MSG, "SPC done A2M 0x%08X [(%d)%MSPC_MSG_ID_T][(0x%04X)%MAUD_CCCI_MSG_T], data16 = 0x%04X, ata32 = 0x%08X")
	
   TRC_MSG(SPCIO_INVALID_MSG, "INVALID SPCIO MSG ID(%08X), data (%08X) with reserved (%08X)")
   TRC_MSG(SPCIO_INVALID_MSG_BEFORE_QUEUE_READY, "Before queue ready, INVALID SPCIO MSG ID(%08X), data (%08X) with reserved (%08X)")

	TRC_MSG(SPCIO_RECEIVE_MODEM_INTERNAL, "SPCIO rece speeach internal msg 0x%08X [%MSPC_MSG_ID_T]")
	TRC_MSG(SPCIO_PROCESS_MODEM_INTERNAL, "SPCIO proc speeach internal msg 0x%08X [%MSPC_MSG_ID_T]")
	TRC_MSG(SPCIO_FINISH_MODEM_INTERNAL, "SPCIO done speeach internal msg 0x%08X [%MSPC_MSG_ID_T]")
   TRC_MSG(SPCIO_SEND_M2A_MESSAGE, "SPCIO send M2A msg %08X, rev %08X")
   TRC_MSG(SPCIO_SEND_M2A_MESSAGE_FAIL, "SPCIO send M2A message %08X fail, ret %d")
   TRC_MSG(SPCIO_SEND_M2A_MESSAGE_FAIL_END, "SPCIO send M2A message %08X fail with retry three times")
   TRC_MSG(SPCIO_SEND_M2A_DATA, "SPCIO send M2A data %08X")
   TRC_MSG(SPCIO_SEND_M2A_DATA_FAIL, "SPCIO send M2A data %08X fail, ret %d")
   TRC_MSG(SPCIO_SEND_M2A_DATA_FAIL_END, "SPCIO send M2A data %08X fail with retry three times")
   
   //tone_loopback_Rec
   TRC_MSG(L1AUDIO_TONE_LOOPBACK_REC_CALLBACK_MODE, "TONE_LOOPBACK_REC: callback Mode=%d")
   TRC_MSG(L1AUDIO_TONE_LOOPBACK_REC_MODE, "TONE_LOOPBACK_REC: Mode=%d")  
 
   
   //Audio General info
   TRC_MSG(L1AUDIO_GENERAL_INFO, "[AUD][%MAudio_Trace_Index] %d, %d, %d, %d, %d, %d")

   //ddload
   TRC_MSG(L1AUDIO_DDLOAD_STATUS_FAIL, "[DDLoad]DSP Status Not Clear")
   TRC_MSG(L1AUDIO_DDLOAD_STATUS_SUCCESS, "[DDLoad]DDLoad success")
   TRC_MSG(L1AUDIO_DDLOAD_ID, "[DDLoad]DDLoad ID = %d")
   
   //eCall
   TRC_MSG(ECALL_IVS_DRV_CATCH_EVENT, "[eCall]IVS Driver Catch Event %d")
   TRC_MSG(ECALL_IVS_DRV_HLACK, "[eCall]IVS Driver HLACK. Expect %d, Received %d")
   TRC_MSG(ECALL_PSAP_DRV_CATCH_EVENT, "[eCall]PSAP Driver Catch Event %d")
   TRC_MSG(ECALL_PSAP_DRV_RECEIVE_MSD, "[eCall]PSAP Driver Received MSD")
   TRC_MSG(ECALL_PSAP_DRV_MSD_DATA, "[eCall]PSAP MSD %3d %3d %3d %3d %3d %3d %3d")
   TRC_MSG(ECALL_IVS_MODEM_SENDSTART, "[eCall]IVS SendStart received from control")
   TRC_MSG(ECALL_IVS_MODEM_SENDSTART_IGNORE, "[eCall]IVS SendStart received from control, ignored")
   TRC_MSG(ECALL_IVS_MODEM_RX_RESET, "[eCall]IVS reset receiver")
   TRC_MSG(ECALL_IVS_MODEM_TX_RESET, "[eCall]IVS reset transmitter")
   TRC_MSG(ECALL_IVS_MODEM_TX_RESET_MSD_PROVIDED, "[eCall]IVS reset transmitter (MSD provided)")
   TRC_MSG(ECALL_IVS_MODEM_SENDSTART_DUR_MSD_IGNORE, "[eCall]IVS SendStart during MSD transmission, ignored.")
   TRC_MSG(ECALL_IVS_MODEM_SENDING_SEND, "[eCall]IVS sending  SEND")
   TRC_MSG(ECALL_IVS_MODEM_FULL_RESET, "[eCall]IVS full reset (no sync detected)")
   TRC_MSG(ECALL_IVS_MODEM_IGNORING_HLACK, "[eCall]IVS ignoring additional HLACK (data: 0x0%X, metric: %3d)")
   TRC_MSG(ECALL_IVS_MODEM_RECEIVED_HLACK_FINISHED, "[eCall]IVS received HLACK (data: 0x0%X, metric: %3d), finished.")
   TRC_MSG(ECALL_IVS_MODEM_RECEIVED_HLACK_WAITING, "[eCall]IVS received HLACK (data: 0x0%X, metric: %3d), waiting...")
   TRC_MSG(ECALL_IVS_MODEM_RECEIVED_START_LOW_RELIABILITY, "[eCall]IVS received START !> ignoring message (reliability too low)")
   TRC_MSG(ECALL_IVS_MODEM_RECEIVED_START_TOO_OFTEN, "[eCall]IVS received START (metric: %3d) too often starting over...")
   TRC_MSG(ECALL_IVS_MODEM_RECEIVED_START_STARTING, "[eCall]IVS received START (metric: %3d), starting...")
   TRC_MSG(ECALL_IVS_MODEM_FAST_MODULATOR, "[eCall]IVS fast modulator chosen (NACK count: %d)")
   TRC_MSG(ECALL_IVS_MODEM_ROBUST_MODULATOR, "[eCall]IVS robust modulator chosen (NACK count: %d)")
   TRC_MSG(ECALL_IVS_MODEM_RECEIVED_START, "[eCall]IVS received START (metric: %3d)")
   TRC_MSG(ECALL_IVS_MODEM_START_AFTER_ACK, "[eCall]IVS START ... !> assuming previous ACK was wrong")
   TRC_MSG(ECALL_IVS_MODEM_START_AFTER_HLACK, "[eCall]IVS START ... !> assuming previous HLACK was wrong")
   TRC_MSG(ECALL_IVS_MODEM_RECEIVED_NACK_EXCEPTING_START, "[eCall]IVS received NACK  !> ignoring message (expecting START)")
   TRC_MSG(ECALL_IVS_MODEM_RECEIVED_NACK_LOW_RELIABILITY, "[eCall]IVS received NACK  !> ignoring message (reliability too low)")
   TRC_MSG(ECALL_IVS_MODEM_RECEIVED_NACK_ASSUME_IDLE, "[eCall]IVS received NACK  !> ignoring message (assume IDLE)")
   TRC_MSG(ECALL_IVS_MODEM_RECEIVED_NACK_FIRST_TIME, "[eCall]IVS received NACK  (metric: %3d), first time")
   TRC_MSG(ECALL_IVS_MODEM_RECEIVED_NACK, "[eCall]IVS received NACK  (metric: %3d)")
   TRC_MSG(ECALL_IVS_MODEM_NACK_AFTER_ACK, "[eCall]IVS NACK ... !> assuming previous ACK was wrong")
   TRC_MSG(ECALL_IVS_MODEM_NACK_AFTER_HLACK, "[eCall]IVS NACK ... !> assuming previous HLACK was wrong")
   TRC_MSG(ECALL_IVS_MODEM_RECEIVED_ACK_EXPECTING_START, "[eCall]IVS received ACK   !> ignoring message (expecting START)")
   TRC_MSG(ECALL_IVS_MODEM_RECEIVED_ACK_RECORDED, "[eCall]IVS received ACK   !> ignoring message (already recorded)")
   TRC_MSG(ECALL_IVS_MODEM_RECEIVED_ACK_LOW_RELIABILITY, "[eCall]IVS received ACK   !> ignoring message (reliability too low)")
   TRC_MSG(ECALL_IVS_MODEM_RECEIVED_ACK_ASSUME_IDLE, "[eCall]IVS received ACK   !> ignoring message (assume IDLE)")
   TRC_MSG(ECALL_IVS_MODEM_RECEIVED_ACK, "[eCall]IVS received ACK   (metric: %3d), ACK recorded, wait for HLACK")
   TRC_MSG(ECALL_IVS_MODEM_RECEIVED_ACK_WAITING, "[eCall]IVS received ACK   (metric: %3d), waiting...")
   TRC_MSG(ECALL_IVS_MODEM_ACK_AFTER_HLACK, "[eCall]IVS ACK ... !> assuming previous HLACK was wrong")
   TRC_MSG(ECALL_IVS_MODEM_RECEIVED_IDLE_EXPECTING_START, "[eCall]IVS received IDLE  !> ignoring message (expecting START)")
   TRC_MSG(ECALL_IVS_MODEM_RECEIVED_IDLE_IGNORE, "[eCall]IVS received IDLE  !> ignoring message")
   TRC_MSG(ECALL_IVS_MODEM_RECEIVED_IDLE_REMAINING, "[eCall]IVS remaining in IDLE mode")
   TRC_MSG(ECALL_SYNC_DETECTED, "[eCall]sync detected; delay: %+4d; npeaks: %+4d (inverted sync)")
   TRC_MSG(ECALL_SYNC_DETECTED_REGULAR, "[eCall]sync detected; delay: %+4d; npeaks: %+4d (regular sync)")
   TRC_MSG(ECALL_SYNC_MAX_RANGE, "[eCall]maximum sync checking range is [-480...480] samples")
   TRC_MSG(ECALL_SYNC_DETECTE_SLIP, "[eCall]sync check detects sample slip! [%+1d sample(s)]")
   TRC_MSG(ECALL_SYNC_PSAP_MAX_RANGE, "[eCall][PSAP] maximum sync tracking range is [-240...240] samples")
   TRC_MSG(ECALL_SYNC_PSAP_SLIP, "[eCall][PSAP] sync tracking detects sample slip! [%+1d sample(s)]")
   TRC_MSG(ECALL_CONTROL_PORT_UNDEFINE, "[eCall]control callback: port owner undefined.")
   TRC_MSG(ECALL_CONTROL_SYNC_LOCKED, "[eCall]sync locked, starting control message detection")
   TRC_MSG(ECALL_CONTROL_CODEC_INVERSION, "[eCall]codec inversion detected!")
   TRC_MSG(ECALL_CONTROL_MESSAGE_IGNORE, "[eCall]message ignored (bad sync check)")
   TRC_MSG(ECALL_PSAP_MODEM_RECEIVED_SEND_CONTROL, "[eCall][PSAP] SendStart received from control")
   TRC_MSG(ECALL_PSAP_MODEM_RECEIVED_SEND_OVER, "[eCall][PSAP] SendStart received, starting over...")
   TRC_MSG(ECALL_PSAP_MODEM_RECEIVED_SEND_IGNORE, "[eCall][PSAP] SendStart received from control, ignored.")
   TRC_MSG(ECALL_PSAP_MODEM_RECEIVED_HLACK, "[eCall][PSAP] HLACK data received from control")
   TRC_MSG(ECALL_PSAP_MODEM_RECEIVED_HLACK_IGNORE, "[eCall][PSAP] HLACK data received from control, ignored.")
   TRC_MSG(ECALL_PSAP_MODEM_RESET_RECEIVER, "[eCall][PSAP] reset receiver")
   TRC_MSG(ECALL_PSAP_MODEM_RESET_TRANSMITTER, "[eCall][PSAP] reset transmitter")
   TRC_MSG(ECALL_PSAP_MODEM_RECEIVED_SEND, "[eCall][PSAP] received SEND (metric: %3d), initiating START trigger")
   TRC_MSG(ECALL_PSAP_MODEM_INVERSION_DETECT, "[eCall][PSAP] codec inversion detected!")
   TRC_MSG(ECALL_PSAP_MODEM_INVERSION_SYNC, "[eCall][PSAP] codec inversion detected (sync observer)!")
   TRC_MSG(ECALL_PSAP_MODEM_RESTART, "[eCall][PSAP] restart due to tracking failures!")
   TRC_MSG(ECALL_PSAP_MODEM_CRC_FAIL, "[eCall][PSAP] CRC failed; rv = %d")
   TRC_MSG(ECALL_PSAP_MODEM_RECEIVED_MSD, "[eCall][PSAP] MSD successfully received; redundancy versions: %d")
   TRC_MSG(ECALL_PSAP_MODEM_SENDING_HLACK, "[eCall][PSAP] sending HLACK; data: 0x0%X")
   TRC_MSG(ECALL_PSAP_MODEM_SENDING_START, "[eCall][PSAP] sending START")
   TRC_MSG(ECALL_PSAP_MODEM_SENDING_NACK, "[eCall][PSAP] sending NACK")
   TRC_MSG(ECALL_PSAP_MODEM_SENDING_ACK, "[eCall][PSAP] sending ACK")
   TRC_MSG(ECALL_PSAP_MODEM_SENDING_ACK_PEND, "[eCall][PSAP] sending ACK (HLACK pending)")
   TRC_MSG(ECALL_PSAP_MODEM_FAST_REMAIN_IDLE, "[eCall][PSAP] remaining in IDLE mode")
   TRC_MSG(ECALL_PSAP_MODEM_FAST_MODULATION, "[eCall][PSAP] fast modulator chosen (metric: %d)")
   TRC_MSG(ECALL_PSAP_MODEM_ROBUST_MODULATION, "[eCall][PSAP] robust modulator chosen (metric: %d)")

	// pcm record
	TRC_MSG(PCMREC_HISR_DATA_DROP_DSP, "[pcmRec] Drop dsp data due to buffer full, wFrameIdx = %d, rFrameIdx = %d")
	TRC_MSG(PCMREC_HISR_DATA_FROM_DSP, "[pcmRec] SE buffer = %x, len = %x")
	TRC_MSG(PCMREC_GET_MIC_DATA_BUFS, "[pcmRec] procFrameNum=%d, bufBeginIdx=%d, curWriteFrame=%d, pcmRec.bufReadFrame=%d")
	TRC_MSG(PCMREC_GET_DATA_BUFS, "[pcmRec] Get data buffers add1 = %x, len1 = %d, add2 = %x, len2 = %d")
	TRC_MSG(PCMREC_GET_EMPTY_DATA, "[pcmRec] Get data empty buffer")
	
   // RAW pcm record
   TRC_MSG(RAWPCMREC_HISR_DATA_DROP_DSP, "[rawPcmRec] Drop dsp data due to buffer is in using")
   TRC_MSG(RAWPCMREC_HISR_DATA_FROM_DSP, "[rawPcmRec] SE buffer = %x, len = %x")
   TRC_MSG(RAWPCMREC_GET_MIC_DATA_BUFS, "[rawPcmRec] RawPcmRec_GetMicDataBufs: add=%x, header len=%d, UL data len=%d, DL data len=%d")
   TRC_MSG(RAWPCMREC_GET_DATA_BUFS, "[rawPcmRec] Get data buffers add1 = %x, len1 = %d, add2 = %x, len2 = %d")
   TRC_MSG(RAWPCMREC_GET_DATA_INFO, "[rawPcmRec] Get data info %d: UL_fs=%d, UL_byte_len=%d, DL_fs=%d, DL_byte_len=%d")
   TRC_MSG(RAWPCMREC_GET_EMPTY_DATA, "[rawPcmRec] Get data empty buffer")
    
    
	// HW side tone
   TRC_MSG(SIDETONE_START, "[sidetone] Enter SIDETONE_UpdateStart with solutionVer = %d")
   TRC_MSG(SIDETONE_STOP, "[sidetone] Enter SIDETONE_UpdateStop with solutionVer = %d")
	TRC_MSG(SIDETONE_WRITE_TO_HW, "[sidetone] write AFE_SIDETONE_GAIN with 0x%04X")
	

   //BT SCO on ARM
   TRC_MSG(L1AUDIO_BTSCO_SP_ON        ,"[SCO][DRV]Speech On, state: %d, fWideBand = %d")
   TRC_MSG(L1AUDIO_BTSCO_SP_OFF       ,"[SCO][DRV]Speech Off, state: %d")
   TRC_MSG(L1AUDIO_BTSCO_START        ,"[SCO][DRV]Start, state: %d, fWideBand = %d")
   TRC_MSG(L1AUDIO_BTSCO_STOP         ,"[SCO][DRV]Stop, state: %d")
   TRC_MSG(L1AUDIO_BTSCO_PROCESS      ,"[SCO][DRV]Process, state: %d, pRX: 0x%X, pTX: 0x%X")
   TRC_MSG(L1AUDIO_BTSCO_HISR         ,"[SCO][DRV]HISR, state: %d")
   TRC_MSG(L1AUDIO_BTSCO_CONTROL      ,"[SCO][DRV]Control: 0x%X, PacketType: %d, W_Address: 0x%X, R_Address: 0x%X")
   TRC_MSG(L1AUDIO_BTSCO_COPY_RX      ,"[SCO][DRV]Copy_RX, overflow : %d, iPacket_w: %d, iPacket_r: %d, uBufferCount: %d")
   TRC_MSG(L1AUDIO_BTSCO_COPY_TX      ,"[SCO][DRV]Copy_TX, underflow: %d, iPacket_w: %d, iPacket_r: %d, uBufferCount: %d")
   TRC_MSG(L1AUDIO_BTSCO_GET_MEM      ,"[SCO][DRV]GetMemory, uModule: %d, uSize(byte): %d")
   TRC_MSG(L1AUDIO_BTSCO_PROC_TX_RAW  ,"[SCO][DRV]PROC_TX_RAW, RawDataLen(byte): %d,uPcmBuf_w(byte): %d")
   TRC_MSG(L1AUDIO_BTSCO_PROC_TX_SRC  ,"[SCO][DRV]PROC_TX_SRC, uConsumeByte: %d, uOutByte: %d")
   TRC_MSG(L1AUDIO_BTSCO_PROC_TX_CVSD ,"[SCO][DRV]CVSD_TX_CVSD, iPacket_w: %d, iPacket_r: %d, fEnableFilter: %d")
   TRC_MSG(L1AUDIO_BTSCO_PROC_RX_RAW  ,"[SCO][DRV]PROC_RX_RAW, CurrentFreeSpace(byte): %d, TotalFreeSpace(byte): %d, uPcmBuf_r(byte): %d")
   TRC_MSG(L1AUDIO_BTSCO_PROC_RX_PLC  ,"[SCO][DRV]PROC_RX_PLC")
   TRC_MSG(L1AUDIO_BTSCO_PROC_RX_CVSD ,"[SCO][DRV]CVSD_RX_CVSD, iPacket_w: %d, iPacket_r: %d, fEnableFilter: %d, fEnablePLC: %d")
   TRC_MSG(L1AUDIO_BTSCO_ALLOC_MEM    ,"[SCO][DRV]Alloc Memory, Size: %d, ptr: 0x%X")

   TRC_MSG(L1AUDIO_BTSCO_AP_SPEECH_TX_DATA   ,"[SCO][APP]Speech TX data, uCurrentSpace(Byte): %d, uTotalSpace(Byte): %d")
   TRC_MSG(L1AUDIO_BTSCO_AP_SPEECH_TX_OF     ,"[SCO][APP]Speech TX Overflow, freespace(byte): %d")
   TRC_MSG(L1AUDIO_BTSCO_AP_SPEECH_RX_DATA   ,"[SCO][APP]Speech RX data, uCurrentData(Byte): %d, uTotalData(Byte): %d")
   TRC_MSG(L1AUDIO_BTSCO_AP_SPEECH_RX_UF     ,"[SCO][APP]Speech RX Underflow, datacount(byte): %d")

END_TRACE_MAP(MOD_L1SP)
#endif // _L1SP_TRC_H