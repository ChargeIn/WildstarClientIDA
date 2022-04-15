//----- (00000001403B77D0) ----------------------------------------------------
__int64 __fastcall sub_1403B77D0(__int64 a1, int* a2, int a3)
{
	__int64 v6; // rbx
	unsigned __int64 v7; // rbp
	int* v8; // rax
	int* v9; // r15
	int* v10; // rdx
	__int64 v11; // rcx
	int* v12; // rax
	__int64 v13; // rbx
	__int64 result; // rax
	__int64 v15; // rcx
	unsigned int v16; // edx
	__int64 v17; // rax
	__int64 v18; // rcx
	int* v19; // rax
	__int64 v20; // rcx
	void(__fastcall * v21)(__int64, _WORD*); // rcx
	__int64 v22; // rax
	unsigned int v23; // edx
	__int64 v24; // rax
	__int64 v25; // rdx
	unsigned int v26; // ecx
	unsigned int* v27; // r8
	__int64 v28; // rax
	__int64 v29; // rdx
	__int64 v30; // rax
	__int64 v31; // rax
	__int64 v32; // rcx
	__int64 v33; // rax
	unsigned int v34; // edx
	unsigned int v35; // r9d
	unsigned int v36; // ecx
	__int64 v37; // r8
	_DWORD* v38; // rax
	__int64 v39; // rax
	_DWORD* v40; // rax
	_DWORD* i; // rcx
	unsigned __int64 v42; // rcx
	void(__fastcall * v43)(__int64, _WORD*); // [rsp+40h] [rbp-38h] BYREF
	int v44; // [rsp+48h] [rbp-30h]

	if (a2[5] == 4)
	{
		if (*(_QWORD*)(a1 + 2712) <= (unsigned __int64)(unsigned int)a2[6])
		{
			do
			{
				v6 = *(_QWORD*)(a1 + 2712);
				v7 = v6 + 1;
				v8 = sub_14018DB00(*(_QWORD*)(a1 + 2704), v6 + 1, 8i64);
				v9 = v8;
				*(_QWORD*)&v8[2 * v6] = 0i64;
				v10 = *(int**)(a1 + 2704);
				if (v10 != v8)
				{
					sub_1407DB590(v8, v10, 8i64 * *(_QWORD*)(a1 + 2712));
					v11 = *(_QWORD*)(a1 + 2704);
					if (v11)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
					*(_QWORD*)(a1 + 2704) = v9;
				}
				*(_QWORD*)(a1 + 2712) = v7;
			} while (v7 <= (unsigned int)a2[6]);
		}
		v12 = sub_14018B280(80i64, 0);
		v13 = (__int64)v12;
		if (v12)
		{
			v12[2] = 0;
			*((_QWORD*)v12 + 2) = 0i64;
			*((_QWORD*)v12 + 3) = 0i64;
			v12[8] = 300;
			v12[9] = -1;
			v12[10] = 1;
			*((_QWORD*)v12 + 6) = 0i64;
			v12[14] = -1;
			v12[16] = 0;
			v12[17] = 49;
			v12[18] = 1;
			*(_QWORD*)v12 = off_140B6CF50;
			v12[8] = 4;
		}
		else
		{
			v13 = 0i64;
		}
		result = (unsigned int)a2[4];
		v15 = (unsigned int)*a2;
		v16 = a2[42];
		if ((_DWORD)result)
		{
			*(_DWORD*)(v13 + 64) = result;
			*(_DWORD*)(v13 + 68) = v16;
			*(_QWORD*)(v13 + 24) = v15;
			v17 = *(_QWORD*)(a2 + 5);
			*(_DWORD*)(v13 + 72) = a3;
			*(_QWORD*)(v13 + 32) = v17;
			*(_QWORD*)(*(_QWORD*)(a1 + 2704) + 8i64 * (unsigned int)a2[6]) = v13;
			sub_1403BA550(a1, *(_DWORD*)(v13 + 64));
			if (a2[42] != 49)
			{
				v18 = qword_140C65898;
				*(_DWORD*)(qword_140C65898 + 28568) = 1;
				sub_1400EA3E0(*(_QWORD*)(v18 + 29504), "AbilityBookChange", &unk_1409D10C6);
				sub_140608C60(*(_QWORD*)(qword_140C65898 + 29688), a2[6], a2[4]);
			}
			result = sub_1405A4B80(v13, 1);
			v44 = 0;
			v43 = sub_1405A5C90;
			if (result)
				return sub_1405A5FE0(a1, result, (__int64)&v43);
			return result;
		}
		goto LABEL_16;
	}
	v19 = sub_14018B280(320i64, 0);
	if (v19)
		v13 = sub_140569A60((__int64)v19);
	else
		v13 = 0i64;
	result = sub_140569C90(v13, a2);
	if ((int)result < 0)
	{
	LABEL_16:
		if (v13)
			return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v13 + 16i64))(v13, 1i64);
		return result;
	}
	v20 = qword_140C65898 + 160;
	*(_DWORD*)(v13 + 140) = a3;
	sub_1403D2E10(v20, a2 + 5, v13);
	*(_DWORD*)(qword_140C65898 + 28568) = 1;
	v22 = *(_QWORD*)(v13 + 80);
	if (!v22)
		v22 = *(_QWORD*)(v13 + 64) + 156i64;
	v23 = *(_DWORD*)(v22 + 128);
	if (v23 && sub_1403ACD90(qword_140C65B70, v23, *(_QWORD*)(qword_140C65898 + 120)))
	{
		v24 = *(_QWORD*)(v13 + 80);
		v25 = 0i64;
		if (!v24)
			v24 = *(_QWORD*)(v13 + 64) + 156i64;
		v26 = *(_DWORD*)(v24 + 128);
		if (v26)
			v25 = sub_1403ACD90(qword_140C65B70, v26, *(_QWORD*)(qword_140C65898 + 120));
		v44 = 0;
		v21 = sub_1405A5C90;
		v43 = sub_1405A5C90;
		if (v25)
			sub_1405A5FE0(a1, v25, (__int64)&v43);
	}
	if ((*(_BYTE*)(v13 + 128) & 0x10) == 0)
	{
		v27 = *(unsigned int**)(v13 + 72);
		if (!v27)
			v27 = (unsigned int*)(*(_QWORD*)(v13 + 64) + 8i64);
		if (!(unsigned int)sub_1403D67D0(qword_140C65898, *(unsigned int**)(v13 + 64), v27))
			sub_140437A10((_QWORD*)qword_140C658D8, 0x38u, 0, 0i64, 0, 0, 1);
	}
	if ((*(_DWORD*)(*(_QWORD*)(v13 + 64) + 340i64) & 0x100) != 0)
		sub_140437A10((_QWORD*)qword_140C658D8, 0x157u, 0, 0i64, 0, 0, 1);
	v28 = *(_QWORD*)(v13 + 64);
	v29 = *(unsigned int*)(v28 + 432);
	if ((*(_DWORD*)(v28 + 340) & 0x200) != 0)
	{
		if ((_DWORD)v29)
		{
			v30 = sub_1405A8A40((__int64)v21, v29);
			if (!(unsigned int)sub_140552550(v30, -8193))
				sub_140437A10((_QWORD*)qword_140C658D8, 0x160u, 0, 0i64, 0, 0, 1);
		}
	}
	if (*(_DWORD*)(*(_QWORD*)(v13 + 64) + 324i64) == 220)
		sub_140437A10((_QWORD*)qword_140C658D8, 0x74u, 0, 0i64, 0, 0, 1);
	v31 = *(_QWORD*)(v13 + 64);
	if (*(_DWORD*)(v31 + 320) == 37 && *(_DWORD*)(v31 + 444))
	{
		v32 = *(_QWORD*)(v13 + 80);
		if (!v32)
			v32 = v31 + 156;
		v33 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v32 + 128), *(_QWORD*)(qword_140C65898 + 120));
		if (v33)
		{
			v34 = *(_DWORD*)(v33 + 40);
			v35 = 0;
			v36 = 0;
			if (v34)
			{
				v37 = *(_QWORD*)(v33 + 48);
				v38 = (_DWORD*)(v37 + 16);
				while (*v38 != 125)
				{
					++v36;
					v38 += 42;
					if (v36 >= v34)
						goto LABEL_56;
				}
				v35 = *(_DWORD*)(168i64 * v36 + v37 + 64);
			}
		LABEL_56:
			v39 = sub_1403ACD90(qword_140C65B70, v35, *(_QWORD*)(qword_140C65898 + 120));
			if (v39)
			{
				v29 = 0i64;
				v40 = (_DWORD*)(*(_QWORD*)(v39 + 112) + 408i64);
				for (i = v40; *i != 5; ++i)
				{
					if ((unsigned __int64)++v29 >= 5)
						return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v13 + 8i64))(v13, v29);
				}
				v42 = 0i64;
				while (*v40 != 9)
				{
					++v42;
					++v40;
					if (v42 >= 5)
						return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v13 + 8i64))(v13, v29);
				}
				sub_140437A10((_QWORD*)qword_140C658D8, 0x14Fu, 0, 0i64, 0, 0, 1);
			}
		}
	}
	return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v13 + 8i64))(v13, v29);
}
// 1403B7B9E: variable 'v21' is possibly undefined
// 1403B7D28: variable 'v29' is possibly undefined
// 140569C90: using guessed type __int64 __fastcall sub_140569C90(_QWORD, _QWORD);
// 140B6CF50: using guessed type __int64 (__fastcall *off_140B6CF50[23])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140C65B70: using guessed type __int64 qword_140C65B70;

