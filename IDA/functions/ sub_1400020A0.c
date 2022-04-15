#include "../winhttp.h"

//----- (00000001400020A0) ----------------------------------------------------
void __fastcall sub_1400020A0(__int64 a1)
{
	__int64 v2; // rcx
	int v3; // ecx
	_QWORD* v4; // rax
	__int64 v5; // rcx
	unsigned int i; // edi
	unsigned int j; // edi
	unsigned int k; // edx
	__int64 v9; // rax

	v2 = *(_QWORD*)(a1 + 96);
	if (v2)
	{
		if ((unsigned int)(*(_DWORD*)(a1 + 64) - 3) <= 1)
			BinkDoFrameAsyncWait(v2, 0xFFFFFFFFi64);
		BinkClose(*(_QWORD*)(a1 + 96));
		*(_QWORD*)(a1 + 96) = 0i64;
		if (*(_DWORD*)a1)
		{
			v3 = 0;
			if (*(int*)(a1 + 104) > 0)
			{
				v4 = (_QWORD*)(a1 + 160);
				do
				{
					*(v4 - 4) = 0i64;
					*(v4 - 2) = 0i64;
					*v4 = 0i64;
					v4[2] = 0i64;
					++v3;
					v4 += 8;
				} while (v3 < *(_DWORD*)(a1 + 104));
			}
			*(_DWORD*)a1 = 0;
		}
		sub_140003610((_QWORD*)(a1 + 104));
	}
	v5 = *(_QWORD*)(a1 + 480);
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		*(_QWORD*)(a1 + 480) = 0i64;
	}
	for (i = 0; i < *(_DWORD*)(a1 + 60); ++i)
		BinkRequestStopAsyncThread(*(unsigned int*)(a1 + 4i64 * i + 28));
	for (j = 0; j < *(_DWORD*)(a1 + 60); ++j)
		BinkWaitStopAsyncThread(*(unsigned int*)(a1 + 4i64 * j + 28));
	for (k = 0; k < *(_DWORD*)(a1 + 60); dword_140C635D0[*(unsigned int*)(a1 + 4 * v9 + 28)] = 0)
		v9 = k++;
	*(_DWORD*)(a1 + 60) = 0;
}
// 140959B88: using guessed type __int64 __fastcall BinkWaitStopAsyncThread(_QWORD);
// 140959B90: using guessed type __int64 __fastcall BinkRequestStopAsyncThread(_QWORD);
// 140959B98: using guessed type __int64 __fastcall BinkClose(_QWORD);
// 140959BA0: using guessed type __int64 __fastcall BinkDoFrameAsyncWait(_QWORD, _QWORD);
// 140C635D0: using guessed type _DWORD dword_140C635D0[8];

