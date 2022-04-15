#include "../winhttp.h"

//----- (00000001407551C0) ----------------------------------------------------
__int64 __fastcall sub_1407551C0(__int64 a1)
{
	__int64 v2; // rcx
	_DWORD* v3; // rdx
	int v4; // eax

	if (qword_140C65898)
	{
		v2 = *(_QWORD*)(qword_140C65898 + 29064);
		if (v2)
		{
			v3 = &unk_140A12138;
			if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
				v3 = *(_DWORD**)(a1 + 24);
			v4 = v3[2];
			if (v4 && (v4 != 1 || *v3))
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 40i64))(v2);
				return 0i64;
			}
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 32i64))(v2);
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

