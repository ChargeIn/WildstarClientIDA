//----- (0000000140168010) ----------------------------------------------------
void __fastcall sub_140168010(__int64 a1, __int64 a2)
{
	unsigned int v2; // ebx
	int v3; // r12d
	bool v5; // cc
	__int64 v6; // rcx
	int v7; // edx
	int v8; // r13d
	__int64 v9; // r8
	__int64 v10; // r8
	__int64 v11; // rax
	__int64 v12; // r8
	unsigned int* v13; // rdi
	__int64 v14; // r8
	int v15; // edx
	unsigned __int16* v16; // rbp
	__int64 v17; // r15
	unsigned __int64 v18; // rax
	__int64 v19; // r8
	int v20; // edx
	__int64 v21; // [rsp+20h] [rbp-78h] BYREF
	unsigned __int16* v22; // [rsp+28h] [rbp-70h]
	__int64 v23; // [rsp+30h] [rbp-68h]
	__int64 v24; // [rsp+40h] [rbp-58h] BYREF
	__int64 v25; // [rsp+48h] [rbp-50h]
	__int64 v26; // [rsp+50h] [rbp-48h]
	__int64 v27; // [rsp+A0h] [rbp+8h]
	__int64 v28; // [rsp+A8h] [rbp+10h] BYREF

	v28 = a2;
	v2 = 0;
	v3 = 0;
	v5 = *(_DWORD*)(a1 + 1160) <= 0;
	v6 = qword_140C63678;
	LODWORD(v28) = 0;
	if (!v5)
	{
		do
		{
			v7 = *(_DWORD*)(a1 + 1144);
			v8 = 0;
			if (v7 > 0)
			{
				v9 = 0i64;
				v27 = 0i64;
				do
				{
					v10 = *(int*)(v9 + *(_QWORD*)(a1 + 1120));
					if ((int)v10 < 0
						|| (int)v10 >= v7
						|| v3 < 0
						|| v3 >= *(_DWORD*)(a1 + 1160)
						|| (v11 = *(_QWORD*)(*(_QWORD*)(a1 + 1152) + 8i64 * v3), (int)v10 >= *(_DWORD*)(v11 + 24)))
					{
						v12 = 0i64;
					}
					else
					{
						v12 = *(_QWORD*)(*(_QWORD*)(v11 + 16) + 8 * v10);
					}
					v13 = (unsigned int*)(v12 + 160);
					if (&v28 != (__int64*)(v12 + 160))
					{
						sub_1401429A0(v6, v2);
						v6 = qword_140C63678;
						LODWORD(v28) = *v13;
						v2 = v28;
						if ((unsigned __int64)(unsigned int)v28 < *(_QWORD*)(qword_140C63678 + 48))
						{
							v14 = 32i64 * (unsigned int)v28 + *(_QWORD*)(qword_140C63678 + 40);
							v15 = *(_DWORD*)(v14 + 16);
							if ((unsigned int)(v15 - 1) <= 0xFFFFFFFD)
								*(_DWORD*)(v14 + 16) = v15 + 1;
						}
					}
					sub_140142E30(v6, &v24, (unsigned int*)&v28);
					sub_140142E30(qword_140C63678, &v21, (unsigned int*)&v28);
					v16 = v22;
					v17 = v25;
					if ((unsigned int)sub_1400454D0(v25, v26, v22, v23) || v13 == (unsigned int*)(a1 + 2208))
					{
						v6 = qword_140C63678;
					}
					else
					{
						sub_1401429A0(qword_140C63678, *v13);
						v18 = *(unsigned int*)(a1 + 2208);
						v6 = qword_140C63678;
						*v13 = v18;
						if (v18 < *(_QWORD*)(v6 + 48))
						{
							v19 = 32i64 * (unsigned int)v18 + *(_QWORD*)(v6 + 40);
							v20 = *(_DWORD*)(v19 + 16);
							if ((unsigned int)(v20 - 1) <= 0xFFFFFFFD)
								*(_DWORD*)(v19 + 16) = v20 + 1;
						}
					}
					if (v16)
					{
						sub_14018B900((__int64)v16, 0);
						v6 = qword_140C63678;
					}
					if (v17)
					{
						sub_14018B900(v17, 0);
						v6 = qword_140C63678;
					}
					v7 = *(_DWORD*)(a1 + 1144);
					++v8;
					v9 = v27 + 4;
					v27 += 4i64;
				} while (v8 < v7);
			}
			++v3;
		} while (v3 < *(_DWORD*)(a1 + 1160));
	}
	sub_1401429A0(v6, v2);
}
// 140C63678: using guessed type __int64 qword_140C63678;

