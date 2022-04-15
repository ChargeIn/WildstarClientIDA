#include "../winhttp.h"

//----- (0000000140923E20) ----------------------------------------------------
void __fastcall sub_140923E20(__int64 a1, __int64 a2)
{
	_WORD* v2; // rdi
	__int64 v3; // rax
	unsigned int* v4; // rsi
	__int64 v6; // r8
	int v7; // r12d
	int v9; // ebx
	int v10; // r8d
	int v11; // edx
	__int16 v12; // bp
	__int16 v13; // r15
	__int16 v14; // ax
	unsigned __int16* v15; // rcx
	unsigned __int16* v16; // rdi
	int v17; // eax
	__int64 v18; // rbx
	__int64 v19; // r15
	_QWORD* v20; // rdi
	__int64 v21; // r15
	_QWORD* v22; // rax
	_QWORD* v23; // rax
	_QWORD* v24; // rax
	bool v25; // zf
	_QWORD* v26; // rax
	_QWORD* v27; // rax
	__int64* v28; // rcx
	_QWORD* i; // rdx
	__int64 v30; // rax
	char* v31; // rax
	__int64 v32; // rbx
	_QWORD* v33; // rax
	__int64 v34; // rbx
	__int64 v35; // rbx
	_QWORD* v36; // rax
	_QWORD* v37; // rax
	_QWORD* v38; // rax
	__int64* v39; // rcx
	_QWORD* v40; // rax
	__int64 v41; // rcx
	int v42; // eax
	__int64 v43; // rbx
	_QWORD* v44; // rax
	_QWORD* v45; // rax
	__int64 v46; // rdi
	__int64 v47; // rbx
	_QWORD* v48; // rax
	_QWORD* v49; // rbx
	_QWORD* v50; // rax
	__int64 v51; // rdi
	_QWORD* v52; // rax
	_QWORD* v53; // rax
	__int64 v54; // rbx
	__int64 v55; // rdi
	_QWORD* v56; // rax
	_QWORD* v57; // rax
	int v58; // [rsp+40h] [rbp-68h]
	__int64* v59; // [rsp+48h] [rbp-60h] BYREF
	_QWORD* v60; // [rsp+50h] [rbp-58h]
	int v61; // [rsp+B0h] [rbp+8h]
	int v62; // [rsp+B8h] [rbp+10h]
	int v63; // [rsp+C0h] [rbp+18h]
	int v64; // [rsp+C8h] [rbp+20h]

	v2 = *(_WORD**)(a2 + 32);
	v3 = *(_QWORD*)(a1 + 16);
	v4 = *(unsigned int**)a1;
	v64 = -1;
	v63 = -1;
	v6 = (__int64)v2 - *(_QWORD*)(a1 + 8);
	v59 = 0i64;
	v7 = 267;
	v60 = 0i64;
	v9 = *(_DWORD*)(v3 + 4 * (v6 >> 1));
	v10 = -16;
	v11 = v9;
	v61 = v9;
	if (!v9)
		v7 = 258;
	if (!v9)
		v11 = -8;
	v62 = v11;
	if (v9)
		v10 = v9 + 8;
	v12 = *v2;
	v58 = v10;
	if ((unsigned __int16)(*v2 - 33) > 0xCu)
	{
		if ((unsigned __int16)(v12 - 46) > 0xCu)
		{
			if ((unsigned __int16)(v12 - 59) > 0xCu)
			{
				if ((unsigned __int16)(v12 - 72) > 0xCu)
				{
					if ((unsigned __int16)(v12 - 85) > 0xCu)
					{
						v16 = v2 + 1;
						v13 = v12;
						v17 = 17;
						if ((unsigned __int16)v12 >= 0x6Cu)
							v17 = *v16;
						v12 = v16[v17 - 1];
						if ((unsigned __int16)(v12 - 98) > 5u)
						{
							v64 = v16[v17 + 1];
							v63 = v16[v17];
							if (!v16[v17])
								v12 = (v12 != 104) + 39;
							if (v16[v17 + 1] == v16[v17])
								v12 = 41;
						}
						else
						{
							v12 -= 65;
						}
						goto LABEL_31;
					}
					v14 = -52;
					v13 = 0;
				}
				else
				{
					v14 = -39;
					v13 = 32;
				}
			}
			else
			{
				v14 = -26;
				v13 = 31;
			}
		}
		else
		{
			v14 = -13;
			v13 = 30;
		}
		v12 += v14;
	}
	else
	{
		v13 = 29;
	}
	v15 = v2 + 1;
	v16 = v2 + 1;
	if ((unsigned __int16)(v12 - 39) <= 2u || v12 == 45)
	{
		v16 = v15 + 1;
		v64 = *v15;
	}
	if (!v13)
		v13 = *v16++;
LABEL_31:
	switch (v12)
	{
	case '!':
	case '#':
	case '\'':
	case 'h':
		if (v13 != 17 && v13 != 22)
		{
			if (v12 == 39)
			{
				v63 = 0;
			}
			else if ((unsigned __int16)v12 <= 0x23u)
			{
				v19 = v11;
				sub_140932690(v4, 6, 6, 0i64, v7, v11);
				v20 = sub_140931B80(v4, 5, 6, 0i64, v7, v58);
			LABEL_37:
				sub_1409318F0(a1);
				sub_140932690(v4, 6, v7, v19, 6, 0i64);
				v21 = *(_QWORD*)(a2 + 40);
				v22 = sub_140932450((__int64)v4, 22);
				if (v22 && v21)
				{
					v22[2] &= ~2ui64;
					v22[2] |= 1ui64;
					v22[3] = v21;
				}
				if (v12 == 104)
				{
					v23 = sub_140932570((__int64)v4);
					sub_140931600(*(__int64**)(a2 + 24), (__int64)v23);
				}
				v24 = sub_140932570((__int64)v4);
				if (v20 && v24)
				{
					v20[2] &= ~2ui64;
					v20[2] |= 1ui64;
					v20[3] = v24;
				}
				if (!v9)
					sub_14092EC50((unsigned int**)a1, 2);
				v25 = v12 == 35;
				goto LABEL_48;
			}
			v18 = v10;
			sub_140932690(v4, 6, 1, 0i64, v7, v10);
			v19 = v62;
			sub_140932690(v4, 6, 6, 0i64, v7, v62);
			v20 = sub_140931B80(v4, 5, 1, 0i64, 512, v63 + 1);
			sub_140932A90(v4, 27, v7, v18, 1, 0i64, 512, 1i64);
			v9 = v61;
			goto LABEL_37;
		}
		v27 = sub_140932570((__int64)v4);
		v28 = *(__int64**)(a2 + 24);
		for (i = v27; v28; v28 = (__int64*)v28[1])
		{
			v30 = *v28;
			if (*v28 && i)
			{
				*(_QWORD*)(v30 + 16) &= ~2ui64;
				*(_QWORD*)(v30 + 16) |= 1ui64;
				*(_QWORD*)(v30 + 24) = i;
			}
		}
		if (!*v4)
		{
			v4[26] = 0;
			v31 = sub_14092D140((__int64)v4, 1, 6, 0i64, 258, -8i64);
			if (v31)
				*v31 = -117;
		}
		sub_14092EC50((unsigned int**)a1, 1);
		v32 = *(_QWORD*)(a2 + 40);
		v33 = sub_140931B80(v4, 1, 6, 0i64, 512, 0i64);
		if (v33 && v32)
		{
			v33[2] &= ~2ui64;
			v33[2] |= 1ui64;
			v33[3] = v32;
		}
		return;
	case '"':
	case '$':
		v34 = v11;
		sub_140932690(v4, 6, 6, 0i64, v7, v11);
		sub_140921800(a1, v13, v16, (__int64*)&v59);
		sub_140932690(v4, 6, v7, v34, 6, 0i64);
		v35 = *(_QWORD*)(a2 + 40);
		v36 = sub_140932450((__int64)v4, 22);
		if (v36 && v35)
		{
			v36[2] &= ~2ui64;
			v36[2] |= 1ui64;
			v36[3] = v35;
		}
		v37 = sub_140932570((__int64)v4);
		sub_140931600(v59, (__int64)v37);
		if (!v61)
			sub_14092EC50((unsigned int**)a1, 1);
		v25 = v12 == 36;
	LABEL_48:
		if (v25)
			goto LABEL_49;
		return;
	case '%':
		v46 = v11;
		sub_140932690(v4, 6, 6, 0i64, v7, v11);
		sub_140932690(v4, 6, v7, v46, 512, 0i64);
		v47 = *(_QWORD*)(a2 + 40);
		v48 = sub_140931B80(v4, 1, 6, 0i64, 512, 0i64);
		if (v48 && v47)
		{
			v48[2] &= ~2ui64;
			v48[2] |= 1ui64;
			v48[3] = v47;
		}
		v49 = sub_140932450((__int64)v4, 22);
		v50 = sub_140932570((__int64)v4);
		sub_140931600(*(__int64**)(a2 + 24), (__int64)v50);
		sub_140932690(v4, 6, 6, 0i64, v7, v46);
		sub_140932690(v4, 6, v7, v46, 512, 0i64);
		v51 = *(_QWORD*)(a2 + 40);
		v52 = sub_140932450((__int64)v4, 22);
		if (v52 && v51)
		{
			v52[2] &= ~2ui64;
			v52[2] |= 1ui64;
			v52[3] = v51;
		}
		goto LABEL_91;
	case '&':
		v54 = v11;
		sub_140932690(v4, 6, 6, 0i64, v7, v11);
		sub_140932690(v4, 6, v7, v54, 512, 0i64);
		v49 = sub_140931B80(v4, 0, 6, 0i64, 512, 0i64);
		sub_140921800(a1, v13, v16, (__int64*)&v59);
		v55 = *(_QWORD*)(a2 + 40);
		v56 = sub_140932450((__int64)v4, 22);
		if (v56 && v55)
		{
			v56[2] &= ~2ui64;
			v56[2] |= 1ui64;
			v56[3] = v55;
		}
		v57 = sub_140932570((__int64)v4);
		sub_140931600(v59, (__int64)v57);
	LABEL_91:
		v53 = sub_140932570((__int64)v4);
		if (v49 && v53)
		{
			v49[2] &= ~2ui64;
			v49[2] |= 1ui64;
			v49[3] = v53;
		}
		if (!v61)
			sub_14092EC50((unsigned int**)a1, 1);
		return;
	case '(':
	case 'i':
		if (v12 == 105)
		{
			v38 = sub_140932570((__int64)v4);
			v39 = *(__int64**)(a2 + 24);
			v60 = v38;
			sub_140931600(v39, (__int64)v38);
		}
		sub_140932690(v4, 6, 6, 0i64, v7, v62);
		sub_140921800(a1, v13, v16, (__int64*)&v59);
		sub_140932690(v4, 6, 1, 0i64, v7, v58);
		sub_140932690(v4, 6, v7, v62, 6, 0i64);
		sub_140932A90(v4, 25, 1, 0i64, 1, 0i64, 512, 1i64);
		sub_140932690(v4, 6, v7, v58, 1, 0i64);
		if (v12 == 105)
		{
			v40 = sub_140931B80(v4, 2, 1, 0i64, 512, v63 + 1);
			if (v40)
			{
				v41 = (__int64)v60;
				if (v60)
				{
					v40[2] &= ~2ui64;
					v40[2] |= 1ui64;
					v40[3] = v41;
				}
			}
			v42 = v64;
			if (!v64)
			{
				v43 = *(_QWORD*)(a2 + 40);
				v44 = sub_140932450((__int64)v4, 22);
				goto LABEL_80;
			}
		}
		else
		{
			v42 = v64;
		}
		v43 = *(_QWORD*)(a2 + 40);
		v44 = sub_140931B80(v4, 2, 1, 0i64, 512, v42 + 2);
	LABEL_80:
		if (v44 && v43)
		{
			v44[2] &= ~2ui64;
			v44[3] = v43;
			v44[2] |= 1ui64;
		}
		v45 = sub_140932570((__int64)v4);
		sub_140931600(v59, (__int64)v45);
		if (!v61)
			sub_14092EC50((unsigned int**)a1, 2);
		return;
	case ')':
	case '+':
	LABEL_49:
		v26 = sub_140932570((__int64)v4);
		sub_140931600(*(__int64**)(a2 + 24), (__int64)v26);
		return;
	default:
		return;
	}
}

