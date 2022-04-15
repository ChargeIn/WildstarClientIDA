#include "../winhttp.h"

//----- (00000001400EADB0) ----------------------------------------------------
__int64 __fastcall sub_1400EADB0(__int64 a1, __int64 a2, int* a3)
{
	__int64 v4; // rax
	__int64 v5; // rcx
	int v6; // edx
	_QWORD* v7; // rax
	__int64 v8; // rdx
	__int64 result; // rax

	v4 = sub_14013A630(a1 + 2496, a3);
	if (!v4
		|| !*(_QWORD*)(v4 + 8)
		|| (v5 = *(_QWORD*)(v4 + 456), *(_QWORD*)v5 == v5)
		|| (v6 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)v5 + 16i64) + 56i64), v6 == -2))
	{
		result = *(_QWORD*)(a2 + 16);
		*(_DWORD*)(result + 8) = 0;
		*(_QWORD*)(a2 + 16) += 16i64;
	}
	else
	{
		v7 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v6);
		v8 = *(_QWORD*)(a2 + 16);
		*(_QWORD*)v8 = *v7;
		result = *((unsigned int*)v7 + 2);
		*(_DWORD*)(v8 + 8) = result;
		*(_QWORD*)(a2 + 16) += 16i64;
	}
	return result;
}

