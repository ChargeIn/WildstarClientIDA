//----- (00000001405F9E30) ----------------------------------------------------
_QWORD* __fastcall sub_1405F9E30(_QWORD* a1, __int64 a2, unsigned int a3)
{
	__int64 v3; // r9
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // r13
	_QWORD* v8; // rax
	_QWORD* v9; // rbx
	unsigned int* v10; // rbp
	__int64 v11; // rdi
	int* v12; // rax
	int* v13; // rsi
	int* v14; // rdx
	__int64 v15; // rcx
	int* v16; // rax
	__int64 v17; // rsi
	__int64 v18; // rdi
	int* v19; // rax
	int v20; // edx
	int v22; // [rsp+20h] [rbp-48h] BYREF
	_QWORD* v23; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * v24)(__int64, unsigned int**); // [rsp+30h] [rbp-38h]
	__int64 v25; // [rsp+38h] [rbp-30h]
	__int64 v26; // [rsp+78h] [rbp+10h]

	v3 = *(_QWORD*)(a2 + 8);
	v5 = *(_QWORD*)(v3 + 8);
	v6 = v3;
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < a3)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v6 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v6 == v3 || (v26 = v6, a3 < *(_DWORD*)(v6 + 32)))
		v26 = *(_QWORD*)(a2 + 8);
	if (v26 != v3)
	{
		v7 = *(_QWORD*)(v26 + 40);
		v8 = *(_QWORD**)(v7 + 8);
		v9 = (_QWORD*)*v8;
		if ((_QWORD*)*v8 != v8)
		{
			do
			{
				v10 = (unsigned int*)v9[2];
				if (v10
					&& (!v10[4]
						|| v10[4] == (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72)))
				{
					if (*(_QWORD*)(qword_140C65898 + 25744))
					{
						if (v10[9])
						{
							v16 = sub_14018B280(80i64, 0);
							v17 = (__int64)v16;
							if (v16)
							{
								*(_QWORD*)v16 = v10;
								*((_QWORD*)v16 + 3) = 0i64;
								*((_QWORD*)v16 + 4) = 0i64;
								*((_QWORD*)v16 + 6) = 0i64;
								*((_QWORD*)v16 + 7) = 0i64;
								v16[2] = 1414420037;
								v16[19] = 0;
							}
							else
							{
								v17 = 0i64;
							}
							v18 = a1[1];
							v19 = sub_14018B280(24i64, 0);
							if (v19 != (int*)-16i64)
								*((_QWORD*)v19 + 2) = v17;
							*(_QWORD*)v19 = v18;
							*((_QWORD*)v19 + 1) = *(_QWORD*)(v18 + 8);
							**(_QWORD**)(v18 + 8) = v19;
							*(_QWORD*)(v18 + 8) = v19;
							v20 = v10[9];
							v22 = 1;
							v23 = a1;
							v24 = sub_1405FA6C0;
							v25 = v17;
							sub_140195960(v17 + 8, v20, (__int64)&v22, 4);
						}
						else
						{
							sub_1405FA070((__int64)a1, v10);
						}
					}
					else
					{
						v11 = a1[11];
						v12 = sub_14018DB00(a1[10], v11 + 1, 8i64);
						v13 = v12;
						*(_QWORD*)&v12[2 * v11] = v10;
						v14 = (int*)a1[10];
						if (v14 != v12)
						{
							sub_1407DB590(v12, v14, 8i64 * a1[11]);
							v15 = a1[10];
							if (v15)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
							a1[10] = v13;
						}
						a1[11] = v11 + 1;
					}
				}
				v9 = (_QWORD*)*v9;
			} while (v9 != *(_QWORD**)(v7 + 8));
		}
	}
	return sub_1405FA3B0((__int64)a1);
}
// 140C65898: using guessed type __int64 qword_140C65898;

