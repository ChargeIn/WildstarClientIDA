//----- (00000001407E88EC) ----------------------------------------------------
__int64 __fastcall sub_1407E88EC(int a1, __int64 a2)
{
	int v3; // eax
	int v4; // ecx
	__int64 v5; // rsi
	int v7; // edi
	int v8; // eax
	unsigned int v9; // eax
	_BYTE* v10; // rdx
	signed int v11; // ebp
	_BYTE* v12; // rcx
	int v13; // [rsp+30h] [rbp+8h] BYREF

	v13 = a1;
	v3 = sub_1407EA35C(a2);
	v4 = *(_DWORD*)(a2 + 24);
	v5 = v3;
	if ((v4 & 0x82) == 0)
	{
		*(_DWORD*)sub_1407DE1B0() = 9;
		goto LABEL_3;
	}
	if ((v4 & 0x40) != 0)
	{
		*(_DWORD*)sub_1407DE1B0() = 34;
		goto LABEL_3;
	}
	v7 = 0;
	if ((v4 & 1) != 0)
	{
		*(_DWORD*)(a2 + 8) = 0;
		if ((v4 & 0x10) == 0)
		{
			*(_DWORD*)(a2 + 24) = v4 | 0x20;
			return 0xFFFFFFFFi64;
		}
		*(_QWORD*)a2 = *(_QWORD*)(a2 + 16);
		*(_DWORD*)(a2 + 24) = v4 & 0xFFFFFFFE;
	}
	v8 = *(_DWORD*)(a2 + 24);
	*(_DWORD*)(a2 + 8) = 0;
	v9 = v8 & 0xFFFFFFED | 2;
	*(_DWORD*)(a2 + 24) = v9;
	if ((v9 & 0x10C) == 0
		&& ((void**)a2 != sub_1407DDFA0() + 6 && (void**)a2 != sub_1407DDFA0() + 12 || !(unsigned int)sub_1407F0A90(v5)))
	{
		sub_1407F1128(a2);
	}
	if ((*(_DWORD*)(a2 + 24) & 0x108) != 0)
	{
		v10 = *(_BYTE**)(a2 + 16);
		v11 = *(_DWORD*)a2 - *(_DWORD*)(a2 + 16);
		*(_QWORD*)a2 = v10 + 1;
		*(_DWORD*)(a2 + 8) = *(_DWORD*)(a2 + 36) - 1;
		if (v11 <= 0)
		{
			if ((unsigned int)(v5 + 2) <= 1)
				v12 = &unk_140C0FFB0;
			else
				v12 = (_BYTE*)(qword_140C60410[v5 >> 5] + 88 * (v5 & 0x1F));
			if ((v12[8] & 0x20) != 0 && sub_1407F0FB0(v5, 0i64, 2u) == -1)
				goto LABEL_3;
		}
		else
		{
			v7 = sub_1407EEF4C(v5, v10, v11);
		}
		**(_BYTE**)(a2 + 16) = v13;
	}
	else
	{
		v11 = 1;
		v7 = sub_1407EEF4C(v5, &v13, 1u);
	}
	if (v7 != v11)
	{
	LABEL_3:
		*(_DWORD*)(a2 + 24) |= 0x20u;
		return 0xFFFFFFFFi64;
	}
	return (unsigned __int8)v13;
}
// 140C60410: using guessed type __int64 qword_140C60410[64];

