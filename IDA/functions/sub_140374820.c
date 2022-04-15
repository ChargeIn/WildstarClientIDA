//----- (0000000140374820) ----------------------------------------------------
__int64 __fastcall sub_140374820(__int64 a1, unsigned int a2)
{
	bool v2; // zf
	__int64 v3; // rbp
	unsigned int i; // edi
	__int64 v6; // rbx
	__int64 v7; // rcx
	__int64 v8; // rcx
	int v10[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *(_DWORD*)(a1 + 28) == 0;
	v3 = a2;
	v10[0] = -1;
	if (v2)
	{
		for (i = 0; i < *(_DWORD*)(a1 + 44); ++i)
		{
			v6 = *(_QWORD*)(a1 + 8i64 * i + 48);
			if (v6)
			{
				v7 = *(_QWORD*)(v6 + 16);
				if (v7)
				{
					if (!(*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v7 + 32i64))(v7, v10))
						goto LABEL_10;
					sub_140373540(v6);
					v8 = *(_QWORD*)(v6 + 16);
					if (v8)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
						*(_QWORD*)(v6 + 16) = 0i64;
					}
				}
			}
		}
		*(_DWORD*)(a1 + 28) = 1;
	}
LABEL_10:
	if ((unsigned int)v3 < *(_DWORD*)(a1 + 44))
		return *(_QWORD*)(a1 + 8 * v3 + 48);
	else
		return 0i64;
}
// 140374820: using guessed type int var_18[6];

