#include "../winhttp.h"

//----- (00000001401AA350) ----------------------------------------------------
__int64 __fastcall sub_1401AA350(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	int v4; // edi
	unsigned __int64 v5; // rax
	__int64 v6; // rdx

	v2 = *(_QWORD*)(a1 + 40);
	if (!v2)
		return 4294967294i64;
	v4 = *(_DWORD*)(v2 + 8);
	v5 = (unsigned int)(v4 - 42);
	if ((unsigned int)v5 > 0x3D || (v6 = 0x2002000088000001i64, !_bittest64(&v6, v5)))
	{
		if (v4 != 113 && v4 != 666)
			return 4294967294i64;
	}
	if (*(_QWORD*)(v2 + 16))
		(*(void(__fastcall**)(_QWORD))(a1 + 56))(*(_QWORD*)(a1 + 64));
	if (*(_QWORD*)(*(_QWORD*)(a1 + 40) + 104i64))
		(*(void(__fastcall**)(_QWORD))(a1 + 56))(*(_QWORD*)(a1 + 64));
	if (*(_QWORD*)(*(_QWORD*)(a1 + 40) + 96i64))
		(*(void(__fastcall**)(_QWORD))(a1 + 56))(*(_QWORD*)(a1 + 64));
	if (*(_QWORD*)(*(_QWORD*)(a1 + 40) + 80i64))
		(*(void(__fastcall**)(_QWORD))(a1 + 56))(*(_QWORD*)(a1 + 64));
	(*(void(__fastcall**)(_QWORD, _QWORD))(a1 + 56))(*(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 40));
	result = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	if (v4 == 113)
		return 4294967293i64;
	return result;
}

