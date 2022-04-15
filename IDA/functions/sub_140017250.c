//----- (0000000140017250) ----------------------------------------------------
_BOOL8 sub_140017250()
{
	int v0; // eax
	int v1; // edi
	char v2; // r14
	int v3; // ebx
	int v4; // eax
	int v5; // esi
	BOOL v6; // r13d
	unsigned __int64 v7; // rcx
	void* v8; // rsi
	char v9; // r15
	char v10; // r12
	int v11; // edx
	int v12; // r8d
	char v13; // cl
	int v14; // eax
	__int64 v15; // rdx
	__int64 v16; // rdx
	__int64 v17; // rdx
	__int64 v18; // rdx
	__int64 v19; // rdx
	__int64 v20; // rdx
	__int64 v21; // rdx
	__int64 v22; // rdx
	__int64 v23; // rdx
	__int64 v24; // rdx
	__int64 v25; // rdx
	__int64 v26; // rdx
	__int64 v27; // rdx
	__int64 v28; // rdx
	__int64 v29; // rdx
	__int64 v30; // rdx
	int SystemMetrics; // eax
	float v33; // [rsp+34h] [rbp-D4h] BYREF
	__int64 v34; // [rsp+38h] [rbp-D0h] BYREF
	LPVOID ppv; // [rsp+40h] [rbp-C8h] BYREF
	int v36; // [rsp+48h] [rbp-C0h] BYREF
	struct _SYSTEM_INFO SystemInfo; // [rsp+50h] [rbp-B8h] BYREF
	struct _MEMORYSTATUSEX Buffer; // [rsp+80h] [rbp-88h] BYREF

	if ((dword_140C8E0E8 & 1) != 0)
	{
		v0 = dword_140C8E0EC;
	}
	else
	{
		dword_140C8E0E8 |= 1u;
		v0 = sub_140193B70(6u, 0, 0);
		dword_140C8E0EC = v0;
	}
	v1 = 0;
	v2 = 1;
	if (v0)
	{
		if ((dword_140C8E0F0 & 1) != 0)
		{
			v4 = dword_140C8E0F4;
		}
		else
		{
			dword_140C8E0F0 |= 1u;
			v4 = sub_140193B70(6u, 1u, 0);
			dword_140C8E0F4 = v4;
		}
		v3 = 2;
		if (!v4)
			v3 = 1;
	}
	else
	{
		v3 = 0;
	}
	v5 = v3;
	GetSystemInfo(&SystemInfo);
	if (SystemInfo.dwNumberOfProcessors > 2)
	{
		if (SystemInfo.dwNumberOfProcessors <= 4 && v3 > 1)
			v3 = 1;
	}
	else if (v3 > 0)
	{
		v3 = 0;
	}
	Buffer.dwLength = 64;
	GlobalMemoryStatusEx(&Buffer);
	if (Buffer.ullTotalPhys <= 0x100000000i64 || Buffer.ullTotalVirtual <= 0x80000000)
	{
		if (v3 > 0)
			v3 = 0;
	}
	else if ((Buffer.ullTotalPhys <= 0x200000000i64 || Buffer.ullTotalVirtual <= 0x100000000i64) && v3 > 1)
	{
		v3 = 1;
	}
	v6 = v5 == 0;
	v7 = *(_QWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 712i64))(qword_140C65670) + 72);
	if (v7 > 0x20000000)
	{
		if (v7 <= 0x40000000 && v3 > 1)
			v3 = 1;
	}
	else if (v3 > 0)
	{
		v3 = 0;
	}
	if (v3 > 0 && CoInitialize(0i64) >= 0)
	{
		ppv = 0i64;
		v34 = 0i64;
		if (CoCreateInstance(&rclsid, 0i64, 1u, &riid, &ppv) >= 0
			&& (*(int(__fastcall**)(LPVOID, __int64*))(*(_QWORD*)ppv + 64i64))(ppv, &v34) >= 0
			&& (*(int(__fastcall**)(__int64, int*))(*(_QWORD*)v34 + 64i64))(v34, &v36) >= 0
			&& (unsigned int)(v36 - 1) <= 1
			&& (*(int(__fastcall**)(__int64, float*))(*(_QWORD*)v34 + 80i64))(v34, &v33) >= 0)
		{
			if (v33 >= 4.0)
			{
				if (v33 < 7.0 && v3 > 1)
					v3 = 1;
			}
			else
			{
				v3 = 0;
			}
		}
		CoUninitialize();
		if (v34)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v34 + 16i64))(v34);
		if (ppv)
			(*(void(__fastcall**)(LPVOID))(*(_QWORD*)ppv + 16i64))(ppv);
	}
	if (v3)
	{
		if (v3 == 1)
		{
			v8 = &unk_140C3B078;
			v1 = 3;
		}
		else
		{
			v8 = &unk_140C3AF68;
			v1 = 5;
		}
		v9 = 1;
		v10 = 1;
	}
	else
	{
		v2 = 0;
		v9 = 0;
		v8 = &unk_140C3B108;
		v10 = 0;
	}
	sub_1400197A0((__int64)&off_140C3B0B0, v3);
	sub_140019830((__int64)&off_140C46410, *((float*)v8 + 2));
	sub_140019830((__int64)&off_140C46740, *((float*)v8 + 3));
	sub_1400197A0((__int64)&off_140C46840, *((_DWORD*)v8 + 4));
	sub_140019830((__int64)&off_140C465C0, *((float*)v8 + 5));
	sub_1400197A0((__int64)&off_140C46530, *((_DWORD*)v8 + 6));
	sub_1400197A0((__int64)&off_140C468A0, *((_DWORD*)v8 + 7));
	sub_1400197A0((__int64)&off_140C46650, *((_DWORD*)v8 + 8));
	sub_140019830((__int64)&off_140C46470, *((float*)v8 + 9));
	sub_1400197A0((__int64)&off_140C466B0, *((_DWORD*)v8 + 10));
	sub_1400197A0((__int64)&off_140C467A0, *((_DWORD*)v8 + 11));
	sub_1400197A0((__int64)&off_140C464D0, *((_DWORD*)v8 + 12));
	sub_140019830((__int64)&off_140C463B0, 1.0);
	sub_140019710((__int64)&off_140C40500, v2);
	sub_1400197A0((__int64)&off_140C404A0, v1);
	sub_140019710((__int64)&off_140C46800, v9);
	sub_140019710((__int64)&off_140C40540, v10);
	v11 = dword_140C3B0C0;
	v12 = *(_DWORD*)qword_140C63750;
	v13 = dword_140C3B0C0;
	if (*(_DWORD*)qword_140C63750 < dword_140C3B0C0)
		v13 = *(_DWORD*)qword_140C63750;
	if ((((2 << v13) - 1) & dword_140C3B0C8) == 0)
		goto LABEL_62;
	v14 = dword_140C3B0C0;
	if (v12 < dword_140C3B0C0)
		v14 = *(_DWORD*)qword_140C63750;
	if (*((_DWORD*)&off_140C3B0B0 + v14 + 8) != v3)
	{
	LABEL_62:
		if (v12 < dword_140C3B0C0)
			v11 = *(_DWORD*)qword_140C63750;
		sub_14001A770((__int64)&off_140C3B0B0, v11, v3);
		v15 = (unsigned int)dword_140C46420;
		if (*(_DWORD*)qword_140C63750 < dword_140C46420)
			v15 = *(unsigned int*)qword_140C63750;
		(*((void(__fastcall**)(__int64(__fastcall**)(), __int64))off_140C46410 + 4))(&off_140C46410, v15);
		v16 = (unsigned int)dword_140C46750;
		if (*(_DWORD*)qword_140C63750 < dword_140C46750)
			v16 = *(unsigned int*)qword_140C63750;
		(*((void(__fastcall**)(__int64(__fastcall**)(), __int64))off_140C46740 + 4))(&off_140C46740, v16);
		v17 = (unsigned int)dword_140C46850;
		if (*(_DWORD*)qword_140C63750 < dword_140C46850)
			v17 = *(unsigned int*)qword_140C63750;
		(*((void(__fastcall**)(__int64(__fastcall**)(), __int64))off_140C46840 + 4))(&off_140C46840, v17);
		v18 = (unsigned int)dword_140C465D0;
		if (*(_DWORD*)qword_140C63750 < dword_140C465D0)
			v18 = *(unsigned int*)qword_140C63750;
		(*((void(__fastcall**)(__int64(__fastcall**)(), __int64))off_140C465C0 + 4))(&off_140C465C0, v18);
		v19 = (unsigned int)dword_140C46540;
		if (*(_DWORD*)qword_140C63750 < dword_140C46540)
			v19 = *(unsigned int*)qword_140C63750;
		(*((void(__fastcall**)(__int64(__fastcall**)(), __int64))off_140C46530 + 4))(&off_140C46530, v19);
		v20 = (unsigned int)dword_140C468B0;
		if (*(_DWORD*)qword_140C63750 < dword_140C468B0)
			v20 = *(unsigned int*)qword_140C63750;
		(*((void(__fastcall**)(__int64(__fastcall**)(), __int64))off_140C468A0 + 4))(&off_140C468A0, v20);
		v21 = (unsigned int)dword_140C46660;
		if (*(_DWORD*)qword_140C63750 < dword_140C46660)
			v21 = *(unsigned int*)qword_140C63750;
		(*((void(__fastcall**)(__int64(__fastcall**)(), __int64))off_140C46650 + 4))(&off_140C46650, v21);
		v22 = (unsigned int)dword_140C46480;
		if (*(_DWORD*)qword_140C63750 < dword_140C46480)
			v22 = *(unsigned int*)qword_140C63750;
		(*((void(__fastcall**)(__int64(__fastcall**)(), __int64))off_140C46470 + 4))(&off_140C46470, v22);
		v23 = (unsigned int)dword_140C466C0;
		if (*(_DWORD*)qword_140C63750 < dword_140C466C0)
			v23 = *(unsigned int*)qword_140C63750;
		(*((void(__fastcall**)(__int64(__fastcall**)(), __int64))off_140C466B0 + 4))(&off_140C466B0, v23);
		v24 = (unsigned int)dword_140C467B0;
		if (*(_DWORD*)qword_140C63750 < dword_140C467B0)
			v24 = *(unsigned int*)qword_140C63750;
		(*((void(__fastcall**)(__int64(__fastcall**)(), __int64))off_140C467A0 + 4))(&off_140C467A0, v24);
		v25 = (unsigned int)dword_140C464E0;
		if (*(_DWORD*)qword_140C63750 < dword_140C464E0)
			v25 = *(unsigned int*)qword_140C63750;
		(*((void(__fastcall**)(__int64(__fastcall**)(), __int64))off_140C464D0 + 4))(&off_140C464D0, v25);
		v26 = (unsigned int)dword_140C463C0;
		if (*(_DWORD*)qword_140C63750 < dword_140C463C0)
			v26 = *(unsigned int*)qword_140C63750;
		(*((void(__fastcall**)(__int64(__fastcall**)(), __int64))off_140C463B0 + 4))(&off_140C463B0, v26);
		v27 = (unsigned int)dword_140C40510;
		if (*(_DWORD*)qword_140C63750 < dword_140C40510)
			v27 = *(unsigned int*)qword_140C63750;
		(*((void(__fastcall**)(__int64(__fastcall**)(), __int64))off_140C40500 + 4))(&off_140C40500, v27);
		v28 = (unsigned int)dword_140C404B0;
		if (*(_DWORD*)qword_140C63750 < dword_140C404B0)
			v28 = *(unsigned int*)qword_140C63750;
		(*((void(__fastcall**)(__int64(__fastcall**)(), __int64))off_140C404A0 + 4))(&off_140C404A0, v28);
		v29 = (unsigned int)dword_140C46810;
		if (*(_DWORD*)qword_140C63750 < dword_140C46810)
			v29 = *(unsigned int*)qword_140C63750;
		(*((void(__fastcall**)(__int64(__fastcall**)(), __int64))off_140C46800 + 4))(&off_140C46800, v29);
		v30 = (unsigned int)dword_140C40550;
		if (*(_DWORD*)qword_140C63750 < dword_140C40550)
			v30 = *(unsigned int*)qword_140C63750;
		((void(__fastcall*)(__int64(__fastcall***)(), __int64))off_140C40540[4])(&off_140C40540, v30);
	}
	SystemMetrics = GetSystemMetrics(80);
	sub_140019710((__int64)&off_140C3B140, SystemMetrics <= 1);
	return v6;
}
// 140017469: conditional instruction was optimized away because ebx.4 is in (1..2)
// 140017482: conditional instruction was optimized away because ebx.4 is in (1..2)
// 1400174B7: conditional instruction was optimized away because ebx.4==2
// 140C3B0B0: using guessed type __int64 (__fastcall *off_140C3B0B0)();
// 140C3B0C0: using guessed type int dword_140C3B0C0;
// 140C3B0C8: using guessed type int dword_140C3B0C8;
// 140C3B140: using guessed type __int64 (__fastcall *off_140C3B140)();
// 140C404A0: using guessed type __int64 (__fastcall *off_140C404A0)();
// 140C404B0: using guessed type int dword_140C404B0;
// 140C40500: using guessed type __int64 (__fastcall *off_140C40500)();
// 140C40510: using guessed type int dword_140C40510;
// 140C40540: using guessed type __int64 (__fastcall **off_140C40540)();
// 140C40550: using guessed type int dword_140C40550;
// 140C463B0: using guessed type __int64 (__fastcall *off_140C463B0)();
// 140C463C0: using guessed type int dword_140C463C0;
// 140C46410: using guessed type __int64 (__fastcall *off_140C46410)();
// 140C46420: using guessed type int dword_140C46420;
// 140C46470: using guessed type __int64 (__fastcall *off_140C46470)();
// 140C46480: using guessed type int dword_140C46480;
// 140C464D0: using guessed type __int64 (__fastcall *off_140C464D0)();
// 140C464E0: using guessed type int dword_140C464E0;
// 140C46530: using guessed type __int64 (__fastcall *off_140C46530)();
// 140C46540: using guessed type int dword_140C46540;
// 140C465C0: using guessed type __int64 (__fastcall *off_140C465C0)();
// 140C465D0: using guessed type int dword_140C465D0;
// 140C46650: using guessed type __int64 (__fastcall *off_140C46650)();
// 140C46660: using guessed type int dword_140C46660;
// 140C466B0: using guessed type __int64 (__fastcall *off_140C466B0)();
// 140C466C0: using guessed type int dword_140C466C0;
// 140C46740: using guessed type __int64 (__fastcall *off_140C46740)();
// 140C46750: using guessed type int dword_140C46750;
// 140C467A0: using guessed type __int64 (__fastcall *off_140C467A0)();
// 140C467B0: using guessed type int dword_140C467B0;
// 140C46800: using guessed type __int64 (__fastcall *off_140C46800)();
// 140C46810: using guessed type int dword_140C46810;
// 140C46840: using guessed type __int64 (__fastcall *off_140C46840)();
// 140C46850: using guessed type int dword_140C46850;
// 140C468A0: using guessed type __int64 (__fastcall *off_140C468A0)();
// 140C468B0: using guessed type int dword_140C468B0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C8E0E8: using guessed type int dword_140C8E0E8;
// 140C8E0EC: using guessed type int dword_140C8E0EC;
// 140C8E0F0: using guessed type int dword_140C8E0F0;
// 140C8E0F4: using guessed type int dword_140C8E0F4;

