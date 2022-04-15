#include "../winhttp.h"

//----- (0000000140418D80) ----------------------------------------------------
__int64 __fastcall sub_140418D80(_QWORD* a1)
{
	int* v2; // rax
	__int64 v4; // rbp
	__int64 v5; // rdi
	__int64 v6; // rax
	int v7; // r15d
	int v8; // r14d
	_QWORD* v9; // rax
	__int64 v10; // rdx
	unsigned __int64 v11; // rdi
	int v12; // esi
	unsigned __int64* v13; // rdx
	unsigned __int64 v14; // r8
	_DWORD* v15; // rcx
	__int64* v16; // rax
	int v17; // r14d
	_QWORD* v18; // rax
	__int64 v19; // r10
	unsigned __int64* v20; // rdx
	unsigned __int64 v21; // r8
	_DWORD* v22; // rcx
	__int64* v23; // rax
	int v24; // ebp
	_QWORD* v25; // rax
	__int64 v26; // r10
	unsigned __int64* v27; // rdx
	_DWORD* v28; // rax
	__int64* v29; // rax
	_QWORD* v30; // rax
	__int64 v31; // r10
	__int64 v32; // rdx
	__int64 v33; // [rsp+20h] [rbp-38h] BYREF
	__int64 v34; // [rsp+28h] [rbp-30h]

	v2 = sub_140417BF0(a1, 1u);
	if (v2)
	{
		v4 = sub_14020BD20(v2[97]);
		if (v4)
		{
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v5 = a1[2];
			v6 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v5 + 8) = 5;
			*(_QWORD*)v5 = v6;
			a1[2] += 16i64;
			v7 = sub_1400578C0((__int64)a1);
			v8 = *(_BYTE*)(v4 + 248) & 1;
			v9 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v7);
			v10 = a1[2];
			*(_QWORD*)v10 = *v9;
			*(_DWORD*)(v10 + 8) = *((_DWORD*)v9 + 2);
			a1[2] += 16i64;
			v11 = -1i64;
			v12 = 0;
			v13 = (unsigned __int64*)sub_14018F0E0(&v33, L"bDyeChannel1")[1];
			if (v13)
			{
				v14 = -1i64;
				do
					++v14;
				while (*((_BYTE*)v13 + v14));
				sub_140058710((__int64)a1, v13, v14);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v34)
				sub_14018B900(v34, 0);
			v15 = (_DWORD*)a1[2];
			v15[2] = 1;
			*v15 = v8 != 0;
			a1[2] += 16i64;
			v16 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v16, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v17 = (*(_DWORD*)(v4 + 248) >> 1) & 1;
			v18 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v7);
			*(_QWORD*)v19 = *v18;
			*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
			a1[2] += 16i64;
			v20 = (unsigned __int64*)sub_14018F0E0(&v33, L"bDyeChannel2")[1];
			if (v20)
			{
				v21 = -1i64;
				do
					++v21;
				while (*((_BYTE*)v20 + v21));
				sub_140058710((__int64)a1, v20, v21);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v34)
				sub_14018B900(v34, 0);
			v22 = (_DWORD*)a1[2];
			v22[2] = 1;
			*v22 = v17 != 0;
			a1[2] += 16i64;
			v23 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v23, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v24 = (*(_DWORD*)(v4 + 248) >> 2) & 1;
			v25 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v7);
			*(_QWORD*)v26 = *v25;
			*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
			a1[2] += 16i64;
			v27 = (unsigned __int64*)sub_14018F0E0(&v33, L"bDyeChannel3")[1];
			if (v27)
			{
				do
					++v11;
				while (*((_BYTE*)v27 + v11));
				sub_140058710((__int64)a1, v27, v11);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v34)
				sub_14018B900(v34, 0);
			v28 = (_DWORD*)a1[2];
			LOBYTE(v12) = v24 != 0;
			v28[2] = 1;
			*v28 = v12;
			a1[2] += 16i64;
			v29 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v29, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v30 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v7);
			*(_QWORD*)v31 = *v30;
			*(_DWORD*)(v31 + 8) = *((_DWORD*)v30 + 2);
			a1[2] += 16i64;
			sub_1400579E0((__int64)a1, v32, v7);
			return 1i64;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140418F34: variable 'v19' is possibly undefined
// 140418FF9: variable 'v26' is possibly undefined
// 1404190B8: variable 'v31' is possibly undefined
// 1404190CA: variable 'v32' is possibly undefined
// 140AF9EF8: using guessed type wchar_t aBdyechannel3[13];
// 140AF9F18: using guessed type wchar_t aBdyechannel2[13];
// 140AF9F38: using guessed type wchar_t aBdyechannel1[13];

