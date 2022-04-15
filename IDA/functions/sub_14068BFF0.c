//----- (000000014068BFF0) ----------------------------------------------------
__int64 __fastcall sub_14068BFF0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned int v4; // eax
	__int64 v5; // rax
	__int64 v6; // rax
	int v7; // esi
	int* v9; // rax
	int* v10; // rax
	_QWORD* v11; // rax
	__int64 v12; // rcx
	int* v13; // rdx
	__int64 v14; // rax
	__int64 v15; // rax
	unsigned __int64* v16; // rdx
	unsigned __int64 v17; // r8
	__int64(__fastcall * *v18)(); // [rsp+20h] [rbp-108h] BYREF
	char v19[8]; // [rsp+28h] [rbp-100h] BYREF
	_WORD* v20; // [rsp+30h] [rbp-F8h]
	_WORD* v21; // [rsp+38h] [rbp-F0h]
	__int128 v22; // [rsp+E0h] [rbp-48h]
	int* v23; // [rsp+F0h] [rbp-38h]
	__int64 v24; // [rsp+100h] [rbp-28h] BYREF
	__int64 v25; // [rsp+108h] [rbp-20h]

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 8) + 32i64))(*(_QWORD*)(v3 + 8)),
			(v5 = sub_140498A40(qword_140C65980, v4, 0)) != 0))
	{
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 24i64))(v5);
		v7 = *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 24i64))(v6) + 44);
		if (v7)
		{
			sub_1400B6F30((__int64)&v18);
			v23 = 0i64;
			v22 = 0i64;
			v18 = off_140B69230;
			v9 = sub_14018B280(16i64, 0);
			*(_QWORD*)&v22 = v9;
			*((_QWORD*)&v22 + 1) = v9;
			v23 = v9 + 4;
			if (v9)
				*(_WORD*)v9 = 0;
			v10 = sub_14018B280(96i64, 0);
			if (v10)
				v11 = (_QWORD*)sub_1404DB7E0((__int64)v10, *(_QWORD*)(qword_140C65898 + 120));
			else
				v11 = 0i64;
			sub_1400B7480((__int64)&v18, v11);
			v13 = (int*)sub_14034BDD0(v12, v7);
			if (v13)
			{
				v14 = 0i64;
				if (*(_WORD*)v13)
				{
					do
						++v14;
					while (*((_WORD*)v13 + v14));
				}
				sub_14001C480((__int64)v19, v13, (int*)((char*)v13 + 2 * v14));
			}
			else if (v20 != v21)
			{
				*v20 = 0;
				v21 = v20;
			}
			v15 = sub_1400B7660(&v18);
			v16 = (unsigned __int64*)sub_14018F0E0(&v24, *(unsigned __int16**)(v15 + 8))[1];
			if (v16)
			{
				v17 = -1i64;
				do
					++v17;
				while (*((_BYTE*)v16 + v17));
				sub_140058710((__int64)a1, v16, v17);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v25)
				sub_14018B900(v25, 0);
			if ((_QWORD)v22)
				sub_14018B900(v22, 0);
			sub_1400B7390(&v18);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 14068C13A: variable 'v12' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;
// 14068BFF0: using guessed type char var_100[8];

