//----- (00000001407F6C28) ----------------------------------------------------
__int64 __fastcall sub_1407F6C28(__int64 a1, unsigned int* a2)
{
	unsigned __int16 v2; // r11
	__int16 v4; // r8
	__int16 v5; // r11
	__int64 result; // rax
	__int16 v7; // r8
	int v8; // ecx
	unsigned int v9; // ebx
	__int16 v10; // r8
	unsigned int v11; // r9d
	int v12; // r9d

	v2 = *((_WORD*)a2 + 3);
	v4 = v2 >> 4;
	v5 = v2 & 0x8000;
	result = *a2;
	v7 = v4 & 0x7FF;
	v8 = a2[1] & 0xFFFFF;
	v9 = 0x80000000;
	if (v7)
	{
		if (v7 == 2047)
			v10 = 0x7FFF;
		else
			v10 = v7 + 15360;
	}
	else
	{
		if (!v8 && !(_DWORD)result)
		{
			*(_DWORD*)(a1 + 4) = 0;
			*(_DWORD*)a1 = 0;
			goto LABEL_13;
		}
		v10 = 15361;
		v9 = 0;
	}
	v11 = *a2;
	result = (unsigned int)((_DWORD)result << 11);
	*(_DWORD*)a1 = result;
	v12 = v9 | (v8 << 11) | (v11 >> 21);
	*(_DWORD*)(a1 + 4) = v12;
	if (v12 >= 0)
	{
		do
		{
			v12 = (2 * v12) | (*(_DWORD*)a1 >> 31);
			*(_DWORD*)a1 *= 2;
			result = 0xFFFFi64;
			--v10;
		} while (v12 >= 0);
		*(_DWORD*)(a1 + 4) = v12;
	}
	v5 |= v10;
LABEL_13:
	*(_WORD*)(a1 + 8) = v5;
	return result;
}

