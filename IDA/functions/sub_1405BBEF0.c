//----- (00000001405BBEF0) ----------------------------------------------------
void __fastcall sub_1405BBEF0(__int64 a1, unsigned int a2, _DWORD* a3)
{
	__int64 v6; // r10
	unsigned int v7; // r9d
	__int64 v8; // rax
	char v9; // bp
	__int64 v10; // r8
	__int64 v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 v14; // rdx
	__int64 v15; // rax
	__int64 v16; // rcx
	__int64 i; // rcx
	__int64 j; // rcx
	int v19; // ebx
	__int64 v20; // rdx
	char v21[8]; // [rsp+30h] [rbp-28h] BYREF
	int v22; // [rsp+38h] [rbp-20h]
	__int64 v23; // [rsp+40h] [rbp-18h]
	__int64 v24; // [rsp+78h] [rbp+20h] BYREF

	if (sub_1403D90D0(qword_140C65898, a2))
	{
		v6 = *(_QWORD*)(a1 + 16);
		v7 = a3[4];
		v8 = *(_QWORD*)(v6 + 8);
		v9 = 0;
		v10 = v6;
		while (v8)
		{
			if (*(_DWORD*)(v8 + 32) < v7)
			{
				v8 = *(_QWORD*)(v8 + 24);
			}
			else
			{
				v10 = v8;
				v8 = *(_QWORD*)(v8 + 16);
			}
		}
		if (v10 == v6 || (v24 = v10, v7 < *(_DWORD*)(v10 + 32)))
			v24 = v6;
		if (v24 != *(_QWORD*)(a1 + 16))
		{
			sub_1405BCC50(a1 + 8, &v24);
			v9 = 1;
		}
		v11 = *(_QWORD*)(a1 + 48);
		v12 = v11;
		v13 = *(_QWORD*)(v11 + 8);
		while (v13)
		{
			if (*(_DWORD*)(v13 + 32) < a2)
			{
				v13 = *(_QWORD*)(v13 + 24);
			}
			else
			{
				v12 = v13;
				v13 = *(_QWORD*)(v13 + 16);
			}
		}
		if (v12 == v11 || (v24 = v12, a2 < *(_DWORD*)(v12 + 32)))
			v24 = v11;
		if (v24 != v11)
		{
			v14 = *(_QWORD*)(*(_QWORD*)(v24 + 40) + 8i64);
			v15 = *(_QWORD*)(v14 + 16);
			while (v15 != v14)
			{
				v16 = *(_QWORD*)(v15 + 24);
				if (v16)
				{
					v15 = *(_QWORD*)(v15 + 24);
					for (i = *(_QWORD*)(v16 + 16); i; i = *(_QWORD*)(i + 16))
						v15 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v15 + 8); v15 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v15 = j;
					if (*(_QWORD*)(v15 + 24) != j)
						v15 = j;
				}
			}
		}
		sub_1405BC680((__int64)v21, *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64), (__int64)a3);
		v19 = v22;
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "BuffRemoved", byte_1409EB874, a2, v22);
		if (v9)
			(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)a3 + 8i64))(a3);
		if (v23)
			sub_1400579E0(v23, v20, v19);
	}
}
// 1405BC0B8: variable 'v20' is possibly undefined
// 1409EB874: using guessed type _BYTE byte_1409EB874[40];
// 140C65898: using guessed type __int64 qword_140C65898;
// 1405BBEF0: using guessed type char var_28[8];

