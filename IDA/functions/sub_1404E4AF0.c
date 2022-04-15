//----- (00000001404E4AF0) ----------------------------------------------------
__int64 __fastcall sub_1404E4AF0(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v2; // rcx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // r10d
	__int64 v7; // rax
	_QWORD* v8; // rax
	int v9; // r10d
	__int64 v10; // rdx
	unsigned __int64 v11; // r15
	unsigned __int64 v12; // rsi
	__int64 v13; // r14
	__int64 v14; // rbp
	__int64 v15; // rcx
	unsigned __int64 v16; // rax
	__int64 v17; // rbx
	__int64 v18; // rax
	__int64 v19; // rdx
	int v20; // ebx
	_QWORD* v21; // rax
	__int64 v22; // r8
	__int64(__fastcall * *v24)(); // [rsp+20h] [rbp-58h] BYREF
	int v25; // [rsp+28h] [rbp-50h]
	__int64 v26; // [rsp+30h] [rbp-48h]
	int v27; // [rsp+38h] [rbp-40h]
	__int64(__fastcall * *v28)(); // [rsp+40h] [rbp-38h] BYREF
	int v29; // [rsp+48h] [rbp-30h]
	__int64 v30; // [rsp+50h] [rbp-28h]
	int v31; // [rsp+58h] [rbp-20h]

	v1 = a1;
	v26 = a1;
	v2 = *(_QWORD*)(a1 + 32);
	v3 = *(_QWORD*)(v2 + 112);
	v27 = 1;
	v24 = off_140B569F0;
	if (*(_QWORD*)(v2 + 120) >= v3)
		sub_14005E2C0(v1);
	v4 = *(_QWORD*)(v1 + 16);
	v5 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(v1 + 16) += 16i64;
	v6 = sub_1400578C0(v1);
	v25 = v6;
	v7 = qword_140C65898;
	if (qword_140C65898)
	{
		v11 = *(_QWORD*)(qword_140C65898 + 32608);
		v12 = 0i64;
		if (v11)
		{
			v13 = 0i64;
			while (1)
			{
				if (v12 >= *(_QWORD*)(v7 + 32608))
					v14 = 0i64;
				else
					v14 = v13 + *(_QWORD*)(v7 + 32600);
				v15 = *(_QWORD*)(v1 + 32);
				v28 = off_140B569F0;
				v30 = v1;
				v16 = *(_QWORD*)(v15 + 112);
				v31 = 1;
				if (*(_QWORD*)(v15 + 120) >= v16)
					sub_14005E2C0(v1);
				v17 = *(_QWORD*)(v1 + 16);
				v18 = sub_14005C1B0(v1, 0, 0);
				*(_DWORD*)(v17 + 8) = 5;
				*(_QWORD*)v17 = v18;
				*(_QWORD*)(v1 + 16) += 16i64;
				v20 = sub_1400578C0(v1);
				v29 = v20;
				if (v14 && (unsigned int)sub_1404E41F0((__int64)&v28, v14))
					sub_1400FB1D0((__int64)&v24);
				sub_1400579E0(v1, v19, v20);
				++v12;
				v13 += 16i64;
				if (v12 >= v11)
					break;
				v7 = qword_140C65898;
			}
			v1 = v26;
			v6 = v25;
		}
		v21 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v6);
		v22 = *(_QWORD*)(v1 + 16);
		*(_QWORD*)v22 = *v21;
		v10 = *((unsigned int*)v21 + 2);
		*(_DWORD*)(v22 + 8) = v10;
	}
	else
	{
		v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v6);
		v10 = *(_QWORD*)(v1 + 16);
		*(_QWORD*)v10 = *v8;
		*(_DWORD*)(v10 + 8) = *((_DWORD*)v8 + 2);
	}
	*(_QWORD*)(v1 + 16) += 16i64;
	sub_1400579E0(v1, v10, v9);
	return 1i64;
}
// 1404E4C58: variable 'v19' is possibly undefined
// 1404E4CCE: variable 'v9' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

