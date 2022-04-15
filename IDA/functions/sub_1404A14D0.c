#include "../winhttp.h"

//----- (00000001404A14D0) ----------------------------------------------------
__int64 __fastcall sub_1404A14D0(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	int v6; // eax
	__int64 v7; // rax
	unsigned int v8; // ebx
	int v9; // edi
	BOOL v10; // ecx
	int v11; // esi

	if (!a2)
		return 0i64;
	v6 = *(_DWORD*)(a2 + 128);
	if (v6 != 20 && v6 != 23)
		return 0i64;
	v7 = sub_140224D00(a4);
	v8 = 0;
	v9 = 0;
	if (v7)
	{
		LOBYTE(v9) = *(_DWORD*)(v7 + 8) != 0;
		++v9;
	}
	v10 = sub_1403A9C40(qword_140C65898, a4) == v9;
	v11 = a3 - 1;
	if (v11)
	{
		if (v11 == 1)
		{
			LOBYTE(v8) = !v10;
			return v8;
		}
	}
	else
	{
		return v10;
	}
	return v8;
}
// 140C65898: using guessed type __int64 qword_140C65898;

