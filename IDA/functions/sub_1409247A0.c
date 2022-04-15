//----- (00000001409247A0) ----------------------------------------------------
__int64 __fastcall sub_1409247A0(__int64 a1, __int16* a2, __int64 a3)
{
	__int64 v3; // rax
	unsigned int* v4; // rdi
	__int64 v5; // r9
	_QWORD* v6; // r13
	int v7; // ebp
	int v9; // r15d
	int v12; // eax
	_QWORD* v13; // r14
	__int64 result; // rax
	__int64 v15; // rax
	unsigned __int16* v16; // rax
	__int16 v17; // r12
	int v18; // edx
	int v19; // r9d
	unsigned __int16 v20; // bx
	__int64 v21; // r13
	_QWORD* v22; // r15
	__int64 v23; // r12
	_QWORD* v24; // rax
	int v25; // r12d
	_QWORD* v26; // rax
	_QWORD* v27; // rax
	__int64 v28; // r8
	_QWORD* v29; // rbp
	char* v30; // rax
	__int64 v31; // r15
	_QWORD* v32; // rax
	_QWORD* v33; // rax
	_QWORD* v34; // rax
	_QWORD* v35; // rax
	__int64 v36; // rbx
	_QWORD* v37; // rbp
	_QWORD* v38; // rax
	__int64 v39; // r15
	int v40; // r14d
	_QWORD* v41; // rbp
	__int64 v42; // rcx
	__int16 v43; // dx
	_QWORD* v44; // rax
	_QWORD* v45; // rax
	__int64 v46; // rbx
	int v47; // r14d
	_QWORD* v48; // rax
	int v49; // [rsp+40h] [rbp-68h] BYREF
	int v50; // [rsp+44h] [rbp-64h]
	int v51; // [rsp+48h] [rbp-60h] BYREF
	int v52; // [rsp+4Ch] [rbp-5Ch]
	unsigned __int16* v53; // [rsp+50h] [rbp-58h]
	__int64* v54; // [rsp+58h] [rbp-50h] BYREF
	__int64 v55[9]; // [rsp+60h] [rbp-48h] BYREF
	int v56; // [rsp+B0h] [rbp+8h] BYREF
	unsigned __int16 v57; // [rsp+B8h] [rbp+10h] BYREF
	int v58; // [rsp+C8h] [rbp+20h]

	v3 = *(_QWORD*)(a1 + 16);
	v4 = *(unsigned int**)a1;
	v5 = (__int64)a2 - *(_QWORD*)(a1 + 8);
	v54 = 0i64;
	v6 = 0i64;
	v7 = 267;
	v9 = *(_DWORD*)(v3 + 4 * (v5 >> 1));
	if (!v9)
		v7 = 258;
	v12 = *(_DWORD*)(v3 + 4 * (v5 >> 1));
	v49 = -1;
	if (!v9)
		v12 = -8;
	v51 = -1;
	v58 = v12;
	if (v9)
		v50 = v9 + 8;
	else
		v50 = -16;
	if (*v4)
		v13 = 0i64;
	else
		v13 = sub_14092D590((__int64)v4, 48i64);
	result = 0i64;
	if (!*v4)
	{
		*v13 = 0i64;
		v13[1] = 0i64;
		v13[2] = 0i64;
		v13[3] = 0i64;
		v13[4] = 0i64;
		v13[5] = 0i64;
		v15 = *(_QWORD*)(a3 + 16);
		v13[4] = a2;
		*v13 = v15;
		*(_QWORD*)(a3 + 16) = v13;
		v16 = sub_14092F150(a1, a2, &v57, (__int16*)&v56, &v49, &v51, v55);
		v17 = v56;
		v53 = v16;
		switch ((__int16)v56)
		{
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 29:
		case 30:
		case 31:
		case 32:
		case 106:
		case 107:
			v18 = 5;
			v19 = 0;
			break;
		default:
			v18 = 267;
			v19 = 16;
			break;
		}
		v20 = v57;
		v52 = v19;
		v56 = v18;
		switch (v57)
		{
		case '!':
		case '#':
		case '\'':
		case 'h':
			if (v17 != 17 && v17 != 22)
			{
				if (v57 == 35)
					sub_140921800(a1, v17, v16, v13 + 3);
				if (!v9)
					sub_14091B4D0(a1, 2);
				sub_140932690(v4, 6, v7, v58, 6, 0i64);
				v21 = v50;
				if (v20 > 0x23u)
					sub_140932690(v4, 6, v7, v50, 512, 1i64);
				else
					sub_140932690(v4, 6, v7, v50, 6, 0i64);
				v22 = sub_140932570((__int64)v4);
				sub_140921800(a1, v17, v53, (__int64*)&v54);
				v23 = v58;
				sub_140932690(v4, 6, v7, v58, 6, 0i64);
				if (v20 > 0x23u)
				{
					v25 = v49;
					if (v20 != 104 || v49)
					{
						sub_140932690(v4, 6, 1, 0i64, v7, v21);
						sub_140932A90(v4, 25, 1, 0i64, 1, 0i64, 512, 1i64);
						sub_140932690(v4, 6, v7, v21, 1, 0i64);
						v24 = sub_140931B80(v4, 2, 1, 0i64, 512, v25 + 1);
					}
					else
					{
						sub_140932A90(v4, 25, v7, v21, v7, v21, 512, 1i64);
						v24 = sub_140932450((__int64)v4, 22);
					}
					v23 = v58;
				}
				else
				{
					v24 = sub_140932450((__int64)v4, 22);
				}
				if (v24 && v22)
				{
					v24[2] &= ~2ui64;
					v24[2] |= 1ui64;
					v24[3] = v22;
				}
				v26 = sub_140932570((__int64)v4);
				sub_140931600(v54, (__int64)v26);
				if (v20 == 104)
				{
					v27 = sub_140931B80(v4, 2, v7, v21, 512, v51 + 1);
					sub_14091B490(v4, v13 + 3, (__int64)v27);
				}
				sub_140932690(v4, 6, 6, 0i64, v7, v23);
				v13[5] = sub_140932570((__int64)v4);
			LABEL_100:
				sub_140928600(a1);
				return v55[0];
			}
			if (v57 == 33 || v57 == 39)
			{
				sub_14091B4D0(a1, 2);
				if (!*v4)
				{
					v4[26] = 0;
					sub_14092AA10(v4, 258, -8i64, 6, 0i64);
					if (!*v4)
					{
						v28 = -16i64;
						goto LABEL_45;
					}
				}
			}
			else
			{
				sub_14091B4D0(a1, 1);
				if (!*v4)
				{
					v28 = -8i64;
				LABEL_45:
					v4[26] = 0;
					sub_14092AA10(v4, 258, v28, 512, 0i64);
				}
			}
			if ((v20 == 39 || v20 == 104) && !*v4)
			{
				v4[26] = 0;
				sub_14092AA10(v4, 267, 64i64, 512, 0i64);
			}
			v29 = sub_140932570((__int64)v4);
			sub_140921800(a1, v17, v53, v13 + 3);
			if (v20 == 39 || v20 == 104)
			{
				if (!*v4)
				{
					v4[26] = 0;
					v30 = sub_14092D140((__int64)v4, 1, 1, 0i64, 267, 64i64);
					if (v30)
						*v30 = -117;
				}
				sub_140932A90(v4, 25, 1, 0i64, 1, 0i64, 512, 1i64);
				v31 = v49;
				if (v20 != 104)
					goto LABEL_61;
				if (v51 > 0)
				{
					v32 = sub_140931B80(v4, 2, 1, 0i64, 512, v51);
					if (v32)
					{
						if (v29)
						{
							v32[2] &= ~2ui64;
							v32[2] |= 1ui64;
							v32[3] = v29;
						}
					}
				}
				if ((int)v31 > 0)
					LABEL_61:
				v6 = sub_140931B80(v4, 3, 1, 0i64, 512, v31);
				sub_140932690(v4, 6, 267, 16i64, 1, 0i64);
			}
			sub_14091B4D0(a1, 1);
			sub_140932690(v4, 6, 258, -8i64, 6, 0i64);
			v33 = sub_140932450((__int64)v4, 22);
			if (v33 && v29)
			{
				v33[2] &= ~2ui64;
				v33[2] |= 1ui64;
				v33[3] = v29;
			}
			if (v6)
			{
				v34 = sub_140932570((__int64)v4);
				if (v34)
				{
					v6[2] &= ~2ui64;
					v6[2] |= 1ui64;
					v6[3] = v34;
				}
			}
			goto LABEL_84;
		case '"':
		case '$':
			if (v57 == 36)
				sub_140921800(a1, v17, v16, v13 + 3);
			if (!v9)
				sub_14091B4D0(a1, 1);
			sub_140932690(v4, 6, v7, v58, 6, 0i64);
			v13[5] = sub_140932570((__int64)v4);
			goto LABEL_100;
		case '%':
		case '&':
			if (!v9)
				sub_14091B4D0(a1, 1);
			sub_140932690(v4, 6, v7, v58, 6, 0i64);
			if (v20 == 37)
				sub_140921800(a1, v17, v53, v13 + 3);
			goto LABEL_84;
		case '(':
		case 'i':
			if (!v9)
				sub_14091B4D0(a1, 2);
			sub_140932690(v4, 6, v7, v58, 6, 0i64);
			sub_140932690(v4, 6, v7, v50, 512, 1i64);
			if (v20 == 105)
			{
				v35 = sub_140932450((__int64)v4, 22);
				sub_14091B490(v4, v13 + 3, (__int64)v35);
			}
		LABEL_84:
			v13[5] = sub_140932570((__int64)v4);
			goto LABEL_100;
		case ')':
			v36 = v19;
			sub_140932690(v4, 6, v18, v19, 512, v49);
			v37 = sub_140932570((__int64)v4);
			sub_140921800(a1, v17, v53, v13 + 3);
			sub_140932A90(v4, 539, v56, v36, v56, v36, 512, 1i64);
			v38 = sub_140932450((__int64)v4, 1);
			if (v38 && v37)
			{
				v38[2] &= ~2ui64;
				v38[2] |= 1ui64;
				v38[3] = v37;
			}
			goto LABEL_100;
		case '*':
		case '+':
		case '-':
			if (v57 == 43)
			{
				sub_140921800(a1, v17, v16, v13 + 3);
			}
			else if (v57 == 45)
			{
				sub_140932690(v4, 6, 267, 24i64, 512, v49);
			}
			v39 = v52;
			v40 = v56;
			sub_140932690(v4, 6, v56, v52, 6, 0i64);
			v41 = sub_140932570((__int64)v4);
			sub_140921800(a1, v17, v53, (__int64*)&v54);
			sub_140932690(v4, 6, v40, v39, 6, 0i64);
			v42 = (__int64)v4;
			if (v20 == 45)
			{
				sub_140932A90(v4, 539, 267, 24i64, 267, 24i64, 512, 1i64);
				v43 = 1;
				v42 = (__int64)v4;
			}
			else
			{
				v43 = 22;
			}
			v44 = sub_140932450(v42, v43);
			if (v44 && v41)
			{
				v44[2] &= ~2ui64;
				v44[3] = v41;
				v44[2] |= 1ui64;
			}
			v45 = sub_140932570((__int64)v4);
			sub_140931600(v54, (__int64)v45);
			sub_140932690(v4, 6, 6, 0i64, v40, v39);
			goto LABEL_100;
		case ',':
			v46 = v19;
			sub_140932690(v4, 6, v18, v19, 6, 0i64);
			sub_140921800(a1, v17, v53, (__int64*)&v54);
			v47 = v56;
			sub_140932690(v4, 6, v56, v46, 6, 0i64);
			v48 = sub_140932570((__int64)v4);
			sub_140931600(v54, (__int64)v48);
			sub_140932690(v4, 6, 6, 0i64, v47, v46);
			goto LABEL_100;
		default:
			goto LABEL_100;
		}
	}
	return result;
}
// 140924D68: conditional instruction was optimized away because bx.2==27
// 1409247A0: using guessed type __int64 var_48[9];

