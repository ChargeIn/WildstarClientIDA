//----- (000000014086D020) ----------------------------------------------------
__int64 __fastcall sub_14086D020(
	__int64 a1,
	__int64* a2,
	unsigned __int16* a3,
	unsigned int* a4,
	__int64* a5,
	__int64 a6)
{
	__int64 v6; // r14
	int v11; // eax
	unsigned __int16 v12; // r9
	char v13; // cl
	__int64* v14; // rdi
	_QWORD* v15; // rbp
	__int64 v17; // rax
	__int64 v18; // rsi
	__int64 v19; // r9
	unsigned __int16 v20; // ax
	__int64 v21; // rax
	__int64 v22; // rcx
	__int64 v23; // rdi
	unsigned __int16 v24; // bp
	_DWORD* v25; // rax
	__int64 v26; // rdx
	unsigned int v27; // eax
	char v28; // [rsp+50h] [rbp+8h] BYREF

	v6 = 0i64;
	*a4 = 0;
	*a3 = 0;
	v11 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 192) + 24i64))(*(_QWORD*)(a1 + 192));
	v12 = v11;
	if (!v11)
		return v6;
	if (v11 != 1)
	{
		v13 = *(_BYTE*)(a1 + 479);
		v14 = a5;
		v28 = 1;
		if ((v13 & 0x10) == 0 && !*a5 && (v13 & 7) == 1)
		{
			v15 = sub_14086CC50(a1, a2);
			if (v15)
			{
				v17 = sub_14086C9C0();
				v18 = v17;
				if (v17)
				{
					v19 = a6;
					*(_QWORD*)(v17 + 8) = v15[1];
					*(_QWORD*)(v17 + 16) = v15[2];
					*(_BYTE*)(v17 + 24) = *((_BYTE*)v15 + 24);
					*(_WORD*)(v17 + 26) = *((_WORD*)v15 + 13);
					v20 = sub_14086DBF0(a1, v17, &v28, v19);
					*v14 = v18;
				LABEL_21:
					v24 = v20;
					goto LABEL_22;
				}
			}
			return 0i64;
		}
		if ((v13 & 7) != 1)
		{
			v25 = (_DWORD*)*a5;
			if (!*a5)
			{
				v25 = sub_14086C930(a1, v12);
				if (!v25)
					return 0i64;
				*v14 = (__int64)v25;
			}
			v20 = sub_14086D8F0(a1, (__int64)v25, &v28, a6);
			goto LABEL_21;
		}
		if (!*a5)
		{
			v21 = sub_14086C9C0();
			*v14 = v21;
			if (!v21)
				return 0i64;
			v22 = *(_QWORD*)(a1 + 456);
			if (v22)
			{
				*(_WORD*)(v21 + 26) = *(_WORD*)(v22 + 26);
				*(_WORD*)(v22 + 26) = -1;
			}
		}
		v23 = *v14;
		v24 = sub_14086DBF0(a1, v23, &v28, a6);
		if ((*(_BYTE*)(a1 + 479) & 0x10) == 0)
			sub_14086E300(a1, v23, (__int64)a2);
	LABEL_22:
		if (v28)
		{
			*a3 = v24;
			v26 = v24;
		LABEL_28:
			v27 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 192) + 32i64))(*(_QWORD*)(a1 + 192), v26);
			*a4 = v27;
			return sub_140830F00(qword_140C61BA8, v27, 0);
		}
		return v6;
	}
	if (*(__int16*)a6 > 0)
	{
		if ((*(_BYTE*)(a6 + 2) & 2) == 0)
			--* (_WORD*)a6;
		v26 = 0i64;
		goto LABEL_28;
	}
	return v6;
}

