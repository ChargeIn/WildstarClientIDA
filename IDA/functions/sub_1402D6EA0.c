#include "../winhttp.h"

//----- (00000001402D6EA0) ----------------------------------------------------
__int64 __fastcall sub_1402D6EA0(__int64 a1, __m128* a2, __m128* a3, float* a4, float* a5)
{
	__int64 v5; // r10
	char v7; // si
	__int64 v8; // rbx
	float v9; // xmm6_4
	__int64 v12; // rdi
	__int64 v14; // [rsp+20h] [rbp-38h] BYREF
	__int64 v15; // [rsp+28h] [rbp-30h]
	float v16; // [rsp+60h] [rbp+8h] BYREF

	v5 = *(_QWORD*)(a1 + 16);
	v7 = 0;
	v8 = *(_QWORD*)(v5 + 88);
	v9 = 3.4028235e38;
	v14 = *(_QWORD*)(v5 + 72);
	v15 = v8;
	v12 = *(_DWORD*)(v5 + 80) / 3u;
	if (!(*(_DWORD*)(v5 + 80) / 3u))
		return 0i64;
	do
	{
		if (sub_1402D7490(a2, a3, &v14, &v16))
		{
			v7 = 1;
			v9 = fminf(v9, v16);
		}
		v8 += 6i64;
		v15 = v8;
		--v12;
	} while (v12);
	if (!v7 || v9 < *a4 || v9 >= a4[1])
		return 0i64;
	if (a5)
		*a5 = v9;
	return 1i64;
}

