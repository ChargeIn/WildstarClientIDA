#include "../winhttp.h"

//----- (0000000140144EF0) ----------------------------------------------------
__m128 __fastcall sub_140144EF0(_QWORD* a1, const char* a2, unsigned int a3, unsigned __int64* a4, int a5)
{
	int v6; // esi
	unsigned __int64 v9; // r8
	void* v10; // rax
	__int64 v11; // rcx
	int v12; // eax
	__int64 v13; // rax
	int v14; // ebp
	void* v15; // rax
	__int64 v16; // rcx
	int v17; // eax
	__int64 v18; // rax
	int v19; // ecx
	__int64* v20; // rax
	__m128d v21; // xmm0
	__int64 v23; // rax
	int v24; // ecx
	__int64* v25; // rax
	__m128d v26; // xmm0
	__int64 v27; // [rsp+30h] [rbp-28h] BYREF
	int v28; // [rsp+38h] [rbp-20h]
	__int64 v29; // [rsp+60h] [rbp+8h] BYREF

	v6 = a3;
	if (a3 >= 0xFFFFD8F1 || a3 == 0)
		v6 = ((__int64)(a1[2] - a1[3]) >> 4) + a3 + 1;
	if (a4)
	{
		v9 = -1i64;
		do
			++v9;
		while (*((_BYTE*)a4 + v9));
		sub_140058710((__int64)a1, a4, v9);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	v10 = sub_1400580E0((__int64)a1, v6);
	sub_14005E8E0((__int64)a1, (__int64)v10, (int*)(a1[2] - 16i64), a1[2] - 16i64);
	v11 = a1[2];
	v12 = *(_DWORD*)(v11 - 8);
	if (v12 == 3 || v12 == 4 && sub_14005AC80((char*)(*(_QWORD*)(v11 - 16) + 32i64), (unsigned __int64*)&v29))
	{
		v23 = a1[2];
		v24 = *(_DWORD*)(v23 - 8);
		v25 = (__int64*)(v23 - 16);
		if (v24 != 3)
		{
			if (v24 != 4 || !sub_14005AC80((char*)(*v25 + 32), (unsigned __int64*)&v29))
			{
				v26 = 0i64;
				goto LABEL_26;
			}
			v28 = 3;
			v25 = &v27;
			v27 = v29;
		}
		v26 = (__m128d)(unsigned __int64) * v25;
	LABEL_26:
		a1[2] -= 16i64;
		return _mm_cvtpd_ps(v26);
	}
	a1[2] -= 16i64;
	v13 = a1[2];
	v14 = a5;
	*(_DWORD*)(v13 + 8) = 3;
	*(double*)v13 = (double)v14;
	a1[2] += 16i64;
	v15 = sub_1400580E0((__int64)a1, v6);
	sub_14005E8E0((__int64)a1, (__int64)v15, (int*)(a1[2] - 16i64), a1[2] - 16i64);
	v16 = a1[2];
	v17 = *(_DWORD*)(v16 - 8);
	if (v17 != 3 && (v17 != 4 || !sub_14005AC80((char*)(*(_QWORD*)(v16 - 16) + 32i64), (unsigned __int64*)&v29)))
		sub_140056830(a1, (unsigned __int64*)"%s missing attribute %s or [%d]", a2, (const char*)a4, v14);
	v18 = a1[2];
	v19 = *(_DWORD*)(v18 - 8);
	v20 = (__int64*)(v18 - 16);
	if (v19 == 3)
		goto LABEL_19;
	if (v19 == 4 && sub_14005AC80((char*)(*v20 + 32), (unsigned __int64*)&v29))
	{
		v28 = 3;
		v20 = &v27;
		v27 = v29;
	LABEL_19:
		v21 = (__m128d)(unsigned __int64) * v20;
		a1[2] -= 16i64;
		return _mm_cvtpd_ps(v21);
	}
	a1[2] -= 16i64;
	return _mm_cvtpd_ps((__m128d)0i64);
}

