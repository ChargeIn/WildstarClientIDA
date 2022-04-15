//----- (00000001407C1CC0) ----------------------------------------------------
__int64 __fastcall sub_1407C1CC0(__int64 a1, unsigned int a2, _DWORD* a3)
{
	__int64 v4; // rcx
	__int64 v6; // rsi
	__int64 v7; // rcx
	__int64 v8; // rdx
	int v10[6]; // [rsp+20h] [rbp-18h] BYREF

	v4 = *(_QWORD*)(a1 + 24);
	v6 = a2;
	v10[0] = -1;
	if (v4)
	{
		if ((*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v4 + 32i64))(v4, v10))
		{
			v7 = *(_QWORD*)(a1 + 24);
			if (v7)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
				*(_QWORD*)(a1 + 24) = 0i64;
			}
		}
	}
	v8 = *(_QWORD*)(a1 + 40);
	if (!v8 || (unsigned int)v6 >= *(_DWORD*)(v8 + 72))
		return 0i64;
	if (a3)
		*a3 = *(_DWORD*)(*(_QWORD*)(v8 + 80) + 4 * v6 + v8);
	return 1i64;
}
// 1407C1CC0: using guessed type int var_18[6];

