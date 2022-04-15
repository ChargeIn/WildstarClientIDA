//----- (0000000140886040) ----------------------------------------------------
void __fastcall sub_140886040(__int64 a1, int a2)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	int v4; // ecx
	bool v5; // zf
	char v6; // al
	__int64 v7; // rcx
	char v8; // al
	__int64 v9; // rcx

	v2 = a1;
	if (a2 == 2)
	{
		*(_DWORD*)(a1 + 176) &= 0xFFFFFFF4;
		*(_DWORD*)(a1 + 176) |= 4u;
		if ((*(_BYTE*)(a1 + 117) & 8) == 0)
			goto LABEL_10;
		v3 = *(_QWORD*)a1;
	}
	else
	{
		v4 = *(_DWORD*)(a1 + 176);
		if ((v4 & 0x10) == 0)
			goto LABEL_12;
		*(_QWORD*)(v2 + 128) += *(unsigned int*)(v2 + 152);
		v5 = (*(_BYTE*)(v2 + 117) & 8) == 0;
		*(_DWORD*)(v2 + 176) = v4 & 0xFFFFFFF0 | 1;
		if (v5)
			goto LABEL_10;
		v3 = *(_QWORD*)v2;
		a1 = v2;
	}
	if ((*(unsigned __int8(__fastcall**)(__int64))(v3 + 8))(a1))
	{
		v6 = *(_BYTE*)(v2 + 117);
		if ((v6 & 0x20) == 0)
		{
			v7 = *(_QWORD*)(v2 + 96);
			*(_BYTE*)(v2 + 117) = v6 | 0x20;
			sub_1408894A0(v7);
		}
		goto LABEL_12;
	}
LABEL_10:
	*(_BYTE*)(v2 + 117) &= ~0x40u;
	v8 = *(_BYTE*)(v2 + 117);
	if ((v8 & 0x20) != 0)
	{
		v9 = *(_QWORD*)(v2 + 96);
		*(_BYTE*)(v2 + 117) = v8 & 0xDF;
		sub_140889460(v9);
	}
LABEL_12:
	if (*(_BYTE*)(v2 + 16))
	{
		if ((((int)(*(_DWORD*)(v2 + 176) << 28) >> 28) & 0xFFFFFFFD) != 0)
			sub_140889450(*(_QWORD*)(v2 + 96), v2);
	}
}

