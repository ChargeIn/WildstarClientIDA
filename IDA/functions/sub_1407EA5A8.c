//----- (00000001407EA5A8) ----------------------------------------------------
__int64 __fastcall sub_1407EA5A8(
	__int64 a1,
	__int64 a2,
	unsigned int a3,
	const CHAR* a4,
	int a5,
	const CHAR* a6,
	int a7,
	UINT CodePage)
{
	int v8; // edi
	unsigned int v9; // ebx
	int v11; // edx
	const CHAR* v12; // rax
	int v13; // esi
	int v14; // eax
	const CHAR* v15; // rdx
	UINT v17; // r15d
	bool v18; // zf
	BYTE* i; // rax
	bool v20; // zf
	BYTE* j; // rax
	int v22; // eax
	__int64 cchWideChar; // r13
	SIZE_T v24; // rcx
	__int64 v25; // rax
	void* v26; // rsp
	WCHAR* lpWideCharStr; // r14
	WCHAR* v28; // rax
	int v29; // eax
	__int64 v30; // r12
	SIZE_T v31; // rcx
	__int64 v32; // rax
	void* v33; // rsp
	WCHAR* v34; // rdi
	WCHAR* v35; // rax
	_BYTE v36[32]; // [rsp+0h] [rbp-30h] BYREF
	unsigned int v37; // [rsp+30h] [rbp+0h] BYREF
	LPCCH lpMultiByteStr; // [rsp+38h] [rbp+8h]
	__int64 v39; // [rsp+40h] [rbp+10h]
	struct _cpinfo CPInfo; // [rsp+48h] [rbp+18h] BYREF

	v8 = a5;
	v9 = 0;
	v37 = a3;
	v39 = a2;
	lpMultiByteStr = a6;
	if (a5 <= 0)
	{
		if (a5 < -1)
			return 0i64;
	}
	else
	{
		v11 = a5;
		v12 = a4;
		while (1)
		{
			--v11;
			if (!*v12)
				break;
			++v12;
			if (!v11)
			{
				v11 = -1;
				break;
			}
		}
		v8 = -1 - v11 + a5;
	}
	v13 = a7;
	if (a7 <= 0)
	{
		if (a7 < -1)
			return 0i64;
	}
	else
	{
		v14 = a7;
		v15 = a6;
		while (1)
		{
			--v14;
			if (!*v15)
				break;
			++v15;
			if (!v14)
			{
				v14 = -1;
				break;
			}
		}
		v13 = -1 - v14 + a7;
	}
	v17 = CodePage;
	if (!CodePage)
		v17 = *(_DWORD*)(*(_QWORD*)a1 + 4i64);
	if (v8 && v13)
		goto LABEL_43;
	if (v8 == v13)
		return 2i64;
	if (v13 > 1)
		return 1i64;
	if (v8 > 1)
		return 3i64;
	if (!GetCPInfo(v17, &CPInfo))
		return 0i64;
	if (v8 > 0)
	{
		if (CPInfo.MaxCharSize >= 2)
		{
			v18 = CPInfo.LeadByte[0] == 0;
			for (i = CPInfo.LeadByte; !v18 && i[1]; v18 = *i == 0)
			{
				if ((unsigned int)*a4 >= *i && (unsigned int)*a4 <= i[1])
					return 2i64;
				i += 2;
			}
		}
		return 3i64;
	}
	if (v13 > 0)
	{
		if (CPInfo.MaxCharSize >= 2)
		{
			v20 = CPInfo.LeadByte[0] == 0;
			for (j = CPInfo.LeadByte; !v20 && j[1]; v20 = *j == 0)
			{
				if ((unsigned int)*a6 >= *j && (unsigned int)*a6 <= j[1])
					return 2i64;
				j += 2;
			}
		}
		return 1i64;
	}
LABEL_43:
	v22 = MultiByteToWideChar(v17, 9u, a4, v8, 0i64, 0);
	cchWideChar = v22;
	if (!v22)
		return 0i64;
	if (v22 <= 0 || 0xFFFFFFFFFFFFFFE0ui64 / v22 < 2)
	{
		lpWideCharStr = 0i64;
	}
	else
	{
		v24 = 2i64 * v22 + 16;
		if (v24 > 0x400)
		{
			v28 = (WCHAR*)sub_1407E1500(v24);
			lpWideCharStr = v28;
			if (!v28)
				goto LABEL_55;
			*(_DWORD*)v28 = 56797;
		}
		else
		{
			v25 = 2i64 * v22 + 31;
			if (2 * cchWideChar + 31 <= (unsigned __int64)(2 * cchWideChar + 16))
				v25 = 0xFFFFFFFFFFFFFF0i64;
			v26 = alloca(v25 & 0xFFFFFFFFFFFFFFF0ui64);
			lpWideCharStr = (WCHAR*)&v37;
			if (v36 == (_BYTE*)-48i64)
				return 0i64;
			v37 = 52428;
		}
		lpWideCharStr += 8;
	}
LABEL_55:
	if (!lpWideCharStr)
		return 0i64;
	if (MultiByteToWideChar(v17, 1u, a4, v8, lpWideCharStr, cchWideChar))
	{
		v29 = MultiByteToWideChar(v17, 9u, lpMultiByteStr, v13, 0i64, 0);
		v30 = v29;
		if (v29)
		{
			if (v29 <= 0 || 0xFFFFFFFFFFFFFFE0ui64 / v29 < 2)
			{
				v34 = 0i64;
			}
			else
			{
				v31 = 2i64 * v29 + 16;
				if (v31 > 0x400)
				{
					v35 = (WCHAR*)sub_1407E1500(v31);
					v34 = v35;
					if (!v35)
						goto LABEL_69;
					*(_DWORD*)v35 = 56797;
				}
				else
				{
					v32 = 2i64 * v29 + 31;
					if (2 * v30 + 31 <= (unsigned __int64)(2 * v30 + 16))
						v32 = 0xFFFFFFFFFFFFFF0i64;
					v33 = alloca(v32 & 0xFFFFFFFFFFFFFFF0ui64);
					v34 = (WCHAR*)&v37;
					if (v36 == (_BYTE*)-48i64)
						goto LABEL_74;
					v37 = 52428;
				}
				v34 += 8;
			}
		LABEL_69:
			if (v34)
			{
				if (MultiByteToWideChar(v17, 1u, lpMultiByteStr, v13, v34, v30))
					v9 = sub_1407E8448(v39, v37, lpWideCharStr, (unsigned int)cchWideChar, v34, v30);
				if (*((_DWORD*)v34 - 4) == 56797)
					sub_1407E14C0(v34 - 8);
			}
		}
	}
LABEL_74:
	if (*((_DWORD*)lpWideCharStr - 4) == 56797)
		sub_1407E14C0(lpWideCharStr - 8);
	return v9;
}

