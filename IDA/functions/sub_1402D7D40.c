#include "../winhttp.h"

//----- (00000001402D7D40) ----------------------------------------------------
__int64 __fastcall sub_1402D7D40(__int64* a1, unsigned int* a2)
{
	unsigned int v4; // ecx
	__int64 result; // rax
	__int64 v6; // rbx
	_QWORD* v7; // rdi
	__int64 v8; // r14
	__int64 v9; // rbp

	v4 = *(_DWORD*)(a1[1] + 24);
	result = 4i64;
	if (v4 > 4)
		v4 = 4;
	if (v4)
	{
		v6 = 0i64;
		v7 = a1 + 9;
		v8 = v4;
		do
		{
			v9 = *(_QWORD*)(a1[1] + 32);
			if ((unsigned int)*(unsigned __int16*)(v6 + v9) < *(_DWORD*)(*a1 + 56))
				(*(void(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)*(v7 - 4) + 48i64))(*(v7 - 4), *a2);
			result = *a1;
			if ((unsigned int)*(unsigned __int16*)(v6 + v9 + 2) < *(_DWORD*)(*a1 + 56))
				result = (*(__int64(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)*v7 + 48i64))(*v7, *a2);
			++v7;
			v6 += 296i64;
			--v8;
		} while (v8);
	}
	return result;
}

