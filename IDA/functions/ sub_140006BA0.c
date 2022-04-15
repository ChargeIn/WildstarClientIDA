//----- (0000000140006BA0) ----------------------------------------------------
__int64 __fastcall sub_140006BA0(__int64 a1, unsigned __int16* a2)
{
	unsigned __int64 v2; // rdi
	__int64 v3; // r11
	__int64 i; // rbx
	unsigned __int16* v5; // r9
	__int64 v6; // r8
	int v7; // eax
	int v8; // ecx
	unsigned __int16* v10; // [rsp+30h] [rbp+8h] BYREF

	v2 = *(_QWORD*)(a1 + 64);
	v3 = 0i64;
	if (!v2)
		return 2147500037i64;
	for (i = *(_QWORD*)(a1 + 56); ; i += 8i64)
	{
		v5 = *(unsigned __int16**)(***(_QWORD***)i + 56i64);
		if (v5 == a2)
			break;
		if (v5)
		{
			if (a2)
			{
				v6 = 0i64;
				if (*v5 == *a2)
				{
					LOWORD(v7) = *v5;
					while ((_WORD)v7)
					{
						v7 = v5[v6 + 1];
						v8 = a2[++v6];
						if (v7 != v8)
							goto LABEL_10;
					}
					break;
				}
			}
		}
	LABEL_10:
		if (++v3 >= v2)
			return 2147500037i64;
	}
	v10 = a2;
	sub_1400161D0(qword_140C635F0, 0x233u, (__int64)&v10);
	return 0i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

