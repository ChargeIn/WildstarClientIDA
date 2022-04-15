//----- (00000001401A81B0) ----------------------------------------------------
__int64 __fastcall sub_1401A81B0(__int64 a1, unsigned int a2, __int64 a3)
{
	_QWORD* v4; // rax
	__int64 v5; // rdx
	__int64 v7; // rcx
	__int64 v8; // [rsp+30h] [rbp+8h] BYREF

	if (*(int*)(a1 + 92) < 0)
		return *(unsigned int*)(a1 + 92);
	*(_DWORD*)(a1 + 92) = a2;
	if (a3)
	{
		v4 = sub_14018D540(&v8, (__int64)L"%0.8x %s", a2, a3);
	}
	else
	{
		if ((a2 & 0x80000000) == 0)
		{
			v7 = *(_QWORD*)(a1 + 104);
			*(_QWORD*)(a1 + 104) = 0i64;
			if (!v7)
				return a2;
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
			return *(unsigned int*)(a1 + 92);
		}
		v4 = sub_14018D540(&v8, (__int64)L"%0.8x", a2);
	}
	v5 = *(_QWORD*)(a1 + 104);
	*(_QWORD*)(a1 + 104) = *v4;
	*v4 = v5;
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
	return *(unsigned int*)(a1 + 92);
}
// 140A45318: using guessed type wchar_t a08x_2[6];
// 140A45328: using guessed type wchar_t a08xS[9];

