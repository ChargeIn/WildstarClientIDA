#include "../winhttp.h"

//----- (000000014074AE30) ----------------------------------------------------
__int64 __fastcall sub_14074AE30(__int64 a1)
{
	__int64 v1; // rbx
	int v2; // esi
	_DWORD* v4; // rdx
	int v5; // eax
	_DWORD* v6; // rcx
	__int64 result; // rax
	char v8; // [rsp+30h] [rbp+8h] BYREF

	v1 = qword_140C65898;
	v2 = 0;
	v4 = *(_DWORD**)(qword_140C65898 + 26392);
	if (v4
		&& *v4 != *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 8i64)
		&& (unsigned int)sub_1403A6930(qword_140C65898))
	{
		sub_1405598D0(v1 + 28848);
		v8 = 0;
		sub_1403F4900(v1, 0x18Cu, (__int64)&v8);
		v5 = 0;
	}
	else
	{
		v5 = -2147467259;
	}
	v6 = *(_DWORD**)(a1 + 16);
	LOBYTE(v2) = v5 >= 0;
	v6[2] = 1;
	result = 1i64;
	*v6 = v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

