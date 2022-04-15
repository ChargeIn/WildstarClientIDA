#include "../winhttp.h"

//----- (00000001400F1C50) ----------------------------------------------------
char __fastcall sub_1400F1C50(__int64 a1, unsigned __int16* a2, __int64 a3)
{
	_QWORD* v3; // rbx
	__int64 v8; // rax
	__int64 v9; // r8
	_QWORD* v10; // rax
	__int64 v11; // rcx
	__int64 v12; // r14
	_QWORD* v13; // rax
	int v14; // ebx
	char* v15; // rax
	int* v16; // rbx
	_QWORD* v17; // rcx
	int v18; // ebx
	_QWORD* v19; // rbx
	char* v20; // rax
	__int64(__fastcall * *v21)(); // r9
	int v22; // eax
	__int64 v23; // rcx
	unsigned __int64 v24; // rdx
	char* v25; // rax
	int* v26; // rbx
	__int64 v27; // rax
	_QWORD* v28; // rcx
	int v29; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-40h] BYREF
	int* v31; // [rsp+38h] [rbp-38h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-30h]
	__int64(__fastcall * *v33)(); // [rsp+50h] [rbp-20h] BYREF
	int* v34; // [rsp+58h] [rbp-18h]
	LPVOID v35; // [rsp+60h] [rbp-10h]
	__int64 v36; // [rsp+90h] [rbp+20h] BYREF

	v3 = *(_QWORD**)(a1 + 16);
	if (!v3)
		return 0;
	if (*(_QWORD*)(v3[4] + 120i64) >= *(_QWORD*)(v3[4] + 112i64))
		sub_14005E2C0((__int64)v3);
	v8 = v3[5];
	if (v8 == v3[10])
		v9 = v3[15];
	else
		v9 = *(_QWORD*)(**(_QWORD**)(v8 + 8) + 24i64);
	v10 = sub_140060AB0((__int64)v3, 0, v9);
	v10[4] = sub_1400F3FF0;
	v11 = v3[2];
	*(_QWORD*)v11 = v10;
	*(_DWORD*)(v11 + 8) = 6;
	v3[2] += 16i64;
	v12 = (__int64)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) - *(_QWORD*)(*(_QWORD*)(a1 + 16) + 24i64)) >> 4;
	v13 = sub_14018F0E0(&v33, a2);
	v14 = sub_140057C60(*(_QWORD**)(a1 + 16), (char*)v13[1]);
	if (v34)
		sub_14018B900((__int64)v34, 0);
	if (v14)
	{
		if (a3)
		{
			v15 = (char*)sub_140056BB0(*(_QWORD**)(a1 + 16), 0xFFFFFFFF, 0i64);
			sub_14018F2D0(&v33, v15);
			v16 = v34;
			sub_140137120(a3, 3, v34);
			if (v16)
				sub_14018B900((__int64)v16, 0);
		}
		else
		{
			v31 = 0i64;
			TlsValue = &off_140B5E648;
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v17 = *(_QWORD**)(a1 + 16);
			v33 = TlsValue;
			v34 = v31;
			v35 = lpTlsValue;
			v36 = sub_140056BB0(v17, 0xFFFFFFFF, 0i64) + 19899968;
			v18 = sub_140196F30(&dword_140C8A0E8, 13, &v36, &v33);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue);
			if (v18)
				DebugBreak();
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 32i64;
		sub_14018C820();
		return 0;
	}
	else
	{
		v19 = *(_QWORD**)(a1 + 16);
		if ((_DWORD)v12)
			v20 = (char*)sub_1400580E0(*(_QWORD*)(a1 + 16), v12) - v19[8];
		else
			v20 = 0i64;
		v21 = (__int64(__fastcall**)())(v19[2] - 16i64);
		LODWORD(v31) = -1;
		TlsValue = v21;
		v22 = sub_140061FB0(
			(__int64)v19,
			(void(__fastcall*)(__int64, __int64))sub_140058DB0,
			(__int64)&TlsValue,
			(__int64)v21 - v19[8],
			(__int64)v20);
		v23 = v19[5];
		v24 = v19[2];
		if (v24 >= *(_QWORD*)(v23 + 16))
			*(_QWORD*)(v23 + 16) = v24;
		if (v22)
		{
			if (a3)
			{
				v25 = (char*)sub_140056BB0(*(_QWORD**)(a1 + 16), 0xFFFFFFFF, 0i64);
				sub_14018F2D0(&v33, v25);
				v26 = v34;
				sub_140137120(a3, 5, v34);
				if (v26)
				{
					sub_14018B900((__int64)v26, 0);
					*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
					return 0;
				}
			}
			else
			{
				if ((unsigned int)sub_1400F4750((_QWORD*)(a1 + 24)) != -1)
				{
					v27 = sub_140056BB0(*(_QWORD**)(a1 + 16), 0xFFFFFFFF, 0i64);
					(*(void(__fastcall**)(_QWORD, __int64))(a1 + 32))(*(_QWORD*)(a1 + 24), v27);
					*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
					return 0;
				}
				v31 = 0i64;
				TlsValue = &off_140B5E648;
				lpTlsValue = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v28 = *(_QWORD**)(a1 + 16);
				v33 = TlsValue;
				v34 = v31;
				v35 = lpTlsValue;
				v36 = sub_140056BB0(v28, 0xFFFFFFFF, 0i64) + 19899968;
				v29 = sub_140196F30(&dword_140C8A0F0, 13, &v36, &v33);
				TlsValue = &off_140B5E648;
				TlsSetValue(dwTlsIndex, lpTlsValue);
				if (v29)
					DebugBreak();
			}
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
			return 0;
		}
		else
		{
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
			return 1;
		}
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A0E8: using guessed type _DWORD dword_140C8A0E8;
// 140C8A0F0: using guessed type _DWORD dword_140C8A0F0;

