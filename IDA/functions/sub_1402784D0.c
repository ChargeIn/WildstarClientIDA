#include "../winhttp.h"

//----- (00000001402784D0) ----------------------------------------------------
__int64 __fastcall sub_1402784D0(__int64 a1)
{
	__int64 result; // rax
	__int64 i; // rax
	__int64 v4; // rdi
	__int64 v5; // rax
	unsigned __int64 v6; // kr00_8
	int* v7; // rbx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // r9
	int v11; // ecx
	int v12; // eax
	DWORD dmPelsWidth; // [rsp+20h] [rbp-E0h] BYREF
	DWORD dmPelsHeight; // [rsp+24h] [rbp-DCh]
	__int64 v15; // [rsp+28h] [rbp-D8h]
	__int64 v16; // [rsp+30h] [rbp-D0h]
	int v17; // [rsp+38h] [rbp-C8h]
	WCHAR szDeviceName[48]; // [rsp+40h] [rbp-C0h] BYREF
	DEVMODEW DevMode; // [rsp+A0h] [rbp-60h] BYREF

	result = (*(__int64(__fastcall**)(_QWORD, WCHAR*))(**(_QWORD**)(a1 + 6320) + 56i64))(
		*(_QWORD*)(a1 + 6320),
		szDeviceName);
	if ((int)result >= 0)
	{
		for (i = 0i64; szDeviceName[i]; ++i)
			;
		v4 = i + 1;
		v6 = i + 1;
		v5 = 2 * (i + 1);
		if (!is_mul_ok(v6, 2ui64))
			v5 = -1i64;
		v7 = sub_14018B280(v5, 0);
		sub_1407DB590(v7, (int*)szDeviceName, 2 * v4);
		v8 = *(_QWORD*)(a1 + 6320);
		*(_QWORD*)(a1 + 144) = v7;
		result = (*(__int64(__fastcall**)(__int64, WCHAR*))(*(_QWORD*)v8 + 56i64))(v8, szDeviceName);
		if ((int)result >= 0)
		{
			*(_DWORD*)&DevMode.dmSize = 220;
			EnumDisplaySettingsW(szDeviceName, 0xFFFFFFFF, &DevMode);
			dmPelsWidth = DevMode.dmPelsWidth;
			dmPelsHeight = DevMode.dmPelsHeight;
			if (DevMode.dmDisplayFrequency <= 1)
				v15 = 0i64;
			else
				v15 = DevMode.dmDisplayFrequency | 0x100000000i64;
			v9 = *(_QWORD*)(a1 + 6320);
			v10 = *(_QWORD*)(a1 + 6336);
			v16 = 28i64;
			v17 = 0;
			result = (*(__int64(__fastcall**)(__int64, DWORD*, DWORD*, __int64))(*(_QWORD*)v9 + 72i64))(
				v9,
				&dmPelsWidth,
				&dmPelsWidth,
				v10);
			if ((int)(result + 0x80000000) < 0 || (_DWORD)result == -2005270494)
			{
				v11 = v16;
				*(_QWORD*)(a1 + 96) = 0i64;
				*(_QWORD*)(a1 + 104) = 0i64;
				*(_QWORD*)(a1 + 112) = 0i64;
				*(_QWORD*)(a1 + 120) = 0i64;
				*(_QWORD*)(a1 + 128) = 0i64;
				*(_DWORD*)(a1 + 96) = dmPelsWidth;
				*(_DWORD*)(a1 + 100) = dmPelsHeight;
				*(_DWORD*)(a1 + 112) = (unsigned int)v15 / HIDWORD(v15);
				v12 = sub_14027A000(v11);
				*(_DWORD*)(a1 + 108) = 23;
				*(_DWORD*)(a1 + 104) = v12;
				return 0i64;
			}
		}
	}
	return result;
}

