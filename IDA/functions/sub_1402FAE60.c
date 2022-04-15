//----- (00000001402FAE60) ----------------------------------------------------
void __fastcall sub_1402FAE60(__int64* a1, __int64 a2)
{
	__int64 v2; // rax
	__int64 v4; // rbp
	int* v6; // rax
	__int64 v7; // r15
	unsigned __int64 v8; // rdi
	_QWORD* v9; // rbx
	_DWORD* v10; // rbx
	int v11[4]; // [rsp+20h] [rbp-28h] BYREF

	if (a2)
	{
		v2 = *a1;
		v4 = 0i64;
		v11[0] = 0;
		if ((*(unsigned int(__fastcall**)(__int64*, int*, _QWORD))(v2 + 16))(a1, v11, 0i64))
		{
			if (*(_DWORD*)(a1[8] + 712))
			{
				do
				{
					v7 = 4 * v4 + a1[139];
					v8 = (*(__int64(__fastcall**)(__int64))(a2 + 24))(v7);
					v9 = *(_QWORD**)(*(_QWORD*)(a2 + 16) + 8 * (v8 % *(_QWORD*)(a2 + 8)));
					if (v9)
					{
						while (v8 != *v9 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a2 + 32))(v7, v9 + 2))
						{
							v9 = (_QWORD*)v9[1];
							if (!v9)
								goto LABEL_13;
						}
						v10 = (_DWORD*)v9 + 5;
						if (v10)
							*(_DWORD*)(4 * v4 + a1[139]) = *v10;
					}
				LABEL_13:
					v4 = (unsigned int)(v4 + 1);
				} while ((unsigned int)v4 < *(_DWORD*)(a1[8] + 712));
			}
		}
		else
		{
			v6 = sub_14018B280(72i64, 0);
			if (v6)
				sub_1402EFDF0(v6, (__int64)a1, (_QWORD*)a2);
		}
	}
}
// 1402FAE60: using guessed type int var_28[4];

