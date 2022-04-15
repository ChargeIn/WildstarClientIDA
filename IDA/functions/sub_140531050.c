#include "../winhttp.h"

//----- (0000000140531050) ----------------------------------------------------
__int64 __fastcall sub_140531050(_QWORD* a1)
{
	__int64 v2; // r14
	unsigned __int64* v4; // rbx
	unsigned __int64* v5; // rcx
	int v6; // esi
	int v7; // eax
	int v8; // eax
	int v9; // eax
	__int64 v10; // rbx
	__int64 v11; // rax
	__int64 v12; // rax
	__int64* v13; // rax
	__int64 v14; // rax
	__int64* v15; // rax
	__int64 v16; // rcx
	__int64 v17; // rax
	__int64 v18; // rax
	__int64 v19; // rbx
	unsigned __int16* v20; // rax
	__int64 v21; // rdx
	int v22; // eax
	__int64 v23; // rdx
	__int64 v24; // rax
	__int64 v25; // rdx
	__int64 v26; // rdx
	unsigned __int64 v27; // [rsp+30h] [rbp-38h] BYREF
	int v28; // [rsp+38h] [rbp-30h]
	int v29; // [rsp+3Ch] [rbp-2Ch]
	__m128 v30[2]; // [rsp+40h] [rbp-28h] BYREF
	int v31; // [rsp+98h] [rbp+30h] BYREF
	int v32; // [rsp+9Ch] [rbp+34h]
	int v33; // [rsp+A0h] [rbp+38h] BYREF
	int v34; // [rsp+A4h] [rbp+3Ch]
	unsigned __int64 v35; // [rsp+A8h] [rbp+40h] BYREF

	v2 = sub_14052E9B0(a1);
	if (!v2)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v4 = (unsigned __int64*)dword_140A12138;
	v5 = (unsigned __int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v5 = (unsigned __int64*)(a1[3] + 16i64);
	v6 = 0;
	v7 = *((_DWORD*)v5 + 2);
	if (v7 == 3)
		goto LABEL_9;
	if (v7 == 4 && sub_14005AC80((char*)(*v5 + 32), &v35))
	{
		v28 = 3;
		v5 = &v27;
		v27 = v35;
	LABEL_9:
		v8 = (int)*(double*)v5;
		goto LABEL_10;
	}
	v8 = 0;
LABEL_10:
	v33 = v8;
	if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
		v4 = (unsigned __int64*)(a1[3] + 32i64);
	v9 = *((_DWORD*)v4 + 2);
	if (v9 != 3)
	{
		if (v9 != 4 || !sub_14005AC80((char*)(*v4 + 32), &v35))
			goto LABEL_17;
		v28 = 3;
		v4 = &v27;
		v27 = v35;
	}
	v6 = (int)*(double*)v4;
LABEL_17:
	v34 = v6;
	sub_14052AD50(v2, &v31, &v33);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v10 = a1[2];
	v11 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v10 + 8) = 5;
	*(_QWORD*)v10 = v11;
	a1[2] += 16i64;
	LODWORD(v10) = v31;
	sub_140058710((__int64)a1, (unsigned __int64*)"x", 1ui64);
	v12 = a1[2];
	*(_DWORD*)(v12 + 8) = 3;
	*(double*)v12 = (double)(int)v10;
	a1[2] += 16i64;
	v13 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v13, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	LODWORD(v10) = v32;
	sub_140058710((__int64)a1, (unsigned __int64*)"y", 1ui64);
	v14 = a1[2];
	*(_DWORD*)(v14 + 8) = 3;
	*(double*)v14 = (double)(int)v10;
	a1[2] += 16i64;
	v15 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v15, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	if (*(_DWORD*)(v2 + 1264) == 4)
	{
		v17 = *(_QWORD*)(v2 + 1192);
		if (v17)
		{
			if (qword_140C658F8)
			{
				v18 = sub_140449420(v16, *(unsigned int(__fastcall****)(_QWORD))(v17 + 8), &v31);
				v19 = v18;
				if (v18)
				{
					v20 = (unsigned __int16*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v18 + 8i64))(v18);
					sub_1400F0870((__int64)a1, v21, L"strZone", v20);
					v22 = (**(__int64(__fastcall***)(__int64))v19)(v19);
					sub_1400EFF50((__int64)a1, v23, (unsigned __int64*)"idZone", v22);
					v24 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v19 + 88i64))(v19);
					v27 = *(_QWORD*)v24;
					v28 = *(_DWORD*)(v24 + 8);
					v29 = *(_DWORD*)(v24 + 12);
					LODWORD(v35) = ((int)v27 + v28) >> 1;
					HIDWORD(v35) = (v29 + HIDWORD(v27)) >> 1;
					sub_14044A2D0((int*)&v35, (__int128*)v30);
					v30[0] = _mm_mul_ps(_mm_add_ps(v30[1], v30[0]), (__m128)xmmword_140B7AC50);
					sub_14052AB00(v2, &v35, v30[0].m128_f32);
					sub_1400EFF50((__int64)a1, v25, (unsigned __int64*)"nLabelX", v35);
					sub_1400EFF50((__int64)a1, v26, (unsigned __int64*)"nLabelY", SHIDWORD(v35));
				}
			}
		}
	}
	return 1i64;
}
// 14053126F: variable 'v16' is possibly undefined
// 140531296: variable 'v21' is possibly undefined
// 1405312B0: variable 'v23' is possibly undefined
// 140531324: variable 'v25' is possibly undefined
// 140531337: variable 'v26' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B13418: using guessed type wchar_t aStrzone_2[8];
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140C658F8: using guessed type __int64 qword_140C658F8;

