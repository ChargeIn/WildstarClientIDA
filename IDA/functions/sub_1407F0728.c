//----- (00000001407F0728) ----------------------------------------------------
__int64 __fastcall sub_1407F0728(
	__int64 a1,
	__int64 a2,
	unsigned int a3,
	const CHAR* a4,
	int cbMultiByte,
	WCHAR* lpMultiByteStr,
	int a7,
	UINT CodePage,
	int a9)
{
	int v9; // ebx
	WCHAR* v10; // rdi
	int v13; // r10d
	const CHAR* v14; // rax
	UINT v15; // r14d
	__int64 v16; // rsi
	int v17; // eax
	__int64 v18; // r15
	SIZE_T v20; // rcx
	__int64 v21; // rax
	void* v22; // rsp
	WCHAR* v23; // rax
	__int64 v24; // r12
	int v25; // eax
	SIZE_T v26; // rcx
	__int64 v27; // rax
	void* v28; // rsp
	WCHAR* v29; // rbx
	WCHAR* v30; // rax
	_BYTE v31[32]; // [rsp+0h] [rbp-40h] BYREF
	LPWSTR lpWideCharStr; // [rsp+20h] [rbp-20h]
	int cchWideChar; // [rsp+28h] [rbp-18h]
	LPCCH lpDefaultChar; // [rsp+30h] [rbp-10h]
	LPBOOL lpUsedDefaultChar; // [rsp+38h] [rbp-8h]
	__int64 v36; // [rsp+40h] [rbp+0h] BYREF

	v9 = cbMultiByte;
	v10 = 0i64;
	v36 = a2;
	if (cbMultiByte > 0)
	{
		v13 = cbMultiByte;
		v14 = a4;
		while (1)
		{
			--v13;
			if (!*v14)
				break;
			++v14;
			if (!v13)
			{
				v13 = -1;
				break;
			}
		}
		v9 = cbMultiByte - v13;
		if (cbMultiByte - v13 - 1 >= cbMultiByte)
			v9 = cbMultiByte - v13 - 1;
	}
	v15 = CodePage;
	LODWORD(v16) = 0;
	if (!CodePage)
		v15 = *(_DWORD*)(*(_QWORD*)a1 + 4i64);
	v17 = MultiByteToWideChar(v15, a9 != 0 ? 9 : 1, a4, v9, 0i64, 0);
	v18 = v17;
	if (!v17)
		return 0i64;
	if (v17 > 0 && 0xFFFFFFFFFFFFFFE0ui64 / v17 >= 2)
	{
		v20 = 2i64 * v17 + 16;
		if (v20 > 0x400)
		{
			v23 = (WCHAR*)sub_1407E1500(v20);
			v10 = v23;
			if (!v23)
				goto LABEL_22;
			*(_DWORD*)v23 = 56797;
		}
		else
		{
			v21 = 2i64 * v17 + 31;
			if (2 * v18 + 31 <= (unsigned __int64)(2 * v18 + 16))
				v21 = 0xFFFFFFFFFFFFFF0i64;
			v22 = alloca(v21 & 0xFFFFFFFFFFFFFFF0ui64);
			v10 = (WCHAR*)&v36;
			if (v31 == (_BYTE*)-64i64)
				return 0i64;
			LODWORD(v36) = 52428;
		}
		v10 += 8;
	}
LABEL_22:
	if (!v10)
		return 0i64;
	if (MultiByteToWideChar(v15, 1u, a4, v9, v10, v18))
	{
		v24 = v36;
		v25 = sub_1407E87C8(v36, a3, v10, (unsigned int)v18, 0i64, 0);
		v16 = v25;
		if (v25)
		{
			if ((a3 & 0x400) != 0)
			{
				if (a7 && v25 <= a7)
					sub_1407E87C8(v24, a3, v10, (unsigned int)v18, lpMultiByteStr, a7);
				goto LABEL_48;
			}
			if (v25 <= 0 || 0xFFFFFFFFFFFFFFE0ui64 / v25 < 2)
			{
				v29 = 0i64;
			}
			else
			{
				v26 = 2i64 * v25 + 16;
				if (v26 > 0x400)
				{
					v30 = (WCHAR*)sub_1407E1500(v26);
					v29 = v30;
					if (!v30)
						goto LABEL_40;
					*(_DWORD*)v30 = 56797;
				}
				else
				{
					v27 = 2i64 * v25 + 31;
					if (2 * v16 + 31 <= (unsigned __int64)(2 * v16 + 16))
						v27 = 0xFFFFFFFFFFFFFF0i64;
					v28 = alloca(v27 & 0xFFFFFFFFFFFFFFF0ui64);
					v29 = (WCHAR*)&v36;
					if (v31 == (_BYTE*)-64i64)
						goto LABEL_48;
					LODWORD(v36) = 52428;
				}
				v29 += 8;
			}
		LABEL_40:
			if (v29)
			{
				if (sub_1407E87C8(v24, a3, v10, (unsigned int)v18, v29, v16))
				{
					lpUsedDefaultChar = 0i64;
					lpDefaultChar = 0i64;
					if (a7)
					{
						cchWideChar = a7;
						lpWideCharStr = lpMultiByteStr;
					}
					else
					{
						cchWideChar = 0;
						lpWideCharStr = 0i64;
					}
					LODWORD(v16) = WideCharToMultiByte(
						v15,
						0,
						v29,
						v16,
						(LPSTR)lpWideCharStr,
						cchWideChar,
						lpDefaultChar,
						lpUsedDefaultChar);
				}
				if (*((_DWORD*)v29 - 4) == 56797)
					sub_1407E14C0(v29 - 8);
			}
		}
	}
LABEL_48:
	if (*((_DWORD*)v10 - 4) == 56797)
		sub_1407E14C0(v10 - 8);
	return (unsigned int)v16;
}

