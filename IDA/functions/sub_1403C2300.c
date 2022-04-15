#include "../winhttp.h"

//----- (00000001403C2300) ----------------------------------------------------
__int64 __fastcall sub_1403C2300(__int64 a1, int a2)
{
	__int64 v2; // rdi
	__int64 v4; // rax
	__int64 v5; // rax
	__int64 v6; // rax
	int v7; // r9d
	__int64 v8; // rax
	__int64 i; // rcx

	v2 = qword_140C65898;
	v4 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v4)
		return *(_QWORD*)(v2 + 120);
	v5 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v4 + 192));
	if (!v5)
		return *(_QWORD*)(v2 + 120);
	if (*(_DWORD*)(v5 + 128) != 3)
		return *(_QWORD*)(v2 + 120);
	if (!a2)
		return *(_QWORD*)(v2 + 120);
	v6 = sub_1407A0FD0(qword_140C65B70, a2);
	if (!v6)
		return *(_QWORD*)(v2 + 120);
	v7 = *(_DWORD*)(*(_QWORD*)(v6 + 112) + 4i64);
	if (!*(_QWORD*)(qword_140C65898 + 120) || !*(_DWORD*)(qword_140C65898 + 4288))
		return *(_QWORD*)(v2 + 120);
	v8 = 0i64;
	for (i = qword_140C65898 + 4328; !*(_QWORD*)i || *(_DWORD*)(*(_QWORD*)i + 280i64) != v7; i += 8i64)
	{
		if ((unsigned __int64)++v8 >= 0xC)
			return *(_QWORD*)(v2 + 120);
	}
	return sub_14039DF50(qword_140C65898);
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

