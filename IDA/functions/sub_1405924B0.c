//----- (00000001405924B0) ----------------------------------------------------
__int64 __fastcall sub_1405924B0(__int64 a1, _DWORD* a2, __int64 a3, __int64 a4)
{
	__int64* v8; // rcx
	__int64 v9; // rdx
	__int64 v10; // rsi
	bool v11; // zf
	__int64 v12; // [rsp+20h] [rbp-38h] BYREF
	__int64 v13; // [rsp+28h] [rbp-30h]
	int v14; // [rsp+30h] [rbp-28h]

	if (!a3 || !a4 || !a1)
		return 1i64;
	if (a2[2] != 1)
		return 80i64;
	*(_DWORD*)a4 = *a2;
	*(_DWORD*)(a4 + 4) = a2[1];
	*(_DWORD*)(a4 + 8) = a2[2];
	if ((sub_14040BDB0((unsigned __int8*)a3) & 0xFEFFFFFFFFFFFFFFui64) != 0)
	{
		if (*(_DWORD*)(a3 + 8) != 1)
			return 80i64;
		v8 = &v12;
		v9 = 5i64;
		v12 = 0i64;
		v13 = 0i64;
		v14 = 0;
		v10 = a1 - (_QWORD)&v12;
		do
		{
			v11 = *(_DWORD*)((char*)v8 + v10 + 4) == 4;
			v8 = (__int64*)((char*)v8 + 4);
			*((_DWORD*)v8 - 1) = v11;
			--v9;
		} while (v9);
		*(_BYTE*)(a4 + 6) = *(_BYTE*)(a3 + 6);
		if ((_DWORD)v12)
			*(_BYTE*)a4 = *(_BYTE*)a3;
		if (HIDWORD(v12))
			*(_BYTE*)(a4 + 1) = *(_BYTE*)(a3 + 1);
		if ((_DWORD)v13)
			*(_BYTE*)(a4 + 2) = *(_BYTE*)(a3 + 2);
		if (HIDWORD(v13))
			*(_BYTE*)(a4 + 3) = *(_BYTE*)(a3 + 3);
		if (v14)
			*(_BYTE*)(a4 + 4) = *(_BYTE*)(a3 + 4);
	}
	return 0i64;
}

