#include "../winhttp.h"

//----- (0000000140052A50) ----------------------------------------------------
__int64 __fastcall sub_140052A50(__int64 a1)
{
	float v3; // xmm7_4
	float v4; // xmm8_4
	__int64 v5; // rax
	float v6; // xmm1_4
	float v7; // xmm2_4
	float v8; // xmm9_4
	float v9; // xmm5_4
	float v10; // xmm4_4
	float v11; // xmm3_4
	float v12; // xmm1_4
	__int64 v13; // r8
	__int64 v14; // rax
	struct tagPOINT v15; // rcx
	__int128 v16; // [rsp+30h] [rbp-78h] BYREF
	int v17[8]; // [rsp+40h] [rbp-68h] BYREF

	v16 = 0i64;
	(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)qword_140C65670 + 624i64))(
		qword_140C65670,
		1i64,
		&v16);
	if (*(_DWORD*)(a1 + 76) == 3)
		return 1i64;
	v3 = (float)*(int*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 136) + 24i64))(*(_QWORD*)(a1 + 136)) + 4);
	v4 = (float)*(int*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 136) + 24i64))(*(_QWORD*)(a1 + 136)) + 8);
	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	v6 = 0.0;
	v7 = 0.0;
	v8 = (float)*(int*)(v5 + 12);
	v9 = (float)*(int*)(v5 + 8);
	v10 = v8 / v4;
	v11 = v9 / v3;
	if ((*(_BYTE*)(a1 + 72) & 4) != 0 && v11 > 1.0 && v10 > 1.0)
	{
		v10 = 1.0;
		v12 = v9 - v3;
		v11 = 1.0;
		v7 = (float)(v8 - v4) * 0.5;
	LABEL_10:
		v6 = v12 * 0.5;
		goto LABEL_11;
	}
	if (v11 >= v10)
	{
		v11 = v8 / v4;
		v12 = v9 - (float)(v10 * v3);
		goto LABEL_10;
	}
	v10 = v9 / v3;
	v7 = (float)(v8 - (float)(v11 * v4)) * 0.5;
LABEL_11:
	*(float*)v17 = v6;
	*(float*)&v17[1] = v7;
	*(float*)&v17[4] = (float)(v11 * v3) + v6;
	*(float*)&v17[5] = (float)(v10 * v4) + v7;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 408i64))(qword_140C65670, 0i64);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 336i64))(qword_140C65670, 0i64);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
		qword_140C65670,
		0i64,
		*(_QWORD*)(a1 + 136),
		0i64,
		0i64);
	(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(a1 + 128),
		1i64);
	(*(void(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, int*))(*(_QWORD*)qword_140C65670 + 664i64))(
		qword_140C65670,
		*(unsigned int*)(a1 + 104),
		v13,
		0i64,
		0i64,
		v17);
	if (*(_DWORD*)(a1 + 40) != 4)
	{
		v14 = *(_QWORD*)(a1 + 32);
		if (v14)
		{
			while (*(_DWORD*)(v14 + 40) == 4)
			{
				v14 = *(_QWORD*)(v14 + 32);
				if (!v14)
					goto LABEL_15;
			}
		}
		else
		{
		LABEL_15:
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 472i64))(
				qword_140C65670,
				*(_QWORD*)(a1 + 112),
				(unsigned int)qword_140C77760,
				HIDWORD(qword_140C77760));
			sub_140252260(v15, (*(_DWORD*)(a1 + 72) & 1) == 0);
		}
	}
	return 0i64;
}
// 140052C68: variable 'v13' is possibly undefined
// 140052CCA: variable 'v15' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C77760: using guessed type __int64 qword_140C77760;

