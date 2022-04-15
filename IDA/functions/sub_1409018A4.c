#include "../winhttp.h"

//----- (00000001409018A4) ----------------------------------------------------
__int64 __fastcall sub_1409018A4(
	LPSTR lpMultiByteStr,
	__int64 cbMultiByte,
	LPCCH a3,
	unsigned int* a4,
	__int64 a5,
	_OWORD* a6)
{
	__int64 v10; // rbx
	WCHAR* v11; // rbp
	WCHAR* v12; // rdi
	int v13; // eax
	int cchWideChar; // r12d
	int v15; // eax
	WCHAR* lpWideCharStr; // rax
	const CHAR* v17; // r8
	__int64 v18; // r14
	int LastError; // eax
	__int64 v21; // [rsp+40h] [rbp-48h] BYREF
	__int64 v22; // [rsp+50h] [rbp-38h]
	char v23; // [rsp+58h] [rbp-30h]

	v10 = 0i64;
	v11 = 0i64;
	v12 = 0i64;
	sub_1407DE348((__int64)&v21, a6);
	if (!lpMultiByteStr || !cbMultiByte || (*lpMultiByteStr = 0, !a3) || !a4)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		goto LABEL_15;
	}
	v13 = MultiByteToWideChar(*(_DWORD*)(v21 + 12), 0, a3, -1, 0i64, 0);
	cchWideChar = v13;
	if (v13)
	{
		lpWideCharStr = (WCHAR*)sub_1407E2C30(2i64 * v13);
		v11 = lpWideCharStr;
		if (!lpWideCharStr)
			goto LABEL_14;
		v17 = a3;
		v18 = v21;
		if (MultiByteToWideChar(*(_DWORD*)(v21 + 12), 0, v17, -1, lpWideCharStr, cchWideChar))
		{
			v12 = (WCHAR*)sub_1407E2C30(2 * cbMultiByte);
			if (v12)
			{
				v10 = sub_140906E48(v12, cbMultiByte, v11, a4, a5, a6);
				if (v10)
				{
					if (!WideCharToMultiByte(*(_DWORD*)(v18 + 12), 0, v12, -1, lpMultiByteStr, cbMultiByte, 0i64, 0i64))
					{
						LastError = GetLastError();
						sub_1407DE160(LastError);
						v10 = 0i64;
					}
				}
			}
			goto LABEL_14;
		}
	}
	v15 = GetLastError();
	sub_1407DE160(v15);
LABEL_14:
	sub_1407E14C0(v12);
	sub_1407E14C0(v11);
LABEL_15:
	if (v23)
		*(_DWORD*)(v22 + 200) &= ~2u;
	return v10;
}

