//----- (00000001402C0840) ----------------------------------------------------
__int64 __fastcall sub_1402C0840(unsigned int* a1, __int64 a2, _QWORD* a3, unsigned int* a4)
{
	__int64* v7; // rax
	__int64* v8; // rsi
	int v10; // ebx
	__int64 v11; // r8
	__int64 v12; // rdx
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 v15; // rbx
	__int64 v16; // rdi
	int v17; // eax
	__int64 v18; // rax
	__int64* v19; // [rsp+40h] [rbp-29h] BYREF
	__int64 v20; // [rsp+48h] [rbp-21h] BYREF
	__int64 v21; // [rsp+50h] [rbp-19h] BYREF
	__int64 v22; // [rsp+58h] [rbp-11h] BYREF
	__int64 v23; // [rsp+60h] [rbp-9h] BYREF
	int v24; // [rsp+68h] [rbp-1h] BYREF
	__int64 v25[2]; // [rsp+70h] [rbp+7h] BYREF

	if (!*((_QWORD*)a1 + 5) || !*((_QWORD*)a4 + 5))
		return 2147500035i64;
	v7 = (__int64*)sub_1402B21E0();
	v8 = v7;
	if (!v7)
		return 2147500034i64;
	v23 = 0i64;
	v10 = (*(__int64(__fastcall**)(__int64*, _QWORD*, __int64*))(*v7 + 48))(v7, a3, &v23);
	if (v10 >= 0)
	{
		v22 = 0i64;
		v10 = (**(__int64(__fastcall***)(__int64, void*, __int64*))v23)(v23, &unk_140B62578, &v22);
		if (v10 < 0
			|| (v24 = 0, v10 = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)v22 + 128i64))(v22, &v24), v10 < 0))
		{
		LABEL_31:
			if (v22)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 16i64))(v22);
				v22 = 0i64;
			}
			goto LABEL_33;
		}
		v11 = a1[2];
		v12 = *a1;
		v13 = *((_QWORD*)a1 + 5);
		v21 = 0i64;
		v10 = (*(__int64(__fastcall**)(__int64*, __int64, __int64, _QWORD*, unsigned int, unsigned int, __int64, __int64*))(*v8 + 160))(
			v8,
			v12,
			v11,
			a3,
			a1[6],
			a1[8],
			v13,
			&v21);
		if (v10 < 0)
		{
		LABEL_29:
			if (v21)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 16i64))(v21);
				v21 = 0i64;
			}
			goto LABEL_31;
		}
		v14 = *v8;
		v19 = 0i64;
		v10 = (*(__int64(__fastcall**)(__int64*, __int64**))(v14 + 88))(v8, &v19);
		if (v10 >= 0)
		{
			v15 = (__int64)v19;
			v16 = *v19;
			v17 = sub_1402B7210(0x400000);
			v10 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, int))(v16 + 64))(v15, v21, *a4, a4[2], v17);
			if (v10 >= 0)
			{
				v10 = (*(__int64(__fastcall**)(__int64*, __int64*))(*v19 + 32))(v19, v25);
				if (v10 >= 0)
				{
					if (v25[0] == *a3 && v25[1] == a3[1])
					{
						v10 = (*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD, _QWORD, _QWORD))(*v19 + 56))(
							v19,
							0i64,
							a4[6],
							a4[8],
							*((_QWORD*)a4 + 5));
						if (v10 < 0)
							goto LABEL_27;
					}
					else
					{
						v18 = *v8;
						v20 = 0i64;
						v10 = (*(__int64(__fastcall**)(__int64*, __int64*))(v18 + 80))(v8, &v20);
						if (v10 < 0
							|| (v10 = (*(__int64(__fastcall**)(__int64, __int64*, _QWORD*, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)v20 + 64i64))(
								v20,
								v19,
								a3,
								0i64,
								0i64,
								0i64,
								0),
								v10 < 0)
							|| (v10 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v20 + 56i64))(
								v20,
								0i64,
								a4[6],
								a4[8],
								*((_QWORD*)a4 + 5)),
								v10 < 0))
						{
							if (v20)
							{
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 16i64))(v20);
								v20 = 0i64;
							}
							goto LABEL_27;
						}
						if (v20)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 16i64))(v20);
					}
					if (v19)
						(*(void(__fastcall**)(__int64*))(*v19 + 16))(v19);
					v10 = 0;
					goto LABEL_29;
				}
			}
		}
	LABEL_27:
		if (v19)
			(*(void(__fastcall**)(__int64*))(*v19 + 16))(v19);
		goto LABEL_29;
	}
LABEL_33:
	if (v23)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 16i64))(v23);
	return (unsigned int)v10;
}

