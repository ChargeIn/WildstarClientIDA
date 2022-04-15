//----- (000000014089BC50) ----------------------------------------------------
__int64 __fastcall sub_14089BC50(__int64 a1, __int64 a2)
{
	__int64 v2; // rax
	unsigned __int16 v4; // r9
	int v5; // r8d
	__int16 v6; // ax
	int v7; // ecx
	unsigned int v8; // eax
	unsigned int v9; // ecx
	unsigned int v10; // ecx
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 40);
	if ((*(_BYTE*)(v2 + 24) & 1) != 0)
		*(float*)(a1 + 28) = (float)(*(float*)(v2 + 8) * 6.2831855) / *(float*)(a1 + 32);
	if ((*(_BYTE*)(v2 + 24) & 4) != 0)
		*(_DWORD*)(a1 + 8) = ((int)(float)((float)*(int*)(a1 + 16) * *(float*)(v2 + 16)) + 3) & 0xFFFFFFFC;
	*(_BYTE*)(v2 + 24) = 0;
	v4 = *(_WORD*)(a2 + 16);
	v5 = 45;
	*(_WORD*)(a2 + 18) = v4;
	v6 = *(_WORD*)(a1 + 20);
	if (v6)
	{
		v7 = v6;
		v8 = *(_DWORD*)(a1 + 12);
		v9 = *(_DWORD*)(a1 + 8) * v7;
		if (v8 >= v9)
		{
			*(_WORD*)(a2 + 18) = 0;
		}
		else
		{
			v10 = v9 - v8;
			if (v10 > v4)
				goto LABEL_11;
			*(_WORD*)(a2 + 18) = v10;
		}
		v5 = 17;
	}
LABEL_11:
	result = *(unsigned __int16*)(a2 + 18);
	*(_DWORD*)(a1 + 12) += result;
	*(_DWORD*)(a2 + 12) = v5;
	if (*(_WORD*)(a2 + 18))
	{
		sub_14089C3A0(
			a1 + 24,
			*(__m128**)a2,
			*(unsigned __int16*)(a2 + 18),
			COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a1 + 36)),
			*(float*)(*(_QWORD*)(a1 + 40) + 12i64));
		result = *(_QWORD*)(a1 + 40);
		*(_DWORD*)(a1 + 36) = *(_DWORD*)(result + 12);
	}
	return result;
}

