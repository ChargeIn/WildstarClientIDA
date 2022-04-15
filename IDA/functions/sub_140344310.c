#include "../winhttp.h"

//----- (0000000140344310) ----------------------------------------------------
__int64 __fastcall sub_140344310(__int64 a1)
{
	_QWORD* v2; // rdi
	__int64 v3; // rbx
	unsigned int v4; // edx

	if (!(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 24i64))(*(_QWORD*)(a1 + 24))
		&& !(*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 32i64))(*(_QWORD*)(a1 + 24)))
	{
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 40i64))(*(_QWORD*)(a1 + 24));
	}
	sub_14034A2B0(a1 + 88);
	(**(void(__fastcall***)(__int64))a1)(a1);
	v2 = (_QWORD*)(a1 + 32);
	sub_1403499E0(a1 + 32);
	v3 = *(_QWORD*)(a1 + 24);
	if (!v2 || !*v2)
		return 2147942487i64;
	sub_140349890(v2, (_QWORD*)(v3 + 560));
	v4 = *(_DWORD*)(v3 + 544);
	if (v4 != -2147483638)
		sub_140349B20((__int64*)(v3 + 560), v4);
	return 0i64;
}

