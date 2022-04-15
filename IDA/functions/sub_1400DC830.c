//----- (00000001400DC830) ----------------------------------------------------
__int64 __fastcall sub_1400DC830(_QWORD* a1)
{
	__int64 v1; // rbp
	unsigned __int64 v3; // rdx
	unsigned int v4; // ecx
	__int64 v5; // rax
	__int64 v6; // rax
	unsigned __int64 v7; // rcx
	__int64 v8; // rsi
	_DWORD* v9; // rax
	unsigned int v10; // edi
	_DWORD* v11; // rax
	__int64 v12; // r8
	__int64 v13; // rdx
	__int64 v14; // rcx
	__int64 v15; // rax
	__int64 v16; // rax
	int* v17; // rcx
	char v19[8]; // [rsp+20h] [rbp-118h] BYREF
	__int64 v20; // [rsp+28h] [rbp-110h]
	unsigned __int8 v21[16]; // [rsp+30h] [rbp-108h] BYREF
	__int64 v22; // [rsp+40h] [rbp-F8h]
	unsigned int v23; // [rsp+58h] [rbp-E0h]
	unsigned int v24; // [rsp+5Ch] [rbp-DCh]
	__int64 v25; // [rsp+D0h] [rbp-68h]
	__int64 v26; // [rsp+D8h] [rbp-60h]
	int* v27; // [rsp+F0h] [rbp-48h]

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v5) + 400i64) == a1)
				break;
			v5 = ++v4;
		} while (v4 < v3);
	}
	v6 = sub_1400D66A0(a1, 1u);
	v7 = a1[2];
	v8 = v6;
	if (v6)
	{
		v9 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v9 >= v7 || v9 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64) != 5)
		{
			*(_QWORD*)v7 = 0i64;
			*(_DWORD*)(v7 + 8) = 3;
			a1[2] += 16i64;
		}
		else
		{
			v10 = 0;
			v19[0] = 0;
			sub_1400C32C0((__int64)v21);
			v11 = (_DWORD*)(a1[3] + 16i64);
			if ((unsigned __int64)v11 < a1[2]
				&& v11 != dword_140A12138
				&& *(_DWORD*)(a1[3] + 24i64) == 5
				&& (unsigned __int8)sub_1400DBBB0((__int64)a1, 2, (__int64)v21, v19))
			{
				if (v25 != v26)
					sub_1400E58C0(*(_QWORD*)(v8 + 32), v27);
				if (v21[1])
				{
					v10 = sub_1400D3000(v8, v21);
				}
				else
				{
					v10 = sub_1400D3000(v8, v21);
					if (v19[0])
					{
						v12 = *(_QWORD*)(v8 + 344);
						if (v12)
						{
							v13 = *(_QWORD*)(v12 + 8);
							v14 = v13;
							v15 = *(_QWORD*)(v13 + 8);
							while (v15)
							{
								if (*(_DWORD*)(v15 + 32) < v10)
								{
									v15 = *(_QWORD*)(v15 + 24);
								}
								else
								{
									v14 = v15;
									v15 = *(_QWORD*)(v15 + 16);
								}
							}
							if (v14 == v13 || (v20 = v14, v10 < *(_DWORD*)(v14 + 32)))
								v20 = v13;
							if (v20 != v13)
								v1 = *(_QWORD*)(v20 + 40);
						}
						*(_DWORD*)(v1 + 144) = dword_140C63664;
					}
				}
			}
			v16 = a1[2];
			v17 = v27;
			*(_DWORD*)(v16 + 8) = 3;
			*(double*)v16 = (double)(int)v10;
			a1[2] += 16i64;
			if (v17)
				sub_14018B900((__int64)v17, 0);
			if (v25)
				sub_14018B900(v25, 0);
			sub_1401429A0(qword_140C63678, v24);
			sub_1401429A0(qword_140C63678, v23);
			if (v22)
				sub_14018B900(v22, 0);
		}
	}
	else
	{
		*(_QWORD*)v7 = 0i64;
		*(_DWORD*)(v7 + 8) = 3;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;
// 1400DC830: using guessed type char var_118[8];

