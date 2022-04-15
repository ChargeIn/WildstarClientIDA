//----- (000000014083FD40) ----------------------------------------------------
__int64 __fastcall sub_14083FD40(int** a1, _DWORD* a2, __int64 a3)
{
	int v4; // r9d
	int v5; // r11d
	int* v6; // rax
	int v7; // ecx
	int v8; // ecx
	int v9; // ecx
	int v10; // ecx
	char v11; // cl
	__int64 result; // rax
	int v13; // ecx
	__int64 v14; // rcx

	*(_QWORD*)a3 = 0i64;
	*(_QWORD*)(a3 + 8) = 0i64;
	*(_QWORD*)(a3 + 16) = 0i64;
	*(_QWORD*)(a3 + 24) = 0i64;
	*(_QWORD*)(a3 + 32) = 0i64;
	*(_QWORD*)(a3 + 40) = 0i64;
	v4 = *(*a1)++;
	*(_DWORD*)(a3 + 4) = v4;
	v5 = **a1;
	v6 = *a1 + 1;
	*a1 = v6;
	v7 = *v6;
	*a1 = v6 + 1;
	*(_DWORD*)(a3 + 8) = v7;
	v8 = *(*a1)++;
	*(_DWORD*)(a3 + 12) = v8;
	if (v5 == 1)
	{
		*(_QWORD*)(a3 + 16) = 0i64;
	}
	else
	{
		v9 = *(*a1)++;
		*(_DWORD*)(a3 + 16) = v9;
		v10 = *(*a1)++;
		*(_DWORD*)(a3 + 20) = v10;
	}
	v11 = *(_BYTE*)*a1;
	*a1 = (int*)((char*)*a1 + 1);
	*(_DWORD*)(a3 + 24) &= 0xFFFFFDFC;
	result = *(_DWORD*)(a3 + 4) & 0xF;
	*(_DWORD*)(a3 + 24) |= v11 & 1 | (2 * (((v11 & 2) << 7) | (v5 == 2)));
	v13 = *(_DWORD*)(a3 + 24);
	if ((_DWORD)result == 1)
	{
		if (!v5)
		{
			*(_DWORD*)(a3 + 24) = v13 & 0xFFFFFF83 | 0xC;
			return result;
		}
		if ((unsigned int)(v5 - 1) <= 1)
		{
			result = 1i64;
			*(_DWORD*)(a3 + 24) = v13 & 0xFFFFFF83 | 4;
			return result;
		}
		return 2i64;
	}
	if ((_DWORD)result == 5 || (_DWORD)result == 2)
	{
		v14 = (unsigned int)*(*a1)++;
		*(_DWORD*)(a3 + 40) = v14;
		*(_QWORD*)(a3 + 32) = *a1;
		*a1 = (int*)((char*)*a1 + v14);
		*a2 -= *(_DWORD*)(a3 + 40);
	}
	else if ((_DWORD)result)
	{
		return 2i64;
	}
	return 1i64;
}

