#include "../winhttp.h"

//----- (00000001400027C0) ----------------------------------------------------
void __fastcall sub_1400027C0(__int64 a1)
{
	int v2; // ecx
	_QWORD* v3; // rax
	int v4; // ecx

	if ((unsigned int)(*(_DWORD*)(a1 + 64) - 3) <= 1)
		BinkDoFrameAsyncWait(*(_QWORD*)(a1 + 96), 0xFFFFFFFFi64);
	if (*(_DWORD*)a1)
	{
		v2 = 0;
		if (*(int*)(a1 + 104) > 0)
		{
			v3 = (_QWORD*)(a1 + 160);
			do
			{
				*(v3 - 4) = 0i64;
				*(v3 - 2) = 0i64;
				*v3 = 0i64;
				v3[2] = 0i64;
				++v2;
				v3 += 8;
			} while (v2 < *(_DWORD*)(a1 + 104));
		}
		*(_DWORD*)a1 = 0;
	}
	v4 = *(_DWORD*)(a1 + 64);
	if (((unsigned int)(v4 - 2) <= 2 || v4 == 6 && *(_DWORD*)(a1 + 8)) && (int)sub_1400024B0(a1) >= 0)
	{
		*(_DWORD*)(a1 + 4) = 1;
		*(_DWORD*)(a1 + 64) = 2;
	}
	else
	{
		*(_DWORD*)(a1 + 64) = 5;
		sub_1400020A0(a1);
	}
}
// 140959BA0: using guessed type __int64 __fastcall BinkDoFrameAsyncWait(_QWORD, _QWORD);

