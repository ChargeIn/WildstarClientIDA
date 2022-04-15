//----- (00000001403DBB70) ----------------------------------------------------
__int64 __fastcall sub_1403DBB70(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	__int64 v4; // rdi
	__int64 result; // rax
	int v6; // ebx
	__int64 v7; // rax
	__int64 v8; // rcx
	unsigned int v9; // r14d
	__int64 v10; // rsi
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64 v14; // r8
	__int64 v15; // r13
	unsigned int v16; // r12d
	unsigned __int64 v17; // rbx
	__int64 v18; // r14
	__int64 v19; // r15
	__int64 v20; // rsi
	unsigned __int64 v21; // rcx
	_QWORD* v22; // rax
	unsigned __int64 v23; // rcx
	_QWORD* v24; // rax
	unsigned __int64 v25; // rcx
	_QWORD* v26; // rax
	bool v27; // zf
	__int64 v28; // [rsp+30h] [rbp-30h] BYREF
	__int64 v29; // [rsp+38h] [rbp-28h]
	__int64 v30; // [rsp+40h] [rbp-20h]
	unsigned __int64 v31; // [rsp+48h] [rbp-18h]

	v3 = sub_1403D90D0(a1, *(_DWORD*)a2);
	v4 = v3;
	if (!v3 || !*(_QWORD*)(v3 + 3264))
		return 0i64;
	sub_14045A840((_DWORD*)v3, *(_DWORD*)(a2 + 4), *(_DWORD*)(a2 + 28) == 0);
	sub_14045A8F0((_DWORD*)v4, *(_DWORD*)(a2 + 8), *(_DWORD*)(a2 + 28) == 0);
	sub_14047C210(v4, *(_DWORD*)(a2 + 16));
	sub_14047C320(v4, *(_DWORD*)(a2 + 20));
	v6 = *(_DWORD*)(a2 + 12);
	v7 = sub_1404835C0(qword_140C65918, v6);
	v8 = *(_QWORD*)(v4 + 3264);
	*(_DWORD*)(v4 + 32) = v6;
	*(_QWORD*)(v4 + 24) = v7;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 104i64))(v8);
	*(_DWORD*)(v4 + 240) = *(_DWORD*)(a2 + 28);
	result = sub_1404674C0(v4);
	if ((int)result >= 0)
	{
		v9 = 0;
		if (*(_DWORD*)(a2 + 32))
		{
			while (1)
			{
				v10 = *(_QWORD*)(a2 + 40) + 16i64 * v9;
				v11 = sub_14020B8E0(*(_DWORD*)(v10 + 8));
				sub_1401DC0D0(v11);
				result = sub_140466D20(v4, *(_DWORD*)v10);
				if ((int)result < 0)
					break;
				if (++v9 >= *(_DWORD*)(a2 + 32))
					goto LABEL_8;
			}
		}
		else
		{
		LABEL_8:
			sub_1404718E0(v4, 0, 0, 1, 1);
			sub_140472D80(v4);
			sub_140472E10(v4);
			if ((*(_DWORD*)(v4 + 40) & 0x40000) != 0)
			{
				v12 = *(_QWORD*)(v4 + 248);
				if (v12)
				{
					v13 = *(_QWORD*)(v12 + 336);
					if (v13)
					{
						v14 = *(unsigned int*)(v13 + 16);
						if ((!(_DWORD)v14
							|| (*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0 + 24i64))(
								qword_140C659A0,
								0i64,
								v14,
								0i64,
								0i64,
								0))
							&& !*(_DWORD*)(v4 + 592)
							&& !*(_DWORD*)(v4 + 596))
						{
							v15 = qword_140C65918;
							v16 = **(_DWORD**)(*(_QWORD*)(v4 + 248) + 336i64);
							sub_140482A00(
								(__int64)&v28,
								v16,
								*(_DWORD*)(v4 + 684) != 0,
								6u,
								*(_QWORD*)(qword_140C65918 + 64),
								*(unsigned int*)(qword_140C65918 + 72));
							v17 = v31;
							v18 = v28;
							v19 = v29;
							v20 = v30;
							v21 = 0i64;
							if (v31)
							{
								v22 = (_QWORD*)(v30 + 32);
								do
								{
									if (*((_DWORD*)v22 - 5))
										break;
									if (*v22)
										goto LABEL_31;
									++v21;
									v22 += 6;
								} while (v21 < v31);
							}
							sub_140482A00((__int64)&v28, v16, 2u, 6u, *(_QWORD*)(v15 + 64), *(unsigned int*)(v15 + 72));
							v17 = v31;
							v18 = v28;
							v19 = v29;
							v20 = v30;
							v23 = 0i64;
							if (v31)
							{
								v24 = (_QWORD*)(v30 + 32);
								do
								{
									if (*((_DWORD*)v24 - 5))
										break;
									if (*v24)
										goto LABEL_31;
									++v23;
									v24 += 6;
								} while (v23 < v31);
							}
							sub_140482A00(
								(__int64)&v28,
								v16,
								*(_DWORD*)(v4 + 684) != 0,
								6u,
								*(_QWORD*)(v15 + 64),
								*(unsigned int*)(v15 + 72));
							v17 = v31;
							v18 = v28;
							v19 = v29;
							v20 = v30;
							v25 = 0i64;
							if (v31)
							{
								v26 = (_QWORD*)(v30 + 32);
								do
								{
									if (*((_DWORD*)v26 - 5))
										break;
									if (*v26)
										goto LABEL_31;
									++v25;
									v26 += 6;
								} while (v25 < v31);
							}
							sub_140482A00((__int64)&v28, v16, 2u, 6u, *(_QWORD*)(v15 + 64), *(unsigned int*)(v15 + 72));
							v18 = v28;
							v19 = v29;
							v20 = v30;
							v17 = v31;
						LABEL_31:
							if (!*(_QWORD*)(v4 + 5344)
								|| (_DWORD)v18 != *(_DWORD*)(v4 + 5320)
								|| __PAIR64__(v19, HIDWORD(v18)) != *(_QWORD*)(v4 + 5324))
							{
								sub_140195D70(v4 + 5440);
								sub_140195D70(v4 + 5368);
								v27 = *(_QWORD*)(v4 + 1424) == 0i64;
								*(_QWORD*)(v4 + 5320) = v18;
								*(_QWORD*)(v4 + 5328) = v19;
								*(_QWORD*)(v4 + 5336) = v20;
								*(_DWORD*)(v4 + 5316) = 0;
								*(_QWORD*)(v4 + 5344) = v17;
								if (!v27)
								{
									do
										(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v4 + 1424) + 32i64))(*(_QWORD*)(v4 + 1424));
									while (*(_QWORD*)(v4 + 1424));
								}
								sub_14047CAB0(v4);
							}
						}
					}
				}
			}
			if (v4 == *(_QWORD*)(a1 + 120))
				sub_1400A8020(*(_QWORD*)(a1 + 29504) + 5624i64);
			return 0i64;
		}
	}
	return result;
}
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C659A0: using guessed type __int64 qword_140C659A0;

