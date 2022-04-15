#include "../winhttp.h"

//----- (000000014038D8E0) ----------------------------------------------------
void __fastcall sub_14038D8E0(__int64 a1, int a2)
{
	float v3; // xmm0_4
	int v4; // r10d
	int v5; // edx
	__int64* v6; // rcx
	__int64 v7; // rax

	if (*(_DWORD*)(a1 + 236))
	{
		if (a2)
		{
			v3 = sub_14038C510(a1, *(_DWORD*)(*(_QWORD*)(a1 + 16) + 880i64));
			*(_DWORD*)(a1 + 244) = 0;
			*(_DWORD*)(a1 + 248) = v5;
			*(_DWORD*)(a1 + 252) = v5 + v4;
			*(float*)(a1 + 240) = v3;
		}
		else
		{
			*(_QWORD*)(a1 + 240) = 0i64;
			*(_QWORD*)(a1 + 248) = 0i64;
		}
		if (!*(_QWORD*)(a1 + 1056))
		{
			v6 = (__int64*)(*(_QWORD*)(a1 + 16) + 5272i64);
			*(_QWORD*)(a1 + 1056) = v6;
			*(_QWORD*)(a1 + 1064) = *v6;
			*v6 = a1;
			v7 = *(_QWORD*)(a1 + 1064);
			if (v7)
				*(_QWORD*)(v7 + 1056) = a1 + 1064;
			(**(void(__fastcall***)(__int64))a1)(a1);
		}
		*(_DWORD*)(a1 + 236) = 0;
	}
}
// 14038D917: variable 'a1' is possibly undefined
// 14038D91D: variable 'v5' is possibly undefined
// 14038D911: variable 'v4' is possibly undefined

