#include "../winhttp.h"

//----- (0000000140065950) ----------------------------------------------------
__int64 __fastcall sub_140065950(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // rbx
	__int64 v4; // rdi
	__int64 v5; // rcx
	__int64 v6; // r8
	const char* v7; // rax
	__int64 result; // rax

	v3 = *(_QWORD*)(a1 + 48);
	v4 = a3;
	if (*(unsigned __int8*)(v3 + 74) + a3 + 1 > 200)
	{
		v5 = *(_QWORD*)(v3 + 32);
		v6 = *(unsigned int*)(*(_QWORD*)v3 + 96i64);
		if ((_DWORD)v6)
			v7 = (const char*)sub_14005B130(
				v5,
				(unsigned __int64*)"function at line %d has more than %d %s",
				v6,
				200i64,
				aLocalVariables);
		else
			v7 = (const char*)sub_14005B130(
				v5,
				(unsigned __int64*)"main function has more than %d %s",
				200i64,
				aLocalVariables);
		sub_140062CF0(*(_QWORD*)(v3 + 24), v7, 0);
	}
	result = sub_140065850(a1, a2);
	*(_WORD*)(v3 + 2 * (v4 + *(unsigned __int8*)(v3 + 74)) + 196) = result;
	return result;
}

