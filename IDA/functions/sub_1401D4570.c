//----- (00000001401D4570) ----------------------------------------------------
__int64 __fastcall sub_1401D4570(__int64 a1, unsigned __int64 a2, DWORD_PTR a3, unsigned __int64 a4)
{
	unsigned __int64 v5; // rax
	signed int v6; // eax
	unsigned int v7; // ecx

	if (!a4)
		return 0i64;
	if (!a3)
		return 2147942487i64;
	v5 = *(_QWORD*)(a1 + 560);
	if (a2 > v5 || a4 > v5 - a2)
		return 2147942487i64;
	v6 = sub_1401C3B70(*(HINTERNET**)(a1 + 8), (const WCHAR*)(a1 + 16), a2, a3, a4);
	v7 = 0;
	if (v6 < 0)
		return (unsigned int)v6;
	return v7;
}

