#include "../winhttp.h"

//----- (00000001405C7D00) ----------------------------------------------------
__int64 __fastcall sub_1405C7D00(__int64 a1, int a2, int a3, unsigned int a4, int a5)
{
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v12; // rax

	v9 = sub_1403D90D0(qword_140C65898, a5);
	if (!v9)
		v9 = *(_QWORD*)(qword_140C65898 + 120);
	if (!a4)
		return 2147500037i64;
	if (!v9)
		goto LABEL_17;
	v10 = 0i64;
	if (*(_QWORD*)(qword_140C65898 + 120) == v9 || *(_QWORD*)(qword_140C65898 + 25744) == v9)
		v10 = qword_140C65898;
	if (!v10 || (v12 = sub_1405A5B90(v10, a4)) == 0)
	{
	LABEL_17:
		v12 = sub_1407A0FD0(qword_140C65B70, a4);
		if (!v12)
			return 2147500037i64;
	}
	*(_DWORD*)(a1 + 504) = a2;
	*(_DWORD*)(a1 + 508) = a3;
	*(_DWORD*)(a1 + 512) = a5;
	return sub_1405C7620((__int64*)a1, v12);
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

