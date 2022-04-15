#include "../winhttp.h"

//----- (00000001403ABC00) ----------------------------------------------------
void __fastcall sub_1403ABC00(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
	__int64 v5; // rax
	unsigned int v6; // edx
	__int64 v7; // rax
	int v8; // eax
	int v9; // eax
	_QWORD* v10; // rax
	__int64 v11; // r10
	__int64 v12; // rdx
	_QWORD* v13; // rax
	__int64 v14; // r10
	__int64 v15; // rdx
	__int64 v16; // rbx
	unsigned __int64* v17; // rdx
	unsigned __int64 v18; // r8
	_QWORD* v19; // rax
	__int64 v20; // r10
	__int64 v21; // rdx
	_QWORD* v22; // rax
	__int64 v23; // r10
	__int64 v24; // rdx
	_QWORD* v25; // rax
	__int64 v26; // r10
	__int64 v27; // rdx
	_QWORD* v28; // rax
	__int64 v29; // r10
	__int64 v30; // rdx
	__int64 v31; // rax
	__int64* v32; // rax
	__int64 v33; // rdi
	__int64 v34; // rbx
	__int64 v35; // rax
	__int64 v36; // rdx
	__int64 v37; // [rsp+20h] [rbp-28h] BYREF
	__int64 v38; // [rsp+28h] [rbp-20h]

	v5 = sub_1403ABB90(a1, a2, a3);
	if (v5)
	{
		sub_1403AAFE0(v5, a4);
		return;
	}
	v7 = sub_14022F2C0(v6);
	if (v7)
	{
		v8 = *(_DWORD*)(v7 + 8);
		if (v8)
		{
			v9 = v8 - 1;
			if (!v9)
			{
				v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a4 + 16) + 32i64) + 160i64), *(_DWORD*)(a4 + 8));
				v21 = *(_QWORD*)(v20 + 16);
				*(_QWORD*)v21 = *v19;
				*(_DWORD*)(v21 + 8) = *((_DWORD*)v19 + 2);
				*(_QWORD*)(v20 + 16) += 16i64;
				sub_1400F06F0(*(_QWORD*)(a4 + 16), v21, L"eValueType", 1);
				*(_QWORD*)(*(_QWORD*)(a4 + 16) + 16i64) -= 16i64;
				v22 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a4 + 16) + 32i64) + 160i64), *(_DWORD*)(a4 + 8));
				v24 = *(_QWORD*)(v23 + 16);
				*(_QWORD*)v24 = *v22;
				*(_DWORD*)(v24 + 8) = *((_DWORD*)v22 + 2);
				*(_QWORD*)(v23 + 16) += 16i64;
				sub_1400F06F0(*(_QWORD*)(a4 + 16), v24, L"nValue", 0);
			LABEL_20:
				*(_QWORD*)(*(_QWORD*)(a4 + 16) + 16i64) -= 16i64;
				goto LABEL_21;
			}
			if (v9 != 1)
			{
			LABEL_21:
				v33 = *(_QWORD*)(a4 + 16);
				if (*(_QWORD*)(*(_QWORD*)(v33 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v33 + 32) + 112i64))
					sub_14005E2C0(*(_QWORD*)(a4 + 16));
				v34 = *(_QWORD*)(v33 + 16);
				v35 = sub_14005C1B0(v33, 0, 0);
				*(_DWORD*)(v34 + 8) = 5;
				*(_QWORD*)v34 = v35;
				*(_QWORD*)(v33 + 16) += 16i64;
				LODWORD(v34) = sub_1400578C0(v33);
				sub_1400FB2A0(a4, (__int64)L"tModifiers", v34);
				sub_1400579E0(v33, v36, v34);
				return;
			}
			v10 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a4 + 16) + 32i64) + 160i64), *(_DWORD*)(a4 + 8));
			v12 = *(_QWORD*)(v11 + 16);
			*(_QWORD*)v12 = *v10;
			*(_DWORD*)(v12 + 8) = *((_DWORD*)v10 + 2);
			*(_QWORD*)(v11 + 16) += 16i64;
			sub_1400F06F0(*(_QWORD*)(a4 + 16), v12, L"eValueType", 2);
			*(_QWORD*)(*(_QWORD*)(a4 + 16) + 16i64) -= 16i64;
			v13 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a4 + 16) + 32i64) + 160i64), *(_DWORD*)(a4 + 8));
			v15 = *(_QWORD*)(v14 + 16);
			*(_QWORD*)v15 = *v13;
			*(_DWORD*)(v15 + 8) = *((_DWORD*)v13 + 2);
			*(_QWORD*)(v14 + 16) += 16i64;
			v16 = *(_QWORD*)(a4 + 16);
			v17 = (unsigned __int64*)sub_14018F0E0(&v37, L"nValue")[1];
			if (v17)
			{
				v18 = -1i64;
				do
					++v18;
				while (*((_BYTE*)v17 + v18));
			LABEL_16:
				sub_140058710(v16, v17, v18);
				goto LABEL_17;
			}
		}
		else
		{
			v25 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a4 + 16) + 32i64) + 160i64), *(_DWORD*)(a4 + 8));
			v27 = *(_QWORD*)(v26 + 16);
			*(_QWORD*)v27 = *v25;
			*(_DWORD*)(v27 + 8) = *((_DWORD*)v25 + 2);
			*(_QWORD*)(v26 + 16) += 16i64;
			sub_1400F06F0(*(_QWORD*)(a4 + 16), v27, L"eValueType", 0);
			*(_QWORD*)(*(_QWORD*)(a4 + 16) + 16i64) -= 16i64;
			v28 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a4 + 16) + 32i64) + 160i64), *(_DWORD*)(a4 + 8));
			v30 = *(_QWORD*)(v29 + 16);
			*(_QWORD*)v30 = *v28;
			*(_DWORD*)(v30 + 8) = *((_DWORD*)v28 + 2);
			*(_QWORD*)(v29 + 16) += 16i64;
			v16 = *(_QWORD*)(a4 + 16);
			v17 = (unsigned __int64*)sub_14018F0E0(&v37, L"nValue")[1];
			if (v17)
			{
				v18 = -1i64;
				do
					++v18;
				while (*((_BYTE*)v17 + v18));
				goto LABEL_16;
			}
		}
		*(_DWORD*)(*(_QWORD*)(v16 + 16) + 8i64) = 0;
		*(_QWORD*)(v16 + 16) += 16i64;
	LABEL_17:
		if (v38)
			sub_14018B900(v38, 0);
		v31 = *(_QWORD*)(v16 + 16);
		*(_QWORD*)v31 = 0x3FF0000000000000i64;
		*(_DWORD*)(v31 + 8) = 3;
		*(_QWORD*)(v16 + 16) += 16i64;
		v32 = (__int64*)sub_1400580E0(v16, -3);
		sub_14005EA50(v16, v32, (int*)(*(_QWORD*)(v16 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v16 + 16) - 16i64));
		*(_QWORD*)(v16 + 16) -= 32i64;
		goto LABEL_20;
	}
}
// 1403ABC25: variable 'v6' is possibly undefined
// 1403ABC6F: variable 'v11' is possibly undefined
// 1403ABCBA: variable 'v14' is possibly undefined
// 1403ABD1B: variable 'v20' is possibly undefined
// 1403ABD66: variable 'v23' is possibly undefined
// 1403ABDAA: variable 'v26' is possibly undefined
// 1403ABDF2: variable 'v29' is possibly undefined
// 1403ABF0E: variable 'v36' is possibly undefined
// 140AF56A8: using guessed type wchar_t aEvaluetype_1[11];
// 140AF5938: using guessed type wchar_t aEvaluetype_2[11];
// 140AF5950: using guessed type wchar_t aNvalue_6[7];
// 140AF5960: using guessed type wchar_t aEvaluetype_0[11];
// 140AF5978: using guessed type wchar_t aNvalue_7[7];
// 140AF5988: using guessed type wchar_t aTmodifiers_0[11];
// 140AF59A0: using guessed type wchar_t aNvalue_5[7];

