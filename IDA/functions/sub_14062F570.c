//----- (000000014062F570) ----------------------------------------------------
__int64 sub_14062F570()
{
	int* v0; // rbx
	unsigned int v1; // eax
	unsigned __int64 v2; // rax
	__int64 v3; // rax
	unsigned __int64 v4; // kr00_8
	int* v5; // rax
	unsigned __int64 v6; // r8
	unsigned int v7; // r15d
	unsigned int v8; // eax
	__int64 v9; // rax
	_DWORD* v10; // rsi
	unsigned int v11; // ebx
	__int64 v12; // rax
	__int64 v13; // r13
	__int64 v14; // r14
	unsigned __int64 v15; // rdi
	_QWORD* v16; // rbx
	int* v17; // rax
	__int64* v18; // rdi
	__int64 v19; // rbx
	unsigned __int64 v20; // r12
	int** v21; // r14
	int* v22; // rax
	int* v23; // rdx
	int* v24; // rcx
	int v25; // eax
	__int64 v26; // rbx
	__int64 v27; // r12
	int* v28; // rax
	__int64 v29; // rcx
	int* v30; // r14
	unsigned int v32; // [rsp+20h] [rbp-78h]
	int v33[3]; // [rsp+24h] [rbp-74h] BYREF
	__int64 v34; // [rsp+30h] [rbp-68h]
	char v35[16]; // [rsp+38h] [rbp-60h] BYREF
	int v36; // [rsp+48h] [rbp-50h] BYREF
	int v37; // [rsp+4Ch] [rbp-4Ch]
	int v38; // [rsp+50h] [rbp-48h]
	int v39; // [rsp+54h] [rbp-44h]
	int v40; // [rsp+58h] [rbp-40h]

	sub_14062F960();
	v0 = sub_14018B280(40i64, 0);
	if (v0)
	{
		if (qword_140C63838)
		{
			v1 = qword_140C63838(off_140A6B908, qword_140C63858);
		}
		else if (dword_140C64B48)
		{
			v1 = 0;
		}
		else if ((int)sub_140219820() >= 0)
		{
			v1 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C641B0 + 40i64))(qword_140C641B0);
		}
		else
		{
			v1 = 0;
		}
		*(_QWORD*)v0 = 0i64;
		v2 = sub_1401A40C0(v1);
		*((_QWORD*)v0 + 1) = v2;
		v4 = v2;
		v3 = 8 * v2;
		if (!is_mul_ok(v4, 8ui64))
			v3 = -1i64;
		v5 = sub_14018B280(v3, 0);
		v6 = 8i64 * *((_QWORD*)v0 + 1);
		*((_QWORD*)v0 + 2) = v5;
		sub_1407E4830(v5, 0i64, v6);
		*((_QWORD*)v0 + 3) = sub_14062F130;
		*((_QWORD*)v0 + 4) = sub_14062F170;
	}
	else
	{
		v0 = 0i64;
	}
	qword_140C7E570 = (__int64)v0;
	v7 = 0;
	if (qword_140C63838)
	{
		v8 = qword_140C63838(off_140A6B908, qword_140C63858);
	}
	else
	{
		if (dword_140C64B48 || (int)sub_140219820() < 0)
			return 0i64;
		v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C641B0 + 40i64))(qword_140C641B0);
	}
	v32 = v8;
	if (v8)
	{
		do
		{
			if (qword_140C63848)
			{
				v9 = qword_140C63848(off_140A6B908, v7, qword_140C63858);
			}
			else
			{
				if (dword_140C64B48)
				{
					v10 = 0i64;
					goto LABEL_27;
				}
				if ((int)sub_140219820() < 0)
				{
					v10 = 0i64;
					goto LABEL_27;
				}
				v9 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C641B0 + 32i64))(qword_140C641B0, v7);
			}
			v10 = (_DWORD*)v9;
		LABEL_27:
			v36 = v10[4];
			v37 = v10[1];
			v38 = v10[3];
			v39 = v10[2];
			v40 = v10[6];
			v11 = v10[5];
			if (qword_140C63840)
			{
				v12 = qword_140C63840(off_140A6DFF8, v11, qword_140C63858);
				goto LABEL_32;
			}
			if (!dword_140C64C04 && (int)sub_140248CA0() >= 0)
			{
				v12 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63B40 + 24i64))(qword_140C63B40, v11);
			LABEL_32:
				v13 = v12;
				if (v12)
				{
					v14 = qword_140C7E570;
					LODWORD(v34) = v10[7];
					v15 = (*(__int64(__fastcall**)(int*))(qword_140C7E570 + 24))(&v36);
					v16 = *(_QWORD**)(*(_QWORD*)(v14 + 16) + 8 * (v15 % *(_QWORD*)(v14 + 8)));
					if (!v16)
						goto LABEL_37;
					while (v15 != *v16 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v14 + 32))(&v36, v16 + 2))
					{
						v16 = (_QWORD*)v16[1];
						if (!v16)
							goto LABEL_37;
					}
					if (v16 == (_QWORD*)-40i64)
					{
					LABEL_37:
						v17 = sub_14018B280(16i64, 0);
						v18 = (__int64*)v17;
						if (v17)
						{
							*((_QWORD*)v17 + 1) = 0i64;
							*(_QWORD*)v17 = 0i64;
						}
						else
						{
							v18 = 0i64;
						}
						v19 = qword_140C7E570;
						if (*(_QWORD*)qword_140C7E570 == *(_QWORD*)(qword_140C7E570 + 8))
							sub_1400290D0(qword_140C7E570);
						v20 = (*(__int64(__fastcall**)(int*))(v19 + 24))(&v36);
						v21 = (int**)(*(_QWORD*)(v19 + 16) + 8 * (v20 % *(_QWORD*)(v19 + 8)));
						v22 = sub_14018B280(48i64, 0);
						v23 = v22;
						if (v22)
						{
							v24 = *v21;
							*(_QWORD*)v22 = v20;
							*((_QWORD*)v22 + 1) = v24;
							v22[4] = v36;
							v22[5] = v37;
							v22[6] = v38;
							v22[7] = v39;
							v25 = v40;
							*((_QWORD*)v23 + 5) = v18;
							v23[8] = v25;
						}
						else
						{
							v23 = 0i64;
						}
						*v21 = v23;
						++* (_QWORD*)v19;
					}
					else
					{
						v18 = (__int64*)v16[5];
					}
					v26 = v18[1];
					v27 = v26 + 1;
					v28 = sub_14018DB00(*v18, v26 + 1, 16i64);
					v29 = v34;
					v26 *= 2i64;
					*(_QWORD*)&v28[2 * v26] = v13;
					*(_QWORD*)&v28[2 * v26 + 2] = v29;
					v30 = v28;
					if ((int*)*v18 != v28)
					{
						sub_1407DB590(v28, (int*)*v18, 16 * v18[1]);
						if (*v18)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v18 - 16) + 8i64))(*v18 - 16);
						*v18 = (__int64)v30;
					}
					v18[1] = v27;
					v33[0] = v10[4];
					sub_1403ADDD0((__int64)&unk_140C7E590, (__int64)v35, v33);
				}
			}
			++v7;
		} while (v7 < v32);
	}
	return 0i64;
}
// 140A6B908: using guessed type wchar_t *off_140A6B908[2];
// 140A6DFF8: using guessed type wchar_t *off_140A6DFF8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B40: using guessed type __int64 qword_140C63B40;
// 140C641B0: using guessed type __int64 qword_140C641B0;
// 140C64B48: using guessed type int dword_140C64B48;
// 140C64C04: using guessed type int dword_140C64C04;
// 140C7E570: using guessed type __int64 qword_140C7E570;
// 14062F570: using guessed type int var_74[3];
// 14062F570: using guessed type char var_60[16];

