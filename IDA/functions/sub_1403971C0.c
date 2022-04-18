#include "../winhttp.h"

//----- (00000001403971C0) ----------------------------------------------------
__int64 __fastcall sub_1403971C0(__int64 a1)
{
	__int64 result; // rax
	int v3; // edx
	__int64 v4; // rdi
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rax
	int v8; // edx
	__int64 v9; // rax
	__int64 v10; // rcx
	int v11; // edx
	__m128* v12; // rcx
	__int32 v13; // edx
	float v14; // xmm2_4
	float v15; // xmm3_4
	__m128 v16; // xmm1
	__m128 v17; // xmm3
	__int64 v18; // rax
	__int64 v19; // rcx
	__int64 v20; // rax
	__int64 v21; // rax
	__int64 v22; // rcx
	int v23; // ebx
	__int64 v24; // rax
	__int64 v25; // r13
	__int64 v26; // rax
	__int64 v27; // rax
	int* v28; // rax
	int* v29; // rax
	_QWORD* v30; // r12
	int* v31; // r14
	__int64 v32; // rax
	__int64 v34; // r15
	int* v35; // rax
	__int64 v36; // rcx
	int* v37; // rdx
	__int64 v38; // rax
	_WORD* v39; // r8
	int v40; // [rsp+30h] [rbp-D0h]
	char v41[8]; // [rsp+38h] [rbp-C8h] BYREF
	int* v42; // [rsp+40h] [rbp-C0h]
	int* v43; // [rsp+48h] [rbp-B8h]
	__int64 v44; // [rsp+50h] [rbp-B0h]
	__int64(__fastcall * *v45)(); // [rsp+60h] [rbp-A0h] BYREF
	char v46[8]; // [rsp+68h] [rbp-98h] BYREF
	_WORD* v47; // [rsp+70h] [rbp-90h]
	_WORD* v48; // [rsp+78h] [rbp-88h]
	__int128 v49; // [rsp+120h] [rbp+20h]
	int* v50; // [rsp+130h] [rbp+30h]
	int v51[128]; // [rsp+140h] [rbp+40h] BYREF

	result = sub_14055A260((_DWORD*)(a1 + 29488));
	v3 = *(_DWORD*)(a1 + 25796);
	v4 = 0i64;
	if ((_DWORD)result)
	{
		if (v3
			&& (v5 = sub_1403D90D0(a1, v3)) != 0
			&& (v6 = *(_QWORD*)(v5 + 6408), *(_BYTE*)(v6 + 4))
			&& *(_QWORD*)(v6 + 64))
		{
			result = *(unsigned int*)(v5 + 8);
		}
		else
		{
			result = 0i64;
		}
		*(_DWORD*)(a1 + 26400) = result;
		if (!(_DWORD)result)
		{
			v7 = *(_QWORD*)(a1 + 25744);
			if (v7
				&& (v8 = *(_DWORD*)(v7 + 264)) != 0
				&& (v9 = sub_1403D90D0(a1, v8)) != 0
				&& (v10 = *(_QWORD*)(v9 + 6408), *(_BYTE*)(v10 + 4))
				&& *(_QWORD*)(v10 + 64))
			{
				result = *(unsigned int*)(v9 + 8);
			}
			else
			{
				result = 0i64;
			}
			*(_DWORD*)(a1 + 26400) = result;
		}
		if (!*(_DWORD*)(a1 + 26400))
		{
			v11 = *(_DWORD*)(a1 + 26408);
		LABEL_41:
			v21 = sub_1403D90D0(a1, v11);
			if (v21)
			{
				v22 = *(_QWORD*)(v21 + 6408);
				if (*(_BYTE*)(v22 + 4))
				{
					if (*(_QWORD*)(v22 + 64))
					{
						result = *(unsigned int*)(v21 + 8);
					LABEL_46:
						*(_DWORD*)(a1 + 26400) = result;
						goto LABEL_47;
					}
				}
			}
		LABEL_45:
			result = 0i64;
			goto LABEL_46;
		}
		goto LABEL_47;
	}
	if (v3)
	{
		result = sub_1403D90D0(a1, v3);
		v12 = (__m128*)result;
		if (result)
		{
			result = *(_QWORD*)(result + 6408);
			if (*(_BYTE*)(result + 4))
			{
				if (*(_QWORD*)(result + 64))
				{
					v13 = v12->m128_i32[2];
					goto LABEL_26;
				}
			}
		}
	}
	else
	{
		v12 = 0i64;
	}
	v13 = 0;
LABEL_26:
	v14 = 0.0;
	*(_DWORD*)(a1 + 26400) = v13;
	v15 = 0.0;
	if (v12)
	{
		v16 = _mm_sub_ps(v12[286], *(__m128*)(*(_QWORD*)(a1 + 120) + 4576i64));
		result = v12[400].m128_i64[1];
		v17 = _mm_mul_ps(v16, v16);
		v15 = (float)(v17.m128_f32[0] + _mm_shuffle_ps(v17, v17, 85).m128_f32[0])
			+ _mm_shuffle_ps(v17, v17, 170).m128_f32[0];
		if (*(float*)(result + 16) <= 0.0)
			v14 = 5.0;
		else
			v14 = *(float*)(result + 16);
	}
	if (!v13 || v15 > (float)(v14 * v14))
	{
		v18 = sub_1403D90D0(a1, *(_DWORD*)(a1 + 26408));
		if (v18 && (v19 = *(_QWORD*)(v18 + 6408), *(_BYTE*)(v19 + 4)) && *(_QWORD*)(v19 + 64))
			result = *(unsigned int*)(v18 + 8);
		else
			result = 0i64;
		*(_DWORD*)(a1 + 26400) = result;
	}
	if (!*(_DWORD*)(a1 + 26400))
	{
		v20 = *(_QWORD*)(a1 + 25744);
		if (!v20)
			goto LABEL_45;
		v11 = *(_DWORD*)(v20 + 264);
		if (!v11)
			goto LABEL_45;
		goto LABEL_41;
	}
LABEL_47:
	v23 = *(_DWORD*)(a1 + 26400);
	if (*(_DWORD*)(a1 + 26404) != v23)
	{
		*(_DWORD*)(a1 + 26404) = v23;
		sub_1407E4830(v51, 0i64, 0x200ui64);
		if (v23 && (v24 = sub_1403D90D0(a1, v23), (v25 = v24) != 0) && (v26 = *(_QWORD*)(v24 + 24)) != 0)
		{
			v27 = sub_140200EE0(*(_DWORD*)(v26 + 308));
			if (v27)
				v40 = *(_DWORD*)(v27 + 4);
			else
				v40 = *(_DWORD*)(*(_QWORD*)(v25 + 6408) + 48i64);
			sub_1400B6F30((__int64)&v45);
			v45 = off_140B69230;
			v50 = 0i64;
			v49 = 0i64;
			v28 = sub_14018B280(16i64, 0);
			*(_QWORD*)&v49 = v28;
			*((_QWORD*)&v49 + 1) = v28;
			v50 = v28 + 4;
			if (v28)
				*(_WORD*)v28 = 0;
			v29 = sub_14018B280(96i64, 0);
			if (v29)
				v30 = (_QWORD*)sub_1404DB7E0((__int64)v29, v25);
			else
				v30 = 0i64;
			v31 = 0i64;
			v42 = 0i64;
			v43 = 0i64;
			v44 = 0i64;
			v32 = 0i64;
			while (aUnit[++v32] != 0)
				;
			v34 = (2 * v32) >> 1;
			if ((unsigned __int64)(v34 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v31 = sub_14018B280(2 * (v34 + 1), 0);
				v42 = v31;
				v43 = v31;
				v44 = (__int64)v31 + 2 * v34 + 2;
			}
			sub_1407DB590(v31, (int*)L"unit", 2 * v34);
			v35 = (int*)((char*)v31 + 2 * v34);
			v43 = v35;
			if (v35)
				*(_WORD*)v35 = 0;
			sub_1400B7480((__int64)&v45, v30);
			(*(void(__fastcall**)(_QWORD*, char*))(*v30 + 72i64))(v30, v41);
			v36 = (__int64)v42;
			if (v42)
				sub_14018B900((__int64)v42, 0);
			v37 = (int*)sub_14034BDD0(v36, v40);
			if (v37)
			{
				v38 = 0i64;
				if (*(_WORD*)v37)
				{
					do
						++v38;
					while (*((_WORD*)v37 + v38));
				}
				sub_14001C480((__int64)v46, v37, (int*)((char*)v37 + 2 * v38));
			}
			else if (v47 != v48)
			{
				*v47 = 0;
				v48 = v47;
			}
			v39 = *(_WORD**)(sub_1400B7660(&v45) + 8);
			if (*v39)
			{
				do
					++v4;
				while (v39[v4]);
			}
			sub_14001B2D0(v51, v4 + 1, (__int64)v39);
			Apollo_LUAEvent(*(_QWORD*)(a1 + 29504), "InteractiveUnitChanged", "US", *(unsigned int*)(v25 + 8), v51);
			if ((_QWORD)v49)
				sub_14018B900(v49, 0);
			return (__int64)sub_1400B7390(&v45);
		}
		else
		{
			return Apollo_LUAEvent(*(_QWORD*)(a1 + 29504), "InteractiveUnitChanged", "US", 0i64, v51);
		}
	}
	return result;
}
// 14039758F: variable 'v36' is possibly undefined
// 140AF5628: using guessed type wchar_t aUnit[5];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 1403971C0: using guessed type int var_230[128];
// 1403971C0: using guessed type char var_338[8];
// 1403971C0: using guessed type char var_308[8];

