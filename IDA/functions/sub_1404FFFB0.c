#include "../winhttp.h"

//----- (00000001404FFFB0) ----------------------------------------------------
__int64 __fastcall sub_1404FFFB0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rax

	v2 = *(_QWORD*)(a1 + 2328);
	if (v2 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 24i64))(v2) > 0)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2328) + 112i64))(*(_QWORD*)(a1 + 2328));
	v3 = *(_QWORD*)(a1 + 2168);
	if (v3 && (v4 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v3 + 64i64))(v3, 20i64), *(_QWORD*)v4))
		return *(unsigned int*)(*(_QWORD*)v4 + 16i64);
	else
		return 557i64;
}

