//----- (000000014085CA20) ----------------------------------------------------
__int64 __fastcall sub_14085CA20(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rdi
	int v6; // ebx
	__int64 v7; // rax
	__int64 v8; // rax
	int v9; // ebx

	if (*(_DWORD*)(a1 + 48) <= 1u)
	{
		v2 = sub_1408819F0(dword_140C10F28, 152i64);
		if (!v2)
			return 0i64;
		v3 = sub_140878140(v2);
		v4 = v3;
		if (!v3)
			return 0i64;
		if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v3 + 96i64))(v3, a1) == 1)
			return v4;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4);
		v6 = dword_140C10F28;
		(**(void(__fastcall***)(__int64, _QWORD))v4)(v4, 0i64);
		sub_140881720(v6, v4);
	}
	if ((*(_DWORD*)(a1 + 48) & 0xFFFFFFFD) == 0)
	{
		v7 = sub_1408819F0(dword_140C10F28, 72i64);
		if (v7)
		{
			v8 = sub_140877460(v7);
			v4 = v8;
			if (v8)
			{
				if ((unsigned int)sub_140877B40(v8, a1) == 1)
					return v4;
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4);
				v9 = dword_140C10F28;
				(**(void(__fastcall***)(__int64, _QWORD))v4)(v4, 0i64);
				sub_140881720(v9, v4);
			}
		}
	}
	return 0i64;
}
// 140C10F28: using guessed type int dword_140C10F28;

