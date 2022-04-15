#include "../winhttp.h"

//----- (000000014053FF40) ----------------------------------------------------
void __fastcall sub_14053FF40(__int64 a1, int a2)
{
	void(__fastcall * **v4)(_QWORD, __int64); // rcx
	_QWORD* v5; // rcx
	__int64 v6; // rcx
	int v7; // edx
	__int64 v8; // rcx
	__int64 v9; // rax

	while (*(_QWORD*)(a1 + 544))
		sub_140454090(*(__int64**)(a1 + 544));
	while (*(_QWORD*)(a1 + 536))
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 536) + 32i64))(*(_QWORD*)(a1 + 536));
	while (*(_QWORD*)(a1 + 552))
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 552) + 32i64))(*(_QWORD*)(a1 + 552));
	while (*(_QWORD*)(a1 + 560))
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 560) + 32i64))(*(_QWORD*)(a1 + 560));
	while (*(_QWORD*)(a1 + 568))
	{
		v4 = *(void(__fastcall****)(_QWORD, __int64))(a1 + 568);
		if (v4)
			(**v4)(v4, 1i64);
	}
	sub_140546730((__int64*)a1, a2);
	v5 = *(_QWORD**)(a1 + 24);
	if (v5)
	{
		*v5 = *(_QWORD*)(a1 + 32);
		v6 = *(_QWORD*)(a1 + 32);
		if (v6)
			*(_QWORD*)(v6 + 24) = *(_QWORD*)(a1 + 24);
		v7 = *(_DWORD*)(a1 + 340);
		v8 = qword_140C65898;
		*(_QWORD*)(a1 + 24) = 0i64;
		*(_QWORD*)(a1 + 32) = 0i64;
		v9 = sub_1403D90D0(v8, v7);
		if (v9)
			sub_140466E60(v9);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

