//----- (0000000140690F20) ----------------------------------------------------
__int64 __fastcall sub_140690F20(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	int v5; // esi
	int* v7; // rax
	int* v8; // rax
	_QWORD* v9; // rax
	__int64 v10; // rcx
	int* v11; // rdx
	__int64 v12; // rax
	__int64 v13; // rax
	unsigned __int64* v14; // rdx
	unsigned __int64 v15; // r8
	__int64(__fastcall * *v16)(); // [rsp+20h] [rbp-108h] BYREF
	char v17[8]; // [rsp+28h] [rbp-100h] BYREF
	_WORD* v18; // [rsp+30h] [rbp-F8h]
	_WORD* v19; // [rsp+38h] [rbp-F0h]
	__int128 v20; // [rsp+E0h] [rbp-48h]
	int* v21; // [rsp+F0h] [rbp-38h]
	__int64 v22; // [rsp+100h] [rbp-28h] BYREF
	__int64 v23; // [rsp+108h] [rbp-20h]

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 48i64))(
			qword_140C65980,
			**(unsigned int**)(*(_QWORD*)(v3 + 8) + 8i64),
			0i64)) != 0)
	{
		v5 = *(_DWORD*)(*(_QWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 320i64))(v4) + 8) + 80i64);
		if (v5)
		{
			sub_1400B6F30((__int64)&v16);
			v21 = 0i64;
			v20 = 0i64;
			v16 = off_140B69230;
			v7 = sub_14018B280(16i64, 0);
			*(_QWORD*)&v20 = v7;
			*((_QWORD*)&v20 + 1) = v7;
			v21 = v7 + 4;
			if (v7)
				*(_WORD*)v7 = 0;
			v8 = sub_14018B280(96i64, 0);
			if (v8)
				v9 = (_QWORD*)sub_1404DB7E0((__int64)v8, *(_QWORD*)(qword_140C65898 + 120));
			else
				v9 = 0i64;
			sub_1400B7480((__int64)&v16, v9);
			v11 = (int*)sub_14034BDD0(v10, v5);
			if (v11)
			{
				v12 = 0i64;
				if (*(_WORD*)v11)
				{
					do
						++v12;
					while (*((_WORD*)v11 + v12));
				}
				sub_14001C480((__int64)v17, v11, (int*)((char*)v11 + 2 * v12));
			}
			else if (v18 != v19)
			{
				*v18 = 0;
				v19 = v18;
			}
			v13 = sub_1400B7660(&v16);
			v14 = (unsigned __int64*)sub_14018F0E0(&v22, *(unsigned __int16**)(v13 + 8))[1];
			if (v14)
			{
				v15 = -1i64;
				do
					++v15;
				while (*((_BYTE*)v14 + v15));
				sub_140058710((__int64)a1, v14, v15);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v23)
				sub_14018B900(v23, 0);
			if ((_QWORD)v20)
				sub_14018B900(v20, 0);
			sub_1400B7390(&v16);
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
// 14069106B: variable 'v10' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;
// 140690F20: using guessed type char var_100[8];

