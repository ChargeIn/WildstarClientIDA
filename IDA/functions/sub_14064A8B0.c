#include "../winhttp.h"

//----- (000000014064A8B0) ----------------------------------------------------
__int64 __fastcall sub_14064A8B0(__int64 a1)
{
	float* v2; // rsi
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // eax
	int v6; // ebp
	__int64 v7; // rax
	__int64 v8; // rdx
	__int64 v9; // r8
	__int64 v10; // r9
	unsigned int v11; // ebx
	float v12; // xmm6_4
	float v13; // xmm7_4
	_QWORD* v14; // rax
	__int64 v15; // rdx
	unsigned __int64* v16; // rdx
	unsigned __int64 v17; // r8
	__int64 v18; // rax
	__int64* v19; // rax
	__int64 v20; // rdx
	__int64 v21; // r8
	__int64 v22; // r9
	_QWORD* v23; // rax
	__int64 v24; // rdx
	unsigned __int64* v25; // rdx
	unsigned __int64 v26; // r8
	__int64 v27; // rax
	__int64* v28; // rax
	_QWORD* v29; // rax
	__int64 v30; // rdx
	int v31; // r10d
	_QWORD* v32; // rax
	__int64 v33; // r10
	__int64 v34; // rdx
	__int64 v36; // [rsp+20h] [rbp-48h] BYREF
	__int64 v37; // [rsp+28h] [rbp-40h]

	v2 = (float*)sub_1406499E0(a1);
	if (v2)
	{
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v3 = *(_QWORD*)(a1 + 16);
		v4 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v3 + 8) = 5;
		*(_QWORD*)v3 = v4;
		*(_QWORD*)(a1 + 16) += 16i64;
		v5 = sub_1400578C0(a1);
		v6 = v5;
		if (v2[379] <= 0.0)
		{
			v23 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v5);
			v24 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v24 = *v23;
			*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			v25 = (unsigned __int64*)sub_14018F0E0(&v36, L"nAmount")[1];
			if (v25)
			{
				v26 = -1i64;
				do
					++v26;
				while (*((_BYTE*)v25 + v26));
				sub_140058710(a1, v25, v26);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
				*(_QWORD*)(a1 + 16) += 16i64;
			}
			if (v37)
				sub_14018B900(v37, 0);
			v27 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v27 = 0i64;
			*(_DWORD*)(v27 + 8) = 3;
			*(_QWORD*)(a1 + 16) += 16i64;
			v28 = (__int64*)sub_1400580E0(a1, -3);
			sub_14005EA50(a1, v28, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		}
		else
		{
			v7 = sub_140200220(0x58u);
			if (v7)
				v11 = *(_DWORD*)(v7 + 4);
			else
				v11 = 500;
			v12 = v2[379];
			v13 = (float)((float)(sub_1404602F0((__int64)v2, v8, v9, v10) * (float)(0x3E8 / v11)) / v12) * 100.0;
			v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v6);
			v15 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v15 = *v14;
			*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			v16 = (unsigned __int64*)sub_14018F0E0(&v36, L"nAmount")[1];
			if (v16)
			{
				v17 = -1i64;
				do
					++v17;
				while (*((_BYTE*)v16 + v17));
				sub_140058710(a1, v16, v17);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
				*(_QWORD*)(a1 + 16) += 16i64;
			}
			if (v37)
				sub_14018B900(v37, 0);
			v18 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v18 + 8) = 3;
			*(double*)v18 = v13;
			*(_QWORD*)(a1 + 16) += 16i64;
			v19 = (__int64*)sub_1400580E0(a1, -3);
			sub_14005EA50(a1, v19, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		}
		*(_QWORD*)(a1 + 16) -= 48i64;
		sub_1404604D0(v2, v20, v21, v22);
		v29 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v6);
		v30 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v30 = *v29;
		*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v30, L"eDRState", v31);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v32 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v6);
		*(_QWORD*)v33 = *v32;
		*(_DWORD*)(v33 + 8) = *((_DWORD*)v32 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400579E0(a1, v34, v6);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	return 1i64;
}
// 14064A965: variable 'v8' is possibly undefined
// 14064A965: variable 'v9' is possibly undefined
// 14064A965: variable 'v10' is possibly undefined
// 14064AB12: variable 'v20' is possibly undefined
// 14064AB12: variable 'v21' is possibly undefined
// 14064AB12: variable 'v22' is possibly undefined
// 14064AB4E: variable 'v31' is possibly undefined
// 14064AB74: variable 'v33' is possibly undefined
// 14064AB86: variable 'v34' is possibly undefined
// 140B2BD20: using guessed type wchar_t aNamount_6[8];
// 140B2BD30: using guessed type wchar_t aEdrstate[9];
// 140B2BD58: using guessed type wchar_t aNamount_5[8];

