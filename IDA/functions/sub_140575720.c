//----- (0000000140575720) ----------------------------------------------------
__int64 __fastcall sub_140575720(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	_DWORD* a4,
	unsigned __int8(__fastcall* a5)(_DWORD*, _DWORD*))
{
	__int64 v5; // rdi
	__int64 i; // rbp
	_DWORD* v10; // rbx
	__int64 v11; // rdi
	__int64 v12; // rdi
	__int64 result; // rax

	v5 = a2;
	for (i = (a2 - 1) / 2; v5 > a3; i = (i - 1) / 2)
	{
		v10 = (_DWORD*)(a1 + 16 * i);
		if (!a5(v10, a4))
			break;
		v11 = 2 * v5;
		*(_DWORD*)(a1 + 8 * v11) = *v10;
		*(_DWORD*)(a1 + 8 * v11 + 4) = v10[1];
		*(_DWORD*)(a1 + 8 * v11 + 8) = v10[2];
		*(_DWORD*)(a1 + 8 * v11 + 12) = v10[3];
		v5 = i;
	}
	v12 = 2 * v5;
	*(_DWORD*)(a1 + 8 * v12) = *a4;
	*(_DWORD*)(a1 + 8 * v12 + 4) = a4[1];
	*(_DWORD*)(a1 + 8 * v12 + 8) = a4[2];
	result = (unsigned int)a4[3];
	*(_DWORD*)(a1 + 8 * v12 + 12) = result;
	return result;
}

