//----- (00000001404B84D0) ----------------------------------------------------
void __fastcall sub_1404B84D0(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rsi
	__int64 v8; // rax
	int v9; // ecx
	unsigned int v10; // ecx
	__int64 v11; // rax
	__int64 v12; // rcx
	int v13; // eax
	__int64 v14; // [rsp+20h] [rbp-98h] BYREF
	int* v15; // [rsp+28h] [rbp-90h]
	__int64* v16; // [rsp+30h] [rbp-88h]
	int v17; // [rsp+40h] [rbp-78h] BYREF
	__int64 v18; // [rsp+48h] [rbp-70h]
	int v19; // [rsp+50h] [rbp-68h] BYREF
	int v20; // [rsp+58h] [rbp-60h]
	__int64 v21; // [rsp+98h] [rbp-20h]
	__int64 v22; // [rsp+C0h] [rbp+8h] BYREF

	v22 = a1;
	v5 = sub_1405B1510(&qword_140C7DFB0);
	v7 = v5;
	if (v5 && a2 && a3)
	{
		if (sub_1404CA3F0(v6, *(_DWORD*)(v5 + 188), (__int64)a3, *(_QWORD*)(a2 + 88))
			&& *(_DWORD*)(a2 + 644)
			&& *(_DWORD*)(a2 + 648)
			&& a3[161]
			&& a3[162])
		{
			v8 = *(_QWORD*)(v7 + 232);
			if (!v8 || !*(_DWORD*)(v7 + 272))
				v8 = 0i64;
			v9 = *(_DWORD*)(v8 + 184);
			if ((v9 & 0xFFFFFFFA) == 0 && v9 != 4)
			{
				v14 = 0i64;
				v15 = 0i64;
				v16 = 0i64;
				v17 = 0;
				v18 = 0i64;
				sub_1407E4830(&v19, 0i64, 0x58ui64);
				v10 = a3[24];
				v14 = 0x100000001i64;
				v11 = sub_140203DA0(v10);
				if (v11)
				{
					v13 = *(_DWORD*)(v11 + 8);
					if (v13 == 12)
					{
						v20 = 4;
					}
					else
					{
						if (v13 != 22)
							return;
						v20 = 6;
					}
					sub_1404B89A0(v12, (__int64)&v17, (__int64)a3, (_QWORD*)(v7 + 8));
					v21 = *(_QWORD*)(a2 + 88);
					v15 = &v17;
					v16 = &v22;
					LODWORD(v22) = 0;
					sub_1403F4900(qword_140C65898, 0x50Bu, (__int64)&v14);
				}
			}
		}
		else
		{
			sub_1403CC530(qword_140C65898, 0x67u);
		}
	}
}
// 1404B8524: variable 'v6' is possibly undefined
// 1404B860D: variable 'v12' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

