//----- (0000000140850010) ----------------------------------------------------
__int64 __fastcall sub_140850010(__int64 a1, int** a2)
{
	char v4; // r8
	char v5; // cl
	char v6; // cl
	char v7; // cl
	bool v8; // bp
	signed int i; // ebx
	int v10; // edx
	__int64 result; // rax

	v4 = *(_BYTE*)*a2;
	*a2 = (int*)((char*)*a2 + 1);
	*(_BYTE*)(a1 + 160) &= ~0x10u;
	*(_BYTE*)(a1 + 160) |= 16 * (v4 != 0);
	v5 = *(_BYTE*)*a2;
	*a2 = (int*)((char*)*a2 + 1);
	*(_BYTE*)(a1 + 160) &= ~0x20u;
	*(_BYTE*)(a1 + 160) |= 32 * (v5 != 0);
	v6 = *(_BYTE*)*a2;
	*a2 = (int*)((char*)*a2 + 1);
	*(_BYTE*)(a1 + 160) &= ~0x40u;
	*(_BYTE*)(a1 + 160) |= (v6 != 0) << 6;
	v7 = *(_BYTE*)*a2;
	*a2 = (int*)((char*)*a2 + 1);
	v8 = v7 != 0;
	for (i = 0; i < 4; ++i)
	{
		v10 = 0;
		if (v8)
			v10 = *(*a2)++;
		result = sub_14084FF60((_QWORD*)a1, v10, i);
		if ((_DWORD)result != 1)
			break;
	}
	return result;
}

