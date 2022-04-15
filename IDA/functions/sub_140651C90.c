#include "../winhttp.h"

//----- (0000000140651C90) ----------------------------------------------------
__int64 __fastcall sub_140651C90(__int64 a1)
{
	int* v2; // rax
	int* v3; // rbx
	__m128* v4; // rax
	__int64 v5; // rcx
	__m128* v6; // rbp
	int v7; // eax
	int v8; // edx
	int v9; // ecx
	__m128 v10; // xmm0
	__int64 v11; // rbx
	__int64 v12; // rax
	int v13; // ebp
	_QWORD* v14; // rax
	__int64 v15; // rdx
	unsigned __int64 v16; // rbx
	unsigned __int64* v17; // rdx
	unsigned __int64 v18; // r8
	__int64 v19; // rax
	__int64* v20; // rax
	_QWORD* v21; // rax
	__int64 v22; // r10
	unsigned __int64* v23; // rdx
	unsigned __int64 v24; // r8
	__int64 v25; // rax
	__int64* v26; // rax
	_QWORD* v27; // rax
	__int64 v28; // r10
	unsigned __int64* v29; // rdx
	__int64 v30; // rax
	__int64* v31; // rax
	_QWORD* v32; // rax
	__int64 v33; // r10
	__int64 v34; // rdx
	__int64 v36; // [rsp+30h] [rbp-28h] BYREF
	__int64 v37; // [rsp+38h] [rbp-20h]

	v2 = (int*)sub_1406622C0(a1, 1);
	v3 = v2;
	if (v2)
	{
		v4 = (__m128*)sub_1403D90D0(qword_140C65898, *v2);
		v6 = v4;
		if (v4)
		{
			v7 = sub_1403D2400(v5, v4);
			v8 = v3[8];
			v9 = dword_140C636A8;
			if (v7 == v8)
			{
				v3[9] = 0;
			}
			else
			{
				v3[9] = 1;
				v3[10] = v9;
			}
			if (v3[9] && (unsigned int)(v9 - v3[10]) < 0x64)
			{
				v3[9] = 0;
				v3[8] = v8 == 0;
			}
			if (v3[8])
			{
				v10 = *((__m128*)v3 + 1);
			}
			else
			{
				v10 = v6[286];
				*((__m128*)v3 + 1) = v10;
			}
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v11 = *(_QWORD*)(a1 + 16);
			v12 = sub_14005C1B0(a1, 0, 0);
			*(_DWORD*)(v11 + 8) = 5;
			*(_QWORD*)v11 = v12;
			*(_QWORD*)(a1 + 16) += 16i64;
			v13 = sub_1400578C0(a1);
			v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
			v15 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v15 = *v14;
			*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			v16 = -1i64;
			v17 = (unsigned __int64*)sub_14018F0E0(&v36, (unsigned __int16*)"x")[1];
			if (v17)
			{
				v18 = -1i64;
				do
					++v18;
				while (*((_BYTE*)v17 + v18));
				sub_140058710(a1, v17, v18);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
				*(_QWORD*)(a1 + 16) += 16i64;
			}
			if (v37)
				sub_14018B900(v37, 0);
			v19 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v19 + 8) = 3;
			*(double*)v19 = v10.m128_f32[0];
			*(_QWORD*)(a1 + 16) += 16i64;
			v20 = (__int64*)sub_1400580E0(a1, -3);
			sub_14005EA50(a1, v20, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 48i64;
			v21 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
			*(_QWORD*)v22 = *v21;
			*(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			v23 = (unsigned __int64*)sub_14018F0E0(&v36, (unsigned __int16*)"y")[1];
			if (v23)
			{
				v24 = -1i64;
				do
					++v24;
				while (*((_BYTE*)v23 + v24));
				sub_140058710(a1, v23, v24);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
				*(_QWORD*)(a1 + 16) += 16i64;
			}
			if (v37)
				sub_14018B900(v37, 0);
			v25 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v25 + 8) = 3;
			*(double*)v25 = v10.m128_f32[1];
			*(_QWORD*)(a1 + 16) += 16i64;
			v26 = (__int64*)sub_1400580E0(a1, -3);
			sub_14005EA50(a1, v26, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 48i64;
			v27 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
			*(_QWORD*)v28 = *v27;
			*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			v29 = (unsigned __int64*)sub_14018F0E0(&v36, (unsigned __int16*)"z")[1];
			if (v29)
			{
				do
					++v16;
				while (*((_BYTE*)v29 + v16));
				sub_140058710(a1, v29, v16);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
				*(_QWORD*)(a1 + 16) += 16i64;
			}
			if (v37)
				sub_14018B900(v37, 0);
			v30 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v30 + 8) = 3;
			*(double*)v30 = v10.m128_f32[2];
			*(_QWORD*)(a1 + 16) += 16i64;
			v31 = (__int64*)sub_1400580E0(a1, -3);
			sub_14005EA50(a1, v31, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 48i64;
			v32 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
			*(_QWORD*)v33 = *v32;
			*(_DWORD*)(v33 + 8) = *((_DWORD*)v32 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_1400579E0(a1, v34, v13);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
		}
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	return 1i64;
}
// 140651CF8: variable 'v5' is possibly undefined
// 140651E6E: variable 'v22' is possibly undefined
// 140651F29: variable 'v28' is possibly undefined
// 140651FE7: variable 'v33' is possibly undefined
// 140651FF9: variable 'v34' is possibly undefined
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

