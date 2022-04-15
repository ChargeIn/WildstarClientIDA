//----- (00000001403BEF30) ----------------------------------------------------
void __fastcall sub_1403BEF30(__int64* a1, unsigned int a2, int a3)
{
	__int64 v3; // rbp
	__int64 v7; // r9
	__int64 v8; // r8
	__int64 v9; // rdx
	__int64 v10; // rcx
	__int64 v11; // rsi
	__int64 v12; // rax
	unsigned int v13; // edx
	char v14[4]; // [rsp+20h] [rbp-E8h] BYREF
	unsigned int v15; // [rsp+24h] [rbp-E4h]
	unsigned int v16; // [rsp+6Ch] [rbp-9Ch]
	__int64 v17; // [rsp+110h] [rbp+8h]

	v3 = a1[15];
	if (v3)
	{
		v7 = sub_1403ACD90(qword_140C65B70, a2, v3);
		if (v7)
		{
			v8 = a1[689];
			v9 = v8;
			v10 = *(_QWORD*)(v8 + 8);
			while (v10)
			{
				if (*(_DWORD*)(v10 + 32) < a2)
				{
					v10 = *(_QWORD*)(v10 + 24);
				}
				else
				{
					v9 = v10;
					v10 = *(_QWORD*)(v10 + 16);
				}
			}
			if (v9 == v8 || (v17 = v9, a2 < *(_DWORD*)(v9 + 32)))
				v17 = a1[689];
			if (v17 != v8)
			{
				v11 = *(_QWORD*)(v17 + 40);
				*(_DWORD*)(v11 + 12) = 1;
				if (*(_DWORD*)(*(_QWORD*)(v7 + 112) + 24i64) == 7 && a3)
				{
					v12 = sub_140469B00(v3, a2, *(_DWORD*)(v3 + 8));
					if (v12)
					{
						sub_1403BF070((__int64)v14, v12 + 104);
						sub_1403BDAC0((__int64)a1);
						v13 = v15;
						if (v16)
							v13 = v16;
						sub_1403BDB30((__int64)a1, v13);
						sub_14039CC30((__int64)a1, *(_DWORD*)(v11 + 24), 0);
					}
				}
				else
				{
					sub_1403BF2C0(a1, a2);
				}
			}
		}
	}
}
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 1403BEF30: using guessed type char var_E8[4];

