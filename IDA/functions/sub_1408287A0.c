#include "../winhttp.h"

//----- (00000001408287A0) ----------------------------------------------------
__int64 __fastcall sub_1408287A0(__int64 a1, __int64 a2, unsigned __int16 a3, int a4)
{
	__int64 v8; // r14
	__int64 v10; // rcx
	signed __int64 v11; // rcx
	void* v12; // rsp
	void* v13; // rsp
	unsigned __int16 v14; // r9
	__int64 v15; // rax
	__int64 v16; // rcx
	__int64 v17; // [rsp+0h] [rbp-20h] BYREF
	int v18[2]; // [rsp+20h] [rbp+0h] BYREF
	__int64 v19; // [rsp+28h] [rbp+8h]
	__int64 savedregs; // [rsp+30h] [rbp+10h]
	void* retaddr; // [rsp+38h] [rbp+18h]

	if (a4 > 2 || a3 && !a2)
		return 31i64;
	v8 = (unsigned __int16)sub_140055BD0() + 24 * (unsigned int)a3;
	if ((unsigned int)v8 > (unsigned int)sub_140829790())
		return 2i64;
	v10 = v8 + 15;
	if (v8 + 15 <= (unsigned __int64)(unsigned int)v8)
		v10 = 0xFFFFFFFFFFFFFF0i64;
	v11 = v10 & 0xFFFFFFFFFFFFFFF0ui64;
	v12 = alloca(v11);
	v13 = alloca(v11);
	if (&v17 != (__int64*)-32i64)
		HIWORD(v18[0]) = 34;
	v14 = 0;
	HIDWORD(savedregs) = a4;
	v19 = a1;
	LOWORD(savedregs) = a3;
	if (a3)
	{
		do
		{
			v15 = v14++;
			v16 = 3 * v15;
			*((_DWORD*)&retaddr + 2 * v16) = *(_DWORD*)(a2 + 24 * v15);
			*((_DWORD*)&retaddr + 2 * v16 + 1) = *(_DWORD*)(a2 + 24 * v15 + 4);
			v18[2 * v16 + 8] = *(_DWORD*)(a2 + 24 * v15 + 8);
			v18[2 * v16 + 9] = *(_DWORD*)(a2 + 24 * v15 + 12);
			v18[2 * v16 + 10] = *(_DWORD*)(a2 + 24 * v15 + 16);
			v18[2 * v16 + 11] = *(_DWORD*)(a2 + 24 * v15 + 20);
		} while (v14 < (int)a3);
	}
	return sub_14082BB30(qword_140C61B68, v18, v8);
}
// 1408287A0: using guessed type int var_10[2];

