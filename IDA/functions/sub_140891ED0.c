//----- (0000000140891ED0) ----------------------------------------------------
__int64 __fastcall sub_140891ED0(__int64 a1, int a2, unsigned int a3, _DWORD* a4, _DWORD* a5, _DWORD* a6)
{
	int v6; // ebx
	unsigned int v7; // esi
	unsigned int v9; // edi
	__int64 result; // rax
	unsigned int v11; // edx
	unsigned int* v12; // r8
	unsigned int v13; // r9d
	int v14; // r10d
	unsigned int v15; // r9d
	int v16; // r10d
	unsigned int v17; // r9d

	v6 = 0;
	v7 = a3;
	v9 = a2;
	if (a2 < 0)
	{
		if (a3 <= -a2)
		{
		LABEL_3:
			*a4 = 0;
			*a5 = 0;
			result = (__int64)a6;
			*a6 = 0;
			return result;
		}
		v7 = a3 + a2;
		v9 = 0;
	}
	v11 = *(_DWORD*)(*(_QWORD*)(a1 + 232) - 12i64) - *(_DWORD*)(*(_QWORD*)(a1 + 224) + 4i64);
	if (v9 + v7 > v11)
	{
		if (v9 >= v11)
			goto LABEL_3;
		v7 = v11 - v9;
	}
	result = sub_140890D60(a1);
	v12 = (unsigned int*)result;
	v13 = *(_DWORD*)(result + 4);
	if (v13)
	{
		result = ((v13 + v9) % v13 + v13 - 1) / v13;
		v14 = ((v13 + v9) % v13 + v13 - 1 + v7) / v13 - result;
	}
	else
	{
		v14 = 0;
	}
	*a4 = v14;
	v15 = *v12;
	if (*v12)
	{
		result = ((v15 + v9) % v15 + v15 - 1) / v15;
		v16 = ((v15 + v9) % v15 + v15 - 1 + v7) / v15 - result;
	}
	else
	{
		v16 = 0;
	}
	*a5 = v16;
	v17 = v12[2];
	if (v17)
	{
		result = ((v9 + v17 - v12[3]) % v17 + v17 - 1) / v17;
		v6 = ((v9 + v17 - v12[3]) % v17 + v17 - 1 + v7) / v17 - result;
	}
	*a6 = v6;
	return result;
}

