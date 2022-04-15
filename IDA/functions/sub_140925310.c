#include "../winhttp.h"

//----- (0000000140925310) ----------------------------------------------------
void __fastcall sub_140925310(__int64 a1, _WORD* a2, unsigned __int64 a3, __int64 a4)
{
	unsigned int* v4; // rdi
	_WORD* v7; // rbx
	__int16 v9; // dx
	__int64 v10; // rax
	__int64* v11; // r9
	unsigned __int16* v12; // r8
	_QWORD* v13; // rax
	__int64 v14; // rax
	char* v15; // rax
	__int64 v16; // r8
	__int64* v17; // r9
	__int64 v18; // rax
	__int64 v19; // rax
	__int64* v20; // r8
	_QWORD* v21; // r8
	_QWORD* v22; // r15
	_WORD* v23; // rcx
	__int64 v24; // rax
	__int64 v25; // rax
	bool v26; // zf
	__int64 v27; // r9
	_QWORD* v28; // rax
	_QWORD* v29; // rax
	__int64 v30; // rcx
	_WORD* v31; // rax
	__int64 v32; // rcx

	if ((unsigned __int64)a2 < a3)
	{
		v4 = *(unsigned int**)a1;
		v7 = a2;
		while (1)
		{
			v9 = *v7;
			switch (*v7)
			{
			case 1:
			case 2:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 0xA:
			case 0xB:
			case 0xC:
			case 0xD:
			case 0xE:
			case 0xF:
			case 0x10:
			case 0x11:
			case 0x12:
			case 0x13:
			case 0x14:
			case 0x15:
			case 0x16:
			case 0x17:
			case 0x18:
			case 0x19:
			case 0x1A:
			case 0x1B:
			case 0x1C:
			case 0x1F:
			case 0x20:
			case 0x76:
				goto LABEL_4;
			case 3:
				if (*v4)
					v13 = 0i64;
				else
					v13 = sub_14092D590((__int64)v4, 40i64);
				if (*v4)
					return;
				*v13 = 0i64;
				v13[1] = 0i64;
				v13[2] = 0i64;
				v13[3] = 0i64;
				v13[4] = 0i64;
				*v13 = *(_QWORD*)(a4 + 16);
				v13[4] = v7;
				*(_QWORD*)(a4 + 16) = v13;
				v14 = *(int*)(a1 + 36);
				if (!*v4)
				{
					v4[26] = 0;
					v15 = sub_14092D140((__int64)v4, 1, 3, 0i64, 267, v14 + 48);
					if (v15)
						*v15 = -117;
				}
				sub_14091B4D0(a1, 1);
				if (!*v4)
				{
					v16 = *(int*)(a1 + 36) + 48i64;
					v4[26] = 0;
					sub_14092AA10(v4, 267, v16, 6, 0i64);
					if (!*v4)
					{
						v4[26] = 0;
						sub_14092AA10(v4, 258, -8i64, 3, 0i64);
					}
				}
				++v7;
				goto LABEL_70;
			case 0x1D:
			case 0x1E:
				v10 = *(_QWORD*)(a4 + 16);
				if (*(_DWORD*)(a1 + 80))
					goto LABEL_5;
				v17 = (__int64*)(v10 + 8);
				if (!v10)
					v17 = (__int64*)(a4 + 24);
				v7 = sub_140923780(a1, v7, a3, v17);
				goto LABEL_70;
			case 0x21:
			case 0x22:
			case 0x23:
			case 0x24:
			case 0x25:
			case 0x26:
			case 0x27:
			case 0x28:
			case 0x29:
			case 0x2A:
			case 0x2B:
			case 0x2C:
			case 0x2D:
			case 0x2E:
			case 0x2F:
			case 0x30:
			case 0x31:
			case 0x32:
			case 0x33:
			case 0x34:
			case 0x35:
			case 0x36:
			case 0x37:
			case 0x38:
			case 0x39:
			case 0x3A:
			case 0x3B:
			case 0x3C:
			case 0x3D:
			case 0x3E:
			case 0x3F:
			case 0x40:
			case 0x41:
			case 0x42:
			case 0x43:
			case 0x44:
			case 0x45:
			case 0x46:
			case 0x47:
			case 0x48:
			case 0x49:
			case 0x4A:
			case 0x4B:
			case 0x4C:
			case 0x4D:
			case 0x4E:
			case 0x4F:
			case 0x50:
			case 0x51:
			case 0x52:
			case 0x53:
			case 0x54:
			case 0x55:
			case 0x56:
			case 0x57:
			case 0x58:
			case 0x59:
			case 0x5A:
			case 0x5B:
			case 0x5C:
			case 0x5D:
			case 0x5E:
			case 0x5F:
			case 0x60:
			case 0x61:
				goto LABEL_27;
			case 0x6A:
			case 0x6B:
				if ((unsigned __int16)(v7[17] - 98) <= 7u)
					goto LABEL_27;
			LABEL_4:
				v10 = *(_QWORD*)(a4 + 16);
			LABEL_5:
				v11 = (__int64*)(v10 + 8);
				if (!v10)
					v11 = (__int64*)(a4 + 24);
				v12 = v7 + 1;
				goto LABEL_8;
			case 0x6C:
				v12 = v7 + 1;
				if ((unsigned __int16)(v7[(unsigned __int16)v7[1]] - 98) > 7u)
				{
					v18 = *(_QWORD*)(a4 + 16);
					v11 = (__int64*)(v18 + 8);
					if (v18)
						LABEL_8:
					v7 = sub_140921800(a1, v9, v12, v11);
					else
						v7 = sub_140921800(a1, v9, v12, (__int64*)(a4 + 24));
				}
				else
				{
				LABEL_27:
					v7 = (_WORD*)sub_1409247A0(a1, v7, a4);
				}
				goto LABEL_70;
			case 0x6D:
			case 0x6E:
				if ((unsigned __int16)(v7[2] - 98) > 7u)
				{
					v19 = *(_QWORD*)(a4 + 16);
					v20 = (__int64*)(v19 + 8);
					if (!v19)
						v20 = (__int64*)(a4 + 24);
					v7 = sub_140926FB0(a1, v7, v20, 1, 0);
				}
				else
				{
					v7 = sub_140926850((unsigned int**)a1, v7, a4);
				}
				goto LABEL_70;
			case 0x6F:
				v7 = (_WORD*)sub_1409261C0(a1, (__int64)v7, a4);
				goto LABEL_70;
			case 0x77:
			case 0x78:
			case 0x79:
			case 0x7A:
				goto LABEL_36;
			case 0x7B:
			case 0x7C:
			case 0x7D:
			case 0x7F:
			case 0x81:
			case 0x82:
			case 0x84:
			case 0x86:
				goto LABEL_53;
			case 0x7E:
			case 0x80:
			case 0x83:
			case 0x85:
			case 0x8E:
				v7 = sub_140920C40(a1, v7, a4);
				goto LABEL_70;
			case 0x8C:
				if (v7[1] <= 0x7Au)
				{
				LABEL_36:
					if (*v4)
						v21 = 0i64;
					else
						v21 = sub_14092D590((__int64)v4, 64i64);
					if (*v4)
						return;
					*v21 = 0i64;
					v21[1] = 0i64;
					v21[2] = 0i64;
					v21[3] = 0i64;
					v21[4] = 0i64;
					v21[5] = 0i64;
					v21[6] = 0i64;
					v21[7] = 0i64;
					*v21 = *(_QWORD*)(a4 + 16);
					v21[4] = v7;
					*(_QWORD*)(a4 + 16) = v21;
					v7 = sub_14091D1B0(a1, v7, (__int64)v21, 0);
				}
				else
				{
				LABEL_53:
					v7 = sub_14091F420(a1, v7, a4);
				}
			LABEL_70:
				if (!v7 || (unsigned __int64)v7 >= a3)
					return;
				break;
			case 0x8D:
				if (*v4)
					v22 = 0i64;
				else
					v22 = sub_14092D590((__int64)v4, 48i64);
				if (*v4)
					return;
				v23 = v7 + 1;
				*v22 = 0i64;
				v22[1] = 0i64;
				v22[2] = 0i64;
				v22[3] = 0i64;
				v22[4] = 0i64;
				v22[5] = 0i64;
				v24 = *(_QWORD*)(a4 + 16);
				v22[4] = v7;
				*v22 = v24;
				*(_QWORD*)(a4 + 16) = v22;
				do
				{
					v25 = (unsigned __int16)v23[1];
					v26 = v23[v25] == 113;
					v23 += v25;
				} while (v26);
				v7 = v23 + 2;
				if (*v23 == 116)
				{
					sub_14091B4D0(a1, 2);
					sub_140932690(v4, 6, 258, -8i64, 512, 0i64);
					v27 = -16i64;
				}
				else
				{
					sub_14091B4D0(a1, 1);
					v27 = -8i64;
				}
				sub_140932690(v4, 6, 258, v27, 6, 0i64);
				v22[5] = sub_140932570((__int64)v4);
				if (v7[1] > 0x7Au)
					sub_140928600(a1);
				goto LABEL_70;
			case 0x8F:
				if (*v4)
					v28 = 0i64;
				else
					v28 = sub_14092D590((__int64)v4, 40i64);
				if (*v4)
					return;
				*v28 = 0i64;
				v28[1] = 0i64;
				v28[2] = 0i64;
				v28[3] = 0i64;
				v28[4] = 0i64;
				*v28 = *(_QWORD*)(a4 + 16);
				v28[4] = v7;
				*(_QWORD*)(a4 + 16) = v28;
				sub_140932690(v4, 6, 3, 0i64, 267, *(int*)(a1 + 60));
				sub_14091B4D0(a1, 1);
				sub_140932690(v4, 6, 1, 0i64, 9, 0i64);
				sub_140932690(v4, 6, 258, -8i64, 3, 0i64);
				sub_140932690(v4, 6, 3, 0i64, 512, (__int64)(v7 + 2));
				sub_140932690(v4, 6, 267, *(int*)(a1 + 60), 3, 0i64);
				sub_140932690(v4, 6, 257, 48i64, 3, 0i64);
				v7 += (unsigned __int16)v7[1] + 3;
				goto LABEL_70;
			case 0x96:
				if (*v4)
					v29 = 0i64;
				else
					v29 = sub_14092D590((__int64)v4, 40i64);
				if (*v4)
					return;
				*v29 = 0i64;
				v29[1] = 0i64;
				v29[2] = 0i64;
				v29[3] = 0i64;
				v29[4] = 0i64;
				v30 = *(_QWORD*)(a4 + 16);
				v29[4] = v7;
				*v29 = v30;
				++v7;
				*(_QWORD*)(a4 + 16) = v29;
				goto LABEL_70;
			case 0x97:
			case 0x98:
			case 0x99:
				v7 = sub_140923AF0(a1, v7, a4);
				goto LABEL_70;
			case 0x9A:
				v7 = (_WORD*)sub_1409239D0(a1, (__int64)v7);
				goto LABEL_70;
			case 0x9B:
				v31 = v7 + 1;
				do
				{
					v32 = (unsigned __int16)v31[1];
					v26 = v31[v32] == 113;
					v31 += v32;
				} while (v26);
				v7 = v31 + 2;
				goto LABEL_70;
			default:
				return;
			}
		}
	}
}

