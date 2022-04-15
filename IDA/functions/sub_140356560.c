#include "../winhttp.h"

//----- (0000000140356560) ----------------------------------------------------
__int64 __fastcall sub_140356560(__int64 a1, int a2)
{
	__int64 result; // rax
	float v5; // xmm9_4
	float v6; // xmm8_4
	float v7; // xmm0_4
	float v8; // xmm3_4
	float v9; // xmm6_4
	float v10; // xmm0_4
	unsigned int v11; // edi
	_QWORD* v12; // rsi
	int* v13; // r14
	__int64 v14; // r14
	__int64 v15; // r12
	_QWORD* v16; // rdi
	__int64 v17; // rsi
	__int64 v18; // rax
	float v19; // xmm6_4
	__int64* v20; // rsi
	__int64 v21; // rdi
	__int64 v22; // r15
	__int64 v23; // rax
	__int64 v24; // rcx
	float v25; // xmm0_4
	__int64* v26; // rdi
	__int64 v27; // rcx
	__int64 v28; // rcx
	float v29; // xmm0_4
	float v30; // xmm3_4
	bool v31; // zf
	_QWORD v32[4]; // [rsp+50h] [rbp-B0h] BYREF
	int v33; // [rsp+70h] [rbp-90h] BYREF
	float v34; // [rsp+74h] [rbp-8Ch]
	float v35; // [rsp+78h] [rbp-88h]
	int v36; // [rsp+80h] [rbp-80h] BYREF
	int v37; // [rsp+84h] [rbp-7Ch]
	int v38; // [rsp+88h] [rbp-78h]
	char v39[208]; // [rsp+90h] [rbp-70h] BYREF
	__int64 v40[2]; // [rsp+160h] [rbp+60h] BYREF
	__int64 v41[2]; // [rsp+170h] [rbp+70h] BYREF

	if ((*(_BYTE*)(a1 + 232) & 1) == 0)
		return 0i64;
	if (a2)
	{
		if (!*(_QWORD*)(a1 + 5432) || *(_QWORD*)(a1 + 2696) || *(_QWORD*)(a1 + 2704))
		{
			LODWORD(v9) = sub_1403726D0(a1 + 2656, 2u);
			v10 = *(float*)(a1 + 2684);
			if (v10 == 0.0)
				v10 = (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2560) + 256i64))(*(_QWORD*)(a1 + 2560));
			v6 = fminf(v9, (float)(v10 * *(float*)(a1 + 892)) + *(float*)(a1 + 952));
			*(float*)(a1 + 952) = v6;
		}
		else
		{
			v7 = *(float*)(a1 + 2684);
			if (v7 == 0.0)
				v7 = (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2560) + 256i64))(*(_QWORD*)(a1 + 2560));
			v8 = fmaxf(0.0, *(float*)(a1 + 952) - (float)(v7 * *(float*)(a1 + 892)));
			*(float*)(a1 + 952) = v8;
			if (v8 > 0.0)
				sub_1403726D0(a1 + 2656, 2u);
			v6 = *(float*)(a1 + 952);
		}
		if (*(_QWORD*)(a1 + 5432) || *(float*)(a1 + 948) > 0.0)
			LODWORD(v5) = sub_1403726D0(a1 + 2624, 1u);
		else
			v5 = 0.0;
	}
	else
	{
		v5 = 0.0;
		LODWORD(v6) = sub_1403726D0(a1 + 2656, 2u);
	}
	if (!(*(unsigned int(__fastcall**)(__int64, __int64, char*, __int64, _QWORD))(*(_QWORD*)a1 + 440i64))(
		a1,
		a1 + 864,
		v39,
		1073840128i64,
		0i64))
	{
		v40[0] = 0i64;
		v40[1] = 0i64;
	}
	v11 = 0;
	v12 = v32;
	v13 = (int*)v40;
	do
	{
		if (!*v13 || (int)sub_1403543E0(a1, *v13, *(_QWORD*)(a1 + 2560), (int**)&v32[v11]) < 0)
			*v12 = 0i64;
		++v11;
		++v13;
		++v12;
	} while (v11 < 4);
	v14 = a1 + 2592;
	v15 = 4i64;
	v16 = (_QWORD*)(a1 + 2592);
	v17 = 4i64;
	do
	{
		if (*v16)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v16 + 8i64))(*v16);
			*v16 = 0i64;
		}
		v18 = *(_QWORD*)((char*)v16++ + (_QWORD)v32 - a1 - 2592);
		*(v16 - 1) = v18;
		--v17;
	} while (v17);
	v19 = 0.0;
	v20 = (__int64*)(a1 + 2592);
	v21 = 0i64;
	v22 = 4i64;
	v41[0] = 0i64;
	v41[1] = 0i64;
	do
	{
		v23 = *v20;
		if (*v20)
		{
			LODWORD(v32[0]) = 0;
			v24 = *(_QWORD*)(v23 + 40);
			if (!v24 || (*(unsigned int(__fastcall**)(__int64, _QWORD*))(*(_QWORD*)v24 + 16i64))(v24, v32))
			{
				v25 = *(float*)&v39[v21 + 176];
				*(float*)((char*)v41 + v21) = v25;
				v19 = v19 + v25;
			}
		}
		++v20;
		v21 += 4i64;
		--v22;
	} while (v22);
	if (v19 <= 0.0000099999997)
	{
		v28 = *(_QWORD*)(*(_QWORD*)(a1 + 2576) + 40i64);
		if (v28)
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v28 + 112i64))(v28, 0i64);
	}
	else
	{
		v26 = v41;
		do
		{
			if (*(_QWORD*)v14)
			{
				v27 = *(_QWORD*)(*(_QWORD*)v14 + 40i64);
				if (v27)
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v27 + 112i64))(v27, 0i64);
			}
			v14 += 8i64;
			v26 = (__int64*)((char*)v26 + 4);
			--v15;
		} while (v15);
	}
	v33 = 1065353216;
	if (a2)
	{
		if (*(_QWORD*)(a1 + 5432) || *(float*)(a1 + 948) <= 0.0)
		{
			v30 = v5;
		}
		else
		{
			v29 = *(float*)(a1 + 2652);
			if (v29 == 0.0)
				v29 = (*(float(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2560) + 256i64))(*(_QWORD*)(a1 + 2560));
			v30 = fmaxf(0.0, *(float*)(a1 + 948) - (float)(v29 * *(float*)(a1 + 892)));
		}
		v34 = v30;
		if (v30 < 0.0)
		{
			v30 = 0.0;
			v34 = 0.0;
		}
		*(float*)(a1 + 948) = v30;
	}
	else
	{
		v34 = 0.0;
	}
	v31 = *(_QWORD*)(a1 + 2632) == 0i64;
	v35 = v6;
	v36 = 1065353216;
	v37 = 1065353216;
	if (v31)
		v37 = 0;
	v31 = *(_QWORD*)(a1 + 2664) == 0i64;
	v38 = 1065353216;
	if (v31)
		v38 = 0;
	result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, int*, int*, _DWORD, __int64, __int64, unsigned int))(**(_QWORD**)(a1 + 2560) + 56i64))(
		*(_QWORD*)(a1 + 2560),
		*(unsigned int*)(a1 + 880),
		*(unsigned int*)(a1 + 896),
		&v33,
		&v36,
		*(_DWORD*)(a1 + 1608),
		a1 + 1908,
		a1 + 912,
		2 - (unsigned int)(a2 != 0));
	if ((int)result >= 0)
	{
		result = 0i64;
		*(_DWORD*)(a1 + 2656) = 0;
		*(_QWORD*)(a1 + 2684) = 0i64;
		*(_DWORD*)(a1 + 2716) = 0;
	}
	return result;
}

