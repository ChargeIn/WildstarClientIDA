//----- (00000001402B6D30) ----------------------------------------------------
__int64 __fastcall sub_1402B6D30(__int64 a1, unsigned __int64 a2, _QWORD* a3, _QWORD* a4)
{
	__int64 result; // rax
	__int64 v9; // r15
	unsigned int v10; // r12d
	unsigned __int64 v11; // rdi
	__int64 v12; // rsi
	int v13; // edi
	__int64 v14[8]; // [rsp+40h] [rbp-68h] BYREF
	unsigned int v15; // [rsp+B8h] [rbp+10h] BYREF

	if (!a2)
		return 2147942487i64;
	sub_1402B34D0(a4);
	v9 = 0i64;
	v15 = 0;
	result = sub_1402B5780(a1, a2, (__int64)v14, &v15);
	if ((int)result >= 0)
	{
		v10 = v15;
		v11 = 128i64;
		if ((v15 & 0x10000) != 0)
			v11 = 148i64;
		if ((v15 & 8) != 0 && (v9 = v11 + a1, v11 += 1024i64, a2 < v11))
		{
			return 2147500037i64;
		}
		else
		{
			result = sub_1402B2C70((__int64)a4, (__int64)v14);
			if ((int)result >= 0)
			{
				v12 = a2 - v11;
				if (v12)
				{
					v13 = sub_1402B6700(v11 + a1, v12, (__int64)v14, 0, v10, v9, a4);
					if (v13 >= 0)
					{
						if (a3)
						{
							*a3 = v14[0];
							a3[1] = v14[1];
							a3[2] = v14[2];
							a3[3] = v14[3];
							a3[4] = v14[4];
							a3[5] = v14[5];
							a3[6] = v14[6];
						}
						return 0i64;
					}
					else
					{
						sub_1402B34D0(a4);
						return (unsigned int)v13;
					}
				}
				else
				{
					sub_1402B34D0(a4);
					return 2147500037i64;
				}
			}
		}
	}
	return result;
}

