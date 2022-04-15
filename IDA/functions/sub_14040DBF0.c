//----- (000000014040DBF0) ----------------------------------------------------
__int64 __fastcall sub_14040DBF0(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	float v5; // xmm9_4
	__int64 v6; // rcx
	float v7; // xmm7_4
	__int64 v8; // rcx
	float v9; // xmm8_4
	__int64 v10; // rcx
	unsigned int v11; // edi
	__int64 v12; // rsi
	_DWORD* v13; // rbx
	__int64 v14; // rbp
	float v15; // xmm6_4
	float v16; // xmm1_4
	__int64 v17; // rcx
	float v18; // xmm0_4
	__int64 v19; // rcx
	unsigned int v20; // ecx
	__int64 v21; // r8
	__int64 v22; // rax
	_DWORD* i; // rcx
	unsigned int v24; // ecx
	__int64 v25; // r8
	__int64 v26; // rax
	_DWORD* j; // rcx
	unsigned int v28; // ecx
	__int64 v29; // rdx
	_DWORD* k; // rax
	__int64 v31; // rax

	if (!*(_DWORD*)(a1 + 192))
		return 0i64;
	v5 = sub_14041D420(a1, 0.5);
	v7 = sub_14041D540(v6, 0.5);
	v9 = sub_14041D660(v8, 0.5);
	v11 = 0;
	v12 = 0i64;
	v13 = (_DWORD*)(a1 + 284);
	v14 = 5i64;
	v15 = (float)(int)sub_14041D780(v10, 0.5);
	do
	{
		if (*(v13 - 1) == 1)
		{
			v16 = *(float*)(*(_QWORD*)(a1 + 264) + v12 + 4);
			if (*v13 == 41)
			{
				v5 = sub_14041D420((unsigned int)(*v13 - 41), v16);
			}
			else if (*v13 == 175)
			{
				v9 = sub_14041D660((unsigned int)(*v13 - 175), v16);
			}
			else
			{
				v17 = (unsigned int)(*v13 - 176);
				if (*v13 == 176)
				{
					v7 = sub_14041D540(v17, v16);
				}
				else if (*v13 == 178)
				{
					v15 = (float)(int)sub_14041D780(v17, v16);
				}
			}
		}
		v12 += 4i64;
		v13 += 2;
		--v14;
	} while (v14);
	if ((dword_140C8ABF0 & 1) == 0)
	{
		dword_140C8ABF0 |= 1u;
		qword_140C8ABE8 = (__int64)off_140B66A88;
		sub_1407DD89C(sub_140950B80);
	}
	v18 = (*(float(__fastcall**)(__int64*, _QWORD))(qword_140C8ABE8 + 8))(&qword_140C8ABE8, *(unsigned int*)(a2 + 12));
	result = sub_14040E610(v19, a2, 41, v18 * v5);
	if (!(_DWORD)result)
	{
		v20 = 0;
		if (v7 < 0.0)
			v20 = 0x80000000;
		if ((int)abs32(v20 - LODWORD(v7)) > 84)
		{
			v21 = a2 + 148;
			v22 = 0i64;
			for (i = (_DWORD*)(a2 + 148); *i != 176; ++i)
			{
				if (*i == 197)
				{
					*(_DWORD*)(v21 + 4 * v22) = 176;
					break;
				}
				v22 = (unsigned int)(v22 + 1);
				if ((unsigned int)v22 >= 0xF)
					return 149i64;
			}
			*(float*)(v21 + 4 * v22 + 60) = v7 + *(float*)(v21 + 4 * v22 + 60);
		}
		v24 = 0;
		if (v15 < 0.0)
			v24 = 0x80000000;
		if ((int)abs32(v24 - LODWORD(v15)) > 84)
		{
			v25 = a2 + 148;
			v26 = 0i64;
			for (j = (_DWORD*)(a2 + 148); *j != 178; ++j)
			{
				if (*j == 197)
				{
					*(_DWORD*)(v25 + 4 * v26) = 178;
					break;
				}
				v26 = (unsigned int)(v26 + 1);
				if ((unsigned int)v26 >= 0xF)
					return 149i64;
			}
			*(float*)(v25 + 4 * v26 + 60) = v15 + *(float*)(v25 + 4 * v26 + 60);
		}
		v28 = 0;
		if (v9 < 0.0)
			v28 = 0x80000000;
		if ((int)abs32(v28 - LODWORD(v9)) > 84)
		{
			v29 = a2 + 148;
			for (k = (_DWORD*)(a2 + 148); *k != 175; ++k)
			{
				if (*k == 197)
				{
					v31 = v11;
					*(_DWORD*)(v29 + 4i64 * v11) = 175;
					goto LABEL_47;
				}
				if (++v11 >= 0xF)
					return 149i64;
			}
			v31 = v11;
		LABEL_47:
			*(float*)(v29 + 4 * v31 + 60) = v9 + *(float*)(v29 + 4 * v31 + 60);
		}
		return 0i64;
	}
	return result;
}
// 14040DC56: variable 'v6' is possibly undefined
// 14040DC61: variable 'v8' is possibly undefined
// 14040DC6D: variable 'v10' is possibly undefined
// 14040DD5C: variable 'v19' is possibly undefined
// 140950B80: using guessed type __int64 __fastcall sub_140950B80();
// 140B66A88: using guessed type __int64 (__fastcall *off_140B66A88[112])();
// 140C8ABE8: using guessed type __int64 qword_140C8ABE8;
// 140C8ABF0: using guessed type int dword_140C8ABF0;

