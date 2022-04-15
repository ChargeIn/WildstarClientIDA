#include "../winhttp.h"

//----- (00000001400589C0) ----------------------------------------------------
__int64 __fastcall sub_1400589C0(__int64 a1, int a2)
{
	_DWORD* v2; // rax
	__int64 v3; // r10
	__int64 result; // rax
	__int64 v5; // rdx
	__int64 v6; // rcx
	__int64 v7; // rdx
	__int64 v8; // rcx

	v2 = sub_1400580E0(a1, a2);
	if (v2[2] == 6 || v2[2] == 7)
	{
		result = *(_QWORD*)v2;
		v7 = *(_QWORD*)(v3 + 16);
		v8 = *(_QWORD*)(result + 24);
		*(_DWORD*)(v7 + 8) = 5;
		*(_QWORD*)v7 = v8;
		*(_QWORD*)(v3 + 16) += 16i64;
	}
	else
	{
		if (v2[2] == 8)
		{
			v5 = *(_QWORD*)v2;
			v6 = *(_QWORD*)(v3 + 16);
			*(_QWORD*)v6 = *(_QWORD*)(*(_QWORD*)v2 + 120i64);
			result = *(unsigned int*)(v5 + 128);
			*(_DWORD*)(v6 + 8) = result;
		}
		else
		{
			result = *(_QWORD*)(v3 + 16);
			*(_DWORD*)(result + 8) = 0;
		}
		*(_QWORD*)(v3 + 16) += 16i64;
	}
	return result;
}
// 1400589DC: variable 'v3' is possibly undefined

