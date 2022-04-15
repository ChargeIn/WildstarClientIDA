//----- (000000014086E870) ----------------------------------------------------
__int64 __fastcall sub_14086E870(__int64* a1, _DWORD* a2)
{
	unsigned int v4; // r14d
	_QWORD** v5; // rbx
	int v6; // r12d
	__int64 v7; // rdi
	_QWORD* v8; // rsi
	int v9; // eax
	int v10; // edi
	__int64 v11; // rax
	__int64 v12; // rcx
	int v13; // eax
	unsigned int v14; // eax
	_BYTE v16[24]; // [rsp+28h] [rbp-A9h] BYREF
	__int64 v17; // [rsp+48h] [rbp-89h] BYREF
	char v18[48]; // [rsp+58h] [rbp-79h] BYREF
	_DWORD* v19; // [rsp+88h] [rbp-49h]
	_BYTE* v20; // [rsp+E8h] [rbp+17h]
	__int64 v21; // [rsp+F0h] [rbp+1Fh]
	bool v22; // [rsp+138h] [rbp+67h]
	unsigned __int64 v23; // [rsp+140h] [rbp+6Fh] BYREF
	__int64 v24; // [rsp+148h] [rbp+77h]

	v22 = *a2 != 0;
	v4 = 1;
	sub_140874050(&v23, (__int64)a2, (__int64)a1);
	v5 = (_QWORD**)a1[21];
	v6 = 0;
	v7 = (a1[22] - (__int64)v5) >> 3;
	v24 = v7;
	if (v5 == (_QWORD**)a1[22])
		goto LABEL_29;
	while (1)
	{
		v8 = *v5;
		sub_140869F50((__int64)v18, (__int64)a2);
		if (v22)
		{
			sub_140873FA0((__int64)v16, (__int64)v20);
			if ((_DWORD)v7 == 1)
			{
				sub_140874330(a1, *((_QWORD*)v20 + 4), &v17);
				goto LABEL_15;
			}
			LODWORD(v21) = 0;
			v11 = sub_140865FC0();
			v12 = v17;
			v17 = v11;
			if (v12)
			{
				sub_140866000(v12);
				v11 = v17;
			}
			if (v11)
			{
				v10 = sub_140874220((__int64)a1, (__int64)v16, (__int64)v18, &v23);
				if (v10 == 1)
				{
				LABEL_15:
					v20 = v16;
					v13 = sub_14084ED10(v8, (__int64)v18);
					v10 = v13;
					if (v13 == 3)
					{
						v10 = 1;
					}
					else if (v13 == 1)
					{
						v10 = (*(__int64(__fastcall**)(_QWORD*, char*))(*v8 + 632i64))(v8, v18);
					}
				}
			}
			else
			{
				v10 = 52;
			}
			sub_140874110((__int64)v16);
			goto LABEL_21;
		}
		v9 = sub_14084ED10(v8, (__int64)v18);
		v10 = v9;
		if (v9 != 3)
		{
			if (v9 == 1)
				v10 = (*(__int64(__fastcall**)(_QWORD*, char*))(*v8 + 632i64))(v8, v18);
		LABEL_21:
			if (v10 != 1)
				goto LABEL_23;
			goto LABEL_22;
		}
		v10 = 1;
	LABEL_22:
		++v6;
	LABEL_23:
		if (v19)
			sub_140828460(v19);
		if (++v5 == (_QWORD**)a1[22])
			break;
		LODWORD(v7) = v24;
	}
	if (v6)
		v10 = 1;
	v4 = v10;
LABEL_29:
	if (!v22)
		goto LABEL_35;
	if (!v6)
	{
		v14 = sub_1408746E0(a1, (__int64)a2);
		goto LABEL_34;
	}
	if (v23)
	{
		v14 = sub_140874450((__int64)a1, v23);
	LABEL_34:
		v4 = v14;
	LABEL_35:
		if (v23)
			sub_140866000(v23);
	}
	return v4;
}

