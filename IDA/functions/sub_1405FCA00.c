#include "../winhttp.h"

//----- (00000001405FCA00) ----------------------------------------------------
void __fastcall sub_1405FCA00(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v4; // rdx
	__int64 v6; // rax
	__int64 v8; // r9
	__int64 v9; // rcx
	__int64 v10; // rax
	unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF

	v4 = *(_QWORD*)(a1 + 40);
	v6 = *(_QWORD*)(v4 + 8);
	v8 = v4;
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < a2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v8 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v8 == v4 || (v11 = v8, a2 < *(_DWORD*)(v8 + 32)))
		v11 = v4;
	v9 = 0i64;
	if (v11 != v4)
		LOBYTE(v9) = *(_DWORD*)(v11 + 36) != 7;
	if (a3 != (_DWORD)v9)
	{
		v10 = sub_1405A8A40(v9, a2);
		if (v10)
		{
			sub_1405FBDC0(a1, v10, 5, 0);
			v11 = __PAIR64__(a3, a2);
			sub_1403F4900(qword_140C65898, 0x360u, (__int64)&v11);
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

