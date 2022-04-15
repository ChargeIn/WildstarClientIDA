#include "../winhttp.h"

//----- (00000001402C9C90) ----------------------------------------------------
__int64 __fastcall sub_1402C9C90(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	unsigned int i; // esi
	_QWORD* v6; // rbx

	if (*(_DWORD*)(a1 + 28))
		return 1i64;
	if (*(_DWORD*)(a1 + 24) == 3 || (result = sub_1402C9AE0(a1, a2, 3), (_DWORD)result))
	{
		for (i = 0; i < (unsigned int)((*(_QWORD*)(a1 + 96) - *(_QWORD*)(a1 + 88)) / 176i64); ++i)
		{
			v6 = (_QWORD*)(*(_QWORD*)(a1 + 88) + 176i64 * i);
			if (!*((_DWORD*)v6 + 6))
			{
				if (*v6)
				{
					if (!(*(unsigned int(__fastcall**)(_QWORD, __int64))(*(_QWORD*)*v6 + 32i64))(*v6, a2))
						return 0i64;
					sub_1402D3300(v6);
					if (*v6)
					{
						(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v6 + 8i64))(*v6);
						*v6 = 0i64;
					}
				}
				*((_DWORD*)v6 + 6) = 1;
			}
		}
		*(_DWORD*)(a1 + 28) = 1;
		return 1i64;
	}
	return result;
}

