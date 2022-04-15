//----- (00000001400C3E20) ----------------------------------------------------
__int64 __fastcall sub_1400C3E20(__int64 a1)
{
	char v1; // dl
	__int64 result; // rax
	char v4; // dl
	int v5; // ecx
	int v6; // ecx
	__int64 v7; // rcx
	char v8; // al
	unsigned int* v9; // rcx
	__int64 v10; // rcx
	char v11; // dl

	v1 = *(_BYTE*)(a1 + 412);
	if ((v1 & 0x20) == 0)
		return 0i64;
	v4 = v1 & 0xDF;
	*(_BYTE*)(a1 + 412) = v4;
	v5 = *(_DWORD*)(a1 + 296);
	if (v5)
	{
		v6 = v5 - 1;
		if (v6)
		{
			if (v6 == 1)
			{
				result = 6i64;
				*(_BYTE*)(a1 + 412) = v4 & 0xBF;
				return result;
			}
			return 5i64;
		}
		if (v4 < 0)
		{
			v7 = *(_QWORD*)(a1 + 288);
			v8 = v4 ^ (v4 ^ (~((unsigned __int8)v4 >> 6) << 6)) & 0x40;
			*(_BYTE*)(a1 + 412) = v8;
			if (v7)
			{
				if ((v8 & 0x40) != 0)
					v9 = (unsigned int*)(v7 + 232);
				else
					v9 = (unsigned int*)(v7 + 272);
				sub_14010B100(v9);
			}
			return 8 - (unsigned int)((*(_BYTE*)(a1 + 412) & 0x40) != 0);
		}
		return 5i64;
	}
	v10 = *(_QWORD*)(a1 + 288);
	v11 = v4 & 0xBF;
	*(_BYTE*)(a1 + 412) = v11;
	if (v11 >= 0)
	{
		if (v10)
			sub_14010B100((unsigned int*)(v10 + 152));
		return 5i64;
	}
	if (v10)
		sub_14010B100((unsigned int*)(v10 + 192));
	return 2i64;
}

