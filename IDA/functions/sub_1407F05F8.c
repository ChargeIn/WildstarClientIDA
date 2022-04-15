//----- (00000001407F05F8) ----------------------------------------------------
char* __fastcall sub_1407F05F8(LPVOID lpMem, unsigned __int64 a2, unsigned __int64 a3)
{
	SIZE_T v3; // rdi
	SIZE_T v6; // rbx
	char* v7; // rax
	char* v8; // rsi

	v3 = 0i64;
	if (a2 && 0xFFFFFFFFFFFFFFE0ui64 / a2 < a3)
	{
		*(_DWORD*)sub_1407DE1B0() = 12;
		return 0i64;
	}
	else
	{
		v6 = a3 * a2;
		if (lpMem)
			v3 = sub_1407E88B0(lpMem);
		v7 = (char*)sub_1407F0524(lpMem, v6);
		v8 = v7;
		if (v7)
		{
			if (v3 < v6)
				sub_1407E4830((int*)&v7[v3], 0i64, v6 - v3);
		}
		return v8;
	}
}

