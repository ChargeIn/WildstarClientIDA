#include "../winhttp.h"

//----- (00000001401C3640) ----------------------------------------------------
signed int __fastcall sub_1401C3640(__int64 a1, int* a2)
{
	signed int result; // eax
	__int64 v5; // rbx
	__int64 v6; // rax
	int* v7; // rax
	_WORD* i; // rbx
	_WORD* v9; // rax
	_WORD* v10; // rbx
	const WCHAR* v11; // rcx
	__int64 v12; // rax
	_WORD* v13; // rcx
	_WORD* v14; // rdx
	__int64 v15; // rax
	_WORD* v16; // rcx
	__int64 v17; // rax
	_WORD* v18; // rax
	const WCHAR* v19; // rcx

	if (!a2)
		return -2147024809;
	v5 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v5;
		while (*((_WORD*)a2 + v5));
	}
	sub_14018B900(*(_QWORD*)a1, 0i64);
	v6 = 2 * (2 * v5 + 6);
	if (!is_mul_ok(2 * v5 + 6, 2ui64))
		v6 = -1i64;
	v7 = sub_14018B280(v6, 0);
	*(_QWORD*)a1 = v7;
	sub_1407DB590(v7, a2, 2 * v5 + 2);
	for (i = *(_WORD**)a1; *i; ++i)
	{
		if (*i == 92)
			*i = 47;
	}
	if ((unsigned __int64)i > *(_QWORD*)a1)
	{
		v9 = i - 1;
		if (*(i - 1) == 47)
		{
			--i;
			*v9 = 0;
		}
	}
	v10 = i + 1;
	sub_1407E4830((int*)(a1 + 8), 0i64, 0x68ui64);
	v11 = *(const WCHAR**)a1;
	*(_DWORD*)(a1 + 8) = 104;
	*(_DWORD*)(a1 + 40) = -1;
	*(_DWORD*)(a1 + 56) = -1;
	*(_DWORD*)(a1 + 72) = -1;
	*(_DWORD*)(a1 + 88) = -1;
	*(_DWORD*)(a1 + 104) = -1;
	if (WinHttpCrackUrl(v11, 0, 0, (LPURL_COMPONENTS)(a1 + 8)))
	{
		v12 = (unsigned int)++ * (_DWORD*)(a1 + 40);
		++* (_DWORD*)(a1 + 56);
		++* (_DWORD*)(a1 + 72);
		++* (_DWORD*)(a1 + 88);
		++* (_DWORD*)(a1 + 104);
		v13 = &v10[v12];
		v14 = &v13[*(unsigned int*)(a1 + 56)];
		v15 = *(unsigned int*)(a1 + 72);
		*(_QWORD*)(a1 + 48) = v13;
		v16 = &v14[v15];
		v17 = *(unsigned int*)(a1 + 88);
		*(_QWORD*)(a1 + 64) = v14;
		v18 = &v16[v17];
		*(_QWORD*)(a1 + 80) = v16;
		v19 = *(const WCHAR**)a1;
		*(_QWORD*)(a1 + 32) = v10;
		*(_QWORD*)(a1 + 96) = v18;
		if (WinHttpCrackUrl(v19, 0, 0, (LPURL_COMPONENTS)(a1 + 8)))
			return 0;
	}
	result = GetLastError();
	if (result > 0)
		return (unsigned __int16)result | 0x80070000;
	return result;
}
// 14018B900: using guessed type __int64 __fastcall sub_14018B900(_QWORD, _QWORD);

