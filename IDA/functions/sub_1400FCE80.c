//----- (00000001400FCE80) ----------------------------------------------------
signed int __fastcall sub_1400FCE80(__int64 a1)
{
	HMODULE v2; // rcx
	signed int result; // eax
	__int64 v4; // rcx
	FARPROC LFX_Initialize; // rax
	FARPROC LFX_Release; // rax
	FARPROC LFX_Reset; // rax
	FARPROC LFX_Update; // rax
	FARPROC LFX_UpdateDefault; // rax
	FARPROC LFX_GetNumDevices; // rax
	FARPROC LFX_GetDeviceDescription; // rax
	FARPROC LFX_GetNumLights; // rax
	FARPROC LFX_GetLightDescription; // rax
	FARPROC LFX_GetLightLocation; // rax
	FARPROC LFX_GetLightColor; // rax
	FARPROC LFX_SetLightColor; // rax
	FARPROC LFX_Light; // rax
	FARPROC LFX_SetLightActionColor; // rax
	FARPROC LFX_SetLightActionColorEx; // rax
	FARPROC LFX_ActionColor; // rax
	FARPROC LFX_ActionColorEx; // rax
	FARPROC LFX_SetTiming; // rax
	FARPROC LFX_GetVersion; // rax
	int v24; // eax
	__int64 v25[2]; // [rsp+20h] [rbp-238h] BYREF
	WCHAR Filename[264]; // [rsp+30h] [rbp-228h] BYREF

	if (!*(_QWORD*)(a1 + 32))
		*(_QWORD*)(a1 + 32) = LoadLibraryW(*(LPCWSTR*)(a1 + 8));
	v2 = *(HMODULE*)(a1 + 32);
	if (!v2)
		goto LABEL_4;
	if (!GetModuleFileNameW(v2, Filename, 0x104u))
		goto LABEL_4;
	if (!(unsigned int)sub_1400FD1D0(v4, (__int64)Filename))
		goto LABEL_4;
	LFX_Initialize = GetProcAddress(*(HMODULE*)(a1 + 32), "LFX_Initialize");
	*(_QWORD*)(a1 + 56) = LFX_Initialize;
	if (!LFX_Initialize)
		goto LABEL_4;
	LFX_Release = GetProcAddress(*(HMODULE*)(a1 + 32), "LFX_Release");
	*(_QWORD*)(a1 + 64) = LFX_Release;
	if (!LFX_Release)
		goto LABEL_4;
	LFX_Reset = GetProcAddress(*(HMODULE*)(a1 + 32), "LFX_Reset");
	*(_QWORD*)(a1 + 72) = LFX_Reset;
	if (!LFX_Reset)
		goto LABEL_4;
	LFX_Update = GetProcAddress(*(HMODULE*)(a1 + 32), "LFX_Update");
	*(_QWORD*)(a1 + 80) = LFX_Update;
	if (!LFX_Update)
		goto LABEL_4;
	LFX_UpdateDefault = GetProcAddress(*(HMODULE*)(a1 + 32), "LFX_UpdateDefault");
	*(_QWORD*)(a1 + 88) = LFX_UpdateDefault;
	if (!LFX_UpdateDefault)
		goto LABEL_4;
	LFX_GetNumDevices = GetProcAddress(*(HMODULE*)(a1 + 32), "LFX_GetNumDevices");
	*(_QWORD*)(a1 + 96) = LFX_GetNumDevices;
	if (!LFX_GetNumDevices)
		goto LABEL_4;
	LFX_GetDeviceDescription = GetProcAddress(*(HMODULE*)(a1 + 32), "LFX_GetDeviceDescription");
	*(_QWORD*)(a1 + 104) = LFX_GetDeviceDescription;
	if (!LFX_GetDeviceDescription)
		goto LABEL_4;
	LFX_GetNumLights = GetProcAddress(*(HMODULE*)(a1 + 32), "LFX_GetNumLights");
	*(_QWORD*)(a1 + 112) = LFX_GetNumLights;
	if (!LFX_GetNumLights)
		goto LABEL_4;
	LFX_GetLightDescription = GetProcAddress(*(HMODULE*)(a1 + 32), "LFX_GetLightDescription");
	*(_QWORD*)(a1 + 120) = LFX_GetLightDescription;
	if (!LFX_GetLightDescription)
		goto LABEL_4;
	LFX_GetLightLocation = GetProcAddress(*(HMODULE*)(a1 + 32), "LFX_GetLightLocation");
	*(_QWORD*)(a1 + 128) = LFX_GetLightLocation;
	if (!LFX_GetLightLocation)
		goto LABEL_4;
	LFX_GetLightColor = GetProcAddress(*(HMODULE*)(a1 + 32), "LFX_GetLightColor");
	*(_QWORD*)(a1 + 136) = LFX_GetLightColor;
	if (!LFX_GetLightColor)
		goto LABEL_4;
	LFX_SetLightColor = GetProcAddress(*(HMODULE*)(a1 + 32), "LFX_SetLightColor");
	*(_QWORD*)(a1 + 144) = LFX_SetLightColor;
	if (!LFX_SetLightColor)
		goto LABEL_4;
	LFX_Light = GetProcAddress(*(HMODULE*)(a1 + 32), "LFX_Light");
	*(_QWORD*)(a1 + 152) = LFX_Light;
	if (!LFX_Light)
		goto LABEL_4;
	LFX_SetLightActionColor = GetProcAddress(*(HMODULE*)(a1 + 32), "LFX_SetLightActionColor");
	*(_QWORD*)(a1 + 160) = LFX_SetLightActionColor;
	if (!LFX_SetLightActionColor)
		goto LABEL_4;
	LFX_SetLightActionColorEx = GetProcAddress(*(HMODULE*)(a1 + 32), "LFX_SetLightActionColorEx");
	*(_QWORD*)(a1 + 168) = LFX_SetLightActionColorEx;
	if (!LFX_SetLightActionColorEx)
		goto LABEL_4;
	LFX_ActionColor = GetProcAddress(*(HMODULE*)(a1 + 32), "LFX_ActionColor");
	*(_QWORD*)(a1 + 176) = LFX_ActionColor;
	if (!LFX_ActionColor)
		goto LABEL_4;
	LFX_ActionColorEx = GetProcAddress(*(HMODULE*)(a1 + 32), "LFX_ActionColorEx");
	*(_QWORD*)(a1 + 184) = LFX_ActionColorEx;
	if (LFX_ActionColorEx
		&& (LFX_SetTiming = GetProcAddress(*(HMODULE*)(a1 + 32), "LFX_SetTiming"),
			(*(_QWORD*)(a1 + 192) = LFX_SetTiming) != 0i64)
		&& (LFX_GetVersion = GetProcAddress(*(HMODULE*)(a1 + 32), "LFX_GetVersion"),
			(*(_QWORD*)(a1 + 200) = LFX_GetVersion) != 0i64))
	{
		v24 = (*(__int64 (**)(void))(a1 + 56))();
		*(_DWORD*)(a1 + 40) = v24 == 0;
		*(_DWORD*)(a1 + 44) = v24 != 3;
		if (v24)
		{
			if (v24 != 3)
			{
				v25[0] = 0x141D148A0i64;
				sub_1401A3130(15, 2, v25);
			}
			if ((*(unsigned int (**)(void))(a1 + 64))())
			{
				v25[0] = 0x141D14920i64;
				sub_1401A3130(15, 2, v25);
			}
			return -2147467259;
		}
		else
		{
			return 0;
		}
	}
	else
	{
	LABEL_4:
		result = GetLastError();
		if (result > 0)
			return (unsigned __int16)result | 0x80070000;
	}
	return result;
}
// 1400FCEF1: variable 'v4' is possibly undefined

