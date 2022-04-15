#include "../winhttp.h"

//----- (000000014049F0F0) ----------------------------------------------------
__int64 __fastcall sub_14049F0F0(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	__int64 result; // rax
	__int64 v6; // r11
	int v7; // r9d
	unsigned int v8; // r10d
	unsigned __int64 v9; // rdx
	__int64 v10; // rcx
	__int64 v11; // r8
	__int64 v12; // rax

	result = sub_140246480(a4);
	v6 = result;
	if (result)
	{
		v7 = *(_DWORD*)(result + 4);
		v8 = 0;
		v9 = *(_QWORD*)(qword_140C65898 + 5792);
		v10 = 0i64;
		if (!v9)
			return sub_1404A2090(v10, a3, 0, *(_DWORD*)(v6 + 8));
		v11 = *(_QWORD*)(qword_140C65898 + 5784);
		v12 = 0i64;
		while (*(_DWORD*)(*(_QWORD*)(v11 + 8 * v12) + 8i64) != v7)
		{
			v10 = (unsigned int)(v10 + 1);
			v12 = (unsigned int)v10;
			if ((unsigned int)v10 >= v9)
				return sub_1404A2090(v10, a3, 0, *(_DWORD*)(v6 + 8));
		}
		v10 = *(_QWORD*)(v11 + 8i64 * (unsigned int)v10);
		if (v10)
		{
			if (*(_DWORD*)(v10 + 12))
				v8 = *(_DWORD*)(v10 + 84);
			return sub_1404A2090(v10, a3, v8, *(_DWORD*)(v6 + 8));
		}
		else
		{
			return sub_1404A2090(v10, a3, 0, *(_DWORD*)(v6 + 8));
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

