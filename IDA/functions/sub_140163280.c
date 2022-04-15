#include "../winhttp.h"

//----- (0000000140163280) ----------------------------------------------------
__int64 __fastcall sub_140163280(__int64 a1, int* a2)
{
	__int64 v2; // rax
	int v3; // ebp
	int v4; // edi
	_DWORD* v7; // r8
	int v8; // ecx
	int v9; // edx
	char v11; // al
	__int64 v12; // rcx
	int v13; // ebp
	int v14; // edi
	__int64 v15; // rcx
	int v16; // [rsp+20h] [rbp-38h]
	int v17; // [rsp+28h] [rbp-30h]
	int v18; // [rsp+60h] [rbp+8h] BYREF
	unsigned int v19; // [rsp+68h] [rbp+10h] BYREF
	unsigned int v20; // [rsp+70h] [rbp+18h] BYREF

	v2 = *(int*)(a1 + 1068);
	v3 = *(_DWORD*)(a1 + 904) - *a2;
	v4 = *(_DWORD*)(a1 + 908) - a2[1];
	v20 = -1;
	v19 = -1;
	if ((int)v2 >= 0)
	{
		if ((int)v2 < *(_DWORD*)(a1 + 1144))
		{
			v7 = *(_DWORD**)(*(_QWORD*)(a1 + 1136) + 8 * v2);
			v8 = v7[2];
			v9 = v7[3];
			if (*(_DWORD*)(a1 + 1072) - v3 < v9)
				v9 = *(_DWORD*)(a1 + 1072) - v3;
			if (v8 < v9)
				v8 = v9;
			v7[1] = v8;
			sub_14015F180(a1);
		}
		else
		{
			*(_DWORD*)(a1 + 1068) = -1;
		}
	}
	if (*(int*)(a1 + 1080) >= 0
		&& !*(_QWORD*)(*(_QWORD*)(a1 + 32) + 3384i64)
		&& v3 * v3 + v4 * v4 >= 49
		&& (unsigned int)sub_14018CDF0() - *(_DWORD*)(a1 + 932) > 0x7D)
	{
		v17 = *(_DWORD*)(a1 + 908);
		v16 = *(_DWORD*)(a1 + 904);
		v18 = 0;
		sub_1400D4070(a1, 0x13u, (char*)a1, "ii>b", v16, v17, &v18);
		if (v18)
		{
			sub_1400D23B0(a1, a2);
			return 0i64;
		}
	}
	v11 = sub_140161CD0(a1, a2, (int*)&v20, (int*)&v19);
	v12 = a1;
	if (v11)
	{
		v13 = v19;
		v14 = v20;
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 568i64))(a1, v20, v19);
		v15 = *(_QWORD*)(a1 + 664);
		if ((v15 & 0x20) != 0)
		{
			if ((v15 & 8) != 0)
			{
				if (v14 < 0 || v14 >= *(_DWORD*)(a1 + 1160))
					goto LABEL_28;
			}
			else
			{
				if (v14 < 0 || v14 >= *(_DWORD*)(a1 + 1160) || v13 < 0 || v13 >= *(_DWORD*)(a1 + 1144))
					goto LABEL_28;
				*(_DWORD*)(a1 + 1044) = v13;
			}
			*(_DWORD*)(a1 + 1040) = v14;
		}
	LABEL_28:
		v12 = a1;
		return sub_1400D23B0(v12, a2);
	}
	*(_QWORD*)(a1 + 1040) = -1i64;
	return sub_1400D23B0(v12, a2);
}

