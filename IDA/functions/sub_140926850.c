#include "../winhttp.h"

//----- (0000000140926850) ----------------------------------------------------
_WORD* __fastcall sub_140926850(unsigned int** a1, _WORD* a2, __int64 a3)
{
	unsigned int* v3; // rbx
	_QWORD* v4; // r13
	int v5; // r15d
	int v6; // r14d
	_WORD* v8; // rdi
	_QWORD* v10; // rsi
	_WORD* result; // rax
	__int64 v12; // rax
	__int16 v13; // bp
	_QWORD* v14; // rbp
	_QWORD* v15; // r13
	char* v16; // rax
	_QWORD* v17; // rax
	_QWORD* v18; // r15
	_QWORD* v19; // rax
	_QWORD* v20; // rax
	_QWORD* v21; // rax
	_QWORD* v22; // rax
	_QWORD* v23; // rbp
	_QWORD* v24; // rax
	__int64 v25; // rsi
	_QWORD* v26; // rax
	_QWORD* v27; // rax
	_QWORD* v28; // rax

	v3 = *a1;
	v4 = 0i64;
	v5 = 0;
	v6 = 0;
	v8 = a2;
	if (**a1)
		v10 = 0i64;
	else
		v10 = sub_14092D590((__int64)v3, 48i64);
	result = 0i64;
	if (!*v3)
	{
		*v10 = 0i64;
		v10[1] = 0i64;
		v10[2] = 0i64;
		v10[3] = 0i64;
		v10[4] = 0i64;
		v10[5] = 0i64;
		v12 = *(_QWORD*)(a3 + 16);
		v10[4] = v8;
		*v10 = v12;
		*(_QWORD*)(a3 + 16) = v10;
		v13 = v8[2];
		switch (v13)
		{
		case 'b':
		case 'c':
			v8 += 3;
			break;
		case 'd':
		case 'e':
			v5 = 1;
			v8 += 3;
			break;
		case 'f':
		case 'g':
			v6 = 1;
			v8 += 3;
			break;
		case 'h':
		case 'i':
			v5 = (unsigned __int16)v8[3];
			v6 = (unsigned __int16)v8[4];
			v8 += 5;
			break;
		default:
			break;
		}
		if ((v13 & 1) != 0)
		{
			sub_14091B4D0((__int64)a1, 2);
			sub_140932690(v3, 6, 258, -8i64, 512, 0i64);
			if (v13 != 99)
				sub_140932690(v3, 6, 258, -16i64, 512, 0i64);
			if (v5)
			{
				v23 = sub_140926490((__int64)a1, (__int64)a2, v10 + 3);
			}
			else
			{
				v23 = sub_140926490((__int64)a1, (__int64)a2, 0i64);
				sub_140932690(v3, 6, 258, -8i64, 6, 0i64);
				v4 = sub_140932450((__int64)v3, 22);
			}
			v10[5] = sub_140932570((__int64)v3);
			if (v6 > 0)
			{
				v24 = sub_140931B80(v3, 3, 258, -16i64, 512, v6);
				sub_14091B490(v3, v10 + 3, (__int64)v24);
			}
			sub_140926FB0((__int64)a1, a2, v10 + 3, 1, 1);
			sub_140932690(v3, 6, 258, -8i64, 6, 0i64);
			if (v5 <= 1)
			{
				if (v6 > 0)
					sub_140932A90(v3, 25, 258, -16i64, 258, -16i64, 512, 1i64);
			}
			else
			{
				sub_140932690(v3, 6, 1, 0i64, 258, -16i64);
				sub_140932A90(v3, 25, 1, 0i64, 1, 0i64, 512, 1i64);
				sub_140932690(v3, 6, 258, -16i64, 1, 0i64);
				v25 = v10[5];
				v26 = sub_140931B80(v3, 2, 1, 0i64, 512, v5);
				if (v26 && v25)
				{
					v26[2] &= ~2ui64;
					v26[2] |= 1ui64;
					v26[3] = v25;
				}
			}
			if (v4)
			{
				v27 = sub_140932570((__int64)v3);
				if (v27)
				{
					v4[2] &= ~2ui64;
					v4[2] |= 1ui64;
					v4[3] = v27;
				}
			}
			v28 = sub_140932570((__int64)v3);
			if (v23 && v28)
			{
				v23[2] &= ~2ui64;
				v23[2] |= 1ui64;
				v23[3] = v28;
			}
			goto LABEL_65;
		}
		if (v5)
		{
			sub_14091B4D0((__int64)a1, 1);
			if (!*v3)
			{
				v3[26] = 0;
				sub_14092AA10(v3, 258, -8i64, 512, 0i64);
			}
			v14 = sub_140926490((__int64)a1, (__int64)a2, v10 + 3);
			if (v5 > 1)
				goto LABEL_20;
		}
		else
		{
			sub_14091B4D0((__int64)a1, 2);
			if (!*v3)
			{
				v3[26] = 0;
				sub_14092AA10(v3, 258, -8i64, 6, 0i64);
				if (!*v3)
				{
					v3[26] = 0;
					sub_14092AA10(v3, 258, -16i64, 512, 0i64);
				}
			}
			sub_140932A90(v3, 27, 2, 0i64, 2, 0i64, 512, 8i64);
			v14 = sub_140926490((__int64)a1, (__int64)a2, 0i64);
			sub_140932A90(v3, 25, 2, 0i64, 2, 0i64, 512, 8i64);
		}
		if (v6 <= 1)
		{
		LABEL_22:
			v15 = sub_140932570((__int64)v3);
			sub_140926FB0((__int64)a1, a2, v10 + 3, 0, 0);
			if (v5 > 1 || v6 > 1)
			{
				if (!*v3)
				{
					v3[26] = 0;
					v16 = sub_14092D140((__int64)v3, 1, 1, 0i64, 267, 64i64);
					if (v16)
						*v16 = -117;
				}
				sub_140932A90(v3, 25, 1, 0i64, 1, 0i64, 512, 1i64);
				sub_140932690(v3, 6, 267, 16i64, 1, 0i64);
				if (v5 > 1)
				{
					v17 = sub_140931B80(v3, 2, 1, 0i64, 512, v5);
					if (v17)
					{
						if (v15)
						{
							v17[2] &= ~2ui64;
							v17[2] |= 1ui64;
							v17[3] = v15;
						}
					}
				}
				if (v6 > 1)
				{
					v18 = sub_140931B80(v3, 3, 1, 0i64, 512, v6);
					sub_14091B4D0((__int64)a1, 1);
					sub_140932690(v3, 6, 258, -8i64, 6, 0i64);
					v19 = sub_140932450((__int64)v3, 22);
					if (v19 && v15)
					{
						v19[2] &= ~2ui64;
						v19[2] |= 1ui64;
						v19[3] = v15;
					}
					v20 = sub_140932570((__int64)v3);
					if (v18 && v20)
					{
						v18[2] &= ~2ui64;
						v18[2] |= 1ui64;
						v18[3] = v20;
					}
				}
			}
			if (!v6)
			{
				sub_14091B4D0((__int64)a1, 1);
				sub_140932690(v3, 6, 258, -8i64, 6, 0i64);
				v21 = sub_140932450((__int64)v3, 22);
				if (v21)
				{
					if (v15)
					{
						v21[2] &= ~2ui64;
						v21[2] |= 1ui64;
						v21[3] = v15;
					}
				}
			}
			v22 = sub_140932570((__int64)v3);
			if (v14)
			{
				if (v22)
				{
					v14[2] &= ~2ui64;
					v14[2] |= 1ui64;
					v14[3] = v22;
				}
			}
			v10[5] = sub_140932570((__int64)v3);
		LABEL_65:
			sub_140928600((__int64)a1);
			return v8;
		}
	LABEL_20:
		if (!*v3)
		{
			v3[26] = 0;
			sub_14092AA10(v3, 267, 64i64, 512, 0i64);
		}
		goto LABEL_22;
	}
	return result;
}

