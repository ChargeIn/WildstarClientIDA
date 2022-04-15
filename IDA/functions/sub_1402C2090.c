//----- (00000001402C2090) ----------------------------------------------------
__int64 __fastcall sub_1402C2090(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD* a4)
{
	__int64 v4; // rbx
	unsigned __int64 v6; // r15
	__int64 result; // rax
	unsigned __int64 v9; // rsi
	unsigned __int64 v10; // rdi
	unsigned __int64 v11; // rcx
	unsigned __int64 v12; // rax
	unsigned __int64 i; // rdx
	unsigned __int64 v14; // rcx
	unsigned __int64 v15; // rax
	__int64 v16; // rdi
	int v17; // eax
	__int64 v18; // r14
	int v19; // ebx
	bool v20; // zf
	__int64 v21; // rsi
	int v22; // eax
	__int64 v23[8]; // [rsp+30h] [rbp-D0h] BYREF
	int v24; // [rsp+74h] [rbp-8Ch]
	__int64 v25; // [rsp+78h] [rbp-88h]
	__int64 v26; // [rsp+80h] [rbp-80h]
	unsigned __int64 v27[2]; // [rsp+90h] [rbp-70h] BYREF
	__int64 v28[7]; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v29; // [rsp+D8h] [rbp-28h]
	__int64 v30; // [rsp+E0h] [rbp-20h]
	_QWORD v31[2]; // [rsp+F0h] [rbp-10h] BYREF

	v4 = *(int*)(a1 + 16);
	v6 = a3;
	if ((unsigned __int64)(v4 - 1) > 0x72)
		return 2147942487i64;
	if (!*(_QWORD*)(a1 + 40))
		return 2147500035i64;
	v9 = *(_QWORD*)a1;
	v10 = *(_QWORD*)(a1 + 8);
	if (a3 <= 1)
	{
		v6 = 1i64;
		if (a3)
			goto LABEL_18;
		v14 = *(_QWORD*)(a1 + 8);
		v15 = v9;
		while (1)
		{
			if (v14 > 1)
			{
				v14 >>= 1;
				if (v15 <= 1)
					goto LABEL_28;
			}
			else if (v15 <= 1)
			{
				goto LABEL_18;
			}
			v15 >>= 1;
		LABEL_28:
			++v6;
		}
	}
	v11 = *(_QWORD*)(a1 + 8);
	v12 = v9;
	for (i = 1i64; ; ++i)
	{
		if (v11 > 1)
		{
			v11 >>= 1;
			if (v12 <= 1)
				continue;
			goto LABEL_12;
		}
		if (v12 <= 1)
			break;
	LABEL_12:
		v12 >>= 1;
	}
	if (a3 > i)
		return 2147942487i64;
LABEL_18:
	if ((int)v4 >= 70 && ((int)v4 <= 84 || (unsigned int)(v4 - 94) <= 5) || sub_1402B27D0(v4))
		return 2147942450i64;
	if (sub_1402B1FE0(v4, v31))
	{
		result = sub_1402B2FE0((__int64)a4, v4, v9, v10, 1i64, v6);
		if ((int)result >= 0)
		{
			if (*(_QWORD*)(a1 + 40))
				return sub_1402C1200(a1, v6, v31, (__int64)a4);
			else
				return 2147500035i64;
		}
		return result;
	}
	v16 = 0i64;
	v23[0] = 0i64;
	v23[1] = 0i64;
	v25 = 0i64;
	v26 = 0i64;
	v17 = sub_1402C6E60(a1, (__int64)v23);
	v18 = v25;
	v19 = v17;
	if (v17 >= 0)
	{
		if (!v23[6] || v24 < 2)
			goto LABEL_48;
		if (v24 <= 3)
		{
			v20 = v23[5] == 0;
			goto LABEL_37;
		}
		if (v24 != 4)
			goto LABEL_48;
		v20 = v23[4] == 0;
	LABEL_37:
		if (!v20 && v25)
		{
			v27[0] = 0i64;
			v27[1] = 0i64;
			v29 = 0i64;
			v21 = 0i64;
			v30 = 0i64;
			if (*(_QWORD*)(v25 + 40))
			{
				v19 = sub_1402C1200(v25, v6, &xmmword_140964A00, (__int64)v27);
				if (v19 >= 0)
				{
					sub_1402B34D0(v23);
					v16 = v29;
					v22 = sub_1402C7070(v29, v27[0], v28, *(_DWORD*)(a1 + 16), a4);
					v18 = v25;
					v21 = v30;
					v19 = v22;
				}
				else
				{
					v21 = v30;
					v16 = v29;
				}
			}
			else
			{
				v19 = -2147467261;
			}
			if (v16)
				sub_14018B900(v16, 0);
			if (v21)
				sub_14018B900(v21, 0);
		}
		else
		{
		LABEL_48:
			v19 = -2147467261;
		}
	}
	if (v18)
		sub_14018B900(v18, 0);
	if (v26)
		sub_14018B900(v26, 0);
	return (unsigned int)v19;
}
// 140964A00: using guessed type __int128 xmmword_140964A00;
// 1402C2090: using guessed type _QWORD var_50[2];
// 1402C2090: using guessed type __int64 var_A0[7];

