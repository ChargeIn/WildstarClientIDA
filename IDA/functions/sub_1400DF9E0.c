#include "../winhttp.h"

//----- (00000001400DF9E0) ----------------------------------------------------
__int64 __fastcall sub_1400DF9E0(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rdi
	__int64 v4; // rcx
	_QWORD* v5; // rax
	__int64 v6; // r10
	__int64 v7; // rdx
	int v8; // ecx

	result = sub_1400D66A0(a1, 1u);
	v3 = result;
	if (result)
	{
		v4 = *(_QWORD*)(result + 288);
		if (v4 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4))
		{
			v5 = sub_14005C3C0(
				*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 288) + 16i64) + 32i64) + 160i64),
				*(_DWORD*)(*(_QWORD*)(v3 + 288) + 8i64));
			v7 = *(_QWORD*)(v6 + 16);
			*(_QWORD*)v7 = *v5;
			v8 = *((_DWORD*)v5 + 2);
			result = 1i64;
			*(_DWORD*)(v7 + 8) = v8;
			*(_QWORD*)(v6 + 16) += 16i64;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	return result;
}
// 1400DFA3E: variable 'v6' is possibly undefined

