//----- (0000000140629C20) ----------------------------------------------------
__int64 __fastcall sub_140629C20(__int64* a1, __int64* a2, unsigned __int64* a3, unsigned __int64 a4)
{
	unsigned __int64 v8; // r11
	unsigned __int64 v9; // r9
	__int64 v10; // r10
	unsigned __int64 v11; // rcx
	unsigned __int64 v12; // rdx
	unsigned __int64 v13; // rbx
	unsigned __int64 v14; // r8
	int* v15; // rax
	int* v16; // rsi
	unsigned __int64 v17; // rbp
	int* v18; // rdi
	int* v19; // rdx
	__int64 v20; // rcx
	__int64 v21; // rbx
	__int64 v22; // rdi
	int* v23; // rax
	int* v24; // r14
	__int64 v25; // r12
	unsigned __int64 v26; // rsi
	unsigned __int64 v27; // rbx
	__int64 v28; // r11
	_QWORD* v29; // rcx
	unsigned __int64* v30; // r10
	_QWORD* v31; // rax
	unsigned __int64 v32; // rdx
	unsigned __int64 v33; // r10
	__int64 v34; // rbp
	__int64 v35; // rdi
	unsigned __int64 v36; // rdx
	unsigned __int64 v37; // r8
	unsigned __int64 v38; // rax
	unsigned __int64 v39; // r9
	__int64 v40; // rdx
	__int64 v41; // rdi
	__int64 v42; // rbx
	__int64 v44; // [rsp+20h] [rbp-78h]
	unsigned __int64 v45; // [rsp+28h] [rbp-70h] BYREF
	char v46[16]; // [rsp+30h] [rbp-68h] BYREF
	char v47[8]; // [rsp+40h] [rbp-58h] BYREF
	int* v48; // [rsp+48h] [rbp-50h]
	__int64 v49; // [rsp+50h] [rbp-48h]
	int v50; // [rsp+A0h] [rbp+8h]

	v49 = 0i64;
	v50 = 0;
	v48 = sub_14018B280(40i64, 0);
	*(_BYTE*)v48 = 0;
	*((_QWORD*)v48 + 1) = 0i64;
	v44 = 0i64;
	*((_QWORD*)v48 + 2) = v48;
	*((_QWORD*)v48 + 3) = v48;
	if (!a4)
		goto LABEL_26;
	while (1)
	{
		v8 = a1[5];
		v9 = *a3;
		v10 = a1[4];
		v11 = 0i64;
		v12 = v8;
		while (v11 < v12)
		{
			v13 = v11 + ((v12 - v11) >> 1);
			v14 = *(_QWORD*)(*(_QWORD*)(v10 + 8 * v13) + 8i64);
			if (v9 < v14)
			{
				v11 = v13 + 1;
			}
			else
			{
				if (v9 <= v14)
					goto LABEL_9;
				v12 = v11 + ((v12 - v11) >> 1);
			}
		}
		v13 = v11;
	LABEL_9:
		if (v13 < v8 && *(_QWORD*)(*(_QWORD*)(v10 + 8 * v13) + 8i64) == v9)
			goto LABEL_25;
		v15 = sub_14018B280(136i64, 0);
		v16 = v15;
		if (v15)
		{
			v15[20] = 0;
			*((_QWORD*)v15 + 11) = 0i64;
			*((_QWORD*)v15 + 16) = 0i64;
			*((_QWORD*)v15 + 15) = 0i64;
			sub_1407E4830(v15 + 2, 0i64, 0x68ui64);
			v16[4] = 7;
			*(_QWORD*)v16 = off_140B77D28;
		}
		else
		{
			v16 = 0i64;
		}
		v50 = sub_14079FD90(v16, (__int64)a3);
		if (v50 < 0)
			break;
		v17 = a1[5] + 1;
		v18 = sub_14018DB00(a1[4], v17, 8i64);
		sub_1407DB590(&v18[2 * v13 + 2], (int*)(8 * v13 + a1[4]), 8 * (a1[5] - v13));
		*(_QWORD*)&v18[2 * v13] = v16;
		v19 = (int*)a1[4];
		if (v19 != v18)
		{
			sub_1407DB590(v18, v19, 8 * v13);
			v20 = a1[4];
			if (v20)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v20 - 16) + 8i64))(v20 - 16);
			a1[4] = (__int64)v18;
		}
		a1[5] = v17;
		v21 = a2[1];
		v22 = *((_QWORD*)v16 + 1);
		v23 = sub_14018DB00(*a2, v21 + 1, 8i64);
		v24 = v23;
		*(_QWORD*)&v23[2 * v21] = v22;
		if ((int*)*a2 != v23)
		{
			sub_1407DB590(v23, (int*)*a2, 8 * a2[1]);
			if (*a2)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a2 - 16) + 8i64))(*a2 - 16);
			*a2 = (__int64)v24;
		}
		a2[1] = v21 + 1;
		v45 = *((_QWORD*)v16 + 1);
		sub_140007810((__int64)v47, (__int64)v46, &v45);
		if ((v16[19] & 2) == 0)
			a1[6] = *((_QWORD*)v16 + 1);
	LABEL_25:
		a3 += 13;
		if (++v44 >= a4)
			goto LABEL_26;
	}
	if (!v16)
	{
	LABEL_26:
		v25 = 1i64;
		goto LABEL_27;
	}
	v25 = 1i64;
	(**(void(__fastcall***)(int*, __int64))v16)(v16, 1i64);
LABEL_27:
	sub_14062B370(a1 + 4);
	v26 = a1[8];
	v27 = 0i64;
	if (v26)
	{
		v28 = (__int64)v48;
		do
		{
			v29 = (_QWORD*)v28;
			v30 = (unsigned __int64*)(a1[7] + 8 * v27);
			v31 = *(_QWORD**)(v28 + 8);
			if (v31)
			{
				v32 = *v30;
				do
				{
					if (v31[4] < v32)
					{
						v31 = (_QWORD*)v31[3];
					}
					else
					{
						v29 = v31;
						v31 = (_QWORD*)v31[2];
					}
				} while (v31);
				if (v29 != (_QWORD*)v28 && v32 >= v29[4])
				{
					v33 = *v30;
					if (v32)
					{
						v34 = a1[5];
						v35 = a1[4];
						v36 = 0i64;
						v37 = v34;
						while (v36 < v37)
						{
							v38 = v36 + ((v37 - v36) >> 1);
							v39 = *(_QWORD*)(*(_QWORD*)(v35 + 8 * v38) + 8i64);
							if (v33 < v39)
							{
								v36 = v38 + 1;
							}
							else
							{
								if (v33 <= v39)
									goto LABEL_47;
								v37 = v36 + ((v37 - v36) >> 1);
							}
						}
						v38 = v36;
					LABEL_47:
						if (v38 != v34)
						{
							v40 = *(_QWORD*)(v35 + 8 * v38);
							if (*(_QWORD*)(v40 + 8) == v33)
							{
								if (v40)
								{
									sub_140430AA0(*(_QWORD*)(qword_140C65898 + 29504), v40);
									sub_140007270((__int64)(a1 + 7), v27);
									if (v25 == v26)
										goto LABEL_54;
									v28 = (__int64)v48;
									--v27;
									--v25;
									--v26;
								}
							}
						}
					}
				}
			}
			++v27;
			++v25;
		} while (v27 < v26);
	}
	else
	{
	LABEL_54:
		v28 = (__int64)v48;
	}
	if (v49)
	{
		v41 = *(_QWORD*)(v28 + 8);
		if (v41)
		{
			do
			{
				sub_1400083B0((__int64)v47, *(_QWORD*)(v41 + 24));
				v42 = *(_QWORD*)(v41 + 16);
				sub_14018B900(v41, 0);
				v41 = v42;
			} while (v42);
			v28 = (__int64)v48;
		}
		*(_QWORD*)(v28 + 16) = v28;
		*((_QWORD*)v48 + 1) = 0i64;
		*((_QWORD*)v48 + 3) = v48;
		v28 = (__int64)v48;
		v49 = 0i64;
	}
	sub_14018B900(v28, 0);
	return (unsigned int)v50;
}
// 140B77D28: using guessed type __int64 (__fastcall *off_140B77D28[10])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140629C20: using guessed type char var_68[16];
// 140629C20: using guessed type char var_58[8];

