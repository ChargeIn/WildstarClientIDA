#include "../winhttp.h"

//----- (000000014066ACF0) ----------------------------------------------------
__int64 __fastcall sub_14066ACF0(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rcx
	unsigned int v3; // eax

	if (!*(_QWORD*)(qword_140C65898 + 120))
		return 0i64;
	v1 = sub_140056AB0(a1, 1u);
	if (!v1)
		return 0i64;
	v2 = *(_QWORD*)(v1 + 8);
	if (!v2)
		return 0i64;
	v3 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v2 + 8) + 48i64))(*(_QWORD*)(v2 + 8));
	return sub_14048D310(qword_140C65990, v3);
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65990: using guessed type __int64 qword_140C65990;

