//----- (00000001408CE520) ----------------------------------------------------
int* __fastcall sub_1408CE520(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
	int v4; // r10d
	__int64 v5; // rdi
	__int64 v7; // r11
	int v9; // ecx
	unsigned int i; // r9d
	int v11; // edx
	unsigned int v12; // r8d
	int v13; // ecx
	int* result; // rax
	int v15; // ebp
	__int64 v16; // r12
	__int64 v17; // r14
	int v18; // ecx

	v4 = *(_DWORD*)(a2 + 8);
	v5 = 0i64;
	v7 = a3;
	v9 = v4;
	for (i = 0; v9; v9 &= v9 - 1)
		++i;
	v11 = *(_DWORD*)(a4 + 8);
	v12 = 0;
	v13 = v11;
	if (!v11)
		goto LABEL_9;
	do
	{
		++v12;
		v13 &= v13 - 1;
	} while (v13);
	if (i < v12)
	{
		for (result = 0i64; v4; v4 &= v4 - 1)
			result = (int*)(unsigned int)((_DWORD)result + 1);
	}
	else
	{
	LABEL_9:
		for (result = 0i64; v11; v11 &= v11 - 1)
			result = (int*)(unsigned int)((_DWORD)result + 1);
	}
	v15 = *(unsigned __int16*)(a4 + 16) - *(unsigned __int16*)(a4 + 18);
	if (*(unsigned __int16*)(a2 + 18) < v15)
		v15 = *(unsigned __int16*)(a2 + 18);
	if ((_DWORD)result)
	{
		v16 = v7;
		v17 = (unsigned int)result;
		do
		{
			result = sub_1407DB590(
				(int*)(*(_QWORD*)a4 + 4 * (*(unsigned __int16*)(a4 + 18) + v5 * *(unsigned __int16*)(a4 + 16))),
				(int*)(*(_QWORD*)a2 + 4 * (v16 + v5 * *(unsigned __int16*)(a2 + 16))),
				(unsigned int)(4 * v15));
			++v5;
			--v17;
		} while (v17);
	}
	*(_WORD*)(a4 + 18) += v15;
	*(_WORD*)(a2 + 18) -= v15;
	if (*(_DWORD*)(a2 + 12) != 17 || *(_WORD*)(a2 + 18))
	{
		result = (int*)*(unsigned __int16*)(a4 + 16);
		v18 = 43;
		if (*(_WORD*)(a4 + 18) == (_WORD)result)
			v18 = 45;
		*(_DWORD*)(a4 + 12) = v18;
	}
	else
	{
		*(_DWORD*)(a4 + 12) = 17;
	}
	return result;
}

