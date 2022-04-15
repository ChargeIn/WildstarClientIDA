#include "../winhttp.h"

//----- (0000000140849210) ----------------------------------------------------
void __fastcall sub_140849210(__int64 a1)
{
	void(__fastcall * **v2)(_QWORD, _QWORD); // rdi
	int v3; // esi
	__int64 v4; // rcx
	__int64 v5; // rdx
	__int64 v6; // rdx
	__int64 v7; // rdx
	__int64 v8; // rdx

	sub_1408614B0(*(__int64**)(a1 + 16), 0);
	v2 = *(void(__fastcall****)(_QWORD, _QWORD))(a1 + 16);
	v3 = dword_140C10F28;
	if (v2)
	{
		(**v2)(v2, 0i64);
		sub_140881720(v3, (__int64)v2);
	}
	v4 = *(_QWORD*)(a1 + 24);
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 16) = v4;
	sub_1408613D0(v4);
	v5 = *(_QWORD*)(a1 + 928);
	if (v5)
		*(_QWORD*)(v5 + 16) = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 24i64);
	v6 = *(_QWORD*)(a1 + 936);
	if (v6)
		*(_QWORD*)(v6 + 16) = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 24i64);
	v7 = *(_QWORD*)(a1 + 944);
	if (v7)
		*(_QWORD*)(v7 + 16) = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 24i64);
	v8 = *(_QWORD*)(a1 + 952);
	if (v8)
		*(_QWORD*)(v8 + 16) = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 24i64);
}
// 140C10F28: using guessed type int dword_140C10F28;

