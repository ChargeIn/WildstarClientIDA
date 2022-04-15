//----- (00000001402C0B20) ----------------------------------------------------
__int64 __fastcall sub_1402C0B20(__int64 a1, __int64 a2, unsigned __int64* a3)
{
	unsigned int v4; // ebx
	int v5; // eax
	unsigned int* v6; // rdi
	bool v7; // zf
	unsigned __int64 v8; // r9
	unsigned __int64 v9; // r8
	int v10; // eax
	__int64 v11; // rdx
	__int64* v12; // rsi
	bool v13; // zf
	__int64 v15[8]; // [rsp+38h] [rbp-69h] BYREF
	int v16; // [rsp+7Ch] [rbp-25h]
	unsigned int* v17; // [rsp+80h] [rbp-21h]
	__int64 v18; // [rsp+88h] [rbp-19h]
	__int64 v19[8]; // [rsp+98h] [rbp-9h] BYREF
	int v20; // [rsp+DCh] [rbp+3Bh]
	unsigned int* v21; // [rsp+E0h] [rbp+3Fh]
	__int64 v22; // [rsp+E8h] [rbp+47h]

	if (!*(_QWORD*)(a1 + 40) || !a3[5])
		return 2147500035i64;
	v4 = 0;
	v15[0] = 0i64;
	v15[1] = 0i64;
	v17 = 0i64;
	v18 = 0i64;
	v5 = sub_1402C6E60(a1, (__int64)v15);
	v6 = v17;
	if (v5 < 0)
		goto LABEL_31;
	if (v15[6] && v16 >= 2)
	{
		if (v16 <= 3)
		{
			v7 = v15[5] == 0;
			goto LABEL_10;
		}
		if (v16 == 4)
		{
			v7 = v15[4] == 0;
		LABEL_10:
			if (!v7 && v17)
			{
				v8 = a3[1];
				v9 = *a3;
				v19[0] = 0i64;
				v19[1] = 0i64;
				v21 = 0i64;
				v22 = 0i64;
				v10 = sub_1402B2FE0((__int64)v19, 2, v9, v8, 1i64, 1i64);
				v12 = (__int64*)v21;
				if (v10 < 0)
				{
				LABEL_25:
					v4 = v10;
				LABEL_26:
					if (v12)
						sub_14018B900((__int64)v12, 0);
					if (v22)
						sub_14018B900(v22, 0);
					goto LABEL_32;
				}
				if (v19[6] && v20 >= 2)
				{
					if (v20 <= 3)
					{
						v13 = v19[5] == 0;
						goto LABEL_19;
					}
					if (v20 == 4)
					{
						v13 = v19[4] == 0;
					LABEL_19:
						if (!v13 && v21)
						{
							v10 = sub_1402C0840(v6, v11, &xmmword_140964A00, v21);
							if (v10 >= 0)
							{
								sub_1402B34D0(v15);
								v10 = sub_1402C6FB0(v12, (__int64)a3);
								v6 = v17;
								if (v10 >= 0)
									goto LABEL_26;
							}
							goto LABEL_25;
						}
					}
				}
				v10 = -2147467261;
				goto LABEL_25;
			}
		}
	}
	v5 = -2147467261;
LABEL_31:
	v4 = v5;
LABEL_32:
	if (v6)
		sub_14018B900((__int64)v6, 0);
	if (v18)
		sub_14018B900(v18, 0);
	return v4;
}
// 1402C0C35: variable 'v11' is possibly undefined
// 140964A00: using guessed type __int128 xmmword_140964A00;

