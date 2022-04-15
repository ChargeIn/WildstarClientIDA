//----- (00000001407F6FDC) ----------------------------------------------------
__int64 __fastcall sub_1407F6FDC(__int64 a1)
{
	int v2; // eax
	int v3; // eax
	int v4; // eax
	int v5; // eax
	__int64 v6; // rbx
	_BYTE* v7; // rax
	unsigned __int8* v8; // rcx
	__int64 result; // rax

	if (!a1)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 0xFFFFFFFFi64;
	}
	v2 = *(_DWORD*)(a1 + 24);
	if ((v2 & 0x83) == 0 || (v2 & 0x40) != 0)
		return 0xFFFFFFFFi64;
	if ((v2 & 2) != 0)
	{
		*(_DWORD*)(a1 + 24) = v2 | 0x20;
		return 0xFFFFFFFFi64;
	}
	v3 = v2 | 1;
	*(_DWORD*)(a1 + 24) = v3;
	if ((v3 & 0x10C) != 0)
		*(_QWORD*)a1 = *(_QWORD*)(a1 + 16);
	else
		sub_1407F1128(a1);
	v4 = sub_1407EA35C(a1);
	v5 = sub_1407F7568(v4, *(WCHAR**)(a1 + 16), *(_DWORD*)(a1 + 36));
	*(_DWORD*)(a1 + 8) = v5;
	if ((unsigned int)(v5 + 1) <= 1)
	{
		*(_DWORD*)(a1 + 24) |= v5 != 0 ? 32 : 16;
		*(_DWORD*)(a1 + 8) = 0;
		return 0xFFFFFFFFi64;
	}
	if ((*(_BYTE*)(a1 + 24) & 0x82) == 0)
	{
		if ((unsigned int)sub_1407EA35C(a1) == -1 || (unsigned int)sub_1407EA35C(a1) == -2)
		{
			v7 = &unk_140C0FFB0;
		}
		else
		{
			v6 = (__int64)(int)sub_1407EA35C(a1) >> 5;
			v7 = (_BYTE*)(qword_140C60410[v6] + 88 * (sub_1407EA35C(a1) & 0x1F));
		}
		if ((v7[8] & 0x82) == 0x82)
			*(_DWORD*)(a1 + 24) |= 0x2000u;
	}
	if (*(_DWORD*)(a1 + 36) == 512 && (*(_BYTE*)(a1 + 24) & 8) != 0 && (*(_DWORD*)(a1 + 24) & 0x400) == 0)
		*(_DWORD*)(a1 + 36) = 4096;
	v8 = *(unsigned __int8**)a1;
	--* (_DWORD*)(a1 + 8);
	result = *v8;
	*(_QWORD*)a1 = v8 + 1;
	return result;
}
// 140C60410: using guessed type __int64 qword_140C60410[64];

