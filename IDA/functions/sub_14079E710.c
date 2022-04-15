#include "../winhttp.h"

//----- (000000014079E710) ----------------------------------------------------
__int64 __fastcall sub_14079E710(__int64 a1, int a2, int a3, int a4)
{
	__int64 result; // rax
	unsigned __int64 v8; // rdi
	__int64 v9; // rdx
	__int64 i; // rcx
	int v11; // r8d
	int v12; // r8d
	int v13; // r8d

	if (*(_DWORD*)a1 != 1)
		return 0i64;
	if (a2 || a3 || a4 || (result = *(unsigned int*)(a1 + 8), !(_DWORD)result))
	{
		v8 = *(_QWORD*)(a1 + 24);
		v9 = 0i64;
		if (v8)
		{
			for (i = 0i64; ; i += 20i64)
			{
				if ((!a2 || (v11 = *(_DWORD*)(i + *(_QWORD*)(a1 + 16))) == 0 || v11 == a2)
					&& (!a3 || (v12 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + i + 4)) == 0 || v12 == a3))
				{
					if (!a4)
						break;
					v13 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + i + 8);
					if (!v13 || v13 == a4)
						break;
				}
				if (++v9 >= v8)
					return 0i64;
			}
			return *(unsigned int*)(*(_QWORD*)(a1 + 16) + 20 * v9 + 16);
		}
		else
		{
			return 0i64;
		}
	}
	return result;
}

