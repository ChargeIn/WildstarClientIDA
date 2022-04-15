//----- (00000001407F66C8) ----------------------------------------------------
__int64 __fastcall sub_1407F66C8(unsigned __int16 a1, __int64 a2)
{
	int v4; // eax
	int v5; // edx
	__int64 v6; // rsi
	int v8; // edi
	int v9; // eax
	unsigned int v10; // eax
	_BYTE* v11; // rdx
	signed int v12; // ebp
	_BYTE* v13; // rcx
	unsigned __int16 v14; // [rsp+48h] [rbp+10h] BYREF

	v4 = sub_1407EA35C(a2);
	v5 = *(_DWORD*)(a2 + 24);
	v6 = v4;
	if ((v5 & 0x82) == 0)
	{
		*(_DWORD*)sub_1407DE1B0() = 9;
		goto LABEL_3;
	}
	if ((v5 & 0x40) != 0)
	{
		*(_DWORD*)sub_1407DE1B0() = 34;
		goto LABEL_3;
	}
	v8 = 0;
	if ((v5 & 1) != 0)
	{
		*(_DWORD*)(a2 + 8) = 0;
		if ((v5 & 0x10) == 0)
		{
			*(_DWORD*)(a2 + 24) = v5 | 0x20;
			return 0xFFFFi64;
		}
		*(_QWORD*)a2 = *(_QWORD*)(a2 + 16);
		*(_DWORD*)(a2 + 24) = v5 & 0xFFFFFFFE;
	}
	v9 = *(_DWORD*)(a2 + 24);
	*(_DWORD*)(a2 + 8) = 0;
	v10 = v9 & 0xFFFFFFED | 2;
	*(_DWORD*)(a2 + 24) = v10;
	if ((v10 & 0x10C) == 0
		&& ((void**)a2 != sub_1407DDFA0() + 6 && (void**)a2 != sub_1407DDFA0() + 12 || !(unsigned int)sub_1407F0A90(v6)))
	{
		sub_1407F1128(a2);
	}
	if ((*(_DWORD*)(a2 + 24) & 0x108) != 0)
	{
		v11 = *(_BYTE**)(a2 + 16);
		v12 = *(_DWORD*)a2 - *(_DWORD*)(a2 + 16);
		*(_QWORD*)a2 = v11 + 2;
		*(_DWORD*)(a2 + 8) = *(_DWORD*)(a2 + 36) - 2;
		if (v12 <= 0)
		{
			if ((unsigned int)(v6 + 2) <= 1)
				v13 = &unk_140C0FFB0;
			else
				v13 = (_BYTE*)(qword_140C60410[v6 >> 5] + 88 * (v6 & 0x1F));
			if ((v13[8] & 0x20) != 0 && sub_1407F0FB0(v6, 0i64, 2u) == -1)
				goto LABEL_3;
		}
		else
		{
			v8 = sub_1407EEF4C(v6, v11, v12);
		}
		**(_WORD**)(a2 + 16) = a1;
	}
	else
	{
		v12 = 2;
		v14 = a1;
		v8 = sub_1407EEF4C(v6, &v14, 2u);
	}
	if (v8 != v12)
	{
	LABEL_3:
		*(_DWORD*)(a2 + 24) |= 0x20u;
		return 0xFFFFi64;
	}
	return a1;
}
// 140C60410: using guessed type __int64 qword_140C60410[64];

