//----- (00000001401A61C0) ----------------------------------------------------
_WORD* __fastcall sub_1401A61C0(__int64 a1, _WORD* a2)
{
	_WORD* v4; // rdi
	__int64 v5; // rbx
	_QWORD* v6; // rax
	__int64 v7; // rdx
	__int64 v9; // rax
	int v10; // r9d
	_WORD* v11; // rax
	__int64 v12; // [rsp+30h] [rbp+8h] BYREF

	if (*(_BYTE*)(a1 + 88))
	{
		v4 = sub_1401A4D00(a1 + 24, a2, (__int64)L"]]>", 2);
		if (!v4)
		{
			v5 = *(_QWORD*)(a1 + 8);
			if (*(int*)(v5 + 92) >= 0)
			{
				*(_DWORD*)(v5 + 92) = -1603862517;
				v6 = sub_14018D540(&v12, (__int64)L"%0.8x", 2691104779i64);
				v7 = *(_QWORD*)(v5 + 104);
				*(_QWORD*)(v5 + 104) = *v6;
				*v6 = v7;
				if (v12)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
			}
		}
		return v4;
	}
	else
	{
		v9 = *(_QWORD*)(a1 + 8);
		v10 = (*(_BYTE*)(v9 + 89) != 0) + 2;
		if (*(_DWORD*)(v9 + 96) == 1)
			v10 |= 4u;
		v11 = sub_1401A4D00(a1 + 24, a2, (__int64)&unk_1409E2494, v10);
		if (v11)
		{
			if (*v11)
				return v11 - 1;
		}
		else
		{
			sub_1401A81B0(*(_QWORD*)(a1 + 8), 0xA067000A, (__int64)a2);
		}
		return 0i64;
	}
}
// 140A45318: using guessed type wchar_t a08x_2[6];
// 140A45340: using guessed type wchar_t asc_140A45340[4];

