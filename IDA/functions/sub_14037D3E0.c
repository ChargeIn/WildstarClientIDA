#include "../winhttp.h"

//----- (000000014037D3E0) ----------------------------------------------------
__int64 __fastcall sub_14037D3E0(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	unsigned int v5; // esi
	_QWORD* v6; // rdi
	__int64 v7; // rcx
	_QWORD* v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rax

	if (!*(_QWORD*)(a1 + 1480))
		return 1i64;
	if ((*(_BYTE*)(a1 + 44) & 1) == 0)
	{
		if (*(_QWORD*)(a1 + 1464))
		{
			result = sub_14037D060(a1, a2, 1);
			if (!(_DWORD)result)
				return result;
		}
		*(_DWORD*)(a1 + 44) |= 1u;
	}
	if ((*(_BYTE*)(a1 + 44) & 2) == 0)
	{
		sub_140381180(a1);
		*(_DWORD*)(a1 + 44) = *(_DWORD*)(a1 + 44) & 0xFFFFFFF9 | 2;
	}
	if ((*(_BYTE*)(a1 + 44) & 4) == 0)
	{
		if ((*(_DWORD*)(*(_QWORD*)a1 + 232i64) & 0x4000) != 0)
		{
			v5 = 0;
			v6 = (_QWORD*)(a1 + 672);
			do
			{
				v7 = *(v6 - 4);
				if (v7)
				{
					if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v7 + 32i64))(v7, a2))
						return 0i64;
				}
				if (*v6 && !(*(unsigned int(__fastcall**)(_QWORD, __int64))(*(_QWORD*)*v6 + 32i64))(*v6, a2))
					return 0i64;
				++v5;
				++v6;
			} while (v5 < 4);
		}
		*(_DWORD*)(a1 + 44) |= 4u;
	}
	if ((*(_BYTE*)(a1 + 44) & 8) == 0)
	{
		if (!(unsigned int)sub_140381300((_QWORD*)a1))
			return 0i64;
		*(_DWORD*)(a1 + 44) |= 8u;
	}
	v8 = *(_QWORD**)(a1 + 1480);
	if (v8)
		*v8 = *(_QWORD*)(a1 + 1488);
	v9 = *(_QWORD*)(a1 + 1488);
	if (v9)
		*(_QWORD*)(v9 + 1480) = *(_QWORD*)(a1 + 1480);
	v10 = *(_QWORD*)a1;
	*(_QWORD*)(a1 + 1480) = 0i64;
	*(_QWORD*)(a1 + 1488) = 0i64;
	--* (_DWORD*)(v10 + 2172);
	return 1i64;
}

