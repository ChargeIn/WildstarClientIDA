//----- (000000014091BC20) ----------------------------------------------------
__int64 __fastcall sub_14091BC20(unsigned int** a1, _BYTE* a2, int a3, __int64* a4)
{
	int v4; // r10d
	unsigned __int8 v6; // bl
	__int64 v8; // r11
	int* v9; // rdi
	int v10; // eax
	char v11; // r9
	int v12; // edx
	unsigned __int8 v13; // dl
	__int64 v15; // rax
	int v16[2]; // [rsp+20h] [rbp-58h] BYREF
	int v17[6]; // [rsp+28h] [rbp-50h] BYREF

	v4 = 0;
	v6 = *a2 & 1;
	v16[1] = v6;
	v8 = 0i64;
	v9 = v17;
	v10 = 0;
	v11 = -v6;
	do
	{
		v12 = v10 >> 3;
		if ((v10 & 7) != 0 || a2[v12] != v11)
		{
			v13 = (a2[v12] >> (v10 & 7)) & 1;
			if (v13 != v6)
			{
				if (v8 >= 6)
					return 0i64;
				*v9 = v10;
				++v4;
				++v8;
				++v9;
				v6 = v13;
				v11 = -v13;
			}
			++v10;
		}
		else
		{
			v10 += 8;
		}
	} while (v10 < 256);
	if (v6)
	{
		if (a3)
			goto LABEL_17;
	}
	else if (!a3)
	{
		goto LABEL_17;
	}
	if (v4 >= 6)
		return 0i64;
	v15 = v4++;
	v17[v15] = 256;
LABEL_17:
	v16[0] = v4;
	return sub_14091C380(a1, v16, a4, 0);
}
// 14091BCD6: conditional instruction was optimized away because bl.1==1
// 14091BC20: using guessed type int var_50[6];

