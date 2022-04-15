//----- (000000014066D610) ----------------------------------------------------
__int64 __fastcall sub_14066D610(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rdi
	__int64 v5; // rax
	__int64 v6; // rsi
	__int64 v7; // rsi
	unsigned __int64 v8; // rcx
	unsigned __int16* v9; // rdx
	unsigned __int64* v10; // rdx
	unsigned __int64 v11; // r8
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	__int64 v14; // [rsp+28h] [rbp-20h]

	if (*(_QWORD*)(qword_140C65898 + 120) && (v2 = sub_140056AB0(a1, 1u)) != 0 && (v3 = *(_QWORD*)(v2 + 8)) != 0)
		v4 = sub_14066DAB0(*(_QWORD*)(*(_QWORD*)(v3 + 8) + 8i64), **(_DWORD**)(*(_QWORD*)(v3 + 8) + 8i64));
	else
		v4 = 0i64;
	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v5 = sub_140056AB0(a1, 1u)) != 0
		&& (v6 = *(_QWORD*)(v5 + 8)) != 0
		&& (v7 = *(_QWORD*)(v6 + 8)) != 0
		&& v4
		&& (*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 88i64))(v4, **(unsigned int**)(v7 + 8)))
	{
		v8 = *(_QWORD*)(*(_QWORD*)(v7 + 8) + 64i64);
		if (v8)
		{
			if (v8 <= qword_140C3FE70)
				v9 = (unsigned __int16*)(v8 + qword_140C3FE68);
			else
				v9 = 0i64;
		}
		else
		{
			v9 = 0i64;
		}
		v10 = (unsigned __int64*)sub_14018F0E0(&v13, v9)[1];
		if (v10)
		{
			v11 = -1i64;
			do
				++v11;
			while (*((_BYTE*)v10 + v11));
			sub_140058710((__int64)a1, v10, v11);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v14)
			sub_14018B900(v14, 0);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65898: using guessed type __int64 qword_140C65898;

