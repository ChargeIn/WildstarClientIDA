//----- (000000014057D6E0) ----------------------------------------------------
__int64 __fastcall sub_14057D6E0(__int64 a1, __int64 a2)
{
	unsigned __int64 v2; // r13
	unsigned __int64 i; // r15
	int* v6; // rdi
	__int64 v7; // rax
	int v8; // ecx
	__int64 v9; // rbx
	int* v10; // rax
	int* v11; // r14
	int* v12; // rdx
	__int64 v13; // rcx

	v2 = *(_QWORD*)(a1 + 632);
	for (i = v2; i < *(unsigned int*)(a2 + 16); ++i)
	{
		v6 = sub_14018B280(40i64, 0);
		if (!v6)
		{
			v6 = 0i64;
			goto LABEL_13;
		}
		if (qword_140C63840)
		{
			v7 = qword_140C63840(off_140A6A408, 644i64, qword_140C63858);
		}
		else
		{
			if (dword_140C638AC || (int)sub_1401FFFC0() < 0)
			{
			LABEL_10:
				v8 = 64;
				goto LABEL_11;
			}
			v7 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C64C58 + 24i64))(qword_140C64C58, 644i64);
		}
		if (!v7)
			goto LABEL_10;
		v8 = *(_DWORD*)(v7 + 4);
	LABEL_11:
		*v6 = 0;
		sub_14058FD20((__int64*)v6 + 1, v8);
		*((_QWORD*)v6 + 3) = 0i64;
		v6[8] = 0;
	LABEL_13:
		v9 = *(_QWORD*)(a1 + 632);
		v10 = sub_14018DB00(*(_QWORD*)(a1 + 624), v9 + 1, 8i64);
		v11 = v10;
		*(_QWORD*)&v10[2 * v9] = v6;
		v12 = *(int**)(a1 + 624);
		if (v12 != v10)
		{
			sub_1407DB590(v10, v12, 8i64 * *(_QWORD*)(a1 + 632));
			v13 = *(_QWORD*)(a1 + 624);
			if (v13)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
			*(_QWORD*)(a1 + 624) = v11;
		}
		*(_QWORD*)(a1 + 632) = v9 + 1;
	}
	if (v2 != *(_QWORD*)(a1 + 632))
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GuildBankTabCount", byte_1409EA82C, a1);
	return 0i64;
}
// 1409EA82C: using guessed type _BYTE byte_1409EA82C[40];
// 140A6A408: using guessed type wchar_t *off_140A6A408[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638AC: using guessed type int dword_140C638AC;
// 140C64C58: using guessed type __int64 qword_140C64C58;
// 140C65898: using guessed type __int64 qword_140C65898;

