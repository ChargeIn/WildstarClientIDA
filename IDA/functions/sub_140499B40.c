//----- (0000000140499B40) ----------------------------------------------------
void __fastcall sub_140499B40(_QWORD** a1, unsigned int a2)
{
	float v4; // xmm10_4
	_QWORD* v5; // rbx
	__int64 v6; // rax
	__int64 v7; // rdx
	__int64 v8; // rcx
	_DWORD* v9; // r14
	int v10; // r15d
	float v11; // xmm9_4
	int v12; // r13d
	unsigned __int64 v13; // rbp
	unsigned int* v14; // rsi
	unsigned int v15; // edx
	int v16; // ecx
	float v17; // xmm6_4
	int v18; // ecx
	__int64 v19; // rcx
	__int64 v20; // rax
	__int64 v21; // rax
	__int64** v22; // rdi
	float v23; // xmm7_4
	__int64 v24; // rax
	__int64 v25; // r8
	__int64 v26; // rcx
	__int64 v27; // rax
	__int64* v28; // rax
	__int64 v29; // rax
	__int64 v30; // rcx
	float v31; // xmm0_4
	float v32; // xmm9_4
	__int64 v33; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	char v36[8]; // [rsp+20h] [rbp-B8h] BYREF
	_QWORD* v37; // [rsp+28h] [rbp-B0h]
	__int64 v38; // [rsp+E0h] [rbp+8h]
	__int64 v39; // [rsp+F0h] [rbp+18h] BYREF
	__int64 v40; // [rsp+F8h] [rbp+20h] BYREF

	if ((*(__int64(__fastcall**)(_QWORD*))(*a1[1] + 16i64))(a1[1])
		&& !((unsigned int(__fastcall*)(_QWORD**, _QWORD))(*a1)[11])(a1, a2))
	{
		v4 = 0.0;
		sub_14048B2A0((__int64)v36, qword_140C65998 + 232);
		v5 = v37;
		v6 = v37[1];
		v7 = (__int64)v37;
		v38 = (__int64)v37;
		v8 = v6;
		if (v6)
		{
			do
			{
				if (a2 >= *(_DWORD*)(v8 + 32))
				{
					v8 = *(_QWORD*)(v8 + 24);
				}
				else
				{
					v7 = v8;
					v8 = *(_QWORD*)(v8 + 16);
				}
			} while (v8);
			v38 = v7;
			do
			{
				if (*(_DWORD*)(v6 + 32) < a2)
				{
					v6 = *(_QWORD*)(v6 + 24);
				}
				else
				{
					v5 = (_QWORD*)v6;
					v6 = *(_QWORD*)(v6 + 16);
				}
			} while (v6);
		}
		if (v5 == (_QWORD*)v7)
			goto LABEL_70;
		while (1)
		{
			v9 = (_DWORD*)v5[5];
			if (!v9)
				goto LABEL_61;
			v10 = 0;
			v11 = 0.0;
			v12 = v9[3] & 1;
			v13 = 0i64;
			v14 = v9 + 4;
			do
			{
				v15 = *v14;
				if (!*v14)
					goto LABEL_54;
				v16 = v9[2];
				v17 = 0.0;
				if (!v16)
				{
					v25 = *(_QWORD*)(qword_140C65C28 + 112);
					v26 = v25;
					v27 = *(_QWORD*)(v25 + 8);
					while (v27)
					{
						if (*(_DWORD*)(v27 + 32) < v15)
						{
							v27 = *(_QWORD*)(v27 + 24);
						}
						else
						{
							v26 = v27;
							v27 = *(_QWORD*)(v27 + 16);
						}
					}
					if (v26 == v25 || v15 < *(_DWORD*)(v26 + 32))
					{
						v40 = *(_QWORD*)(qword_140C65C28 + 112);
						v28 = &v40;
					}
					else
					{
						v39 = v26;
						v28 = &v39;
					}
					v29 = *v28;
					if (v29 != *(_QWORD*)(qword_140C65C28 + 112))
					{
						v30 = *(_QWORD*)(v29 + 40);
						if (v30)
						{
							if (*(_QWORD*)(v30 + 32))
							{
								v17 = 1.0;
							}
							else
							{
								v31 = (float)*(int*)(**(_QWORD**)(v30 + 40) + 44i64);
								if (v31 > 0.0)
									v17 = (float)(int)sub_140642B30(v30) / v31;
							}
						}
					}
					goto LABEL_49;
				}
				v18 = v16 - 1;
				if (v18)
				{
					v19 = (unsigned int)(v18 - 1);
					if (!(_DWORD)v19)
					{
						v20 = sub_1405A8A40(v19, v15);
						if (v20)
						{
							if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v20 + 8)) == 3)
								v17 = 1.0;
							else
								v17 = 0.0;
						}
					}
				LABEL_49:
					if (v12)
					{
						++v10;
						v11 = v11 + v17;
						goto LABEL_54;
					}
					if (v17 == 1.0)
						goto LABEL_70;
					goto LABEL_52;
				}
				if (qword_140C65970)
				{
					v21 = sub_1403D7BC0(qword_140C65970, v15);
					v22 = (__int64**)v21;
					if (v21)
					{
						if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v21 + 56i64))(v21))
						{
							v17 = 1.0;
						}
						else
						{
							v23 = (float)(int)sub_14056D330((__int64)v22);
							if (v23 > 0.0)
								v17 = (float)(int)sub_14056D0D0(v22) / v23;
						}
						goto LABEL_49;
					}
				}
				if (v12)
				{
					v24 = sub_140491C60(qword_140C65968, *v14);
					if (v24 && !(unsigned int)sub_1403D7C30(v24, *(_QWORD*)(qword_140C65898 + 120), 1))
						goto LABEL_54;
					goto LABEL_49;
				}
			LABEL_52:
				if (v17 > v4)
					v4 = v17;
			LABEL_54:
				++v13;
				++v14;
			} while (v13 < 6);
			if (!v12 || !v10)
				goto LABEL_69;
			v32 = v11 / (float)v10;
			if (v32 > v4)
				v4 = v32;
			if (v4 != 1.0)
			{
			LABEL_69:
				v7 = v38;
			LABEL_61:
				v33 = v5[3];
				if (v33)
				{
					v5 = (_QWORD*)v5[3];
					for (i = *(_QWORD**)(v33 + 16); i; i = (_QWORD*)i[2])
						v5 = i;
				}
				else
				{
					for (j = v5[1]; v5 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
						v5 = (_QWORD*)j;
					if (v5[3] != j)
						v5 = (_QWORD*)j;
				}
				if (v5 != (_QWORD*)v7)
					continue;
			}
		LABEL_70:
			sub_140008410((__int64)v36);
			sub_14018B900((__int64)v37, 0);
			return;
		}
	}
}
// 140499BF6: conditional instruction was optimized away because rax.8!=0
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65968: using guessed type __int64 qword_140C65968;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140C65998: using guessed type __int64 qword_140C65998;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 140C65C28: using guessed type __int64 qword_140C65C28;
// 140499B40: using guessed type char var_B8[8];

