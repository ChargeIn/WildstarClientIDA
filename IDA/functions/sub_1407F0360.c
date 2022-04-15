//----- (00000001407F0360) ----------------------------------------------------
__int64 __fastcall sub_1407F0360(__int64 a1, __int64 a2, LCTYPE a3, CHAR* a4, int a5)
{
	UINT v7; // r14d
	unsigned int v9; // edi
	int v10; // eax
	__int64 v11; // rsi
	SIZE_T v13; // rcx
	__int64 v14; // rax
	void* v15; // rsp
	WCHAR* v16; // rbx
	WCHAR* v17; // rax
	__int64 v18; // [rsp+0h] [rbp-40h] BYREF
	LPSTR lpMultiByteStr; // [rsp+20h] [rbp-20h]
	int cbMultiByte; // [rsp+28h] [rbp-18h]
	LPCCH lpDefaultChar; // [rsp+30h] [rbp-10h]
	LPBOOL lpUsedDefaultChar; // [rsp+38h] [rbp-8h]
	__int64 v23; // [rsp+40h] [rbp+0h] BYREF

	v7 = *(_DWORD*)(*(_QWORD*)a1 + 4i64);
	v9 = 0;
	v10 = sub_1407E8688(a2, a3, 0i64, 0);
	v11 = v10;
	if (!v10)
		return 0i64;
	if (v10 <= 0 || 0xFFFFFFFFFFFFFFE0ui64 / v10 < 2)
	{
		v16 = 0i64;
	}
	else
	{
		v13 = 2i64 * v10 + 16;
		if (v13 > 0x400)
		{
			v17 = (WCHAR*)sub_1407E1500(v13);
			v16 = v17;
			if (!v17)
				goto LABEL_14;
			*(_DWORD*)v17 = 56797;
		}
		else
		{
			v14 = 2i64 * v10 + 31;
			if (2 * v11 + 31 <= (unsigned __int64)(2 * v11 + 16))
				v14 = 0xFFFFFFFFFFFFFF0i64;
			v15 = alloca(v14 & 0xFFFFFFFFFFFFFFF0ui64);
			v16 = (WCHAR*)&v23;
			if (&v18 == (__int64*)-64i64)
				return 0i64;
			LODWORD(v23) = 52428;
		}
		v16 += 8;
	}
LABEL_14:
	if (!v16)
		return 0i64;
	if (sub_1407E8688(a2, a3, v16, v11))
	{
		lpUsedDefaultChar = 0i64;
		lpDefaultChar = 0i64;
		if (a5)
		{
			cbMultiByte = a5;
			lpMultiByteStr = a4;
		}
		else
		{
			cbMultiByte = 0;
			lpMultiByteStr = 0i64;
		}
		v9 = WideCharToMultiByte(v7, 0, v16, -1, lpMultiByteStr, cbMultiByte, lpDefaultChar, lpUsedDefaultChar);
	}
	if (*((_DWORD*)v16 - 4) == 56797)
		sub_1407E14C0(v16 - 8);
	return v9;
}

