//----- (000000014089BEC0) ----------------------------------------------------
__int64 __fastcall sub_14089BEC0(__int64 a1, unsigned __int16* a2)
{
	__int64 v3; // rcx
	__int16 v5; // ax
	unsigned __int16 v6; // r9
	unsigned int v7; // edx
	int v8; // ecx
	unsigned int v9; // eax
	unsigned int v10; // ecx
	unsigned int v11; // ecx
	__int64 result; // rax

	v3 = *(_QWORD*)(a1 + 40);
	if ((*(_BYTE*)(v3 + 24) & 4) != 0)
		*(_DWORD*)(a1 + 8) = ((int)(float)((float)*(int*)(a1 + 16) * *(float*)(v3 + 16)) + 3) & 0xFFFFFFFC;
	*(_BYTE*)(v3 + 24) &= ~4u;
	*(_DWORD*)(a1 + 36) = *(_DWORD*)(*(_QWORD*)(a1 + 40) + 12i64);
	v5 = *(_WORD*)(a1 + 20);
	v6 = *a2;
	v7 = 45;
	if (v5)
	{
		v8 = v5;
		v9 = *(_DWORD*)(a1 + 12);
		v10 = *(_DWORD*)(a1 + 8) * v8;
		if (v9 >= v10)
		{
			v6 = 0;
			v7 = 17;
		}
		else
		{
			v11 = v10 - v9;
			if (v11 <= v6)
			{
				*(_DWORD*)(a1 + 12) += (unsigned __int16)v11;
				*(_DWORD*)a2 = (unsigned __int16)v11;
				return 17i64;
			}
		}
	}
	result = v7;
	*(_DWORD*)(a1 + 12) += v6;
	*(_DWORD*)a2 = v6;
	return result;
}

