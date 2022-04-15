#include "../winhttp.h"

//----- (0000000140197AE0) ----------------------------------------------------
int __fastcall sub_140197AE0(__int64 a1)
{
	__int64 v2; // rax
	_QWORD* v3; // rcx
	__int64 v4; // rcx
	_QWORD* v5; // rcx
	__int64 v6; // rcx

	sub_140197FF0((__int64*)a1);
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	v2 = *(_QWORD*)(a1 + 72);
	if (v2)
		LODWORD(v2) = CloseHandle(*(HANDLE*)(a1 + 72));
	v3 = *(_QWORD**)(a1 + 32);
	if (v3)
	{
		v2 = *(_QWORD*)(a1 + 40);
		*v3 = v2;
	}
	v4 = *(_QWORD*)(a1 + 40);
	if (v4)
	{
		v2 = *(_QWORD*)(a1 + 32);
		*(_QWORD*)(v4 + 32) = v2;
	}
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	v5 = *(_QWORD**)(a1 + 16);
	if (v5)
	{
		v2 = *(_QWORD*)(a1 + 24);
		*v5 = v2;
	}
	v6 = *(_QWORD*)(a1 + 24);
	if (v6)
	{
		v2 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)(v6 + 16) = v2;
	}
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	return v2;
}

