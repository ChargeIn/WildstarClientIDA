#include "../winhttp.h"

//----- (00000001401C9010) ----------------------------------------------------
__int64 __fastcall sub_1401C9010(int* a1, unsigned __int64 a2, int** a3, _QWORD* a4, __int64 a5)
{
	__int64 v5; // rbp
	__int64 v8; // rbx
	__int64 result; // rax
	__int64 v10; // [rsp+30h] [rbp-38h]
	int* v11; // [rsp+70h] [rbp+8h] BYREF
	unsigned __int64 v12; // [rsp+78h] [rbp+10h] BYREF

	v12 = a2;
	v11 = a1;
	v5 = a5;
	v8 = 0i64;
	while (1)
	{
		LODWORD(v10) = *(unsigned __int8*)(v8 + v5);
		result = sub_1401A3210(a1, a2, (__int64*)&v11, &v12, 0, L"%0.2x", v10);
		if ((int)result < 0)
			break;
		if ((unsigned __int64)++v8 >= 0x14)
		{
			if (a3)
				*a3 = v11;
			if (a4)
				*a4 = v12;
			return 0i64;
		}
		a2 = v12;
		a1 = v11;
	}
	return result;
}
// 1401C906C: variable 'v10' is possibly undefined
// 140A47D08: using guessed type wchar_t a02x_0[6];

