#include "../winhttp.h"

//----- (000000014040DB30) ----------------------------------------------------
__int64 __fastcall sub_14040DB30(__int64 a1, __int64 a2, unsigned int a3, float a4)
{
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rdx
	__int64 result; // rax

	if (a3 == 41 || a3 - 175 <= 1 || a3 == 178)
	{
		result = 0i64;
		if (!*(_DWORD*)(a1 + 192))
			return 149i64;
	}
	else
	{
		v6 = sub_1402479C0(a3);
		if (v6
			&& (*(_BYTE*)(v6 + 36) & 4) != 0
			&& ((v8 = *(_QWORD*)(a1 + 256)) == 0
				|| (v7 = *(unsigned int*)(v6 + 52), !(_DWORD)v7)
				|| ((unsigned int)v7 & *(_DWORD*)(v8 + 16)) != 0))
		{
			return sub_14040E610(v7, a2, *(_DWORD*)v6, a4 * *(float*)(v6 + 32));
		}
		else
		{
			return 149i64;
		}
	}
	return result;
}
// 14040DBAB: variable 'v7' is possibly undefined

