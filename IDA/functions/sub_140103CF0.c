#include "../winhttp.h"

//----- (0000000140103CF0) ----------------------------------------------------
__int64 __fastcall sub_140103CF0(_QWORD* a1, unsigned int* a2, __m128* a3, unsigned __int8 a4, int a5)
{
	int v5; // r11d
	int v8; // esi
	__int64 v9; // rdi
	int v10; // xmm6_4
	bool v11; // sf
	__int64 v12; // rcx
	__int64 result; // rax
	_QWORD* v14; // rax
	float v15; // [rsp+60h] [rbp+8h] BYREF
	unsigned int* v16; // [rsp+68h] [rbp+10h]
	__m128* v17; // [rsp+70h] [rbp+18h]

	v17 = a3;
	v16 = a2;
	v5 = (int)a2;
	if (!(unsigned int)((a1[8] - a1[7]) / 304i64))
	{
		v8 = 0;
		v9 = 0i64;
		if ((int)((__int64)(a1[12] - a1[11]) >> 3) > 0)
		{
			v10 = a5;
			do
			{
				v11 = v9 < 0;
				if (v9 > 0)
				{
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
					LODWORD(a3) = (_DWORD)v17;
					v5 = (int)v16;
					v11 = v9 < 0;
				}
				if (v11)
				{
					LODWORD(v12) = 0;
				}
				else if (v8 < (int)((__int64)(a1[12] - a1[11]) >> 3))
				{
					v12 = *(_QWORD*)(a1[11] + 8 * v9);
				}
				else
				{
					LODWORD(v12) = (_DWORD)a1;
				}
				sub_140103CF0(v12, v5, (_DWORD)a3, a4, v10);
				LODWORD(a3) = (_DWORD)v17;
				v5 = (int)v16;
				++v8;
				++v9;
			} while (v8 < (int)((__int64)(a1[12] - a1[11]) >> 3));
		}
		return 0i64;
	}
	v15 = 0.0;
	v14 = (_QWORD*)sub_140101260((__int64)a1, COERCE_DOUBLE((unsigned __int64)a5), &v15);
	if (!v14)
		return 2147942413i64;
	if (!*v14)
		return 0i64;
	result = sub_1400FFF90(v14, v16, v17, v15, a4);
	if ((int)result >= 0)
		return 0i64;
	return result;
}
// 140C65680: using guessed type __int64 qword_140C65680;

