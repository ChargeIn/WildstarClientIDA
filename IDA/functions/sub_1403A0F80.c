#include "../winhttp.h"

//----- (00000001403A0F80) ----------------------------------------------------
__int64 __fastcall sub_1403A0F80(__int64 a1, __int64 a2, double a3, double a4)
{
	__int64 v6; // r9
	__int64 v7; // r9
	__int64 v8; // rcx
	__int64 v10; // [rsp+30h] [rbp+8h] BYREF

	sub_14055B0E0(qword_140C65898, 0, a3, a4);
	v6 = *(_QWORD*)(a1 + 25744);
	if (!v6)
		return 1i64;
	if (*(_DWORD*)(v6 + 592))
		return 1i64;
	if ((unsigned int)sub_14045E630(*(_QWORD*)(a1 + 25744)))
		return 1i64;
	if (!*(_DWORD*)(v7 + 3408))
		return 1i64;
	if (!*(_DWORD*)(v7 + 4868))
		return 1i64;
	if (!a2)
		return 1i64;
	v8 = *(_QWORD*)(a2 + 5864);
	if (!v8 || !(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v8 + 848i64))(v8, 193i64))
		return 1i64;
	if (sub_14047BFD0(*(_QWORD*)(a1 + 120)))
	{
		sub_14039E400(a1);
		*(_DWORD*)(a1 + 32136) = *(_DWORD*)(a2 + 8);
	}
	else
	{
		v10 = 0i64;
		*(_DWORD*)(a1 + 32136) = 0;
		v10 = *(unsigned int*)(a2 + 8);
		sub_1403F4900(a1, 0x14Eu, (__int64)&v10);
	}
	return 0i64;
}
// 1403A0FCC: variable 'v7' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

