#include "../winhttp.h"

//----- (00000001405F3DC0) ----------------------------------------------------
__int64 __fastcall sub_1405F3DC0(__int64* a1, int a2)
{
	__int64* v3; // rcx
	unsigned __int64 v4; // r8
	unsigned __int64 v5; // r9
	_DWORD* v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	int v10; // [rsp+38h] [rbp+10h] BYREF

	v10 = a2;
	v3 = a1 + 15;
	v4 = 0i64;
	v5 = v3[1];
	if (v5)
	{
		v6 = (_DWORD*)*v3;
		while (*v6 != a2)
		{
			++v4;
			++v6;
			if (v4 >= v5)
				goto LABEL_5;
		}
		return 2147500037i64;
	}
	else
	{
	LABEL_5:
		sub_140003460(v3, &v10);
		if ((*(unsigned int(__fastcall**)(__int64*))(*a1 + 176))(a1))
		{
			v7 = *(_QWORD*)(qword_140C65898 + 29504);
			v8 = (*(__int64(__fastcall**)(__int64*))(*a1 + 24))(a1);
			sub_1400EA3E0(v7, "PublicEventLocationAdded", byte_1409ED20C, v8);
		}
		return 0i64;
	}
}
// 1409ED20C: using guessed type _BYTE byte_1409ED20C[4];
// 140C65898: using guessed type __int64 qword_140C65898;

