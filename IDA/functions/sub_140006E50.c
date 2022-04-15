//----- (0000000140006E50) ----------------------------------------------------
__int64 __fastcall sub_140006E50(__int64 a1, unsigned __int16* a2, __int64 a3)
{
	__int64 v4; // rsi
	unsigned __int64 v5; // rdi
	__int64 v6; // r11
	__int64 i; // rbx
	unsigned __int16* v8; // r9
	__int64 v9; // r8
	int v10; // eax
	int v11; // ecx
	__int64 v13[3]; // [rsp+20h] [rbp-38h] BYREF
	__int64 v14; // [rsp+38h] [rbp-20h]
	__int64 v15; // [rsp+40h] [rbp-18h]

	if (!qword_140C65898)
		return 2147500037i64;
	v4 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v4)
		return 2147500037i64;
	v5 = *(_QWORD*)(a1 + 64);
	v6 = 0i64;
	if (!v5)
		return 2147500037i64;
	for (i = *(_QWORD*)(a1 + 56); ; i += 8i64)
	{
		v8 = *(unsigned __int16**)(***(_QWORD***)i + 56i64);
		if (v8 == a2)
			break;
		if (v8)
		{
			if (a2)
			{
				v9 = 0i64;
				if (*v8 == *a2)
				{
					LOWORD(v10) = *v8;
					while ((_WORD)v10)
					{
						v10 = v8[v9 + 1];
						v11 = a2[++v9];
						if (v10 != v11)
							goto LABEL_12;
					}
					break;
				}
			}
		}
	LABEL_12:
		if (++v6 >= v5)
			return 2147500037i64;
	}
	v14 = 0i64;
	v15 = 0i64;
	v13[0] = (__int64)a2;
	v13[1] = a3;
	v13[2] = 0i64;
	v14 = *(_QWORD*)(v4 + 416);
	v15 = *(_QWORD*)(v4 + 424);
	sub_1400161D0(qword_140C635F0, 0x3F1u, (__int64)v13);
	return 0i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

