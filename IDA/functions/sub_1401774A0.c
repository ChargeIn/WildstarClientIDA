#include "../winhttp.h"

//----- (00000001401774A0) ----------------------------------------------------
void* __fastcall sub_1401774A0(__int64 a1, int a2)
{
	__int64 v2; // rax
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rcx

	v2 = *(_QWORD*)(a1 + 1040);
	if (*(int*)(v2 + 1144) <= 0 || a2 < 0 || a2 >= *(_DWORD*)(v2 + 1160))
		return *(void**)(a1 + 1064);
	v4 = *(_QWORD*)(*(_QWORD*)(v2 + 1152) + 8i64 * a2);
	v5 = *(int*)(v4 + 24) <= 0 ? 0i64 : **(_QWORD**)(v4 + 16);
	if (!v5)
		return *(void**)(a1 + 1064);
	v6 = *(_QWORD*)(v5 + 192);
	if (v6)
		return (void*)(*(__int64(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)v6 + 64i64))(v6, a2, a1);
	else
		return &unk_1409DC2EC;
}

