#include "../winhttp.h"

//----- (0000000140133540) ----------------------------------------------------
__int64 __fastcall sub_140133540(_QWORD* a1)
{
	_DWORD* v1; // rax
	_DWORD* v2; // rbx
	__int64 v4; // rcx

	v1 = (_DWORD*)sub_1401334C0(a1, 1u);
	v2 = v1;
	if (v1)
	{
		if (!v1[21])
		{
			(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)v1 + 8i64))(v1);
			return 0i64;
		}
		sub_140195D70((__int64)(v1 + 24));
		v4 = *((_QWORD*)v2 + 3);
		v2[18] = 0;
		if (v4)
			sub_1400EC370(v4, *((_BYTE**)v2 + 5));
		*((_QWORD*)v2 + 3) = 0i64;
	}
	return 0i64;
}

