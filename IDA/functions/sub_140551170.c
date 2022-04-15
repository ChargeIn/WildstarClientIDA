//----- (0000000140551170) ----------------------------------------------------
void __fastcall sub_140551170(__int64 a1, int a2, int a3)
{
	int v6; // edi
	int* v7; // rbx
	__int64 v8; // rcx
	__int64 v9; // rax
	__int16* v10; // rdi
	int v11; // edx
	__int16* v12; // rax
	__int64 v13; // rax
	__int16* v14; // rax
	char* v15; // rax
	__int64 v16; // rdx
	__int64 v17; // rcx
	char v18[8]; // [rsp+30h] [rbp-48h] BYREF
	int* v19; // [rsp+38h] [rbp-40h]
	int* v20; // [rsp+40h] [rbp-38h]
	int* v21; // [rsp+48h] [rbp-30h]
	__int64 v22; // [rsp+50h] [rbp-28h] BYREF
	__int64 v23; // [rsp+58h] [rbp-20h]

	v6 = sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(a1 + 8));
	if (a3 != v6)
	{
		v7 = sub_14018B280(16i64, 0);
		v19 = v7;
		v20 = v7;
		v8 = (__int64)(v7 + 4);
		v21 = v7 + 4;
		if (v7)
			*(_WORD*)v7 = 0;
		if (v6 == 4)
		{
			v9 = *(_QWORD*)(a1 + 8);
			if (v9)
			{
				v12 = sub_14034BDD0(v8, *(_DWORD*)(v9 + 4));
				v11 = 4107;
				v10 = v12;
			}
			else
			{
				v10 = (__int16*)&unk_1409F28B4;
				v11 = 4107;
			}
		}
		else
		{
			if (v6 != 6)
			{
			LABEL_21:
				if (v7)
					sub_14018B900((__int64)v7, 0);
				return;
			}
			v13 = *(_QWORD*)(a1 + 8);
			if (v13)
				v10 = sub_14034BDD0(v8, *(_DWORD*)(v13 + 4));
			else
				v10 = (__int16*)&unk_1409F28B4;
			v11 = 4104;
		}
		v14 = sub_14034BDD0(v8, v11);
		v15 = (char*)sub_14018EFA0(&v22, (__int64)v14, v10);
		if (v15 != v18)
		{
			sub_14001C480((__int64)v18, *((int**)v15 + 1), *((int**)v15 + 2));
			v7 = v19;
		}
		if (v23)
			sub_14018B900(v23, 0);
		v16 = *(_QWORD*)(qword_140C65898 + 120);
		if (v16)
		{
			v17 = *(_QWORD*)(qword_140C65898 + 29504);
			if ((*(_DWORD*)(*(_QWORD*)(a1 + 8) + 12i64) & 0x80000) != 0)
				sub_1400EA3E0(v17, "ContractFloater", byte_1409E9544, *(unsigned int*)(v16 + 8), v7, a2);
			else
				sub_140430B90(v17, *(_DWORD*)(v16 + 8), (__int64)v7, a2);
		}
		goto LABEL_21;
	}
}
// 14055122E: variable 'v8' is possibly undefined
// 1409E9544: using guessed type _BYTE byte_1409E9544[32];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 140551170: using guessed type char var_48[8];

