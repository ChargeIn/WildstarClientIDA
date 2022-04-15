#include "../winhttp.h"

//----- (0000000140112860) ----------------------------------------------------
__int64 __fastcall sub_140112860(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rbx
	HWND v4; // rcx
	__int64(__fastcall * **v5)(_QWORD, void*, __int64*); // rcx
	__int64 v6; // rcx
	__int64 v7; // [rsp+30h] [rbp+8h] BYREF

	if ((*(_DWORD*)(a1 + 664) & 0x200i64) == 0)
	{
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 72i64))(*(_QWORD*)(a1 + 1080));
		*(_QWORD*)(a1 + 1040) = 0i64;
		*(_QWORD*)(a1 + 1024) = 0i64;
		*(_QWORD*)(a1 + 1048) = 0i64;
		*(_QWORD*)(a1 + 1032) = -1i64;
	}
	result = (unsigned __int64)*(unsigned int*)(a1 + 664) >> 11;
	if ((*(_DWORD*)(a1 + 664) & 0x800i64) != 0)
	{
		sub_1401559E0(qword_140C63650 + 200);
		v3 = qword_140C63650;
		v4 = *(HWND*)(qword_140C63650 + 200);
		*(_DWORD*)(qword_140C63650 + 220) = 0;
		result = (__int64)ImmAssociateContext(v4, 0i64);
		v5 = *(__int64(__fastcall****)(_QWORD, void*, __int64*))(v3 + 672);
		if (v5)
		{
			if (*(_DWORD*)(v3 + 696) != -1)
			{
				v7 = 0i64;
				result = (**v5)(v5, &unk_140B5C848, &v7);
				if ((int)result >= 0)
				{
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v7 + 32i64))(v7, *(unsigned int*)(v3 + 696));
					v6 = v7;
					*(_DWORD*)(v3 + 696) = -1;
					return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
				}
			}
		}
	}
	return result;
}
// 140C63650: using guessed type __int64 qword_140C63650;

