#include "../winhttp.h"

//----- (0000000140058960) ----------------------------------------------------
__int64 __fastcall sub_140058960(__int64 a1, int a2)
{
	int* v2; // rax
	__int64 v3; // r10
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v7; // rax

	v2 = (int*)sub_1400580E0(a1, a2);
	v4 = v2[2];
	if ((_DWORD)v4 == 5 || (_DWORD)v4 == 7)
		v5 = *(_QWORD*)(*(_QWORD*)v2 + 16i64);
	else
		v5 = *(_QWORD*)(*(_QWORD*)(v3 + 32) + 8 * v4 + 224);
	if (!v5)
		return 0i64;
	v7 = *(_QWORD*)(v3 + 16);
	*(_QWORD*)v7 = v5;
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)(v3 + 16) += 16i64;
	return 1i64;
}
// 14005897A: variable 'v3' is possibly undefined

