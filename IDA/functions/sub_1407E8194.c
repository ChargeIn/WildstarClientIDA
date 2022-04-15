#include "../winhttp.h"

//----- (00000001407E8194) ----------------------------------------------------
__int64 __fastcall sub_1407E8194(__int64 a1, DWORD a2, const CHAR* a3, int a4, WORD* lpCharType, UINT CodePage, int a7)
{
	UINT v7; // r14d
	unsigned int StringTypeW; // edi
	int v12; // eax
	__int64 cchWideChar; // rsi
	SIZE_T v15; // rcx
	__int64 v16; // rax
	void* v17; // rsp
	int* lpWideCharStr; // rbx
	int* v19; // rax
	int v20; // eax
	__int64 v21; // [rsp+0h] [rbp-30h] BYREF
	__int64 v22; // [rsp+30h] [rbp+0h] BYREF

	v7 = CodePage;
	StringTypeW = 0;
	if (!CodePage)
		v7 = *(_DWORD*)(*(_QWORD*)a1 + 4i64);
	v12 = MultiByteToWideChar(v7, a7 != 0 ? 9 : 1, a3, a4, 0i64, 0);
	cchWideChar = v12;
	if (!v12)
		return 0i64;
	if (v12 <= 0 || (unsigned __int64)v12 > 0x7FFFFFFFFFFFFFF0i64)
	{
		lpWideCharStr = 0i64;
	}
	else
	{
		v15 = 2i64 * v12 + 16;
		if (v15 > 0x400)
		{
			v19 = (int*)sub_1407E1500(v15);
			lpWideCharStr = v19;
			if (!v19)
				goto LABEL_16;
			*v19 = 56797;
		}
		else
		{
			v16 = 2i64 * v12 + 31;
			if (2 * cchWideChar + 31 <= (unsigned __int64)(2 * cchWideChar + 16))
				v16 = 0xFFFFFFFFFFFFFF0i64;
			v17 = alloca(v16 & 0xFFFFFFFFFFFFFFF0ui64);
			lpWideCharStr = (int*)&v22;
			if (&v21 == (__int64*)-48i64)
				return 0i64;
			LODWORD(v22) = 52428;
		}
		lpWideCharStr += 4;
	}
LABEL_16:
	if (!lpWideCharStr)
		return 0i64;
	sub_1407E4830(lpWideCharStr, 0i64, 2 * cchWideChar);
	v20 = MultiByteToWideChar(v7, 1u, a3, a4, (LPWSTR)lpWideCharStr, cchWideChar);
	if (v20)
		StringTypeW = GetStringTypeW(a2, (LPCWCH)lpWideCharStr, v20, lpCharType);
	if (*(lpWideCharStr - 4) == 56797)
		sub_1407E14C0(lpWideCharStr - 4);
	return StringTypeW;
}

