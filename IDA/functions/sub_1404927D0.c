#include "../winhttp.h"

//----- (00000001404927D0) ----------------------------------------------------
__int64 __fastcall sub_1404927D0(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rax

	v2 = sub_14018B280(296i64, 0);
	if (v2)
		v3 = sub_14056E070((__int64)v2, a1);
	else
		v3 = 0i64;
	if (qword_140C65970)
		(**(void(__fastcall***)(__int64, __int64))qword_140C65970)(qword_140C65970, 1i64);
	v4 = qword_140C65898;
	qword_140C65970 = v3;
	if (qword_140C65898)
	{
		if (qword_140C65B78)
		{
			sub_140575DD0();
			v4 = qword_140C65898;
		}
		*(_DWORD*)(v4 + 28568) = 1;
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140C65B78: using guessed type __int64 qword_140C65B78;

