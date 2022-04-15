//----- (0000000140418B40) ----------------------------------------------------
__int64 __fastcall sub_140418B40(_QWORD* a1)
{
	int* v2; // rax
	int* v3; // rdx
	int v5; // esi
	int v6; // ecx
	signed int v7; // eax
	__int16* v8; // rax
	unsigned __int64* v9; // rdx
	unsigned __int64 v10; // r8
	__int64 v11; // rax
	__int64 v12; // rcx
	unsigned int v13; // eax
	__int16* v14; // rax
	__int64 v15; // [rsp+20h] [rbp-28h] BYREF
	__int64 v16; // [rsp+28h] [rbp-20h]

	v2 = sub_140417BF0(a1, 1u);
	v3 = v2;
	if (!v2)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v5 = 31;
	if ((v2[85] & 0x400) != 0 && (v6 = v2[96]) != 0)
	{
		v7 = 0;
		while (!_bittest(&v6, v7))
		{
			if ((unsigned int)++v7 >= 0x1F)
				goto LABEL_8;
		}
	}
	else
	{
	LABEL_8:
		v7 = 31;
	}
	if ((unsigned __int64)v7 >= 0x1F)
	{
		v11 = sub_14020E7A0(v3[95]);
		v12 = v11;
		if (v11)
		{
			v12 = *(unsigned int*)(v11 + 16);
			v13 = 0;
			while (!_bittest((const int*)&v12, v13))
			{
				if (++v13 >= 0x1F)
					goto LABEL_23;
			}
			v5 = v13;
		}
	LABEL_23:
		if ((unsigned __int64)v5 >= 0x1F)
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
		v14 = sub_14034BDD0(v12, dword_140AF8B80[v5]);
		v9 = (unsigned __int64*)sub_14018F0E0(&v15, (unsigned __int16*)v14)[1];
		if (!v9)
			goto LABEL_11;
		v10 = -1i64;
		do
			++v10;
		while (*((_BYTE*)v9 + v10));
	}
	else
	{
		v8 = sub_14034BDD0(v7, dword_140AF8B80[v7]);
		v9 = (unsigned __int64*)sub_14018F0E0(&v15, (unsigned __int16*)v8)[1];
		if (!v9)
		{
		LABEL_11:
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			goto LABEL_15;
		}
		v10 = -1i64;
		do
			++v10;
		while (*((_BYTE*)v9 + v10));
	}
	sub_140058710((__int64)a1, v9, v10);
LABEL_15:
	if (v16)
	{
		sub_14018B900(v16, 0);
		return 1i64;
	}
	return 1i64;
}
// 140AF8B80: using guessed type _DWORD dword_140AF8B80[44];

