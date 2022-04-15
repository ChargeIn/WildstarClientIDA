//----- (00000001402B40B0) ----------------------------------------------------
__int64 __fastcall sub_1402B40B0(__int64* a1, __int64* a2, _QWORD* a3, _QWORD* a4)
{
	__int64(__fastcall * *v8)(_QWORD*, void*, __int64*); // rax
	unsigned int v9; // edi
	int v10; // ebx
	__int64(__fastcall * *v11)(_QWORD*, void*, __int64*); // rax
	__int64 v12; // rax
	unsigned int v13; // eax
	__int64(__fastcall * *v14)(_QWORD*, void*, __int64*); // rax
	int v15; // eax
	__int64 v16; // rcx
	__int64 v17; // rax
	unsigned int v18; // r15d
	unsigned int v19; // eax
	__int64 v20; // r9
	unsigned int v21; // eax
	unsigned int v22; // ecx
	unsigned int v23; // ebx
	__int64 v24; // rax
	__int64(__fastcall * *v25)(_QWORD*, void*, __int64*); // rax
	int v26; // eax
	__int64 v27; // rax
	__int64 v29; // [rsp+38h] [rbp-79h] BYREF
	__int64 v30; // [rsp+40h] [rbp-71h] BYREF
	__int64 v31; // [rsp+48h] [rbp-69h] BYREF
	int v32; // [rsp+50h] [rbp-61h] BYREF
	int v33; // [rsp+54h] [rbp-5Dh] BYREF
	__int64 v34; // [rsp+58h] [rbp-59h] BYREF
	__int64 v35; // [rsp+60h] [rbp-51h]
	__int64 v36; // [rsp+68h] [rbp-49h]
	__int64 v37; // [rsp+70h] [rbp-41h]
	__int64 v38; // [rsp+78h] [rbp-39h]
	__int64 v39; // [rsp+80h] [rbp-31h]
	unsigned int v40; // [rsp+88h] [rbp-29h]
	int v41; // [rsp+8Ch] [rbp-25h]
	unsigned int v42; // [rsp+90h] [rbp-21h] BYREF
	unsigned int v43; // [rsp+94h] [rbp-1Dh]
	unsigned int v44; // [rsp+98h] [rbp-19h]
	unsigned int v45; // [rsp+9Ch] [rbp-15h]
	_BYTE v46[20]; // [rsp+A0h] [rbp-11h]
	int v47; // [rsp+B4h] [rbp+3h]
	int v48; // [rsp+B8h] [rbp+7h]

	if (!a2 || !a3)
		return 2147942487i64;
	v8 = (__int64(__fastcall**)(_QWORD*, void*, __int64*)) * a3;
	v9 = 0;
	v33 = 0;
	((void(__fastcall*)(_QWORD*, int*))v8[7])(a3, &v33);
	switch (v33)
	{
	case 2:
		v25 = (__int64(__fastcall**)(_QWORD*, void*, __int64*)) * a3;
		v30 = 0i64;
		v26 = (*v25)(a3, &unk_140B62068, &v30);
		v16 = v30;
		v10 = v26;
		if (v26 >= 0)
		{
			(*(void(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v30 + 80i64))(v30, &v42);
			v27 = *a1;
			*(_QWORD*)v46 = 3i64;
			*(_QWORD*)&v46[8] = 0x20000i64;
			v29 = 0i64;
			v10 = (*(__int64(__fastcall**)(__int64*, unsigned int*, _QWORD, __int64*))(v27 + 32))(a1, &v42, 0i64, &v29);
			if (v10 < 0)
			{
			LABEL_48:
				if (v29)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v29 + 16i64))(v29);
					v29 = 0i64;
				}
				v16 = v30;
				goto LABEL_51;
			}
			(*(void(__fastcall**)(__int64*, __int64, _QWORD*))(*a2 + 376))(a2, v29, a3);
			v36 = 1i64;
			v34 = v42;
			v35 = 1i64;
			v37 = v44;
			v41 = 2;
			v38 = v43;
			v13 = v45;
		LABEL_46:
			v39 = 0i64;
			v40 = v13;
			v10 = sub_1402B2C70((__int64)a4, (__int64)&v34);
			if (v10 >= 0)
				v10 = sub_1402B3660(a2, v29, (__int64)&v34, (__int64)a4);
			goto LABEL_48;
		}
		goto LABEL_51;
	case 3:
		v14 = (__int64(__fastcall**)(_QWORD*, void*, __int64*)) * a3;
		v29 = 0i64;
		v15 = (*v14)(a3, &unk_140B61C60, &v29);
		v16 = v29;
		v10 = v15;
		if (v15 >= 0)
		{
			(*(void(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v29 + 80i64))(v29, &v42);
			v17 = *a1;
			v31 = 0i64;
			if (*(_DWORD*)&v46[4] <= 1u)
			{
				v48 &= 4u;
				v47 = 0x20000;
				*(_QWORD*)&v46[12] = 3i64;
				v10 = (*(__int64(__fastcall**)(__int64*, unsigned int*, _QWORD, __int64*))(v17 + 40))(
					a1,
					&v42,
					0i64,
					&v31);
				if (v10 >= 0)
				{
					(*(void(__fastcall**)(__int64*, __int64, _QWORD*))(*a2 + 376))(a2, v31, a3);
				LABEL_41:
					v34 = v42;
					v36 = 1i64;
					v35 = v43;
					v37 = v45;
					v41 = 3;
					v38 = v44;
					v39 = v48 & 4;
					v40 = *(_DWORD*)v46;
					v10 = sub_1402B2C70((__int64)a4, (__int64)&v34);
					if (v10 >= 0)
						v10 = sub_1402B3660(a2, v31, (__int64)&v34, (__int64)a4);
				}
			}
			else
			{
				*(_QWORD*)&v46[4] = 1i64;
				v30 = 0i64;
				v10 = (*(__int64(__fastcall**)(__int64*, unsigned int*, _QWORD, __int64*))(v17 + 40))(
					a1,
					&v42,
					0i64,
					&v30);
				if (v10 >= 0)
				{
					v18 = *(_DWORD*)v46;
					if (sub_1402B35C0(*(int*)v46))
					{
						v19 = sub_1402B2540(v18);
						v18 = sub_1402B2660(v19);
					}
					v20 = *a1;
					v32 = 0;
					v10 = (*(__int64(__fastcall**)(__int64*, _QWORD, int*))(v20 + 232))(a1, v18, &v32);
					if (v10 >= 0)
					{
						if ((v32 & 0x40000) == 0)
						{
							v10 = -2147467259;
							if (v30)
							{
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v30 + 16i64))(v30);
								v30 = 0i64;
							}
							if (v31)
							{
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v31 + 16i64))(v31);
								v31 = 0i64;
							}
							if (v29)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v29 + 16i64))(v29);
							goto LABEL_54;
						}
						v21 = v45;
						if (v45)
						{
							v22 = v44;
							do
							{
								v23 = 0;
								if (v22)
								{
									do
									{
										(*(void(__fastcall**)(__int64*, __int64, _QWORD, _QWORD*, unsigned int, unsigned int))(*a2 + 456))(
											a2,
											v30,
											v23 + v9 * v22,
											a3,
											v23 + v9 * v22,
											v18);
										v22 = v44;
										++v23;
									} while (v23 < v44);
									v21 = v45;
								}
								++v9;
							} while (v9 < v21);
						}
						v24 = *a1;
						v48 &= 4u;
						v47 = 0x20000;
						*(_QWORD*)&v46[12] = 3i64;
						v10 = (*(__int64(__fastcall**)(__int64*, unsigned int*, _QWORD, __int64*))(v24 + 40))(
							a1,
							&v42,
							0i64,
							&v31);
						if (v10 >= 0)
						{
							(*(void(__fastcall**)(__int64*, __int64, __int64))(*a2 + 376))(a2, v31, v30);
							if (v30)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)v30 + 16i64))(v30);
							goto LABEL_41;
						}
					}
				}
				if (v30)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v30 + 16i64))(v30);
					v30 = 0i64;
				}
			}
			if (v31)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v31 + 16i64))(v31);
				v31 = 0i64;
			}
			v16 = v29;
		}
	LABEL_51:
		if (v16)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 16i64))(v16);
	LABEL_53:
		if (v10 >= 0)
			return 0i64;
		goto LABEL_54;
	case 4:
		v11 = (__int64(__fastcall**)(_QWORD*, void*, __int64*)) * a3;
		v30 = 0i64;
		v10 = (*v11)(a3, &unk_140B62058, &v30);
		if (v10 < 0)
		{
			if (v30)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v30 + 16i64))(v30);
			goto LABEL_53;
		}
		(*(void(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v30 + 80i64))(v30, &v42);
		v12 = *a1;
		*(_QWORD*)&v46[4] = 3i64;
		*(_QWORD*)&v46[12] = 0x20000i64;
		v29 = 0i64;
		v10 = (*(__int64(__fastcall**)(__int64*, unsigned int*, _QWORD, __int64*))(v12 + 48))(a1, &v42, 0i64, &v29);
		if (v10 < 0)
			goto LABEL_48;
		(*(void(__fastcall**)(__int64*, __int64, _QWORD*))(*a2 + 376))(a2, v29, a3);
		v37 = 1i64;
		v34 = v42;
		v41 = 4;
		v35 = v43;
		v36 = v44;
		v38 = v45;
		v13 = *(_DWORD*)v46;
		goto LABEL_46;
	}
	v10 = -2147467259;
LABEL_54:
	sub_1402B34D0(a4);
	return (unsigned int)v10;
}

