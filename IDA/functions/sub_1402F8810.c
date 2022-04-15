#include "../winhttp.h"

//----- (00000001402F8810) ----------------------------------------------------
__int64 __fastcall sub_1402F8810(__int64* a1, unsigned int a2, _DWORD* a3)
{
	__int64 v3; // rax
	unsigned __int64 v4; // rbx
	unsigned __int64 v7; // rcx
	float* v8; // rdx
	__int64 result; // rax
	int v10; // xmm0_4
	int v11; // xmm1_4
	int v12; // xmm0_4
	int v13; // xmm1_4
	int v14; // xmm0_4
	__int64 v15; // [rsp+20h] [rbp-28h] BYREF
	__int64 v16; // [rsp+2Ch] [rbp-1Ch]
	__int64 v17; // [rsp+34h] [rbp-14h]
	int v18; // [rsp+3Ch] [rbp-Ch]

	v3 = *a1;
	v4 = a2;
	LODWORD(v15) = -1;
	(*(void(__fastcall**)(__int64*, __int64*, _QWORD))(v3 + 16))(a1, &v15, 0i64);
	if (v4 < a1[112]
		&& (v7 = *(_QWORD*)(a1[111] + 8 * v4), v7 < a1[110])
		&& (v8 = *(float**)(*(_QWORD*)(a1[109] + 8 * v7) + 8i64)) != 0i64)
	{
		*a3 = *(_DWORD*)v8;
		a3[1] = *((_DWORD*)v8 + 1);
		a3[2] = *((_DWORD*)v8 + 2);
		a3[3] = *((_DWORD*)v8 + 3);
		a3[4] = *((_DWORD*)v8 + 4);
		a3[5] = *((_DWORD*)v8 + 5);
		a3[6] = *((_DWORD*)v8 + 6);
		a3[7] = *((_DWORD*)v8 + 7);
		result = (unsigned int)(*((_DWORD*)v8 + 3)
			+ (int)(float)((float)(*(_DWORD*)(a1[2] + 208) - *((_DWORD*)v8 + 12)) * v8[2]));
		a3[3] = result;
	}
	else
	{
		result = 0i64;
		v16 = 0i64;
		v17 = 0i64;
		v18 = 0;
		*a3 = 0;
		v10 = v16;
		a3[1] = 0;
		v11 = HIDWORD(v16);
		a3[2] = 1065353216;
		a3[3] = v10;
		v12 = v17;
		a3[4] = v11;
		v13 = HIDWORD(v17);
		a3[5] = v12;
		v14 = v18;
		a3[6] = v13;
		a3[7] = v14;
	}
	return result;
}
// 1402F8810: using guessed type __int64 var_28;

