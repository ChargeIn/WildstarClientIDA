//----- (00000001401D6720) ----------------------------------------------------
unsigned __int64 __fastcall sub_1401D6720(__int64 a1, __int64 a2)
{
	unsigned __int64 v2; // r9
	unsigned __int64 result; // rax
	__int64 v5; // r10
	unsigned __int64 v6; // r11
	unsigned __int64 v7; // rbx
	unsigned int v8; // edx
	__int64 v9; // rdi
	__int64 v10; // rcx
	unsigned __int64 v11; // rcx

	v2 = *(unsigned int*)(a1 + 92);
	result = (unsigned int)(v2 - 1);
	if ((unsigned int)result <= 0x110)
	{
		result = *(_QWORD*)(a1 + 48);
		v5 = *(_QWORD*)(a1 + 24);
		v6 = *(unsigned int*)(a1 + 76);
		v7 = a2 - result;
		v8 = *(_DWORD*)(a1 + 92);
		v9 = *(_QWORD*)(a1 + 56);
		if (v7 < v2)
			v8 = v7;
		if (!*(_DWORD*)(a1 + 68) && *(_DWORD*)(a1 + 12) - *(_DWORD*)(a1 + 64) <= v8)
			*(_DWORD*)(a1 + 68) = *(_DWORD*)(a1 + 12);
		*(_DWORD*)(a1 + 64) += v8;
		for (*(_DWORD*)(a1 + 92) = v2 - v8; v8; --v8)
		{
			v10 = 0i64;
			if (result < v6)
				v10 = v9;
			v11 = result + v10 - v6;
			*(_BYTE*)(++result + v5 - 1) = *(_BYTE*)(v11 + v5);
		}
		*(_QWORD*)(a1 + 48) = result;
	}
	return result;
}

