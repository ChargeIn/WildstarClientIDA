#include "../winhttp.h"

//----- (00000001405C8040) ----------------------------------------------------
__int64 __fastcall sub_1405C8040(__int64 a1, int a2, unsigned int a3)
{
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v9; // r10
	__int64 v10; // rax
	__int64 v11; // rax

	v6 = sub_14039DF50(qword_140C65898);
	if (!v6)
		v6 = *(_QWORD*)(qword_140C65898 + 120);
	if (!a3)
		return 2147500037i64;
	if (!v6)
		goto LABEL_22;
	v7 = 0i64;
	if (*(_QWORD*)(qword_140C65898 + 120) == v6 || *(_QWORD*)(qword_140C65898 + 25744) == v6)
		v7 = qword_140C65898;
	if (!v7 || !sub_1405A5B90(v7, a3))
	{
	LABEL_22:
		v10 = sub_1407A0FD0(qword_140C65B70, a3);
		v9 = qword_140C65898;
		if (!v10)
			return 2147500037i64;
	}
	*(_DWORD*)(a1 + 508) = a2;
	if (*(_QWORD*)(v9 + 120) && v9 && (v11 = sub_1405A5B90(v9, a3)) != 0
		|| (v11 = sub_1407A0FD0(qword_140C65B70, a3)) != 0)
	{
		sub_1405C7620((__int64*)a1, v11);
	}
	return 0i64;
}
// 1405C80D0: variable 'v9' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

