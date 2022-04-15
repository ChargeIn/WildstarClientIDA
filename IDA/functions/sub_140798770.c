//----- (0000000140798770) ----------------------------------------------------
__int64 __fastcall sub_140798770(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rbp
	char* v5; // r14
	_DWORD* v6; // rax
	unsigned __int64 v7; // rcx
	const char* v8; // r12
	__int64 v9; // rcx
	const char* v10; // r9
	const char* v11; // rax
	_DWORD* v12; // rax
	int v13; // edi
	_DWORD* v14; // rax
	int v15; // r15d
	_QWORD* v16; // rsi
	unsigned __int64 v17; // r10
	_DWORD* v18; // rcx
	__int64 v19; // r9
	_DWORD* v20; // rcx
	_DWORD* v21; // rcx
	__int64 v22; // rax
	const char* v23; // r8
	__int64* v24; // rcx
	_QWORD* v25; // rax
	__int64 v26; // r10
	_DWORD* v27; // rcx
	__int64 v28; // rax
	unsigned __int64 v29; // rdi
	__int64 v30; // rbx
	__int64 v31; // rax
	double v33; // [rsp+20h] [rbp-278h] BYREF
	unsigned __int64* v34; // [rsp+30h] [rbp-268h] BYREF
	int v35; // [rsp+38h] [rbp-260h]
	_QWORD* v36; // [rsp+40h] [rbp-258h]
	unsigned __int64 v37[65]; // [rsp+48h] [rbp-250h] BYREF

	v1 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
	{
		v5 = byte_140C665F4;
		v4 = -1i64;
		do
			++v4;
		while (byte_140C665F4[v4]);
	}
	else
	{
		v3 = sub_140056BB0(a1, 2u, &v33);
		v4 = *(_QWORD*)&v33;
		v5 = (char*)v3;
	}
	v6 = (_DWORD*)a1[3];
	v7 = a1[2];
	v8 = aNoValue;
	if ((unsigned __int64)v6 >= v7)
		goto LABEL_14;
	if (v6 == dword_140A12138 || v6[2] != 5)
	{
		if ((unsigned __int64)v6 < v7 && v6 != dword_140A12138)
		{
			v9 = (int)v6[2];
			if ((_DWORD)v9 != -1)
			{
				v10 = off_140A123B0[v9];
				goto LABEL_15;
			}
		}
	LABEL_14:
		v10 = aNoValue;
	LABEL_15:
		v11 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", aTable_0, v10);
		sub_140056570(a1, 1u, v11);
	}
	v12 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v12 >= a1[2] || v12 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
		v13 = 1;
	else
		v13 = sub_140056D60(a1, 3u);
	v14 = (_DWORD*)(a1[3] + 48i64);
	if ((unsigned __int64)v14 >= a1[2] || v14 == dword_140A12138 || *(int*)(a1[3] + 56i64) <= 0)
		v15 = sub_1400585E0((__int64)a1, 1);
	else
		v15 = sub_140056D60(a1, 4u);
	v16 = a1;
	v36 = a1;
	v35 = 0;
	v34 = v37;
	if (v13 < v15)
	{
		do
		{
			v17 = a1[2];
			v18 = dword_140A12138;
			if (a1[3] < v17)
				v18 = (_DWORD*)a1[3];
			v19 = *(_QWORD*)v18;
			if ((unsigned int)(v13 - 1) >= *(_DWORD*)(*(_QWORD*)v18 + 56i64))
			{
				v33 = (double)v13;
				if ((double)v13 == 0.0)
					v20 = *(_DWORD**)(v19 + 32);
				else
					v20 = (_DWORD*)(*(_QWORD*)(v19 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v33) + HIDWORD(v33)) % (((1i64 << *(_BYTE*)(v19 + 11)) - 1) | 1)));
				while (v20[6] != 3 || (double)v13 != *((double*)v20 + 2))
				{
					v20 = (_DWORD*)*((_QWORD*)v20 + 4);
					if (!v20)
					{
						v20 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v20 = (_DWORD*)(*(_QWORD*)(v19 + 24) + 16i64 * (v13 - 1));
			}
			*(_QWORD*)v17 = *(_QWORD*)v20;
			*(_DWORD*)(v17 + 8) = v20[2];
			a1[2] += 16i64;
			v21 = (_DWORD*)(a1[2] - 16i64);
			if (v21 == dword_140A12138)
				goto LABEL_43;
			if ((unsigned int)(v21[2] - 3) > 1)
			{
				if (v21 == dword_140A12138 || (v22 = (int)v21[2], (_DWORD)v22 == -1))
					LABEL_43:
				v23 = aNoValue;
				else
					v23 = off_140A123B0[v22];
				sub_140056830(
					a1,
					(unsigned __int64*)"invalid value (%s) at index %d in table for 'concat'",
					v23,
					(unsigned int)v13);
			}
			sub_1400577A0((__int64)&v34);
			sub_1400576C0((__int64)&v34, v5, v4);
			++v13;
		} while (v13 < v15);
		v16 = v36;
	}
	if (v13 == v15)
	{
		v24 = (__int64*)dword_140A12138;
		if (a1[3] < a1[2])
			v24 = (__int64*)a1[3];
		v25 = sub_14005C3C0(*v24, v13);
		*(_QWORD*)v26 = *v25;
		*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
		a1[2] += 16i64;
		v27 = (_DWORD*)(a1[2] - 16i64);
		if (v27 == dword_140A12138)
			LABEL_55:
		sub_140056830(
			a1,
			(unsigned __int64*)"invalid value (%s) at index %d in table for 'concat'",
			v8,
			(unsigned int)v13);
		if ((unsigned int)(v27[2] - 3) > 1)
		{
			if (v27 != dword_140A12138)
			{
				v28 = (int)v27[2];
				if ((_DWORD)v28 != -1)
					v8 = off_140A123B0[v28];
			}
			goto LABEL_55;
		}
		sub_1400577A0((__int64)&v34);
		v16 = v36;
	}
	v29 = (char*)v34 - (char*)v37;
	if (v34 != v37)
	{
		if (*(_QWORD*)(v16[4] + 120i64) >= *(_QWORD*)(v16[4] + 112i64))
			sub_14005E2C0((__int64)v16);
		v30 = v16[2];
		v31 = sub_140062650((__int64)v16, v37, v29);
		*(_DWORD*)(v30 + 8) = 4;
		*(_QWORD*)v30 = v31;
		v16[2] += 16i64;
		++v35;
		v16 = v36;
		v34 = v37;
	}
	sub_1400590E0(v16, v35);
	return 1i64;
}
// 140798A51: variable 'v26' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];
// 140C665F4: using guessed type _BYTE byte_140C665F4[4];
// 140798770: using guessed type unsigned __int64 var_250[65];

