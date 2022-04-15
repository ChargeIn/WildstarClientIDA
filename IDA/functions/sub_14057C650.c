#include "../winhttp.h"

//----- (000000014057C650) ----------------------------------------------------
__int64 __fastcall sub_14057C650(__int64 a1, __int64 a2)
{
	unsigned __int64 v2; // rdi
	__int64 v5; // rsi

	v2 = 0i64;
	if (*(_DWORD*)(a2 + 16))
	{
		v5 = 0i64;
		do
		{
			sub_140580D70(a1, v5 + *(_QWORD*)(a2 + 24));
			++v2;
			v5 += 80i64;
		} while (v2 < *(unsigned int*)(a2 + 16));
	}
	if (*(_DWORD*)(a2 + 32))
	{
		sub_140427560(*(_QWORD*)(qword_140C65898 + 29504), a1);
		*(_DWORD*)(a1 + 764) = *(_DWORD*)(a2 + 32);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

