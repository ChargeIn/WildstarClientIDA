//----- (0000000140288000) ----------------------------------------------------
void __fastcall sub_140288000(unsigned __int64* a1)
{
	unsigned __int64 v1; // rbp
	unsigned __int64 v2; // r14
	unsigned __int64 v3; // r15
	unsigned __int64 v5; // rdi
	unsigned __int64 v6; // rsi
	bool v7; // cc
	unsigned __int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rdx
	unsigned __int64 v11; // r14
	__int64 v12; // rax
	__int64 v13; // rsi

	v1 = *a1;
	v2 = a1[1];
	v3 = a1[2];
	v5 = v2;
	v6 = *a1;
	if (*a1 < v2)
	{
		while (v5 < v3)
		{
			v7 = (*(int(__fastcall**)(_QWORD, _QWORD, _QWORD))a1[3])(
				*(_QWORD*)(a1[4] + 8 * v1),
				*(_QWORD*)(a1[4] + 8 * v5),
				*(_QWORD*)(a1[3] + 24)) <= 0;
			v8 = a1[4];
			if (v7)
			{
				v9 = *(_QWORD*)(v8 + 8 * v1);
				++v6;
				++v1;
			}
			else
			{
				v9 = *(_QWORD*)(v8 + 8 * v5);
				++v6;
				++v5;
			}
			*(_QWORD*)(a1[5] + 8 * v6 - 8) = v9;
			if (v1 >= v2)
				goto LABEL_11;
		}
		if (v1 < v2)
		{
			v10 = 8 * v1;
			v11 = v2 - v1;
			do
			{
				++v6;
				v12 = *(_QWORD*)(v10 + a1[4]);
				v10 += 8i64;
				*(_QWORD*)(a1[5] + 8 * v6 - 8) = v12;
				--v11;
			} while (v11);
		}
	}
LABEL_11:
	if (v5 < v3)
	{
		v13 = 8 * v6;
		do
		{
			++v5;
			v13 += 8i64;
			*(_QWORD*)(v13 + a1[5] - 8) = *(_QWORD*)(a1[4] + 8 * v5 - 8);
		} while (v5 < v3);
	}
}

