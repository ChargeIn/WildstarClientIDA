//----- (00000001407C1BE0) ----------------------------------------------------
__int64 __fastcall sub_1407C1BE0(_QWORD* a1, unsigned int a2)
{
	__int64 v3; // rcx
	__int64 v5; // rcx
	__int64 v6; // rdx
	int v8[6]; // [rsp+20h] [rbp-18h] BYREF

	v3 = a1[3];
	v8[0] = -1;
	if (v3)
	{
		if ((*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v3 + 32i64))(v3, v8))
		{
			v5 = a1[3];
			if (v5)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
				a1[3] = 0i64;
			}
		}
	}
	v6 = a1[5];
	if (v6 && a2 < *(_DWORD*)(v6 + 48))
		return v6 + *(_QWORD*)(v6 + 64) + a2 * *(_DWORD*)(a1[2] + 8i64);
	else
		return 0i64;
}
// 1407C1BE0: using guessed type int var_18[6];

