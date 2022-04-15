#include "../winhttp.h"

//----- (0000000140633D80) ----------------------------------------------------
__int64 __fastcall sub_140633D80(__int64 a1, __int64 a2)
{
	unsigned int v2; // ebx
	__int64 v6; // r13
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // rax
	int* v10; // rax
	__int64 v11; // rbp
	unsigned __int64 v12; // r15
	unsigned __int64 v13; // r14
	__int64 v14; // rdi
	__int64 v15; // rax
	__m128 v16; // xmm3
	__m128 v17; // xmm2
	__int128 v18; // xmm4
	int v19; // xmm0_4
	int v20; // xmm1_4
	int* v21; // rdi
	__int64 v22; // rax
	__int64 v23; // rdx
	int* v24; // rcx
	_QWORD v25[2]; // [rsp+20h] [rbp-B8h] BYREF
	__int128 v26[5]; // [rsp+30h] [rbp-A8h] BYREF
	int v27; // [rsp+80h] [rbp-58h]
	int v28; // [rsp+84h] [rbp-54h]
	int v29; // [rsp+88h] [rbp-50h]
	int v30; // [rsp+98h] [rbp-40h]
	__int64 v31; // [rsp+E0h] [rbp+8h] BYREF
	int* v32; // [rsp+E8h] [rbp+10h] BYREF

	v2 = *(_DWORD*)a2;
	if (*(_DWORD*)a2 < *(_DWORD*)(a1 + 31408))
		return 2147500037i64;
	v6 = a1 + 31416;
	v7 = *(_QWORD*)(a1 + 31424);
	v8 = v7;
	v9 = *(_QWORD*)(v7 + 8);
	while (v9)
	{
		if (*(_DWORD*)(v9 + 32) < v2)
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v8 = v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	}
	if (v8 == v7 || (v31 = v8, v2 < *(_DWORD*)(v8 + 32)))
		v31 = v7;
	if (v31 == *(_QWORD*)(a1 + 31424) || !*(_QWORD*)(v31 + 40))
	{
		v10 = sub_14018B280(96i64, 0);
		if (v10)
			v11 = sub_1407A2BB0((__int64)v10, *(_DWORD*)(a2 + 4), *(_DWORD*)(a2 + 8));
		else
			v11 = 0i64;
		v12 = *(unsigned int*)(a2 + 12);
		v13 = 0i64;
		if (*(_DWORD*)(a2 + 12))
		{
			v14 = 0i64;
			do
			{
				v15 = *(_QWORD*)(a2 + 16);
				v30 = 0;
				v16 = _mm_unpacklo_ps((__m128) * (unsigned int*)(v14 + v15 + 4), (__m128) * (unsigned int*)(v14 + v15 + 12));
				v17 = _mm_unpacklo_ps((__m128) * (unsigned int*)(v14 + v15 + 8), (__m128)0i64);
				v18 = *(_OWORD*)(v14 + v15 + 16);
				v19 = *(_DWORD*)(v14 + v15);
				v20 = *(_DWORD*)(v14 + v15 + 32);
				v29 = *(_DWORD*)(v14 + v15 + 36);
				v26[0] = (__int128)_mm_unpacklo_ps(v16, v17);
				v26[4] = v18;
				v27 = v19;
				v28 = v20;
				sub_1407A7140((__int64*)(v11 + 24), v13, (__int64)v26);
				sub_1407A4640(v11);
				++v13;
				v14 += 40i64;
			} while (v13 < v12);
		}
		v21 = sub_14018B280(16i64, 0);
		*v21 = v2;
		*((_QWORD*)v21 + 1) = v11;
		v21[1] = sub_14018CDF0();
		v22 = *(_QWORD*)(v6 + 8);
		v23 = *(_QWORD*)(v22 + 8);
		v24 = (int*)v22;
		while (v23)
		{
			if (*(_DWORD*)(v23 + 32) < v2)
			{
				v23 = *(_QWORD*)(v23 + 24);
			}
			else
			{
				v24 = (int*)v23;
				v23 = *(_QWORD*)(v23 + 16);
			}
		}
		if (v24 == (int*)v22 || v2 < v24[8])
		{
			v31 = (__int64)v24;
			LODWORD(v25[0]) = v2;
			v25[1] = 0i64;
			sub_140055C60(v6, &v32, &v31, v25);
			v24 = v32;
		}
		*((_QWORD*)v24 + 5) = v21;
	}
	return 0i64;
}

