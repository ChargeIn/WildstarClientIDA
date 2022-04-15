#include "../winhttp.h"

//----- (000000014091F420) ----------------------------------------------------
unsigned __int16* __fastcall sub_14091F420(__int64 a1, __int16* a2, __int64 a3)
{
	unsigned int* v3; // rbx
	int* v7; // r12
	__int64 v9; // rax
	int v10; // ebp
	unsigned __int16* v11; // r13
	__int64 v12; // rax
	__int16* v13; // rcx
	__int64 v14; // rax
	__int16 v15; // di
	__int64 v16; // rax
	unsigned __int16 v17; // r8
	unsigned __int16* v18; // r15
	__int64 v19; // rax
	int v20; // r9d
	__int64 v21; // rcx
	BOOL v22; // eax
	int v23; // ecx
	__int64 v24; // rdx
	int v25; // eax
	int v26; // edx
	__int16 v27; // ax
	int v28; // ecx
	BOOL v29; // ecx
	int v30; // edx
	BOOL v31; // esi
	unsigned __int16 v32; // ax
	_QWORD* v33; // rax
	char* v34; // rax
	_QWORD* v35; // rcx
	_QWORD* v36; // rax
	_QWORD* v37; // rcx
	_QWORD* v38; // rax
	_QWORD* v39; // rax
	__int64 v40; // r9
	int v41; // edi
	_QWORD* v42; // rax
	_QWORD* v43; // rcx
	_QWORD* v44; // rax
	__int64 v45; // r8
	__int64 v46; // rdi
	__int64 v47; // rax
	bool v48; // zf
	int v49; // edx
	int v50; // ecx
	int v51; // r13d
	__int16 v52; // di
	int v53; // eax
	int v54; // edx
	int v55; // eax
	_QWORD* v56; // rax
	_QWORD* v57; // rax
	__int16 v58; // ax
	__int64 v59; // rax
	__int64 v60; // rsi
	_QWORD* v61; // rax
	_QWORD* v62; // rax
	_QWORD* v63; // rax
	int v64; // [rsp+20h] [rbp-88h]
	int v65; // [rsp+40h] [rbp-68h]
	__int16 v66; // [rsp+44h] [rbp-64h]
	int v67; // [rsp+48h] [rbp-60h]
	_QWORD* v68; // [rsp+50h] [rbp-58h]
	_QWORD* v69; // [rsp+58h] [rbp-50h]
	_QWORD* v70; // [rsp+60h] [rbp-48h]
	_QWORD* v71; // [rsp+60h] [rbp-48h]
	_QWORD* v72; // [rsp+68h] [rbp-40h]
	__int16 v73; // [rsp+B0h] [rbp+8h]
	BOOL v75; // [rsp+C8h] [rbp+20h]
	_QWORD* v76; // [rsp+C8h] [rbp+20h]

	v3 = *(unsigned int**)a1;
	v66 = 125;
	v65 = 0;
	v67 = 0;
	v68 = 0i64;
	v69 = 0i64;
	if (**(_DWORD**)a1)
		v7 = 0i64;
	else
		v7 = (int*)sub_14092D590((__int64)v3, 80i64);
	if (*v3)
		return 0i64;
	sub_1407E4830(v7, 0i64, 0x50ui64);
	v9 = *(_QWORD*)(a3 + 16);
	*((_QWORD*)v7 + 4) = a2;
	*(_QWORD*)v7 = v9;
	*(_QWORD*)(a3 + 16) = v7;
	if ((unsigned __int16)(*a2 - 140) <= 1u)
		v66 = *a2++;
	v10 = (unsigned __int16)*a2;
	v11 = (unsigned __int16*)(a2 + 2);
	if (((_WORD)v10 == 129 || (_WORD)v10 == 134) && *v11 == 139)
	{
		*(_QWORD*)(a3 + 16) = *(_QWORD*)v7;
		do
		{
			v12 = (unsigned __int16)a2[1];
			v48 = a2[v12] == 113;
			a2 += v12;
		} while (v48);
		return (unsigned __int16*)(a2 + 2);
	}
	v13 = a2;
	do
	{
		v14 = (unsigned __int16)v13[1];
		v48 = v13[v14] == 113;
		v13 += v14;
	} while (v48);
	v15 = *v13;
	v16 = (unsigned __int16)a2[1];
	v17 = a2[v16];
	v18 = (unsigned __int16*)&a2[v16];
	v73 = *v13;
	v75 = v17 == 113;
	if ((_WORD)v10 == 129 || (_WORD)v10 == 134)
	{
		v75 = *v11 != 137;
		if (*v11 == 138)
		{
			v19 = *(_QWORD*)(a1 + 208);
			v20 = (unsigned __int16)a2[3];
			if (!v19 || v20 == 0xFFFF)
			{
				v75 = 0;
			}
			else
			{
				v21 = *(int*)(v19 + 24);
				if ((_DWORD)v21)
					v22 = v20 != *(unsigned __int16*)(*(_QWORD*)(a1 + 8) + 2 * v21 + 4);
				else
					v22 = v20 != 0;
				v75 = v22;
			}
		}
	}
	switch ((_WORD)v10)
	{
	case 0x81:
		if ((unsigned __int16)(v17 - 115) > 1u)
			goto LABEL_41;
		LOWORD(v10) = 134;
		break;
	case 0x7C:
		LOWORD(v10) = 123;
		break;
	case 0x7F:
	case 0x84:
		v24 = *v11;
		v67 = 2 * v24;
		if (*(_BYTE*)(v24 + *(_QWORD*)(a1 + 24)))
			v25 = *(_DWORD*)(a1 + 36) + 16 * v24;
		else
			v25 = *(_DWORD*)(a1 + 32) + 8 * v24;
		v65 = v25;
		v7[18] = v25;
		v11 = (unsigned __int16*)(a2 + 3);
		goto LABEL_41;
	default:
		if ((unsigned __int16)(v10 - 123) > 0xBu)
			goto LABEL_41;
		v23 = 2177;
		if (!_bittest(&v23, v10 - 123))
			goto LABEL_41;
		break;
	}
	v65 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 4 * (((__int64)a2 - *(_QWORD*)(a1 + 8)) >> 1));
	v7[18] = v65;
	if ((_WORD)v10 == 123)
		v7[16] = sub_14092EF20(a1, a2, 0);
LABEL_41:
	v26 = 0;
	if (v15 == 115 || v15 == 116 && v66 != 141)
		v26 = 1;
	v27 = v66;
	if (v66 == 140)
		++v26;
	if (v26 > 0)
	{
		sub_14091B4D0(a1, v26);
		v27 = v66;
	}
	v28 = 0;
	if (v15 == 115 || v15 == 116 && v27 != 141)
	{
		if (!*v3)
		{
			v3[26] = 0;
			sub_14092AA10(v3, 258, -8i64, 512, 0i64);
		}
		v28 = 1;
	}
	if (v66 == 140)
	{
		if (!*v3)
		{
			v3[26] = 0;
			sub_14092AA10(v3, 258, 8 * (-1 - v28), 6, 0i64);
		}
	}
	else if (v66 == 141)
	{
		if (!*v3)
		{
			v3[26] = 0;
			v34 = sub_14092D140((__int64)v3, 1, 6, 0i64, 258, -8i64);
			if (v34)
				*v34 = -117;
		}
		if (v15 == 116)
		{
			if ((_WORD)v10 == 123 || (unsigned __int16)v10 >= 0x82u)
			{
				v71 = sub_140931B80(v3, 1, 6, 0i64, 512, 0i64);
				sub_140932690(v3, 6, 6, 0i64, 258, -16i64);
				v72 = sub_140932450((__int64)v3, 22);
				v37 = sub_140932570((__int64)v3);
				if (v71 && v37)
				{
					v71[2] &= ~2ui64;
					v71[2] |= 1ui64;
					v71[3] = v37;
				}
				if ((_WORD)v10 == 123 && v7[16] >= 0)
				{
					sub_140932690(v3, 6, 1, 0i64, 267, v65);
					v38 = sub_140931B80(v3, 0, 6, 0i64, 257, 8i64 * (v7[16] + 1));
				}
				else
				{
					v38 = sub_140931B80(v3, 0, 6, 0i64, 267, v65);
				}
				v69 = v38;
				v35 = sub_140932570((__int64)v3);
				v36 = v72;
			}
			else
			{
				v70 = sub_140931B80(v3, 1, 6, 0i64, 512, 0i64);
				sub_140932690(v3, 6, 6, 0i64, 258, -16i64);
				v35 = sub_140932570((__int64)v3);
				v36 = v70;
			}
			if (v36 && v35)
			{
				v36[2] &= ~2ui64;
				v36[2] |= 1ui64;
				v36[3] = v35;
			}
			goto LABEL_59;
		}
		sub_14092EC50((unsigned int**)a1, 1);
		v69 = sub_140931B80(v3, 0, 6, 0i64, 512, 0i64);
	}
	if (v15 == 116)
	{
	LABEL_59:
		*((_QWORD*)v7 + 6) = sub_140932570((__int64)v3);
	LABEL_60:
		v29 = v75;
		goto LABEL_61;
	}
	if (v15 != 115)
		goto LABEL_60;
	v39 = sub_140932570((__int64)v3);
	v29 = v75;
	v68 = v39;
	if (v75)
	{
		if ((_WORD)v10 == 123)
			goto LABEL_62;
		if ((unsigned __int16)v10 < 0x82u)
			*((_QWORD*)v7 + 5) = v39;
	}
LABEL_61:
	if ((_WORD)v10 == 123)
	{
	LABEL_62:
		v30 = v7[16];
		if (v30 < 0)
		{
			if (v15 == 116)
			{
				sub_140932690(v3, 6, 3, 0i64, 267, v65);
				sub_14091B4D0(a1, 2);
				sub_140932690(v3, 6, 258, -8i64, 6, 0i64);
				sub_140932690(v3, 6, 258, -16i64, 3, 0i64);
				sub_140932A90(v3, 27, 267, v65, 2, 0i64, 512, 8i64);
				v31 = v75;
				goto LABEL_65;
			}
			if (v15 != 115 && !v29)
			{
				sub_140932690(v3, 6, 267, v65, 2, 0i64);
			LABEL_111:
				v31 = v75;
				goto LABEL_65;
			}
			sub_140932690(v3, 6, 267, v65, 2, 0i64);
			sub_14091B4D0(a1, 1);
			v64 = 6;
			v40 = -8i64;
		LABEL_110:
			sub_140932690(v3, 6, 258, v40, v64, 0i64);
			goto LABEL_111;
		}
		if ((unsigned __int16)(v15 - 115) <= 1u || v29)
		{
			sub_14091B4D0(a1, v30 + 2);
			sub_140932690(v3, 6, 1, 0i64, 267, v65);
			sub_140932A90(v3, 27, 3, 0i64, 2, 0i64, 512, 8 * v7[16] + 16);
			sub_140932690(v3, 6, 258, -8i64, 6, 0i64);
			sub_140932690(v3, 6, 267, v65, 3, 0i64);
			sub_140932690(v3, 6, 258, -16i64, 1, 0i64);
			sub_14092FA70(a1, a2, v7[16] + 1, 2i64, 0);
			v31 = v75;
		}
		else
		{
			sub_14091B4D0(a1, v30 + 1);
			sub_140932690(v3, 6, 1, 0i64, 267, v65);
			sub_140932A90(v3, 27, 3, 0i64, 2, 0i64, 512, 8 * v7[16] + 8);
			sub_140932690(v3, 6, 267, v65, 3, 0i64);
			sub_140932690(v3, 6, 258, -8i64, 1, 0i64);
			sub_14092FA70(a1, a2, v7[16], 1i64, 0);
			v31 = v75;
		}
		goto LABEL_65;
	}
	if ((_WORD)v10 == 127 || (_WORD)v10 == 132)
	{
		if (*(_BYTE*)(((__int64)v67 >> 1) + *(_QWORD*)(a1 + 24)))
		{
			sub_14091B4D0(a1, 2);
			sub_140932690(v3, 6, 1, 0i64, 267, v65);
			sub_140932690(v3, 6, 3, 0i64, 267, v65 + 8i64);
			sub_140932690(v3, 6, 267, v65, 6, 0i64);
			sub_140932690(v3, 6, 258, -8i64, 1, 0i64);
			v64 = 3;
			v40 = -16i64;
		}
		else
		{
			sub_14091B4D0(a1, 3);
			sub_140932690(v3, 6, 1, 0i64, 267, *(int*)(a1 + 36) + 8i64 * v67);
			sub_140932690(v3, 6, 3, 0i64, 267, *(int*)(a1 + 36) + 8i64 * (v67 + 1));
			sub_140932690(v3, 6, 258, -8i64, 1, 0i64);
			sub_140932690(v3, 6, 1, 0i64, 267, v65);
			sub_140932690(v3, 6, 258, -16i64, 3, 0i64);
			sub_140932690(v3, 6, 267, v65, 6, 0i64);
			v40 = -24i64;
			v64 = 1;
		}
		goto LABEL_110;
	}
	if ((((_WORD)v10 - 130) & 0xFFFB) == 0)
	{
		sub_140932690(v3, 6, 3, 0i64, 267, v65);
		sub_14091B4D0(a1, 1);
		sub_140932690(v3, 6, 267, v65, 6, 0i64);
		v64 = 3;
		v40 = -8i64;
		goto LABEL_110;
	}
	v31 = v75;
	if (v75)
	{
		sub_14091B4D0(a1, 1);
		sub_140932690(v3, 6, 258, -8i64, 6, 0i64);
	}
LABEL_65:
	if ((_WORD)v10 != 129 && (_WORD)v10 != 134)
		goto LABEL_142;
	v32 = *v11;
	if (*v11 == 135)
	{
		v33 = sub_140931B80(v3, 0, 267, *(int*)(a1 + 36) + 16i64 * v11[1], 267, *(int*)(a1 + 36) + 8i64);
	LABEL_136:
		sub_14091B490(v3, (__int64*)v7 + 8, (__int64)v33);
		v11 += 2;
		goto LABEL_142;
	}
	if (v32 == 136)
	{
		v41 = v11[1];
		v76 = sub_140931B80(v3, 1, 267, *(int*)(a1 + 36) + 16i64 * v41, 267, *(int*)(a1 + 36) + 8i64);
		sub_140932690(v3, 6, 267, 24i64, 2, 0i64);
		sub_140932690(v3, 6, 267, 0i64, 512, *(_QWORD*)(a1 + 152));
		sub_140932690(v3, 6, 267, 8i64, 512, *(_QWORD*)(a1 + 160));
		sub_140932690(v3, 6, 1, 0i64, 512, (v41 << 8) | ((unsigned __int64)*(int*)(a1 + 36) >> 3));
		sub_1409337F0(v3, 2, 0i64, 0i64);
		sub_140932690(v3, 6, 3, 0i64, 512, *(_QWORD*)(a1 + 144));
		sub_1409322B0(v3, 27, 512, (__int64)sub_1409294F0);
		sub_140932690(v3, 6, 2, 0i64, 267, 24i64);
		v42 = sub_140931B80(v3, 0, 1, 0i64, 512, 0i64);
		sub_14091B490(v3, (__int64*)v7 + 8, (__int64)v42);
		v43 = sub_140932570((__int64)v3);
		if (v76 && v43)
		{
			v76[2] &= ~2ui64;
			v76[2] |= 1ui64;
			v76[3] = v43;
		}
		v11 += 2;
		goto LABEL_142;
	}
	if ((unsigned __int16)(v32 - 137) <= 1u)
	{
		*((_QWORD*)v7 + 8) = 0i64;
		v45 = *(_QWORD*)(a1 + 208);
		v46 = v11[1];
		if (v45)
		{
			if ((_DWORD)v46 == 0xFFFF)
			{
				LODWORD(v47) = 1;
			}
			else
			{
				v47 = *(int*)(v45 + 24);
				if ((_DWORD)v47)
				{
					v49 = *(unsigned __int16*)(*(_QWORD*)(a1 + 8) + 2 * v47 + 4);
					LODWORD(v47) = 0;
					v48 = (_DWORD)v46 == v49;
				}
				else
				{
					v48 = (_DWORD)v46 == 0;
				}
				LOBYTE(v47) = v48;
			}
		}
		else
		{
			LODWORD(v47) = 0;
		}
		if (*v11 == 137)
		{
			if (!(_DWORD)v47)
			{
			LABEL_139:
				if (*v18 == 113)
				{
					v11 = v18 + 2;
					v18 += v18[1];
				}
				else
				{
					v11 = v18;
				}
				goto LABEL_142;
			}
		}
		else if (!(_DWORD)v47)
		{
			if (v45)
			{
				sub_140932690(v3, 6, 267, 24i64, 2, 0i64);
				sub_140932690(v3, 6, 267, 0i64, 512, *(_QWORD*)(a1 + 152));
				sub_140932690(v3, 6, 267, 8i64, 512, *(_QWORD*)(a1 + 160));
				sub_140932690(
					v3,
					6,
					267,
					16i64,
					512,
					*(unsigned __int16*)(*(_QWORD*)(a1 + 8) + 2i64 * *(int*)(*(_QWORD*)(a1 + 208) + 24i64) + 4));
				sub_140932690(v3, 6, 1, 0i64, 512, v46);
				sub_1409337F0(v3, 2, 0i64, 0i64);
				sub_140932690(v3, 6, 3, 0i64, 512, *(_QWORD*)(a1 + 144));
				sub_1409322B0(v3, 27, 512, (__int64)sub_1409293F0);
				sub_140932690(v3, 6, 2, 0i64, 267, 24i64);
				v33 = sub_140931B80(v3, 0, 1, 0i64, 512, 0i64);
				goto LABEL_136;
			}
			goto LABEL_139;
		}
		v11 += 2;
		goto LABEL_142;
	}
	if (*v3)
		v44 = 0i64;
	else
		v44 = sub_14092D590((__int64)v3, 64i64);
	if (*v3)
		return 0i64;
	*v44 = 0i64;
	v44[1] = 0i64;
	v44[2] = 0i64;
	v44[3] = 0i64;
	v44[5] = 0i64;
	v44[6] = 0i64;
	v44[7] = 0i64;
	v44[4] = v11;
	*((_QWORD*)v7 + 8) = v44;
	v11 = sub_14091D1B0(a1, v11, (__int64)v44, 1);
LABEL_142:
	sub_140925310(a1, v11, v18, v7);
	if (*v3)
		return 0i64;
	if ((_WORD)v10 == 123)
	{
		v50 = v7[16];
		if (v50 >= 0)
		{
			v52 = v73;
			if ((unsigned __int16)(v73 - 115) <= 1u || (v53 = 1, v31))
				v53 = 2;
			v51 = v65;
			sub_140932A90(v3, 25, 2, 0i64, 267, v65, 512, 8i64 * (v50 + v53));
			if (v73 == 115)
				sub_140932690(v3, 6, 3, 0i64, 258, -8i64);
		}
		else
		{
			v51 = v65;
			sub_140932690(v3, 6, 2, 0i64, 267, v65);
			v52 = v73;
			if (v73 == 115)
			{
				sub_140932690(v3, 6, 3, 0i64, 258, 0i64);
			}
			else if (v73 == 116)
			{
				sub_140932690(v3, 6, 267, v65, 258, 0i64);
			}
		}
	}
	else
	{
		v52 = v73;
		v51 = v65;
	}
	v54 = 0;
	if (v52 != 114 || v66 != 125)
		v54 = 1;
	if (v31 && (_WORD)v10 != 123)
		++v54;
	if (v54 > 0)
		sub_14091B4D0(a1, v54);
	v55 = 0;
	if (v52 == 114)
	{
		if (v66 == 125)
			goto LABEL_170;
		sub_140932690(v3, 6, 258, -8i64, 512, 0i64);
	}
	else
	{
		sub_140932690(v3, 6, 258, -8i64, 6, 0i64);
	}
	v55 = 1;
LABEL_170:
	if (v31)
	{
		if ((_WORD)v10 != 123)
			sub_140932690(v3, 6, 258, 8 * (-1 - v55), 512, 0i64);
		if (v52 != 115)
			*((_QWORD*)v7 + 5) = sub_140932570((__int64)v3);
	}
	if (v67)
	{
		sub_140932690(v3, 6, 1, 0i64, 267, v51);
		sub_140932690(v3, 6, 267, *(int*)(a1 + 36) + 8i64 * (v67 + 1), 6, 0i64);
		sub_140932690(v3, 6, 267, *(int*)(a1 + 36) + 8i64 * v67, 1, 0i64);
	}
	if (v52 == 115)
	{
		if ((_WORD)v10 == 123 || (unsigned __int16)v10 >= 0x82u)
		{
			if (v31)
				*((_QWORD*)v7 + 5) = sub_140932570((__int64)v3);
			if ((_WORD)v10 != 123)
			{
				v57 = sub_140931B80(v3, 1, 267, v51, 6, 0i64);
				if (v57 && v68)
				{
					v57[2] &= ~2ui64;
					v57[2] |= 1ui64;
					v57[3] = v68;
				}
				if (v66 != 140)
					sub_14092EC50((unsigned int**)a1, 1);
				goto LABEL_193;
			}
			v56 = sub_140931B80(v3, 1, 3, 0i64, 6, 0i64);
		}
		else
		{
			v56 = sub_140932450((__int64)v3, 22);
		}
		if (v56 && v68)
		{
			v56[2] &= ~2ui64;
			v56[3] = v68;
			v56[2] |= 1ui64;
		}
	LABEL_193:
		*((_QWORD*)v7 + 6) = sub_140932570((__int64)v3);
	}
	v58 = v66;
	if (v66 == 140)
	{
		*((_QWORD*)v7 + 7) = sub_140932570((__int64)v3);
	LABEL_196:
		v58 = v66;
		goto LABEL_197;
	}
	if (v66 == 141)
	{
		v60 = *(_QWORD*)(a3 + 40);
		v61 = sub_140932450((__int64)v3, 22);
		if (v61 && v60)
		{
			v61[2] &= ~2ui64;
			v61[2] |= 1ui64;
			v61[3] = v60;
		}
		if (v69)
		{
			v62 = sub_140932570((__int64)v3);
			if (v62)
			{
				v69[2] &= ~2ui64;
				v69[2] |= 1ui64;
				v69[3] = v62;
			}
			if ((_WORD)v10 == 123 && v7[16] >= 0)
			{
				sub_140932690(v3, 6, 2, 0i64, 267, v51);
				v63 = sub_140932450((__int64)v3, 23);
				sub_14091B490(v3, (__int64*)(a1 + 256), (__int64)v63);
			}
			else if (v52 == 116)
			{
				if ((_WORD)v10 != 123)
					sub_14092EC50((unsigned int**)a1, 1);
				goto LABEL_201;
			}
		}
		goto LABEL_196;
	}
LABEL_197:
	if (v52 != 114 && v58 != 141 || v58 == 140)
		sub_140928600(a1);
LABEL_201:
	if (*v18 == 113)
	{
		do
		{
			v59 = v18[1];
			v48 = v18[v59] == 113;
			v18 += v59;
		} while (v48);
	}
	return v18 + 2;
}
// 140925310: using guessed type __int64 __fastcall sub_140925310(_QWORD, _QWORD, _QWORD, _QWORD);

