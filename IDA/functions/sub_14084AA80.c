#include "../winhttp.h"

//----- (000000014084AA80) ----------------------------------------------------
void __fastcall sub_14084AA80(unsigned int a1, __int64 a2, int a3, __int64 a4)
{
	__int64 v4; // r10
	_QWORD* v5; // rax
	__int64 v6; // rdi
	char v7[24]; // [rsp+20h] [rbp-78h] BYREF
	_QWORD v8[6]; // [rsp+38h] [rbp-60h] BYREF
	int v9; // [rsp+68h] [rbp-30h]
	__int64 v10; // [rsp+70h] [rbp-28h]
	__int64 v11; // [rsp+78h] [rbp-20h]
	__int64 v12; // [rsp+80h] [rbp-18h]

	v4 = 0i64;
	if ((_DWORD)a2)
	{
		v4 = (unsigned int)a2;
		v5 = v8;
		v6 = a4;
		a2 = (unsigned int)a2;
		do
		{
			*v5 = v6;
			v6 += 64i64;
			++v5;
			--a2;
		} while (a2);
	}
	if ((unsigned int)v4 < 6)
		memset(&v8[v4], 0, 8i64 * (unsigned int)(6 - v4));
	v9 = a3;
	v10 = a4 + 384;
	v11 = a4 + 416;
	v12 = a4 + 416;
	sub_14083C0E0(qword_140C61B80, a1, (__int64)v7);
}
// 140C61B80: using guessed type __int64 qword_140C61B80;
// 14084AA80: using guessed type char var_78[24];

