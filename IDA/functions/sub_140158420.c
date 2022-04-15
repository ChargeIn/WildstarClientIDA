#include "../winhttp.h"

//----- (0000000140158420) ----------------------------------------------------
_BOOL8 __fastcall sub_140158420(__int64 a1, __int128* a2, float* a3, float* a4, __int64 a5)
{
	int v5; // r13d
	__int64 v6; // rbx
	float v8; // xmm7_4
	float v9; // xmm6_4
	int v10; // eax
	__int128 v11; // xmm1
	int v12; // r14d
	int v13; // esi
	float v14; // xmm2_4
	int v15; // r15d
	int v16; // r12d
	int v17; // r9d
	_QWORD* v18; // rax
	_QWORD* v19; // rbx
	__int64 v20; // rax
	__int64 v21; // rdi
	__int64 v22; // rcx
	_DWORD* v23; // rax
	__int64 v24; // rax
	int v25; // edx
	int v26; // r8d
	int v27; // r11d
	int v28; // edi
	int v29; // ecx
	int v30; // r10d
	int v31; // eax
	int v32; // r9d
	int v34; // [rsp+20h] [rbp-C8h]
	int v35; // [rsp+24h] [rbp-C4h]
	int v36; // [rsp+28h] [rbp-C0h]
	int v37[4]; // [rsp+40h] [rbp-A8h] BYREF
	__int128 v38; // [rsp+50h] [rbp-98h]
	__int128 v39; // [rsp+60h] [rbp-88h]
	float* v42; // [rsp+108h] [rbp+20h]

	v42 = a4;
	v5 = 0;
	v6 = a1;
	*a4 = 0.0;
	v8 = 0.0;
	v9 = 0.0;
	v10 = 0;
	v36 = 0;
	while (1)
	{
		if (v5)
		{
		LABEL_3:
			if (v10)
				return 0i64;
		}
		v11 = a2[1];
		v12 = 0;
		v13 = 0;
		v38 = *a2;
		v39 = v11;
		v14 = *(float*)&v38 + *a4;
		v15 = (int)*((float*)&v11 + 1);
		v16 = (int)*((float*)&v38 + 1);
		v17 = (int)(float)(*(float*)&v11 + *a4);
		v35 = (int)v14;
		v18 = *(_QWORD**)(v6 + 56);
		v19 = (_QWORD*)*v18;
		v34 = v17;
		if ((_QWORD*)*v18 == v18)
			return 1i64;
		v20 = a1;
		while (1)
		{
			v21 = v19[2];
			if (*(float*)(v21 + 648) > 0.0)
				break;
		LABEL_30:
			v19 = (_QWORD*)*v19;
			if (v19 == *(_QWORD**)(v20 + 56))
				return !v12;
		}
		v22 = *(_QWORD*)(v21 + 16);
		if (v22 && !sub_1400D1A60(v22) || v21 == a5)
			goto LABEL_29;
		if (*(char*)(v21 + 29) >= 0)
		{
			v23 = sub_1400CB0E0(v21, v37, v21 + 64);
			*(_DWORD*)(v21 + 396) = *v23;
			*(_DWORD*)(v21 + 400) = v23[1];
			*(_DWORD*)(v21 + 404) = v23[2];
			*(_DWORD*)(v21 + 408) = v23[3];
			*(_BYTE*)(v21 + 29) |= 0x80u;
			v24 = v21;
			do
			{
				if (!*(_DWORD*)(v24 + 392))
					break;
				*(_DWORD*)(v24 + 392) = 0;
				v24 = *(_QWORD*)(v24 + 16);
			} while (v24);
			v17 = v34;
		}
		v25 = *(_DWORD*)(v21 + 404);
		v26 = *(_DWORD*)(v21 + 396);
		v27 = *(_DWORD*)(v21 + 400);
		v28 = *(_DWORD*)(v21 + 408);
		v29 = v25;
		if (v17 < v25)
			v29 = v17;
		v30 = v28;
		if (v15 < v28)
			v30 = (int)*((float*)&v11 + 1);
		v31 = v26;
		if (v26 < v35)
			v31 = (int)v14;
		v32 = v27;
		if (v27 < v16)
			v32 = v16;
		if (v31 < v29 && v32 < v30)
		{
			v17 = v34;
		}
		else
		{
			v17 = v34;
			if (v35 < v26 || v34 > v25 || v16 < v27 || v15 > v28)
				goto LABEL_29;
		}
		if ((float)(*((float*)a2 + 4) - (float)v26) > v8)
		{
			v8 = *((float*)a2 + 4) - (float)v26;
			v13 = 1;
		}
		if ((float)((float)v25 - *(float*)a2) > v9)
		{
			v9 = (float)v25 - *(float*)a2;
			v13 = 1;
		}
		v12 = 1;
		if (!v13)
		{
		LABEL_29:
			v20 = a1;
			goto LABEL_30;
		}
		v10 = v36;
		v6 = a1;
		a4 = v42;
		if ((float)(*(float*)a2 - v8) < *a3)
			v5 = 1;
		if ((float)(v9 + *((float*)a2 + 4)) > a3[4])
			v10 = 1;
		v36 = v10;
		if (v8 >= v9)
		{
			if (!v10)
			{
				a4 = v42;
				v6 = a1;
				*v42 = v9;
			}
		}
		else
		{
			if (v5)
				goto LABEL_3;
			*v42 = v8 * -1.0;
		}
	}
}
// 140158643: conditional instruction was optimized away because esi.4==0
// 1401585BB: variable 'v17' is possibly undefined
// 140158420: using guessed type int var_A8[4];

