#include "../winhttp.h"

//----- (000000014091E340) ----------------------------------------------------
void __fastcall sub_14091E340(__int64 a1, __int64 a2)
{
	__int16* v2; // r9
	int v3; // r8d
	unsigned int* v4; // rbx
	int v5; // esi
	__int16 v7; // cx
	__int16 v9; // r10
	__int64* v10; // rdi
	int v11; // ebp
	__int16* v12; // rcx
	__int64 v13; // rax
	bool v14; // zf
	__int16 v15; // dx
	__int64 v16; // rax
	unsigned __int16 v17; // cx
	unsigned __int16* v18; // r12
	BOOL v19; // r15d
	char* v20; // rax
	__int16 v21; // dx
	__int64 v22; // rbp
	_QWORD* v23; // rax
	__int64 v24; // rbp
	_QWORD* v25; // rax
	int v26; // ebp
	_QWORD* v27; // rax
	int v28; // ebp
	__int64* v29; // rax
	__int64 v30; // rax
	__int16* v31; // rdi
	__int64* v32; // rax
	_QWORD* v33; // rax
	__int64* i; // rdx
	__int64 v35; // rcx
	__int16 v36; // cx
	__int64 v37; // rdi
	_QWORD* v38; // rax
	_QWORD* v39; // rax
	__int64* v40; // rcx
	int v41; // r15d
	_WORD* v42; // rdi
	int v43; // eax
	int v44; // edx
	int v45; // edx
	__int64 v46; // rdi
	_QWORD* v47; // rax
	_QWORD* v48; // rax
	__int64 v49; // rcx
	_QWORD* v50; // rax
	__int64* j; // rdx
	__int64 v52; // rcx
	__int16* v53; // r12
	__int64 v54; // rdi
	_QWORD* v55; // rax
	_QWORD* v56; // rax
	int v57; // r15d
	int v58; // edx
	__int16* v59; // rcx
	int v60; // eax
	_QWORD* v61; // rax
	__int64 v62; // rax
	__int64 v63; // rdi
	_QWORD* v64; // rax
	__int64 v65; // rdi
	_QWORD* v66; // rax
	_QWORD* v67; // rax
	_QWORD* v68; // rax
	__int64 v69; // rdi
	_QWORD* v70; // rax
	_QWORD* v71; // rax
	int v72; // [rsp+20h] [rbp-A8h]
	__int64 v73; // [rsp+28h] [rbp-A0h]
	int v74; // [rsp+40h] [rbp-88h]
	__int16* v75; // [rsp+48h] [rbp-80h]
	__int64* v76; // [rsp+50h] [rbp-78h]
	_QWORD* v77; // [rsp+58h] [rbp-70h]
	_QWORD* v78; // [rsp+60h] [rbp-68h]
	_QWORD* v79; // [rsp+68h] [rbp-60h]
	_QWORD* v80; // [rsp+70h] [rbp-58h]
	__int16 v81; // [rsp+D0h] [rbp+8h]
	int v82; // [rsp+D8h] [rbp+10h]
	int v83; // [rsp+E0h] [rbp+18h]
	__int16 v84; // [rsp+E8h] [rbp+20h]

	v2 = *(__int16**)(a2 + 32);
	v3 = *(_DWORD*)(a2 + 72);
	v4 = *(unsigned int**)a1;
	v5 = 0;
	v7 = *v2;
	v9 = 125;
	v74 = 0;
	v82 = v3;
	v75 = v2;
	v76 = 0i64;
	v10 = 0i64;
	v84 = 125;
	v77 = 0i64;
	v79 = 0i64;
	v78 = 0i64;
	v80 = 0i64;
	if ((unsigned __int16)(*v2 - 140) <= 1u)
	{
		v9 = *v2++;
		v84 = v7;
		v75 = v2;
	}
	v11 = (unsigned __int16)*v2;
	v12 = v2;
	v83 = v11;
	do
	{
		v13 = (unsigned __int16)v12[1];
		v14 = v12[v13] == 113;
		v12 += v13;
	} while (v14);
	v15 = *v12;
	v16 = (unsigned __int16)v2[1];
	v17 = v2[v16];
	v18 = (unsigned __int16*)&v2[v16];
	v81 = v15;
	v19 = v17 == 113;
	if (v11 == 129 || v11 == 134)
	{
		if ((unsigned __int16)(v2[2] - 119) <= 3u || (v19 = 0, *(_QWORD*)(a2 + 64)))
			v19 = 1;
	}
	if (v11 == 127 || v11 == 132)
		v74 = 2 * (unsigned __int16)v2[2];
	if (v11 == 129)
	{
		if ((unsigned __int16)(v17 - 115) > 1u)
			goto LABEL_19;
		v11 = 134;
	}
	else if (v11 == 124)
	{
		v11 = 123;
	}
	v83 = v11;
LABEL_19:
	if (v15 == 115)
	{
		if (v9 != 140)
			goto LABEL_46;
		if (!*v4)
		{
			v4[26] = 0;
			v20 = sub_14092D140((__int64)v4, 1, 1, 0i64, 258, -8i64);
			if (v20)
				*v20 = -117;
		}
		sub_14092EC50((unsigned int**)a1, 1);
		v21 = 0;
	LABEL_44:
		v77 = sub_140931B80(v4, v21, 1, 0i64, 512, 0i64);
		goto LABEL_45;
	}
	if (v15 != 116)
	{
		if (v9 != 140)
			goto LABEL_46;
		sub_140932690(v4, 6, 1, 0i64, 258, -8i64);
		sub_14092EC50((unsigned int**)a1, 1);
		v21 = 1;
		goto LABEL_44;
	}
	if (v9 == 141)
		goto LABEL_41;
	sub_140932690(v4, 6, 6, 0i64, 258, -8i64);
	if (v11 >= 130)
		goto LABEL_35;
	if (v11 == 123)
	{
		if (*(int*)(a2 + 64) >= 0)
		{
			sub_140932690(v4, 6, 1, 0i64, 267, v82);
			v73 = 8i64 * (*(_DWORD*)(a2 + 64) + 1);
			v72 = 257;
			goto LABEL_36;
		}
	LABEL_35:
		v73 = v82;
		v72 = 267;
	LABEL_36:
		v24 = *(_QWORD*)(a2 + 48);
		v25 = sub_140931B80(v4, 1, 6, 0i64, v72, v73);
		if (v25 && v24)
		{
			v25[2] &= ~2ui64;
			v25[3] = v24;
			v25[2] |= 1ui64;
		}
		if (v83 != 123)
			sub_14092EC50((unsigned int**)a1, 1);
		goto LABEL_41;
	}
	v22 = *(_QWORD*)(a2 + 48);
	v23 = sub_140932450((__int64)v4, 22);
	if (!v23 || !v22)
	{
	LABEL_41:
		v80 = sub_140932570((__int64)v4);
		goto LABEL_45;
	}
	v23[2] &= ~2ui64;
	v23[2] |= 1ui64;
	v23[3] = v22;
	v80 = sub_140932570((__int64)v4);
LABEL_45:
	v3 = v82;
LABEL_46:
	v26 = v83;
	if (v83 == 123)
	{
		if (*(int*)(a2 + 64) >= 0)
		{
			sub_140932690(v4, 6, 2, 0i64, 267, v3);
			v27 = sub_140932450((__int64)v4, 23);
			sub_14091B490(v4, (__int64*)(a1 + 256), (__int64)v27);
		}
		v79 = sub_140932450((__int64)v4, 22);
		goto LABEL_69;
	}
	if (v83 == 129 || v83 == 134)
	{
		if (v19)
		{
			sub_140932690(v4, 6, 1, 0i64, 258, -8i64);
			sub_14092EC50((unsigned int**)a1, 1);
			if (*v4)
				return;
			v32 = sub_14092D590((__int64)v4, 16i64);
			v76 = v32;
			if (!v32)
				return;
			v32[1] = 0i64;
			*v32 = (__int64)sub_140931B80(v4, 0, 1, 0i64, 512, 1i64);
		}
		goto LABEL_69;
	}
	if (*v18 != 113)
	{
	LABEL_69:
		v31 = v75;
		goto LABEL_70;
	}
	sub_140932690(v4, 6, 1, 0i64, 258, -8i64);
	sub_14092EC50((unsigned int**)a1, 1);
	v28 = 1;
	do
	{
		if (v76)
		{
			if (*v4)
			{
				v10[1] = 0i64;
				v10 = 0i64;
			}
			else
			{
				v29 = sub_14092D590((__int64)v4, 16i64);
				v10[1] = (__int64)v29;
				v10 = v29;
			}
		}
		else
		{
			if (*v4)
				v10 = 0i64;
			else
				v10 = sub_14092D590((__int64)v4, 16i64);
			v76 = v10;
		}
		if (!v10)
			return;
		v10[1] = 0i64;
		*v10 = (__int64)sub_140931B80(v4, 0, 1, 0i64, 512, v28);
		v30 = v18[1];
		++v28;
		v14 = v18[v30] == 113;
		v18 += v30;
	} while (v14);
	v31 = v75;
	v26 = v83;
	v18 = (unsigned __int16*)&v75[(unsigned __int16)v75[1]];
LABEL_70:
	sub_14091DFC0(a1, *(_QWORD*)(a2 + 16));
	if (*v4)
		return;
	if (*(_QWORD*)(a2 + 24))
	{
		v33 = sub_140932570((__int64)v4);
		for (i = *(__int64**)(a2 + 24); i; i = (__int64*)i[1])
		{
			v35 = *i;
			if (*i && v33)
			{
				*(_QWORD*)(v35 + 16) &= ~2ui64;
				*(_QWORD*)(v35 + 16) |= 1ui64;
				*(_QWORD*)(v35 + 24) = v33;
			}
		}
	}
	if (v26 == 129 || v26 == 134)
	{
		v36 = v31[2];
		if ((unsigned __int16)(v36 - 119) > 3u)
		{
			if (!*(_QWORD*)(a2 + 64))
				goto LABEL_87;
			v78 = sub_140932450((__int64)v4, 22);
			v39 = sub_140932570((__int64)v4);
			v40 = *(__int64**)(a2 + 64);
		}
		else
		{
			v37 = *(_QWORD*)(a2 + 64);
			if (*(int*)(v37 + 48) >= 0 && ((v36 - 119) & 0xFFFD) == 0)
			{
				sub_140932690(v4, 6, 2, 0i64, 267, *(int*)(v37 + 52));
				v38 = sub_140932450((__int64)v4, 23);
				sub_14091B490(v4, (__int64*)(a1 + 256), (__int64)v38);
				sub_140932690(v4, 6, 267, *(int*)(v37 + 52), 258, 8i64 * *(int*)(v37 + 48));
			}
			v78 = sub_140932450((__int64)v4, 22);
			v39 = sub_140932570((__int64)v4);
			v40 = *(__int64**)(*(_QWORD*)(a2 + 64) + 40i64);
		}
		sub_140931600(v40, (__int64)v39);
	}
LABEL_87:
	if (v19)
	{
		v41 = 1;
		while (1)
		{
			*(_QWORD*)(a2 + 16) = 0i64;
			*(_QWORD*)(a2 + 24) = 0i64;
			*(_QWORD*)(a2 + 8) = 0i64;
			if (*v18 == 113)
			{
				v42 = v18 + 2;
				v18 += v18[1];
				if (v26 != 129i64 && v26 != 134i64)
				{
					if (!v82 || v26 == 123i64)
						sub_140932690(v4, 6, 6, 0i64, 258, -8i64);
					else
						sub_140932690(v4, 6, 6, 0i64, 267, v82);
				}
				sub_140925310(a1, v42, (unsigned __int64)v18, a2);
				if (*v4)
					return;
			}
			if (v26 == 123i64)
			{
				v43 = *(_DWORD*)(a2 + 64);
				if (v43 >= 0)
				{
					sub_140932A90(v4, 25, 2, 0i64, 267, v82, 512, 8i64 * (v43 + 2));
					if (v81 == 115)
						sub_140932690(v4, 6, 3, 0i64, 258, -8i64);
				}
				else
				{
					sub_140932690(v4, 6, 2, 0i64, 267, v82);
					if (v81 == 115)
					{
						sub_140932690(v4, 6, 3, 0i64, 258, 0i64);
					}
					else if (v81 == 116)
					{
						sub_140932690(v4, 6, 267, v82, 258, 0i64);
					}
				}
			}
			v44 = v26 != 123i64;
			if (v81 != 114 || v84 != 125)
				++v44;
			if (v44 > 0)
			{
				if (v26 == 123i64 && *(int*)(a2 + 64) < 0)
					sub_140932A90(v4, 25, 2, 0i64, 2, 0i64, 512, 8i64);
				else
					sub_14091B4D0(a1, v44);
			}
			v45 = 0;
			if (v81 != 114)
				break;
			if (v84 != 125)
			{
				sub_140932690(v4, 6, 258, -8i64, 512, 0i64);
			LABEL_117:
				v45 = 1;
			}
			if (v26 != 123i64)
				sub_140932690(v4, 6, 258, 8 * (-1 - v45), 512, v41++);
			if (v74)
			{
				sub_140932690(v4, 6, 1, 0i64, 267, v82);
				sub_140932690(v4, 6, 267, *(int*)(a1 + 36) + 8i64 * (v74 + 1), 6, 0i64);
				sub_140932690(v4, 6, 267, *(int*)(a1 + 36) + 8i64 * v74, 1, 0i64);
			}
			v46 = *(_QWORD*)(a2 + 40);
			v47 = sub_140932450((__int64)v4, 22);
			if (v47 && v46)
			{
				v47[2] &= ~2ui64;
				v47[2] |= 1ui64;
				v47[3] = v46;
			}
			if (v26 != 123i64)
			{
				v48 = sub_140932570((__int64)v4);
				v49 = *v76;
				if (*v76 && v48)
				{
					*(_QWORD*)(v49 + 16) &= ~2ui64;
					*(_QWORD*)(v49 + 16) |= 1ui64;
					*(_QWORD*)(v49 + 24) = v48;
				}
				v76 = (__int64*)v76[1];
			}
			sub_14091DFC0(a1, *(_QWORD*)(a2 + 16));
			if (*v4)
				return;
			if (*(_QWORD*)(a2 + 24))
			{
				v50 = sub_140932570((__int64)v4);
				for (j = *(__int64**)(a2 + 24); j; j = (__int64*)j[1])
				{
					v52 = *j;
					if (*j && v50)
					{
						*(_QWORD*)(v52 + 16) &= ~2ui64;
						*(_QWORD*)(v52 + 16) |= 1ui64;
						*(_QWORD*)(v52 + 24) = v50;
					}
				}
			}
			if (*v18 != 113)
			{
				v53 = v75;
				if (v78)
				{
					v54 = *(_QWORD*)(a2 + 64);
					if (((v75[2] - 120) & 0xFFFD) == 0 && *(int*)(v54 + 48) >= 0)
					{
						sub_140932690(v4, 6, 2, 0i64, 267, *(int*)(v54 + 52));
						v55 = sub_140932450((__int64)v4, 23);
						sub_14091B490(v4, (__int64*)(a1 + 256), (__int64)v55);
						sub_140932690(v4, 6, 267, *(int*)(v54 + 52), 258, 8i64 * *(int*)(v54 + 48));
					}
					v56 = sub_140932570((__int64)v4);
					if (v56)
					{
						v78[2] &= ~2ui64;
						v78[2] |= 1ui64;
						v78[3] = v56;
					}
				}
				v57 = v82;
				if (!v82)
					sub_14092EC50((unsigned int**)a1, 1);
				v26 = v83;
				goto LABEL_148;
			}
		}
		sub_140932690(v4, 6, 258, -8i64, 6, 0i64);
		goto LABEL_117;
	}
	v57 = v82;
	v53 = v75;
LABEL_148:
	if (v74)
	{
		if (*(_BYTE*)(((__int64)v74 >> 1) + *(_QWORD*)(a1 + 24)))
		{
			sub_140932690(v4, 6, 1, 0i64, 258, -8i64);
			sub_140932690(v4, 6, 3, 0i64, 258, -16i64);
			sub_14092EC50((unsigned int**)a1, 2);
			sub_140932690(v4, 6, 267, *(int*)(a1 + 36) + 8i64 * v74, 1, 0i64);
			sub_140932690(v4, 6, 267, *(int*)(a1 + 36) + 8i64 * (v74 + 1), 3, 0i64);
		}
		else
		{
			sub_140932690(v4, 6, 1, 0i64, 258, -8i64);
			sub_140932690(v4, 6, 3, 0i64, 258, -16i64);
			sub_140932690(v4, 6, 267, *(int*)(a1 + 36) + 8i64 * v74, 1, 0i64);
			sub_140932690(v4, 6, 1, 0i64, 258, -24i64);
			sub_14092EC50((unsigned int**)a1, 3);
			sub_140932690(v4, 6, 267, *(int*)(a1 + 36) + 8i64 * (v74 + 1), 3, 0i64);
			sub_140932690(v4, 6, 267, v57, 1, 0i64);
		}
	}
	else if (((v26 - 130) & 0xFFFFFFFB) != 0)
	{
		if (v26 == 123)
		{
			v58 = *(_DWORD*)(a2 + 64);
			v59 = &v53[(unsigned __int16)v53[1]];
			if (v58 < 0)
			{
				if (v81 == 115 || *v59 == 113 && v81 != 116)
					sub_14092EC50((unsigned int**)a1, 1);
			}
			else
			{
				if ((unsigned __int16)(v81 - 115) <= 1u || *v59 == 113)
					v60 = 2;
				else
					v60 = 1;
				sub_14092EC50((unsigned int**)a1, v60 + v58);
			}
			v61 = sub_140932570((__int64)v4);
			if (v79 && v61)
			{
				v79[2] &= ~2ui64;
				v79[2] |= 1ui64;
				v79[3] = v61;
			}
			v62 = *(int*)(a2 + 64);
			if ((int)v62 < 0)
			{
				if (v81 == 116)
				{
					sub_140932690(v4, 6, 1, 0i64, 258, -16i64);
					sub_14092EC50((unsigned int**)a1, 2);
					sub_140932690(v4, 6, 267, v57, 1, 0i64);
				LABEL_187:
					sub_140932690(v4, 6, 1, 0i64, 258, -8i64);
					if (v26 != 123)
						sub_14092EC50((unsigned int**)a1, 1);
					v68 = sub_140931B80(v4, 1, 1, 0i64, 512, 0i64);
					if (v68 && v80)
					{
						v68[2] &= ~2ui64;
						v68[2] |= 1ui64;
						v68[3] = v80;
					}
					if (v26 == 123)
					{
						LOBYTE(v5) = v84 == 141;
						sub_14092EC50((unsigned int**)a1, v5 + 1);
						return;
					}
					if (v84 == 141)
						goto LABEL_195;
					return;
				}
			}
			else
			{
				sub_140932690(v4, 6, 267, v57, 258, 8 * v62);
			}
		}
	}
	else
	{
		sub_140932690(v4, 6, 267, v57, 258, -8i64);
		sub_14092EC50((unsigned int**)a1, 1);
	}
	if (v81 != 115)
	{
		if (v81 != 116)
		{
			if (v84 == 140)
			{
				sub_140932690(v4, 6, 6, 0i64, 258, -8i64);
				v69 = *(_QWORD*)(a2 + 56);
				v70 = sub_140932450((__int64)v4, 22);
				if (v70 && v69)
				{
					v70[2] &= ~2ui64;
					v70[2] |= 1ui64;
					v70[3] = v69;
				}
				v71 = sub_140932570((__int64)v4);
				if (v77 && v71)
				{
					v77[2] &= ~2ui64;
					v77[2] |= 1ui64;
					v77[3] = v71;
				}
			}
			return;
		}
		goto LABEL_187;
	}
	sub_140932690(v4, 6, 6, 0i64, 258, -8i64);
	if (v84 != 140)
		sub_14092EC50((unsigned int**)a1, 1);
	v63 = *(_QWORD*)(a2 + 48);
	v64 = sub_140931B80(v4, 1, 6, 0i64, 512, 0i64);
	if (v64 && v63)
	{
		v64[2] &= ~2ui64;
		v64[2] |= 1ui64;
		v64[3] = v63;
	}
	if (v84 == 140)
	{
		sub_140932690(v4, 6, 6, 0i64, 258, -16i64);
		v65 = *(_QWORD*)(a2 + 56);
		v66 = sub_140932450((__int64)v4, 22);
		if (v66 && v65)
		{
			v66[2] &= ~2ui64;
			v66[2] |= 1ui64;
			v66[3] = v65;
		}
		v67 = sub_140932570((__int64)v4);
		if (v77)
		{
			if (v67)
			{
				v77[2] &= ~2ui64;
				v77[2] |= 1ui64;
				v77[3] = v67;
			}
		}
	LABEL_195:
		sub_14092EC50((unsigned int**)a1, 1);
	}
}
// 14091E579: conditional instruction was optimized away because ebp.4 is in (82..FFFF)
// 14091DFC0: using guessed type __int64 __fastcall sub_14091DFC0(_QWORD, _QWORD);

