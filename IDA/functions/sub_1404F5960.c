#include "../winhttp.h"

//----- (00000001404F5960) ----------------------------------------------------
void __fastcall sub_1404F5960(__int64 a1)
{
	__int64 v2; // rcx

	v2 = *(_QWORD*)(a1 + 2328);
	if (v2 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 24i64))(v2) > 0)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2328) + 112i64))(*(_QWORD*)(a1 + 2328));
	*(_DWORD*)(a1 + 1040) = 1;
}

