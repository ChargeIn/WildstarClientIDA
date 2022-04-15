//----- (00000001400C3D70) ----------------------------------------------------
__int64 __fastcall sub_1400C3D70(__int64 a1, int* a2)
{
	char v3; // dl
	__int64 result; // rax
	int v5; // ecx
	char v6; // dl
	int v7; // ecx
	__int64 v8; // rcx

	sub_1400C3F20(a1, a2);
	v3 = *(_BYTE*)(a1 + 412);
	if ((v3 & 0x10) == 0)
		return 0i64;
	if (v3 >= 0)
		return 9i64;
	v5 = *(_DWORD*)(a1 + 296);
	v6 = v3 & 0xDD | 0x20;
	*(_DWORD*)(a1 + 392) = 0;
	*(_BYTE*)(a1 + 412) = v6;
	if (v5)
	{
		v7 = v5 - 1;
		if (v7)
		{
			if (v7 != 1)
				return 0i64;
			*(_DWORD*)(a1 + 404) = 0;
			result = 2i64;
			*(_BYTE*)(a1 + 412) = v6 | 0x40;
		}
		else
		{
			return 7i64;
		}
	}
	else
	{
		v8 = *(_QWORD*)(a1 + 288);
		*(_BYTE*)(a1 + 412) = v6 | 0x40;
		if (v8)
			sub_14010B100((unsigned int*)(v8 + 112));
		return 3i64;
	}
	return result;
}

