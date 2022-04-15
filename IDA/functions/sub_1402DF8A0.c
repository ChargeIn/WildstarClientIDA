//----- (00000001402DF8A0) ----------------------------------------------------
__int64 __fastcall sub_1402DF8A0(__int64 a1, unsigned int* a2, unsigned __int64 a3)
{
	unsigned __int64 v3; // rbp
	unsigned __int64 v4; // rbx
	unsigned int v7; // edi
	__int64 v8; // rsi
	unsigned __int64 v9; // rbx
	unsigned __int64 v10; // rax
	unsigned __int64 v11; // rdi
	unsigned __int64 v12; // rbp
	__int64 v13; // r14
	__int64 result; // rax

	v3 = 0i64;
	v4 = a3;
	if (!a3)
		return 0i64;
	while (v4 >= 4)
	{
		v7 = *a2;
		v8 = (__int64)(a2 + 1);
		v9 = v4 - 4;
		v10 = v7;
		v11 = v7 & 0xFFFFFF;
		v12 = (v10 >> 24) + v3;
		if (v12 >= 0x100 || v9 < v11)
			break;
		v13 = *(_QWORD*)(a1 + 3256 + 8 * v12);
		if (*(_DWORD*)(*(_QWORD*)(a1 + 16) + 1576i64))
			result = sub_1402E2EB0(v8, (unsigned int)v11, (int**)(a1 + 3256 + 8 * v12));
		else
			result = sub_1402E3010(
				v8,
				(unsigned int)v11,
				*(void(__fastcall****)(_QWORD))(a1 + 1200),
				(int**)(a1 + 3256 + 8 * v12));
		if ((int)result < 0)
			return result;
		if (v13)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
		a2 = (unsigned int*)(v11 + v8);
		v3 = v12 + 1;
		v4 = v9 - v11;
		if (!v4)
			return 0i64;
	}
	return 2147500037i64;
}

