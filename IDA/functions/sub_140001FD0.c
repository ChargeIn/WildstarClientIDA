#include "../winhttp.h"

//----- (0000000140001FD0) ----------------------------------------------------
__int64 __fastcall sub_140001FD0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int64 v4; // rcx
	unsigned int i; // edi
	unsigned int j; // edi
	unsigned int k; // edx

	v2 = *(_QWORD*)(a1 + 96);
	if (v2)
		result = BinkPause(v2, 1i64);
	v4 = *(_QWORD*)(a1 + 96);
	if (v4)
	{
		if ((unsigned int)(*(_DWORD*)(a1 + 64) - 3) <= 1)
			BinkDoFrameAsyncWait(v4, 0xFFFFFFFFi64);
		result = BinkClose(*(_QWORD*)(a1 + 96));
		*(_QWORD*)(a1 + 96) = 0i64;
	}
	*(_DWORD*)(a1 + 64) = 6;
	for (i = 0; i < *(_DWORD*)(a1 + 60); ++i)
		result = BinkRequestStopAsyncThread(*(unsigned int*)(a1 + 4i64 * i + 28));
	for (j = 0; j < *(_DWORD*)(a1 + 60); ++j)
		result = BinkWaitStopAsyncThread(*(unsigned int*)(a1 + 4i64 * j + 28));
	for (k = 0; k < *(_DWORD*)(a1 + 60); dword_140C635D0[*(unsigned int*)(a1 + 4 * result + 28)] = 0)
		result = k++;
	*(_DWORD*)(a1 + 60) = 0;
	return result;
}
// 140959B88: using guessed type __int64 __fastcall BinkWaitStopAsyncThread(_QWORD);
// 140959B90: using guessed type __int64 __fastcall BinkRequestStopAsyncThread(_QWORD);
// 140959B98: using guessed type __int64 __fastcall BinkClose(_QWORD);
// 140959BA0: using guessed type __int64 __fastcall BinkDoFrameAsyncWait(_QWORD, _QWORD);
// 140959BA8: using guessed type __int64 __fastcall BinkPause(_QWORD, _QWORD);
// 140C635D0: using guessed type _DWORD dword_140C635D0[8];

