//----- (00000001405F68F0) ----------------------------------------------------
__int64 __fastcall sub_1405F68F0(__int64 a1, unsigned int a2)
{
	__int64 v2; // r13
	unsigned int v3; // r15d
	_QWORD* v5; // rax
	_QWORD* v6; // rdi
	__int64 v7; // rax
	_QWORD* i; // r14
	_QWORD* v9; // rbx
	_QWORD* v10; // rsi
	__int64 v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64* v14; // rax
	__int64 v15; // rax
	__int64 v16; // rax
	_QWORD* j; // rax
	__int64 k; // rax
	__int64 v19; // rax
	_QWORD* m; // rax
	__int64 n; // rcx
	__int64 v23; // [rsp+50h] [rbp+8h] BYREF
	__int64 v24; // [rsp+60h] [rbp+18h] BYREF

	v23 = a1;
	v2 = qword_140C65980;
	v3 = 0;
	v5 = *(_QWORD**)(qword_140C65980 + 16);
	v6 = (_QWORD*)v5[2];
	if (v6 != v5)
	{
		do
		{
			v7 = v6[5];
			if (v7)
			{
				for (i = *(_QWORD**)(v7 + 32); i; i = (_QWORD*)i[2])
				{
					v9 = *(_QWORD**)(*(_QWORD*)((*(__int64(__fastcall**)(_QWORD*))(*i + 72i64))(i) + 8) + 16i64);
					while (v9 != *(_QWORD**)((*(__int64(__fastcall**)(_QWORD*))(*i + 72i64))(i) + 8))
					{
						v10 = (_QWORD*)v9[5];
						if ((*(unsigned int(__fastcall**)(_QWORD*))(*v10 + 104i64))(v10)
							&& (*(unsigned int(__fastcall**)(_QWORD*))(*v10 + 336i64))(v10) == 28)
						{
							v11 = v10[29];
							v12 = v11;
							v13 = *(_QWORD*)(v11 + 8);
							while (v13)
							{
								if (*(_DWORD*)(v13 + 32) < a2)
								{
									v13 = *(_QWORD*)(v13 + 24);
								}
								else
								{
									v12 = v13;
									v13 = *(_QWORD*)(v13 + 16);
								}
							}
							if (v12 == v11 || a2 < *(_DWORD*)(v12 + 32))
							{
								v24 = v10[29];
								v14 = &v24;
							}
							else
							{
								v23 = v12;
								v14 = &v23;
							}
							v15 = *v14;
							if (v15 != v11)
								v3 += *(_DWORD*)(v15 + 36);
						}
						v16 = v9[3];
						if (v16)
						{
							v9 = (_QWORD*)v9[3];
							for (j = *(_QWORD**)(v16 + 16); j; j = (_QWORD*)j[2])
								v9 = j;
						}
						else
						{
							for (k = v9[1]; v9 == *(_QWORD**)(k + 24); k = *(_QWORD*)(k + 8))
								v9 = (_QWORD*)k;
							if (v9[3] != k)
								v9 = (_QWORD*)k;
						}
					}
				}
			}
			v19 = v6[3];
			if (v19)
			{
				v6 = (_QWORD*)v6[3];
				for (m = *(_QWORD**)(v19 + 16); m; m = (_QWORD*)m[2])
					v6 = m;
			}
			else
			{
				for (n = v6[1]; v6 == *(_QWORD**)(n + 24); n = *(_QWORD*)(n + 8))
					v6 = (_QWORD*)n;
				if (v6[3] != n)
					v6 = (_QWORD*)n;
			}
		} while (v6 != *(_QWORD**)(v2 + 16));
	}
	return v3;
}
// 140C65980: using guessed type __int64 qword_140C65980;

