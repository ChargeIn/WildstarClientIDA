//----- (00000001400C6FF0) ----------------------------------------------------
char __fastcall sub_1400C6FF0(_QWORD* a1, int* a2, __int64 a3)
{
	__int64 v5; // rax
	LARGE_INTEGER* v6; // rsi
	LARGE_INTEGER* v7; // rax
	__int64* v8; // rax
	__int64(__fastcall * **v9)(); // rdx
	int v10; // r8d
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64(__fastcall * *v14)(); // [rsp+30h] [rbp-28h] BYREF
	int v15; // [rsp+38h] [rbp-20h]
	__int64 v16; // [rsp+40h] [rbp-18h]
	int v17; // [rsp+48h] [rbp-10h]

	v5 = sub_140151C50(a1[4] + 2584i64, a2);
	v6 = (LARGE_INTEGER*)v5;
	if (v5)
	{
		v7 = (LARGE_INTEGER*)a1[35];
		if (v6 == v7)
		{
			LOBYTE(v5) = 1;
		}
		else
		{
			if (v7)
			{
				sub_1400C85F0(a1, (__int64)&off_140A14990, a1);
				v8 = (__int64*)a1[36];
				if (v8)
				{
					v9 = &v14;
					v10 = -2;
					v14 = off_140B569F0;
					v11 = 0i64;
					v17 = 1;
					v15 = -2;
					v16 = 0i64;
					if (v8 != (__int64*)&v14)
					{
						sub_1400FA810((__int64)v8, (__int64)&v14);
						v11 = v16;
						v10 = v15;
					}
					v14 = off_140B56A08;
					if (v11)
						sub_1400579E0(v11, (__int64)v9, v10);
				}
			}
			a1[35] = v6;
			if (!(unsigned __int8)sub_1401516F0(v6, (__int64)&off_140A149D0, a1, v6[2].QuadPart, a3)
				|| (v12 = a1[36]) == 0
				|| !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12))
			{
				a1[35] = 0i64;
			}
			LOBYTE(v5) = a1[35] != 0i64;
		}
	}
	return v5;
}
// 1400C70CD: variable 'v9' is possibly undefined
// 140A14990: using guessed type char *off_140A14990;
// 140A149D0: using guessed type char *off_140A149D0;
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

