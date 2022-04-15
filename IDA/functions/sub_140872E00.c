//----- (0000000140872E00) ----------------------------------------------------
void __fastcall sub_140872E00(__int64 a1, __int64 a2)
{
	int v4; // ecx
	__int64 i; // rdx
	__int64 v6; // rax

	if (*(_BYTE*)(a1 + 45) || (*(_BYTE*)(*(_QWORD*)(a1 + 16) + 383i64) & 1) != 0)
	{
		if (!*(_BYTE*)(a1 + 46))
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 16i64))(*(_QWORD*)(a1 + 56));
		*(_BYTE*)(a1 + 46) = 1;
	}
	else
	{
		*(_BYTE*)(a1 + 46) = 0;
		if (*(_DWORD*)(a2 + 56) == 17)
			*(_BYTE*)(a1 + 44) = 1;
		if (*(_QWORD*)a2)
			goto LABEL_10;
		v4 = *(_DWORD*)(a2 + 8);
		for (i = 0i64; v4; v4 &= v4 - 1)
			i = (unsigned int)(i + 1);
		v6 = sub_140881960(dword_140C10F28, 4 * *(unsigned __int16*)(a2 + 16) * i, 0x10u);
		*(_QWORD*)(a1 + 64) = v6;
		if (v6)
		{
			*(_QWORD*)a2 = v6;
			*(_WORD*)(a2 + 18) = 0;
		LABEL_10:
			*(_DWORD*)(a2 + 12) = *(_DWORD*)(a2 + 56);
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 56i64))(*(_QWORD*)(a1 + 56), a2);
			*(_DWORD*)(a2 + 56) = *(_DWORD*)(a2 + 12);
			return;
		}
		*(_DWORD*)(a2 + 56) = 2;
	}
}
// 140C10F28: using guessed type int dword_140C10F28;

