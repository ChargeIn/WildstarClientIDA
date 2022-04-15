#include "../winhttp.h"

//----- (00000001401B58D0) ----------------------------------------------------
__int64 __fastcall sub_1401B58D0(__int64 a1, const __m128i* a2, __int64 a3)
{
	__int64 v3; // rdi
	__int64 v6; // r8
	__int64 v7; // rbx
	__int64 v8; // rsi
	__int64 v9; // rcx
	__int64 v10; // rcx
	DWORD FileAttributesW; // eax
	const __m128i* v12; // rax
	__int64 v13; // rax
	char v14[24]; // [rsp+30h] [rbp-678h] BYREF
	char v15[24]; // [rsp+48h] [rbp-660h] BYREF
	WCHAR v16[264]; // [rsp+60h] [rbp-648h] BYREF
	WCHAR FileName[264]; // [rsp+270h] [rbp-438h] BYREF
	char v18[528]; // [rsp+480h] [rbp-228h] BYREF

	v3 = *(_QWORD*)&qword_140C63788;
	if (!a2)
		return 0i64;
	v7 = 0i64;
	if (!sub_1401B5110(*(__int64*)&qword_140C63788, v18, a3, (__int64)a2))
	{
		sub_1401B5020(v3, FileName, v6, (const WCHAR*)a2);
		FileAttributesW = GetFileAttributesW(FileName);
		if (FileAttributesW != -1)
			return (FileAttributesW & 0x10) == 0;
		goto LABEL_13;
	}
	v8 = 0i64;
	if (!*(_QWORD*)(v3 + 2136))
	{
	LABEL_8:
		if (!*(_DWORD*)(v3 + 2160))
			return 0i64;
		sub_1401B5020(v3, FileName, v6, (const WCHAR*)a2);
		FileAttributesW = GetFileAttributesW(FileName);
		if (FileAttributesW != -1)
			return (FileAttributesW & 0x10) == 0;
	LABEL_13:
		if (*(_DWORD*)(v3 + 2160) && *(_QWORD*)(v3 + 1592))
		{
			v12 = sub_1407DD8D8(a2, 0x5Cu);
			v13 = v12 ? (__int64)&v12->m128i_i16[1] : (__int64)a2;
			sub_14001B370(v16, 260i64, L"%s\\%s", v3 + 1072, v13);
			if (v16[0])
			{
				do
					++v7;
				while (v16[v7]);
				if (v7)
				{
					FileAttributesW = GetFileAttributesW(v16);
					if (FileAttributesW != -1)
						return (FileAttributesW & 0x10) == 0;
				}
			}
		}
		return 0i64;
	}
	while (1)
	{
		v9 = *(_QWORD*)(*(_QWORD*)(v3 + 2128) + 8 * v8);
		if ((*(int(__fastcall**)(__int64, char*, char*))(*(_QWORD*)v9 + 40i64))(v9, v18, v14) >= 0)
		{
			v10 = *(_QWORD*)(*(_QWORD*)(v3 + 2144) + 8 * v8);
			if ((*(int(__fastcall**)(__int64, char*, _QWORD, _QWORD))(*(_QWORD*)v10 + 24i64))(v10, v15, 0i64, 0i64) >= 0)
				return 1i64;
		}
		if ((unsigned __int64)++v8 >= *(_QWORD*)(v3 + 2136))
			goto LABEL_8;
	}
}
// 1401B59A8: variable 'v6' is possibly undefined
// 140A47458: using guessed type wchar_t aSS_12[6];
// 1401B58D0: using guessed type char var_678[24];
// 1401B58D0: using guessed type char var_660[24];
// 1401B58D0: using guessed type WCHAR var_648[264];

