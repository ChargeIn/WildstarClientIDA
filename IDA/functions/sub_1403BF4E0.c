//----- (00000001403BF4E0) ----------------------------------------------------
__int64 __fastcall sub_1403BF4E0(__int64* a1, unsigned int a2, int a3)
{
	__int64 v3; // r9
	__int64 result; // rax
	__int64 v8; // rdx
	__int64 v9; // rbx
	__int64 v10; // rsi
	__int64 v11; // r14
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // r14
	unsigned int v15; // edx
	__int64 v16; // rax
	__int64 v17; // rsi
	__int64 v18; // rdx
	__int64 v19; // rax
	__int64 v20; // rcx
	__int64 v21; // [rsp+50h] [rbp+8h] BYREF

	v3 = a1[689];
	result = *(_QWORD*)(v3 + 8);
	v8 = v3;
	while (result)
	{
		if (*(_DWORD*)(result + 32) < a2)
		{
			result = *(_QWORD*)(result + 24);
		}
		else
		{
			v8 = result;
			result = *(_QWORD*)(result + 16);
		}
	}
	if (v8 == v3 || (v21 = v8, a2 < *(_DWORD*)(v8 + 32)))
		v21 = v3;
	v9 = v21;
	if (v21 != v3)
	{
		v10 = *(_QWORD*)(v21 + 40);
		if (*(_QWORD*)(v10 + 48))
			sub_140195D70(v10 + 32);
		if (*(_QWORD*)(v10 + 120))
			sub_140195D70(v10 + 104);
		v11 = sub_1403C1F50((__int64)a1, *(_DWORD*)(v10 + 16), *(_BYTE*)(qword_140C65898 + 28140));
		if (v11)
		{
			sub_1403BDAC0(qword_140C65898);
			sub_1405CA990(v12, (__int64*)(v11 + 416));
			sub_1405CA990(v13, (__int64*)(v11 + 408));
		}
		v14 = a1[15];
		if (a3)
		{
			v15 = *(_DWORD*)(v10 + 20);
			if (!v15)
				v15 = a2;
			v16 = sub_1403ACD90(qword_140C65B70, v15, a1[15]);
			if (v14 && v16)
				sub_14046B1E0(v14, v16, 0i64);
		}
		v17 = *(_QWORD*)(v9 + 40);
		if (v17)
		{
			sub_1403BF6E0(*(_QWORD*)(v9 + 40));
			sub_14018B900(v17, 0);
		}
		v21 = v9;
		sub_1403D5ED0((__int64)(a1 + 688), &v21);
		v18 = a1[697];
		v19 = *(_QWORD*)(v18 + 8);
		v20 = v18;
		while (v19)
		{
			if (*(_DWORD*)(v19 + 32) < a2)
			{
				v19 = *(_QWORD*)(v19 + 24);
			}
			else
			{
				v20 = v19;
				v19 = *(_QWORD*)(v19 + 16);
			}
		}
		if (v20 == v18 || (v21 = v20, a2 < *(_DWORD*)(v20 + 32)))
			v21 = v18;
		if (v21 != v18)
			sub_1403D5FD0((__int64)(a1 + 696), &v21);
		result = sub_1403ACD90(qword_140C65B70, a2, v14);
		if (result)
		{
			result = *(_QWORD*)(result + 112);
			if ((*(_BYTE*)(result + 268) & 0x40) == 0)
				return sub_1400EA3E0(a1[3688], "ClearSpellThreshold", byte_1409E9C64, a2);
		}
	}
	return result;
}
// 1403BF5A6: variable 'v12' is possibly undefined
// 1403BF5B2: variable 'v13' is possibly undefined
// 1409E9C64: using guessed type _BYTE byte_1409E9C64[32];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

