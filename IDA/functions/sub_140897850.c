#include "../winhttp.h"

//----- (0000000140897850) ----------------------------------------------------
__int64 __fastcall sub_140897850(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	__int64 v4; // rcx
	__int16 v5; // ax
	__int64 v6; // rcx

	v2 = a2;
	if (a2)
	{
		while ((*(_DWORD*)(v2 + 56) & 0xFFFFFFFD) != 0)
		{
			v4 = *(_QWORD*)(a1 + 16);
			v5 = *(_WORD*)(v4 - 16);
			if (!v5)
				break;
			if (v5 > 1)
			{
				--* (_WORD*)(v4 - 16);
				return v2;
			}
			v2 = *(_QWORD*)(v2 + 8);
			if ((*(_DWORD*)(*(_QWORD*)(v4 - 24) + 56i64) & 0xFFFFFFFD) == 0)
			{
				v6 = *(_QWORD*)(v4 - 8);
				if (v6)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
			}
			*(_QWORD*)(a1 + 16) -= 24i64;
			if (!v2)
				return 0i64;
		}
	}
	return v2;
}

