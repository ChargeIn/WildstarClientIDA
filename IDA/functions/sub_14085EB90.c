//----- (000000014085EB90) ----------------------------------------------------
__int64 __fastcall sub_14085EB90(__int64 a1, __int64 a2)
{
	__int64 v3; // r9
	char v5; // r8
	__int64 v6; // rcx
	bool v7; // al
	__int64 i; // rcx
	int v9; // esi
	unsigned int v10; // edi
	__int64 v11; // rax
	unsigned __int16* v12; // rax
	__int64 v13; // rcx

	v3 = *(_QWORD*)(a1 + 88) + 8i64;
	if (*(_QWORD*)(a1 + 88) == -8i64)
		return 1i64;
	v5 = *(_BYTE*)(a1 + 379);
	if ((v5 & 0xC) == 0)
	{
		v6 = *(_QWORD*)(a1 + 160);
		v7 = (*(_DWORD*)(v6 + 96) & 0x400i64) != 0 && (*(_BYTE*)(v6 + 91) & 0x10) != 0;
		for (i = *(_QWORD*)(v6 + 64); !v7; i = *(_QWORD*)(i + 64))
		{
			if (!i)
				break;
			v7 = (*(_DWORD*)(i + 96) & 0x400i64) != 0 && (*(_BYTE*)(i + 91) & 0x10) != 0;
		}
		if ((v5 & 3) == 0 && !v7)
			return 1i64;
	}
	v9 = *(_DWORD*)v3;
	v10 = 1;
	if (*(_QWORD*)a2 && *(_DWORD*)(a2 + 8) == v9)
	{
		*(_QWORD*)(a1 + 504) = *(_QWORD*)a2;
		*(_DWORD*)(a1 + 512) = *(_DWORD*)(a2 + 8);
	}
	if (!*(_QWORD*)(a1 + 504) || (*(_BYTE*)(v3 + 28) & 4) != 0)
	{
		v11 = sub_14083A400(qword_140C61B98);
		*(_QWORD*)(a1 + 504) = v11;
		if (v11)
		{
			v12 = (unsigned __int16*)sub_14084EB00(*(_QWORD*)(a1 + 160));
			v10 = sub_140873E20(*(_QWORD*)(a1 + 88), *(_QWORD*)(a1 + 504), v12);
			if (v10 != 1)
			{
				sub_14083A630((__int64**)qword_140C61B98, *(_QWORD*)(a1 + 504));
				v9 = 0;
				*(_QWORD*)(a1 + 504) = 0i64;
			}
			*(_DWORD*)(a1 + 512) = v9;
		}
	}
	if ((*(_BYTE*)(*(_QWORD*)(a1 + 88) + 76i64) & 0x10) == 0)
	{
		v13 = *(_QWORD*)(a1 + 504);
		if (v13)
			sub_1408676E0(v13, *(unsigned __int8*)(*(_QWORD*)(a1 + 176) + 18i64));
	}
	return v10;
}
// 140C61B98: using guessed type __int64 qword_140C61B98;

