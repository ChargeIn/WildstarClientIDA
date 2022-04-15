#include "../winhttp.h"

//----- (000000014074AED0) ----------------------------------------------------
__int64 __fastcall sub_14074AED0(__int64 a1)
{
	int v1; // edi
	_DWORD* v3; // rdx
	int v4; // eax
	_DWORD* v5; // rcx
	bool v6; // sf
	__int64 result; // rax
	char v8; // [rsp+30h] [rbp+8h] BYREF

	v1 = 0;
	v3 = *(_DWORD**)(qword_140C65898 + 26392);
	if (!v3 || *v3 == *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 8i64))
	{
		v4 = -2147467259;
	}
	else
	{
		v8 = 0;
		sub_1403F4900(qword_140C65898, 0x191u, (__int64)&v8);
		v4 = 0;
	}
	v5 = *(_DWORD**)(a1 + 16);
	v6 = v4 < 0;
	result = 1i64;
	LOBYTE(v1) = !v6;
	v5[2] = 1;
	*v5 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

