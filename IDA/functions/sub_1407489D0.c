//----- (00000001407489D0) ----------------------------------------------------
__int64 __fastcall sub_1407489D0(__int64 a1)
{
	int v2; // r14d
	__int64 v3; // rbx
	__int64 v4; // rax
	unsigned __int8 v5; // bl
	int v6; // esi
	unsigned int v7; // ebp
	int v8; // r10d
	__int64 v9; // r9
	_DWORD* v10; // rdx
	__int64 v11; // rcx
	__int64 v12; // rcx
	int v13; // eax
	__int64 v14; // rax
	__int64 v15; // r8
	__int64 v16; // r10
	__int64 v17; // r9
	_DWORD* v18; // rdx
	double v20; // [rsp+50h] [rbp+8h]
	double v21; // [rsp+50h] [rbp+8h]

	v2 = 1;
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v3 = *(_QWORD*)(a1 + 16);
	v4 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	*(_QWORD*)(a1 + 16) += 16i64;
	v5 = 1;
	v6 = sub_1400578C0(a1);
	v7 = v6 - 1;
	do
	{
		v8 = *(_DWORD*)(qword_140C65B70 + 4i64 * v5 + 1264);
		v9 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
		if (v7 >= *(_DWORD*)(v9 + 56))
		{
			if ((double)v6 == 0.0)
			{
				v10 = *(_DWORD**)(v9 + 32);
			}
			else
			{
				v20 = (double)v6;
				v10 = (_DWORD*)(*(_QWORD*)(v9 + 32)
					+ 40 * ((unsigned int)(LODWORD(v20) + HIDWORD(v20)) % (((1i64 << *(_BYTE*)(v9 + 11)) - 1) | 1)));
			}
			while (v10[6] != 3 || (double)v6 != *((double*)v10 + 2))
			{
				v10 = (_DWORD*)*((_QWORD*)v10 + 4);
				if (!v10)
				{
					v10 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v10 = (_DWORD*)(*(_QWORD*)(v9 + 24) + 16i64 * (v6 - 1));
		}
		v11 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v11 = *(_QWORD*)v10;
		*(_DWORD*)(v11 + 8) = v10[2];
		*(_QWORD*)(a1 + 16) += 16i64;
		v12 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v12 + 8) = 3;
		v13 = v2++;
		*(double*)v12 = (double)v13;
		*(_QWORD*)(a1 + 16) += 16i64;
		v14 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v14 + 8) = 3;
		*(double*)v14 = (double)v8;
		v15 = *(_QWORD*)(a1 + 16) + 16i64;
		*(_QWORD*)(a1 + 16) = v15;
		sub_14005EA50(a1, (__int64*)(v15 - 48), (int*)(v15 - 32), (unsigned int*)(v15 - 16));
		++v5;
		v16 = *(_QWORD*)(a1 + 16) - 48i64;
		*(_QWORD*)(a1 + 16) = v16;
	} while (v5 <= 0xAu);
	v17 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
	if (v7 >= *(_DWORD*)(v17 + 56))
	{
		if ((double)v6 == 0.0)
		{
			v18 = *(_DWORD**)(v17 + 32);
		}
		else
		{
			v21 = (double)v6;
			v18 = (_DWORD*)(*(_QWORD*)(v17 + 32)
				+ 40 * ((unsigned int)(LODWORD(v21) + HIDWORD(v21)) % (((1i64 << *(_BYTE*)(v17 + 11)) - 1) | 1)));
		}
		while (v18[6] != 3 || (double)v6 != *((double*)v18 + 2))
		{
			v18 = (_DWORD*)*((_QWORD*)v18 + 4);
			if (!v18)
			{
				v18 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v18 = (_DWORD*)(*(_QWORD*)(v17 + 24) + 16i64 * (v6 - 1));
	}
	*(_QWORD*)v16 = *(_QWORD*)v18;
	*(_DWORD*)(v16 + 8) = v18[2];
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, (__int64)v18, v6);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65B70: using guessed type __int64 qword_140C65B70;

