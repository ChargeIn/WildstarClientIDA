#include "../winhttp.h"

//----- (000000014082E7E0) ----------------------------------------------------
__int64 __fastcall sub_14082E7E0(__int64 a1, int a2, int a3)
{
	_QWORD* v3; // rbx
	_QWORD* v4; // rsi
	__int64 v8; // rcx
	int v9; // eax
	_QWORD* v10; // rax
	_QWORD* v12; // [rsp+20h] [rbp-28h]

	v3 = *(_QWORD**)(a1 + 144);
	v4 = 0i64;
	while (v3)
	{
		v8 = v3[2];
		if (*(_DWORD*)(*(_QWORD*)(v8 + 8) + 24i64) == a2 && (!a3 || *(_DWORD*)(v8 + 56) == a3))
		{
			v9 = *(_DWORD*)(v8 + 64);
			if (!v9)
			{
				sub_14082FA40(a1, v3[2]);
				v10 = (_QWORD*)*v3;
				v12 = (_QWORD*)*v3;
				if (v3 == *(_QWORD**)(a1 + 144))
					*(_QWORD*)(a1 + 144) = v10;
				else
					*v4 = v10;
				if (v3 == *(_QWORD**)(a1 + 152))
					*(_QWORD*)(a1 + 152) = v4;
				*v3 = *(_QWORD*)(a1 + 160);
				--* (_DWORD*)(a1 + 176);
				*(_QWORD*)(a1 + 160) = v3;
				v3 = v12;
				continue;
			}
			*(_DWORD*)(v8 + 64) = v9 - 1;
		}
		v4 = v3;
		v3 = (_QWORD*)*v3;
	}
	return 1i64;
}

