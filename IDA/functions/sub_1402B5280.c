//----- (00000001402B5280) ----------------------------------------------------
__int64 __fastcall sub_1402B5280(char* a1, unsigned __int64 a2, unsigned __int64* a3, __int64 a4)
{
	__int64 result; // rax
	__int64 v9; // rbx
	char* v10; // rbp
	__int64 v11; // rsi
	unsigned __int64 v12; // r12
	__int64 v13; // r13
	unsigned __int64 v14; // r15
	int v15; // eax
	int v16; // eax
	int v17; // eax
	unsigned int v18; // ebx
	__int64 v19; // rax
	unsigned __int64 v20; // [rsp+30h] [rbp-68h] BYREF
	unsigned __int64 v21; // [rsp+38h] [rbp-60h] BYREF
	unsigned __int64 v22; // [rsp+40h] [rbp-58h]
	__int64 v23; // [rsp+48h] [rbp-50h]
	unsigned __int64 v24; // [rsp+50h] [rbp-48h]
	unsigned __int64 v25; // [rsp+58h] [rbp-40h]
	unsigned __int64 v26; // [rsp+60h] [rbp-38h]
	__int64 v27; // [rsp+68h] [rbp-30h]
	int v28; // [rsp+A8h] [rbp+10h] BYREF

	if (!a2)
		return 2147942487i64;
	sub_1402B34D0((_QWORD*)a4);
	v9 = 0i64;
	v28 = 0;
	result = sub_1402B45A0(a1, a2, (__int64)&v21, &v20, &v28);
	if ((int)result >= 0)
	{
		if (v20 > a2)
			return 2147500037i64;
		v10 = &a1[v20];
		v11 = a2 - v20;
		if (!v11)
			return 2147500037i64;
		v12 = v21;
		v13 = v27;
		v14 = v22;
		result = sub_1402B2FE0(a4, v27, v21, v22, 1i64, 1i64);
		if ((int)result >= 0)
		{
			if ((v28 & 8) != 0)
			{
				if (!*(_QWORD*)(a4 + 48))
					goto LABEL_17;
				v15 = *(_DWORD*)(a4 + 68);
				if (v15 < 2)
					goto LABEL_17;
				if (v15 <= 3)
				{
					if (*(_QWORD*)(a4 + 40))
						LABEL_16:
					v9 = *(_QWORD*)(a4 + 72);
				}
				else if (v15 == 4)
				{
					if (!*(_QWORD*)(a4 + 32))
					{
						v16 = sub_1402B47A0(v10, v11, 0i64, v28);
						goto LABEL_27;
					}
					goto LABEL_16;
				}
			LABEL_17:
				v16 = sub_1402B47A0(v10, v11, v9, v28);
				goto LABEL_27;
			}
			if (*(_QWORD*)(a4 + 48))
			{
				v17 = *(_DWORD*)(a4 + 68);
				if (v17 >= 2)
				{
					if (v17 > 3)
					{
						if (v17 != 4 || !*(_QWORD*)(a4 + 32))
							goto LABEL_26;
						goto LABEL_25;
					}
					if (*(_QWORD*)(a4 + 40))
						LABEL_25:
					v9 = *(_QWORD*)(a4 + 72);
				}
			}
		LABEL_26:
			v16 = sub_1402B4D10((unsigned __int8*)v10, v11, v9, v28);
		LABEL_27:
			v18 = v16;
			if (v16 >= 0)
			{
				if (a3)
				{
					v19 = v23;
					*a3 = v12;
					a3[1] = v14;
					a3[2] = v19;
					a3[3] = v24;
					a3[4] = v25;
					a3[5] = v26;
					a3[6] = v13;
				}
				return 0i64;
			}
			else
			{
				sub_1402B34D0((_QWORD*)a4);
				return v18;
			}
		}
	}
	return result;
}

