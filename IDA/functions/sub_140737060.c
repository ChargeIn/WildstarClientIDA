//----- (0000000140737060) ----------------------------------------------------
__int64 __fastcall sub_140737060(__int64 a1)
{
	int v1; // ebp
	int* v3; // rax
	unsigned int v4; // eax
	unsigned int v5; // esi
	unsigned int v6; // edi
	__int64 v7; // rax
	int* v8; // rbx
	int* v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rsi
	unsigned int v12; // eax
	unsigned int i; // edi
	__int64 v14; // rdx
	__int64 v15; // rcx
	unsigned int v16; // ebx
	__int64 v17; // rax
	unsigned int* v18; // rdx
	__int64 v19; // rcx
	__int64 v20; // rax
	unsigned int v21; // edx
	__int64* v22; // rax
	__int64 v23; // rax
	__int64 v24; // rax
	__int64 v25; // rax
	__int64 v27; // [rsp+50h] [rbp+8h] BYREF
	int* v28; // [rsp+58h] [rbp+10h] BYREF
	int* v29; // [rsp+60h] [rbp+18h] BYREF

	v1 = 0;
	if ((dword_140DC4D34 & 1) == 0)
	{
		dword_140DC4D34 |= 1u;
		v3 = sub_14018B280(40i64, 0);
		qword_140DC4D48 = 0i64;
		qword_140DC4D40 = (__int64)v3;
		*(_BYTE*)v3 = 0;
		*(_QWORD*)(qword_140DC4D40 + 8) = 0i64;
		*(_QWORD*)(qword_140DC4D40 + 16) = qword_140DC4D40;
		*(_QWORD*)(qword_140DC4D40 + 24) = qword_140DC4D40;
		sub_1407DD89C(sub_140956A90);
	}
	if (qword_140DC4D48)
		goto LABEL_30;
	if (qword_140C63838)
	{
		v4 = qword_140C63838(off_140A6AA98, qword_140C63858);
	}
	else
	{
		if (dword_140C64A48)
		{
			v5 = 0;
			goto LABEL_12;
		}
		if ((int)sub_140207F40() < 0)
		{
			v5 = 0;
			goto LABEL_12;
		}
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64A00 + 40i64))(qword_140C64A00);
	}
	v5 = v4;
LABEL_12:
	v6 = 0;
	if (v5)
	{
		while (!qword_140C63848)
		{
			if (dword_140C64A48)
			{
				v8 = 0i64;
			}
			else
			{
				if ((int)sub_140207F40() >= 0)
				{
					v7 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64A00 + 32i64))(qword_140C64A00, v6);
					goto LABEL_20;
				}
				v8 = 0i64;
			}
		LABEL_21:
			v9 = (int*)qword_140DC4D40;
			v10 = *(_QWORD*)(qword_140DC4D40 + 8);
			while (v10)
			{
				if (*(_DWORD*)(v10 + 32) < (unsigned int)v8[1])
				{
					v10 = *(_QWORD*)(v10 + 24);
				}
				else
				{
					v9 = (int*)v10;
					v10 = *(_QWORD*)(v10 + 16);
				}
			}
			if (v9 == (int*)qword_140DC4D40 || v8[1] < (unsigned int)v9[8])
			{
				v27 = (unsigned int)v8[1];
				v28 = v9;
				sub_140032B30((__int64)&unk_140DC4D38, &v29, (__int64*)&v28, &v27);
				v9 = v29;
			}
			++v6;
			v9[9] = *v8;
			if (v6 >= v5)
				goto LABEL_30;
		}
		v7 = qword_140C63848(off_140A6AA98, v6, qword_140C63858);
	LABEL_20:
		v8 = (int*)v7;
		goto LABEL_21;
	}
LABEL_30:
	v11 = qword_140C7DFE0;
	if (qword_140C7DFE0)
	{
		v12 = *(_DWORD*)(qword_140C7DFE0 + 272);
		for (i = 0; i < v12; ++i)
		{
			v14 = *(_QWORD*)(v11 + 232);
			if (v14)
			{
				if (i < v12)
				{
					v15 = v14 + 192i64 * i;
					if (v15)
					{
						v16 = *(_DWORD*)(v15 + 12);
						if (qword_140C63840)
						{
							v17 = qword_140C63840(off_140A6A980, v16, qword_140C63858);
							goto LABEL_40;
						}
						if (!dword_140C65068 && (int)sub_140206A00() >= 0)
						{
							v17 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64258 + 24i64))(
								qword_140C64258,
								v16);
						LABEL_40:
							v18 = (unsigned int*)v17;
							if (v17)
							{
								v19 = qword_140DC4D40;
								v20 = *(_QWORD*)(qword_140DC4D40 + 8);
								if (!v20)
									goto LABEL_50;
								v21 = *v18;
								do
								{
									if (*(_DWORD*)(v20 + 32) < v21)
									{
										v20 = *(_QWORD*)(v20 + 24);
									}
									else
									{
										v19 = v20;
										v20 = *(_QWORD*)(v20 + 16);
									}
								} while (v20);
								if (v19 == qword_140DC4D40 || v21 < *(_DWORD*)(v19 + 32))
								{
								LABEL_50:
									v28 = (int*)qword_140DC4D40;
									v22 = (__int64*)&v28;
								}
								else
								{
									v27 = v19;
									v22 = &v27;
								}
								v23 = *v22;
								if (v23 != qword_140DC4D40)
								{
									v24 = sub_1402081A0(*(_DWORD*)(v23 + 36));
									if (v24)
										v1 += *(_DWORD*)(v24 + 8);
								}
							}
						}
					}
				}
			}
			v12 = *(_DWORD*)(v11 + 272);
		}
	}
	v25 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v25 + 8) = 3;
	*(double*)v25 = (double)v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140A6A980: using guessed type wchar_t *off_140A6A980[2];
// 140A6AA98: using guessed type wchar_t *off_140A6AA98[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64258: using guessed type __int64 qword_140C64258;
// 140C64A00: using guessed type __int64 qword_140C64A00;
// 140C64A48: using guessed type int dword_140C64A48;
// 140C65068: using guessed type int dword_140C65068;
// 140C7DFE0: using guessed type __int64 qword_140C7DFE0;
// 140DC4D34: using guessed type int dword_140DC4D34;
// 140DC4D40: using guessed type __int64 qword_140DC4D40;
// 140DC4D48: using guessed type __int64 qword_140DC4D48;

