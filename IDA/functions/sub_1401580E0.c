#include "../winhttp.h"

//----- (00000001401580E0) ----------------------------------------------------
__int64 __fastcall sub_1401580E0(__int64 a1, __int64 a2, __int64 a3, float* a4, __int64 a5)
{
	__int64 v5; // rbx
	float v7; // xmm7_4
	float v8; // xmm6_4
	int v9; // eax
	int v10; // ecx
	unsigned int v11; // edx
	__int128 v12; // xmm1
	int v13; // r15d
	int v14; // ebp
	_QWORD* v15; // rax
	float v16; // xmm2_4
	int v17; // r9d
	int v18; // r12d
	int v19; // r13d
	_QWORD* v20; // rbx
	__int64 v21; // rax
	__int64 v22; // rdi
	__int64 v23; // rcx
	_DWORD* v24; // rax
	__int64 v25; // rax
	int v26; // r11d
	int v27; // r8d
	int v28; // esi
	signed int v29; // edx
	int v30; // ecx
	int v31; // eax
	int v32; // r10d
	int v33; // r9d
	__m128i v34; // xmm1
	float v35; // xmm1_4
	int v37; // [rsp+20h] [rbp-C8h]
	int v38; // [rsp+24h] [rbp-C4h]
	int v39[6]; // [rsp+38h] [rbp-B0h] BYREF
	__int128 v40; // [rsp+50h] [rbp-98h]
	__int128 v41; // [rsp+60h] [rbp-88h]
	float* v44; // [rsp+108h] [rbp+20h]

	v44 = a4;
	v5 = a1;
	*a4 = 0.0;
	v7 = 0.0;
	v8 = 0.0;
	v9 = 0;
	v10 = 0;
	v38 = 0;
	v11 = 1;
	v37 = 0;
	while (1)
	{
		if (v9)
		{
		LABEL_3:
			if (v10)
				return 0i64;
		}
		v12 = *(_OWORD*)(a2 + 16);
		v13 = 0;
		v14 = 0;
		v40 = *(_OWORD*)a2;
		v41 = v12;
		v15 = *(_QWORD**)(v5 + 56);
		v16 = *(float*)(a2 + 4) + *a4;
		*(float*)&v12 = *(float*)(a2 + 20) + *a4;
		v17 = (int)*(float*)&v40;
		v18 = (int)*(float*)&v12;
		v19 = (int)v16;
		v20 = (_QWORD*)*v15;
		if ((_QWORD*)*v15 == v15)
			return v11;
		v21 = a1;
		while (1)
		{
			v22 = v20[2];
			if (*(float*)(v22 + 648) > 0.0)
				break;
		LABEL_31:
			v20 = (_QWORD*)*v20;
			if (v20 == *(_QWORD**)(v21 + 56))
			{
				if (!v13)
					return v11;
				return 0i64;
			}
		}
		v23 = *(_QWORD*)(v22 + 16);
		if (v23 && !sub_1400D1A60(v23) || v22 == a5)
			goto LABEL_30;
		if (*(char*)(v22 + 29) >= 0)
		{
			v24 = sub_1400CB0E0(v22, v39, v22 + 64);
			*(_DWORD*)(v22 + 396) = *v24;
			*(_DWORD*)(v22 + 400) = v24[1];
			*(_DWORD*)(v22 + 404) = v24[2];
			*(_DWORD*)(v22 + 408) = v24[3];
			*(_BYTE*)(v22 + 29) |= 0x80u;
			v25 = v22;
			do
			{
				if (!*(_DWORD*)(v25 + 392))
					break;
				*(_DWORD*)(v25 + 392) = 0;
				v25 = *(_QWORD*)(v25 + 16);
			} while (v25);
			v17 = (int)*(float*)&v40;
		}
		v26 = *(_DWORD*)(v22 + 396);
		v27 = *(_DWORD*)(v22 + 400);
		v28 = *(_DWORD*)(v22 + 404);
		v29 = *(_DWORD*)(v22 + 408);
		v30 = v28;
		v31 = v26;
		v32 = v29;
		if ((int)*(float*)&v41 < v28)
			v30 = (int)*(float*)&v41;
		if (v18 < v29)
			v32 = v18;
		if (v26 < v17)
			v31 = v17;
		v33 = *(_DWORD*)(v22 + 400);
		if (v27 < v19)
			v33 = (int)v16;
		if (v31 < v30 && v33 < v32)
		{
			v17 = (int)*(float*)&v40;
		}
		else
		{
			v17 = (int)*(float*)&v40;
			if ((int)*(float*)&v40 < v26 || (int)*(float*)&v41 > v28 || v19 < v27 || v18 > v29)
			{
				v11 = 1;
			LABEL_30:
				v21 = a1;
				goto LABEL_31;
			}
		}
		v34 = _mm_cvtsi32_si128(v29);
		v11 = 1;
		v35 = _mm_cvtepi32_ps(v34).m128_f32[0] - *(float*)(a2 + 4);
		if ((float)(*(float*)(a2 + 20) - (float)v27) > v7)
		{
			v7 = *(float*)(a2 + 20) - (float)v27;
			v14 = 1;
		}
		if (v35 > v8)
		{
			v8 = v35;
			v14 = 1;
		}
		v13 = 1;
		if (!v14)
			goto LABEL_30;
		v9 = v37;
		v10 = v38;
		v5 = a1;
		a4 = v44;
		if ((float)(*(float*)(a2 + 4) - v7) < *(float*)(a3 + 4))
			v9 = 1;
		v37 = v9;
		if ((float)(v8 + *(float*)(a2 + 20)) > *(float*)(a3 + 20))
			v10 = 1;
		v38 = v10;
		if (v7 >= v8)
		{
			if (!v10)
			{
				a4 = v44;
				v5 = a1;
				*v44 = v8;
			}
		}
		else
		{
			if (v9)
				goto LABEL_3;
			*v44 = v7 * -1.0;
		}
	}
}
// 14015830A: conditional instruction was optimized away because ebp.4==0
// 1401582AC: variable 'v17' is possibly undefined
// 1401583EF: variable 'v11' is possibly undefined
// 1401580E0: using guessed type int var_B0[6];

