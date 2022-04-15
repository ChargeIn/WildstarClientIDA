//----- (0000000140495BE0) ----------------------------------------------------
__int64 __fastcall sub_140495BE0(__int64* a1)
{
	unsigned int v1; // ebp
	__int64 v3; // r15
	unsigned int v4; // ebx
	__int64 result; // rax
	_DWORD* v6; // rdi
	unsigned int v7; // r8d
	_DWORD* v8; // rax
	int* v9; // rdx
	__int64 v10; // rdx
	__int64 v11; // r9
	unsigned int v12; // edx
	__int64 v13; // r8
	__int64 v14; // rcx
	__int64 v15; // rax
	__int64 v16; // rcx
	__int64 v17[4]; // [rsp+20h] [rbp-48h] BYREF
	__int64 v18; // [rsp+70h] [rbp+8h]

	v1 = 0;
	v3 = 44i64;
	do
	{
		v4 = *(_DWORD*)(v3 + a1[3]);
		result = (__int64)qword_140C63840;
		if (qword_140C63840)
		{
			result = qword_140C63840(off_140A6C040, v4, qword_140C63858);
		}
		else
		{
			if (dword_140C63E60)
				break;
			result = sub_140222460();
			if ((int)result < 0)
				break;
			result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64028 + 24i64))(qword_140C64028, v4);
		}
		v6 = (_DWORD*)result;
		if (!result)
			break;
		v17[1] = result;
		v17[2] = (__int64)a1;
		v17[0] = (__int64)off_140B67218;
		sub_140496030(a1 + 1, (__int64)v17);
		v7 = 0;
		v8 = v6 + 1;
		do
		{
			if (*(_DWORD*)((char*)v8 + *(_QWORD*)(a1[4] + 8) - (_QWORD)v6 + 36) && *v8)
				break;
			++v7;
			++v8;
		} while (v7 < 3);
		v9 = (int*)a1[7];
		if (v9 == (int*)a1[8])
			sub_140496140(a1 + 5, v9);
		else
			a1[7] = (__int64)(v9 + 6);
		++v1;
		v3 += 4i64;
		v10 = a1[6] + 24 * ((a1[7] - a1[6]) / 24);
		*(_DWORD*)(v10 - 24) = v6[1];
		*(_DWORD*)(v10 - 12) = v6[4];
		*(_DWORD*)(v10 - 20) = v6[2];
		*(_DWORD*)(v10 - 8) = v6[5];
		*(_DWORD*)(v10 - 16) = v6[3];
		result = (unsigned int)v6[6];
		*(_DWORD*)(v10 - 4) = result;
	} while (v1 < 4);
	v11 = a1[3];
	v12 = *(_DWORD*)(v11 + 40);
	if (v12)
	{
		v13 = *(_QWORD*)(a1[4] + 24);
		v14 = v13;
		v15 = *(_QWORD*)(v13 + 8);
		while (v15)
		{
			if (*(_DWORD*)(v15 + 32) < v12)
			{
				v15 = *(_QWORD*)(v15 + 24);
			}
			else
			{
				v14 = v15;
				v15 = *(_QWORD*)(v15 + 16);
			}
		}
		if (v14 == v13 || (v18 = v14, v12 < *(_DWORD*)(v14 + 32)))
			v18 = *(_QWORD*)(a1[4] + 24);
		result = v18;
		if (v18 != v13)
		{
			v16 = *(_QWORD*)(v18 + 40);
			if (v16)
			{
				result = (__int64)sub_140055BE0(v16 + 72, (_DWORD*)(v11 + 40));
				*(_QWORD*)result = a1;
			}
		}
	}
	return result;
}
// 140A6C040: using guessed type wchar_t *off_140A6C040[2];
// 140B67218: using guessed type __int64 (__fastcall *off_140B67218[14])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63E60: using guessed type int dword_140C63E60;
// 140C64028: using guessed type __int64 qword_140C64028;

