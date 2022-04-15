#include "../winhttp.h"

//----- (00000001400DD750) ----------------------------------------------------
__int64 __fastcall sub_1400DD750(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rdi
	_QWORD* v4; // rax
	__int64 v5; // r11
	__int64 v6; // rcx

	result = sub_1400D66A0(a1, 1u);
	if (result)
	{
		v3 = result + 816;
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)(result + 816) + 8i64))(result + 816))
		{
			v4 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 16) + 32i64) + 160i64), *(_DWORD*)(v3 + 8));
			v6 = *(_QWORD*)(v5 + 16);
			*(_QWORD*)v6 = *v4;
			*(_DWORD*)(v6 + 8) = *((_DWORD*)v4 + 2);
			*(_QWORD*)(v5 + 16) += 16i64;
			return 1i64;
		}
		else
		{
			result = 1i64;
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
	}
	return result;
}
// 1400DD79E: variable 'v5' is possibly undefined

