//----- (000000014040AA40) ----------------------------------------------------
__int64 __fastcall sub_14040AA40(__int64 a1, __int64 a2)
{
	__int64* v2; // r12
	__int64 v4; // r13
	__int16* v6; // rax
	unsigned int v7; // esi
	__int64 v8; // rcx
	int* v9; // r14
	int* v10; // rdi
	__int64 v11; // r15
	__int64 v12; // rcx
	__int16* v13; // r8
	__int64 v14; // rbx
	__int64 v15; // r8
	char* v16; // rax
	char v17[8]; // [rsp+30h] [rbp-68h] BYREF
	int* v18; // [rsp+38h] [rbp-60h]
	__int64 v20; // [rsp+48h] [rbp-50h]
	__int64 v21; // [rsp+50h] [rbp-48h] BYREF
	__int64 v22; // [rsp+58h] [rbp-40h]
	__int64 v23; // [rsp+A0h] [rbp+8h] BYREF

	v23 = a1;
	v2 = (__int64*)qword_140C658A0;
	v4 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v4)
		return 1i64;
	v6 = sub_14034BDD0(a1, 618617);
	v7 = 0;
	v8 = 0i64;
	v9 = (int*)v6;
	v10 = 0i64;
	v18 = 0i64;
	v20 = 0i64;
	if (*v6)
	{
		do
			++v8;
		while (v6[v8]);
	}
	v11 = (2 * v8) >> 1;
	if ((unsigned __int64)(v11 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v10 = sub_14018B280(2 * (v11 + 1), 0);
		v18 = v10;
		v20 = (__int64)v10 + 2 * v11 + 2;
	}
	sub_1407DB590(v10, v9, 2 * v11);
	if ((int*)((char*)v10 + 2 * v11))
		*((_WORD*)v10 + v11) = 0;
	v12 = *(_QWORD*)(qword_140C65898 + 120);
	if (*(_DWORD*)a2 == *(_DWORD*)(v12 + 416) && *(_QWORD*)(a2 + 8) == *(_QWORD*)(v12 + 424))
	{
		v13 = &word_140B7B704;
		if (*(_QWORD*)(v4 + 16))
			v13 = *(__int16**)(v4 + 16);
		goto LABEL_18;
	}
	v14 = *(_QWORD*)(qword_140C65898 + 27728);
	if (v14)
	{
		if (sub_14079EE60(*(_QWORD*)(qword_140C65898 + 27728), a2, (unsigned __int64*)&v23))
		{
			v15 = *(_QWORD*)(*(_QWORD*)(v14 + 88) + 8 * v23);
			if (v15)
			{
				v13 = (__int16*)(v15 + 32);
			LABEL_18:
				v16 = (char*)sub_14018EFA0(
					&v21,
					(__int64)v10,
					v13,
					*(unsigned int*)(a2 + 24),
					*(_DWORD*)(a2 + 16),
					*(_DWORD*)(a2 + 20));
				if (v16 != v17)
				{
					sub_14001C480((__int64)v17, *((int**)v16 + 1), *((int**)v16 + 2));
					v10 = v18;
				}
				if (v22)
					sub_14018B900(v22, 0);
				sub_140003890(v2, 2u, 0i64, v10, 0, 0i64);
				goto LABEL_24;
			}
		}
	}
	v7 = 1;
LABEL_24:
	if (v10)
		sub_14018B900((__int64)v10, 0);
	return v7;
}
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 14040AA40: using guessed type char var_68[8];

