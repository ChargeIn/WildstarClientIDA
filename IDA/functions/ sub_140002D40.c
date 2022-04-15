#include "../winhttp.h"

//----- (0000000140002D40) ----------------------------------------------------
__int64 __fastcall sub_140002D40(__int64 a1)
{
	int v2; // ecx
	_QWORD* v3; // rax

	if ((unsigned int)BinkWait(*(_QWORD*)(a1 + 96)))
		return 0i64;
	if ((unsigned int)BinkDoFrameAsyncWait(*(_QWORD*)(a1 + 96), 1000i64))
	{
		while ((unsigned int)BinkShouldSkip(*(_QWORD*)(a1 + 96)))
		{
			BinkNextFrame(*(_QWORD*)(a1 + 96));
			BinkDoFrameAsyncMulti(*(_QWORD*)(a1 + 96), a1 + 28, *(unsigned int*)(a1 + 60));
			BinkDoFrameAsyncWait(*(_QWORD*)(a1 + 96), 0xFFFFFFFFi64);
		}
		sub_140002230(a1);
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
		BinkNextFrame(*(_QWORD*)(a1 + 96));
		sub_1400021B0((_DWORD*)a1);
		BinkRegisterFrameBuffers(*(_QWORD*)(a1 + 96), a1 + 104);
		BinkDoFrameAsyncMulti(*(_QWORD*)(a1 + 96), a1 + 28, *(unsigned int*)(a1 + 60));
	}
	return 1i64;
}
// 140959B60: using guessed type __int64 __fastcall BinkRegisterFrameBuffers(_QWORD, _QWORD);
// 140959BA0: using guessed type __int64 __fastcall BinkDoFrameAsyncWait(_QWORD, _QWORD);
// 140959BE0: using guessed type __int64 __fastcall BinkWait(_QWORD);
// 140959BE8: using guessed type __int64 __fastcall BinkShouldSkip(_QWORD);
// 140959BF0: using guessed type __int64 __fastcall BinkNextFrame(_QWORD);
// 140959C08: using guessed type __int64 __fastcall BinkDoFrameAsyncMulti(_QWORD, _QWORD, _QWORD);

