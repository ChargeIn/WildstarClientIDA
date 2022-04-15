//----- (00000001401C94C0) ----------------------------------------------------
__int64 __fastcall sub_1401C94C0(int** a1)
{
	const wchar_t* v2; // r9
	LPCWSTR v3; // rbx
	LSTATUS v4; // eax
	unsigned int v5; // edi
	int* v6; // rcx
	HKEY v7; // rax
	LPCWSTR lpSubKey; // [rsp+48h] [rbp+10h] BYREF
	HKEY phkResult; // [rsp+50h] [rbp+18h] BYREF

	if (!*(_QWORD*)&qword_140C63788 || (v2 = *(const wchar_t**)(*(_QWORD*)&qword_140C63788 + 4896i64)) == 0i64)
		v2 = L"WildStar";
	sub_14018D540(&lpSubKey, (__int64)L"SOFTWARE\\%s\\%s\\%s", L"NCSOFT", v2, L"Log");
	v3 = lpSubKey;
	v4 = RegOpenKeyExW(HKEY_CURRENT_USER, lpSubKey, 0, 0xF003Fu, &phkResult);
	v5 = v4;
	if (v4)
	{
		*a1 = 0i64;
		if (v4 > 0)
			v5 = (unsigned __int16)v4 | 0x80070000;
	}
	else
	{
		v6 = sub_14018B280(24i64, 0);
		if (v6)
		{
			v7 = phkResult;
			v6[2] = 1;
			*((_QWORD*)v6 + 2) = v7;
			*(_QWORD*)v6 = off_140B5F8E0;
		}
		else
		{
			v6 = 0i64;
		}
		*a1 = v6;
		v5 = 0;
	}
	if (v3)
		(*(void(__fastcall**)(LPCWSTR))(*((_QWORD*)v3 - 2) + 8i64))(v3 - 8);
	return v5;
}
// 140A44AB8: using guessed type wchar_t aLog[4];
// 140A44EF0: using guessed type wchar_t aNcsoft[7];
// 140A44F50: using guessed type wchar_t aWildstar_0[9];
// 140A47D40: using guessed type wchar_t aSoftwareSSS[18];
// 140B5F8E0: using guessed type __int64 (__fastcall *off_140B5F8E0[2])();

