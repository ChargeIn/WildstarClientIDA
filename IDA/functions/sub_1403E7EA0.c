#include "../winhttp.h"

//----- (00000001403E7EA0) ----------------------------------------------------
__int64 __fastcall sub_1403E7EA0(__int64 a1, void(__fastcall*** a2)(_QWORD), __int64 a3)
{
	unsigned int v3; // ebx
	int* v5; // rdx
	__int64 v6; // rax
	__int64 result; // rax
	u_long v10; // eax
	int v11; // eax
	__int64 v12; // r9
	float v13; // xmm2_4
	double v14; // xmm0_8
	double v15; // xmm1_8
	unsigned int v16; // edx
	__m128 v17[2]; // [rsp+40h] [rbp-28h] BYREF
	u_long* v18; // [rsp+70h] [rbp+8h] BYREF
	__int64 v19; // [rsp+80h] [rbp+18h] BYREF

	v3 = 0;
	v5 = (int*)(a3 + 8);
	v6 = 0i64;
	if (*(_WORD*)(a3 + 8))
	{
		do
			++v6;
		while (*((_WORD*)v5 + v6));
	}
	sub_14001C480(a1 + 128, v5, (int*)((char*)v5 + 2 * v6));
	result = sub_1403E5DE0(a1);
	if ((int)result >= 0)
	{
		*(_QWORD*)(a1 + 31016) = a2;
		(**a2)(a2);
		(*(void(__fastcall**)(__int64, u_long**, _QWORD))(*(_QWORD*)qword_140C65808 + 56i64))(
			qword_140C65808,
			&v18,
			*(unsigned int*)(*(_QWORD*)(a1 + 31016) + 152i64));
		v10 = ntohl(v18[37]);
		*(_DWORD*)(qword_140C65898 + 96) = htonl(v10);
		v11 = sub_1403E7B20(a1);
		if (v11 < 0)
			goto LABEL_6;
		*(_DWORD*)(a1 + 29008) = 0;
		v12 = *(unsigned int*)(a3 + 80);
		v13 = *(float*)(a3 + 84);
		v14 = *(float*)(a3 + 92);
		v15 = *(float*)(a3 + 88);
		v19 = 0x141DF24D8i64;
		sub_1401A3130(5, 2, &v19, v12, v13, v15, v14);
		v16 = *(_DWORD*)(a3 + 80);
		v17[0] = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(a3 + 84), (__m128) * (unsigned int*)(a3 + 92)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(a3 + 88), (__m128)0i64));
		v11 = sub_1403E70D0(a1, v16, v17);
		if (v11 < 0)
			LABEL_6:
		v3 = v11;
		if (v18)
			(*(void(__fastcall**)(u_long*))(*(_QWORD*)v18 + 8i64))(v18);
		return v3;
	}
	return result;
}
// 140C65808: using guessed type __int64 qword_140C65808;
// 140C65898: using guessed type __int64 qword_140C65898;
// 1403E7EA0: using guessed type __m128 var_28[2];

