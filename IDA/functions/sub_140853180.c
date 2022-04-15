//----- (0000000140853180) ----------------------------------------------------
__int64 __fastcall sub_140853180(__int64 a1, float a2, _WORD* a3, unsigned __int64 a4, __int64* a5)
{
	float v5; // xmm0_4
	__int64 v6; // rdx
	_QWORD* v7; // rax
	_QWORD* v8; // rdx
	unsigned int i; // r15d
	__int64* v13; // rdi
	__int64 v14; // rax
	unsigned __int16 v15; // dx
	char v16; // r9
	__int64 v17; // r8
	__int64 v18; // rbx
	int v19; // edi
	unsigned __int8 v20; // r13
	char v21; // r12
	char v22; // r13
	char v23; // r12
	__int64 v24; // rax
	__int64 v25; // rbx
	__int64 v26; // rdx
	_QWORD* v27; // rax
	_QWORD* v28; // rcx
	_QWORD* v29; // rax
	__int64 v30; // rax
	__int64 v31; // rdx
	__int64 v33; // [rsp+40h] [rbp-38h] BYREF
	__int64 v34; // [rsp+48h] [rbp-30h]
	__int16 v35; // [rsp+80h] [rbp+8h]

	v6 = *(_QWORD*)(a1 + 56);
	v7 = *(_QWORD**)v6;
	v8 = *(_QWORD**)(v6 + 8);
	for (i = 1; v7 != v8; v7 += 3)
	{
		if (*v7 == a4)
			break;
	}
	if (v7 == v8 || (v13 = v7 + 1, v7 == (_QWORD*)-8i64))
	{
		LOWORD(v19) = *(_WORD*)(a1 + 88);
		if ((*(_DWORD*)(a1 + 96) & 0x200i64) != 0 && (_WORD)v19)
		{
			sub_140836340(qword_140C61BB0, a1, 9, a4);
			v19 = (int)v5;
		}
		v20 = *(_BYTE*)(a1 + 90);
		v35 = v19;
		v21 = v20 >> 1;
		v22 = v20 & 1;
		LODWORD(v34) = 1;
		v23 = v21 & 1;
		v24 = sub_1408819F0(dword_140C10F20, 40i64);
		v25 = v24;
		if (v24)
		{
			*(_QWORD*)v24 = 0i64;
			*(_QWORD*)(v24 + 8) = 0i64;
			*(_DWORD*)(v24 + 16) = 0;
			*(_WORD*)(v24 + 24) = v19;
			*(_BYTE*)(v24 + 26) = v22;
			*(_BYTE*)(v24 + 27) = v23;
		}
		else
		{
			v25 = 0i64;
		}
		v26 = *(_QWORD*)(a1 + 56);
		v27 = *(_QWORD**)v26;
		v28 = *(_QWORD**)(v26 + 8);
		if (*(_QWORD**)v26 == v28)
			goto LABEL_27;
		do
		{
			if (*v27 == a4)
				break;
			v27 += 3;
		} while (v27 != v28);
		if (v27 == v28)
		{
		LABEL_27:
			v13 = 0i64;
		}
		else
		{
			v13 = v27 + 1;
			if (v27 != (_QWORD*)-8i64)
				goto LABEL_30;
		}
		v29 = (_QWORD*)sub_1408515F0(*(_QWORD*)(a1 + 56));
		if (!v29)
			goto LABEL_31;
		*v29 = a4;
		v13 = v29 + 1;
	LABEL_30:
		v30 = v34;
		*v13 = v25;
		v13[1] = v30;
	LABEL_31:
		if (v13)
		{
			if (v25)
				goto LABEL_39;
		}
		else if (v25)
		{
			v31 = *(_QWORD*)v25;
			if (*(_QWORD*)v25)
			{
				*(_QWORD*)(v25 + 8) = v31;
				sub_140881720(dword_140C10F20, v31);
				*(_QWORD*)v25 = 0i64;
				*(_QWORD*)(v25 + 8) = 0i64;
				*(_DWORD*)(v25 + 16) = 0;
			}
			sub_140881720(dword_140C10F20, v25);
		}
		i = 2;
		goto LABEL_39;
	}
	v14 = *v13;
	++* ((_WORD*)v13 + 4);
	if (v14)
		v15 = *(_WORD*)(v14 + 24);
	else
		v15 = 0;
	v35 = v15;
	if (v14)
	{
		if (*(_WORD*)(v14 + 24))
		{
			if (*((unsigned __int16*)v13 + 4) - *((unsigned __int16*)v13 + 5) - (unsigned __int16)*a3 > v15)
			{
				v16 = *(_BYTE*)(a1 + 90);
				v17 = *(unsigned int*)(a1 + 24);
				v33 = 0i64;
				i = sub_140843FB0(a2, a4, v17, v16 & 1, (v16 & 2) != 0, &v33, 0);
				if (!v33
					|| (v18 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v33 + 256i64))(v33),
						v18 == (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 256i64))(a1)))
				{
					++* a3;
				}
			}
		}
	}
LABEL_39:
	if (v13 && v35)
		*a5 = *v13;
	return i;
}
// 1408532DD: variable 'v5' is possibly undefined
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

