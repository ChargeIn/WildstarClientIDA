//----- (00000001403B90B0) ----------------------------------------------------
__int64 __fastcall sub_1403B90B0(__int64 a1, unsigned int a2)
{
	__int64 v2; // rdi
	int* v4; // rax
	int v5; // ecx
	unsigned int v6; // ecx
	__int64 v8; // rax
	unsigned __int64 v9; // rcx
	__int64* v10; // rax
	unsigned __int64 v11; // rdx
	__int64 v12; // r9
	unsigned __int64 v13; // rax
	unsigned int v14; // r8d
	unsigned int v15; // r8d
	_DWORD* v16; // r9
	unsigned int v17; // edx
	_DWORD* v18; // rax
	__int64 v19; // [rsp+30h] [rbp+8h] BYREF

	v19 = a1;
	v2 = qword_140C65898;
	v4 = sub_1400B5DF0(qword_140C658F0, a2, 0i64);
	if (!v4)
		return 12i64;
	v5 = v4[95];
	if ((unsigned int)(v5 - 1) > 5)
	{
		if (v5 != 20)
			return 12i64;
		v6 = 6;
	}
	else
	{
		v6 = v5 - 1;
		if (v6 >= 7)
			return 12i64;
	}
	v8 = v6;
	v9 = 0i64;
	v10 = (__int64*)(*(_QWORD*)(v2 + 1384) + 16 * v8);
	v11 = v10[1];
	if (!v11)
		return 9i64;
	v12 = *v10;
	while (1)
	{
		v13 = v9 + ((v11 - v9) >> 1);
		v14 = *(_DWORD*)(v12 + 4 * v13);
		if (a2 < v14)
		{
			v11 = v9 + ((v11 - v9) >> 1);
			goto LABEL_13;
		}
		if (v14 >= a2)
			break;
		v9 = v13 + 1;
	LABEL_13:
		if (v9 >= v11)
			return 9i64;
	}
	v15 = 0;
	v16 = (_DWORD*)(v2 + 1400);
	while (2)
	{
		v17 = 0;
		v18 = v16;
		do
		{
			if (*v18 == a2)
				return 8i64;
			++v17;
			++v18;
		} while (v17 < 7);
		++v15;
		v16 += 18;
		if (v15 < 0xC)
			continue;
		break;
	}
	LODWORD(v19) = a2;
	sub_1403F4900(v2, 0x38Bu, (__int64)&v19);
	return 11i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

