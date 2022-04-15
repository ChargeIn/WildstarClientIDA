#include "../winhttp.h"

//----- (0000000140906FFC) ----------------------------------------------------
__int64 sub_140906FFC()
{
	LPCWCH* v0; // rbx
	const WCHAR* v1; // rax
	int v2; // eax
	int cbMultiByte; // edi
	void* lpMultiByteStr; // rax
	LPVOID lpMem; // [rsp+50h] [rbp+8h] BYREF

	lpMem = 0i64;
	v0 = (LPCWCH*)qword_140C5F508;
	v1 = *(const WCHAR**)qword_140C5F508;
	if (!*(_QWORD*)qword_140C5F508)
		return 0i64;
	while (1)
	{
		v2 = WideCharToMultiByte(0, 0, v1, -1, 0i64, 0, 0i64, 0i64);
		cbMultiByte = v2;
		if (!v2)
			break;
		lpMultiByteStr = sub_1407E2BB0(v2, 1ui64);
		lpMem = lpMultiByteStr;
		if (!lpMultiByteStr)
			break;
		if (!WideCharToMultiByte(0, 0, *v0, -1, (LPSTR)lpMultiByteStr, cbMultiByte, 0i64, 0i64))
		{
			sub_1407E14C0(lpMem);
			return 0xFFFFFFFFi64;
		}
		if ((int)sub_140907504((__int8**)&lpMem, 0) < 0)
		{
			if (lpMem)
			{
				sub_1407E14C0(lpMem);
				lpMem = 0i64;
			}
		}
		v1 = *++v0;
		if (!*v0)
			return 0i64;
	}
	return 0xFFFFFFFFi64;
}

