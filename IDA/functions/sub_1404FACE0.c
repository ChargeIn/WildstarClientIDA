#include "../winhttp.h"

//----- (00000001404FACE0) ----------------------------------------------------
__int64 __fastcall sub_1404FACE0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v5; // rcx

	v2 = sub_1404F87C0(a1, 1u);
	v3 = v2;
	if (!v2)
		return 0i64;
	v5 = *(_QWORD*)(v2 + 2328);
	if (v5)
	{
		if ((*(int(__fastcall**)(__int64))(*(_QWORD*)v5 + 24i64))(v5) > 0)
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 2328) + 112i64))(*(_QWORD*)(v3 + 2328));
	}
	if (*(_QWORD*)(v3 + 2168))
		return sub_14002FBE0(v3 + 2336, (__int64)a1);
	else
		return 0i64;
}

