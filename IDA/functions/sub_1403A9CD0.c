#include "../winhttp.h"

//----- (00000001403A9CD0) ----------------------------------------------------
__int64 __fastcall sub_1403A9CD0(__int64 a1, unsigned int a2)
{
	__int64 v2; // rdi
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // rcx
	_DWORD* i; // rax

	v2 = qword_140C65898;
	if (!a2)
		return 2147500037i64;
	v4 = 0i64;
	if (!*(_QWORD*)(qword_140C65898 + 120) || !qword_140C65898 || (v5 = sub_1405A5B90(qword_140C65898, a2)) == 0)
	{
		v5 = sub_1407A0FD0(qword_140C65B70, a2);
		if (!v5)
			return 2147500037i64;
	}
	v6 = *(_QWORD*)(v5 + 112);
	for (i = (_DWORD*)(v6 + 408); *i != 5; ++i)
	{
		if ((unsigned __int64)++v4 >= 5)
			return 2147500037i64;
	}
	if (!sub_1403BB170(v2, *(_DWORD*)(v6 + 4)))
		return 2147500037i64;
	*(_DWORD*)(v2 + 32620) = a2;
	return 0i64;
}
// 1403A9D12: conditional instruction was optimized away because ecx.4==1
// 1403A9D2F: variable 'a2' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

