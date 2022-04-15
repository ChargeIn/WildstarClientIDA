#include "../winhttp.h"

//----- (000000014038D820) ----------------------------------------------------
__int64 __fastcall sub_14038D820(__int64 a1, int a2)
{
	__int64 v3; // r11
	float v4; // xmm0_4
	int v5; // edx
	int v6; // r10d
	__int64 result; // rax
	_QWORD* v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rax

	if (*(_DWORD*)(a1 + 236) != 1)
	{
		v3 = 0i64;
		if (a2)
		{
			v4 = sub_14038C510(a1, *(_DWORD*)(*(_QWORD*)(a1 + 16) + 880i64));
			result = (unsigned int)(v5 + v6);
			*(_DWORD*)(a1 + 248) = v5;
			*(_DWORD*)(a1 + 252) = result;
			*(float*)(a1 + 240) = v4;
		}
		else
		{
			*(_DWORD*)(a1 + 240) = 1065353216;
			*(_QWORD*)(a1 + 248) = 0i64;
		}
		*(_DWORD*)(a1 + 244) = 1065353216;
		v8 = *(_QWORD**)(a1 + 1056);
		if (v8)
		{
			*v8 = *(_QWORD*)(a1 + 1064);
			v9 = *(_QWORD*)(a1 + 1064);
			if (v9)
				*(_QWORD*)(v9 + 1056) = *(_QWORD*)(a1 + 1056);
			v10 = *(_QWORD*)a1;
			*(_QWORD*)(a1 + 1056) = v3;
			*(_QWORD*)(a1 + 1064) = v3;
			result = (*(__int64(__fastcall**)(__int64))(v10 + 8))(a1);
		}
		*(_DWORD*)(a1 + 236) = 1;
	}
	return result;
}
// 14038D84F: variable 'v5' is possibly undefined
// 14038D84F: variable 'v6' is possibly undefined
// 14038D853: variable 'a1' is possibly undefined
// 14038D8BA: variable 'v3' is possibly undefined

