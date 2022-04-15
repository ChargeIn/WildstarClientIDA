#include "../winhttp.h"

//----- (000000014092D9C0) ----------------------------------------------------
__int64 __fastcall sub_14092D9C0(__int64 a1, int a2)
{
	__int64 v2; // r8
	unsigned int* v3; // rsi
	unsigned __int16* v6; // r9
	int v7; // edi
	__int64 v9; // rbx
	int v10; // edx
	int v11; // ebp
	int v12; // ecx
	int v13; // r11d
	__int64 v14; // r8
	bool v15; // cc
	int v16; // eax
	int v17; // r8d
	int v18; // eax
	int v19; // r8d
	int v20; // edx
	int v21; // eax
	char* v22; // rax
	__int64 v23; // r14
	_QWORD* v24; // rbp
	_QWORD* v25; // rbx
	_QWORD* v26; // rax
	_QWORD* v27; // rax
	_QWORD* v28; // rax
	_QWORD* v29; // rax
	unsigned int v30; // [rsp+40h] [rbp-48h]
	int v31[2]; // [rsp+44h] [rbp-44h]
	unsigned int v32; // [rsp+4Ch] [rbp-3Ch]
	unsigned int v33; // [rsp+50h] [rbp-38h]
	unsigned int v34; // [rsp+54h] [rbp-34h]

	v2 = *(_QWORD*)(a1 + 8);
	v3 = *(unsigned int**)a1;
	v6 = (unsigned __int16*)(v2 + 4);
	v7 = 0;
	if (*(_WORD*)(v2 + 2i64 * *(unsigned __int16*)(v2 + 2)) == 113)
		return 0i64;
	v9 = 0i64;
	while (2)
	{
		v10 = 0;
		v11 = 1;
		switch (*v6)
		{
		case 1u:
		case 2u:
		case 3u:
		case 4u:
		case 5u:
		case 0x17u:
		case 0x18u:
		case 0x19u:
		case 0x1Au:
		case 0x1Bu:
		case 0x1Cu:
			++v6;
			continue;
		case 0x1Du:
			v11 = 0;
			goto LABEL_6;
		case 0x1Eu:
			v10 = 1;
			++v6;
			v11 = 0;
			goto LABEL_12;
		case 0x23u:
		case 0x24u:
		case 0x2Bu:
		LABEL_6:
			++v6;
			goto LABEL_12;
		case 0x29u:
			goto LABEL_11;
		case 0x30u:
		case 0x31u:
		case 0x38u:
			v10 = 1;
			++v6;
			goto LABEL_12;
		case 0x36u:
			v10 = 1;
		LABEL_11:
			v6 += 2;
		LABEL_12:
			v12 = *(_DWORD*)(a1 + 316);
			v13 = 1;
			if (v12 && (*v6 & 0xFC00) == 0xD800)
				v13 = 2;
			if (!v10)
				goto LABEL_28;
			if (v12)
			{
				v14 = *v6;
				if ((*v6 & 0xFC00) == 55296)
					v14 = (((v14 & 0x3FF) << 10) | v6[1] & 0x3FF) + 0x10000;
				v15 = (unsigned int)v14 <= 0x7F;
			}
			else
			{
				v14 = *v6;
				v15 = (unsigned int)v14 <= 0xFF;
			}
			if (v15 && *(unsigned __int8*)(*(_QWORD*)(a1 + 64) + v14) != (_DWORD)v14)
			{
				v16 = sub_14091B900(a1, v6);
				if (!v16)
					return 0i64;
				v17 = v13 - (v16 >> 9);
				if ((v16 & 0x100) != 0)
					v18 = (unsigned __int8)v16 << 16;
				else
					v18 = (unsigned __int8)v16 << 8;
				v19 = v18 | v17;
			}
			else
			{
			LABEL_28:
				v19 = 0;
			}
			if (v13 <= 0)
			{
			LABEL_34:
				if (v9 >= 6 || v11)
					goto LABEL_36;
				continue;
			}
			while (v9 < 6)
			{
				v20 = *v6;
				v21 = 0;
				if (v13 == (unsigned __int8)v19)
				{
					v21 = v19 >> 8;
					v20 |= v19 >> 8;
				}
				--v13;
				v31[v9 - 1] = v20;
				v31[v9] = v21;
				v7 += 2;
				v9 += 2i64;
				++v6;
				if (v13 <= 0)
					goto LABEL_34;
			}
		LABEL_36:
			if (v7 < 4)
				return 0i64;
			if (a2)
			{
				if (!*v3)
				{
					v3[26] = 0;
					v22 = sub_14092D140((__int64)v3, 1, 7, 0i64, 5, 0i64);
					if (v22)
						*v22 = -119;
				}
				v23 = (v7 >> 1) - 1;
				sub_140932A90(v3, 27, 7, 0i64, 267, *(int*)(a1 + 56), 512, v23);
			}
			else
			{
				v23 = (v7 >> 1) - 1;
				sub_140932A90(v3, 27, 7, 0i64, 7, 0i64, 512, v23);
			}
			v24 = sub_140932570((__int64)v3);
			v25 = sub_140931B80(v3, 3, 6, 0i64, 7, 0i64);
			sub_140932690(v3, 9, 1, 0i64, 262, 0i64);
			sub_140932690(v3, 9, 3, 0i64, 262, 2i64);
			sub_140932A90(v3, 25, 6, 0i64, 6, 0i64, 512, 2i64);
			if (v31[0])
				sub_140932A90(v3, 31, 1, 0i64, 1, 0i64, 512, (unsigned int)v31[0]);
			v26 = sub_140931B80(v3, 1, 1, 0i64, 512, v30);
			if (v26 && v24)
			{
				v26[2] &= ~2ui64;
				v26[2] |= 1ui64;
				v26[3] = v24;
			}
			if (v7 > 4)
				sub_140932690(v3, 9, 1, 0i64, 262, 2i64);
			if (v32)
				sub_140932A90(v3, 31, 3, 0i64, 3, 0i64, 512, v32);
			v27 = sub_140931B80(v3, 1, 3, 0i64, 512, (unsigned int)v31[1]);
			if (v27 && v24)
			{
				v27[2] &= ~2ui64;
				v27[2] |= 1ui64;
				v27[3] = v24;
			}
			if (v7 > 4)
			{
				if (v34)
					sub_140932A90(v3, 31, 1, 0i64, 1, 0i64, 512, v34);
				v28 = sub_140931B80(v3, 1, 1, 0i64, 512, v33);
				if (v28 && v24)
				{
					v28[2] &= ~2ui64;
					v28[2] |= 1ui64;
					v28[3] = v24;
				}
			}
			sub_140932A90(v3, 27, 6, 0i64, 6, 0i64, 512, 2i64);
			v29 = sub_140932570((__int64)v3);
			if (v25 && v29)
			{
				v25[2] &= ~2ui64;
				v25[2] |= 1ui64;
				v25[3] = v29;
			}
			if (a2)
			{
				if (!*v3)
				{
					v3[26] = 0;
					sub_14092AA10(v3, 7, 0i64, 5, 0i64);
				}
			}
			else
			{
				sub_140932A90(v3, 25, 7, 0i64, 7, 0i64, 512, v23);
			}
			return 1i64;
		default:
			goto LABEL_36;
		}
	}
}
// 14092DA40: variable 'v6' is possibly undefined
// 14092DB4F: variable 'v13' is possibly undefined

