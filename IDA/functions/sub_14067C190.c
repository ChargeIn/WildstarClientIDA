#include "../winhttp.h"

//----- (000000014067C190) ----------------------------------------------------
__int64 __fastcall sub_14067C190(_QWORD* a1)
{
	__int64 v2; // rax
	__int64* v3; // rdi
	unsigned int v4; // eax
	int v5; // edi
	BOOL v6; // eax
	_DWORD* v7; // rcx
	_DWORD* v8; // rax

	v2 = sub_14067B760(a1);
	v3 = (__int64*)v2;
	if (v2 && *(_QWORD*)(qword_140C65898 + 120) && (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2) >= 2)
	{
		v4 = sub_14056C2B0(v3);
		v5 = 0;
		if (v4)
			v6 = sub_140485FA0(v4, 0);
		else
			v6 = 0;
		v7 = (_DWORD*)a1[2];
		LOBYTE(v5) = v6;
		v7[2] = 1;
		*v7 = v5;
	}
	else
	{
		v8 = (_DWORD*)a1[2];
		*v8 = 0;
		v8[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

