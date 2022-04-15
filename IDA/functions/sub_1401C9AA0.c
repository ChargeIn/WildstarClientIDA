#include "../winhttp.h"

//----- (00000001401C9AA0) ----------------------------------------------------
__int64 __fastcall sub_1401C9AA0(__int64 a1, __int64 a2, float* a3, _QWORD* a4)
{
	unsigned __int64 v4; // r10
	__int64 v5; // rcx
	float* v6; // r11
	__int64 v7; // rdx
	float v8; // xmm1_4
	float v9; // xmm2_4
	float v10; // xmm3_4
	float v11; // xmm0_4
	unsigned __int64* v12; // rax
	_DWORD* v13; // rax
	__int64 v15; // [rsp+0h] [rbp-18h]
	unsigned __int64 v16; // [rsp+38h] [rbp+20h] BYREF

	v4 = 0i64;
	v5 = a1 - (_QWORD)a3;
	v6 = (float*)a4 + 1;
	v7 = a2 - (_QWORD)a3;
	v16 = 0x7F7FFFFF00000000i64;
	*a4 = 0x7F7FFFFF00000000i64;
	while (1)
	{
		v8 = 1.0 / *a3;
		v9 = (float)(*(float*)((char*)a3 + v5) - *(float*)((char*)a3 + v7)) * v8;
		v10 = (float)(*(float*)((char*)a3 + v5 + 16) - *(float*)((char*)a3 + v7)) * v8;
		v16 = __PAIR64__(LODWORD(v10), LODWORD(v9));
		if (v9 > v10)
		{
			v11 = v9;
			v9 = v10;
			v10 = v11;
			v16 = __PAIR64__(LODWORD(v11), LODWORD(v9));
		}
		v12 = &v16;
		if (v9 < *(float*)a4)
			v12 = a4;
		LODWORD(v15) = *(_DWORD*)v12;
		v13 = (_DWORD*)&v16 + 1;
		if (v10 > *v6)
			v13 = (_DWORD*)a4 + 1;
		HIDWORD(v15) = *v13;
		*a4 = v15;
		if (*v6 < *(float*)a4)
			break;
		++v4;
		++a3;
		if (v4 >= 3)
			return 1i64;
	}
	return 0i64;
}

