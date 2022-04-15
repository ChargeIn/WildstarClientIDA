//----- (000000014005A040) ----------------------------------------------------
__int64 __fastcall sub_14005A040(__int64 a1, int a2, int a3)
{
	__int64 v3; // r8
	int v6; // r12d
	unsigned __int8 v7; // al
	char v8; // cl
	int v9; // r11d
	int v10; // eax
	__int64 v11; // rdx
	int v12; // ebx
	int v13; // r10d
	int v14; // esi
	unsigned int* v15; // r15
	unsigned int v16; // edx
	unsigned int v17; // r14d
	int v18; // ebp
	unsigned int v19; // edi
	int v20; // eax
	char v21; // r9
	__int64 v22; // r8
	_BYTE* v23; // rcx
	bool v25; // cc
	int v26; // eax
	int v27; // esi
	int v28; // ecx
	int v29; // r10d
	int v30; // eax
	__int64 v31; // rcx
	_DWORD* v32; // rdx
	int v33; // ecx
	__int64 v34; // [rsp+20h] [rbp-58h]
	char v35; // [rsp+80h] [rbp+8h]
	int v38; // [rsp+98h] [rbp+20h]

	v3 = *(int*)(a1 + 80);
	v6 = v3 - 1;
	v7 = *(_BYTE*)(a1 + 115);
	if (v7 > 0xFAu)
		return 0i64;
	v8 = *(_BYTE*)(a1 + 114);
	v9 = v7;
	v38 = v7;
	if (*(unsigned __int8*)(a1 + 113) + (v8 & 1) > v7)
		return 0i64;
	v35 = v8 & 4;
	if ((v8 & 4) != 0 && (v8 & 1) == 0)
		return 0i64;
	if (*(_DWORD*)(a1 + 72) > (int)*(unsigned __int8*)(a1 + 112))
		return 0i64;
	v10 = *(_DWORD*)(a1 + 84);
	if (v10 != (_DWORD)v3)
	{
		if (v10)
			return 0i64;
	}
	if ((int)v3 <= 0)
		return 0i64;
	v11 = *(_QWORD*)(a1 + 24);
	v34 = v11;
	if ((*(_BYTE*)(v11 + 4 * v3 - 4) & 0x3F) != 30)
		return 0i64;
	v12 = 0;
	if (a2 <= 0)
		return *(unsigned int*)(v11 + 4i64 * v6);
	while (2)
	{
		v13 = 0;
		v14 = 0;
		v15 = (unsigned int*)(v11 + 4i64 * v12);
		v16 = *v15;
		v17 = *v15 & 0x3F;
		v18 = (unsigned __int8)(*v15 >> 6);
		if (v17 >= 0x26 || v18 >= v9)
			return 0i64;
		v19 = (unsigned __int8)byte_140A12408[v17];
		switch (v19 & 3)
		{
		case 0u:
			v14 = (v16 >> 14) & 0x1FF;
			if (!(unsigned int)sub_140059FF0(a1, v16 >> 23, (v19 >> 4) & 3)
				|| !(unsigned int)sub_140059FF0(a1, v14, (v19 >> 2) & 3))
			{
				return 0i64;
			}
		LABEL_33:
			LODWORD(v3) = *(_DWORD*)(a1 + 80);
			break;
		case 1u:
			v13 = v16 >> 14;
			if ((v19 & 0x30) == 48 && v13 >= *(_DWORD*)(a1 + 76))
				return 0i64;
			break;
		case 2u:
			v13 = (v16 >> 14) - 0x1FFFF;
			if ((v19 & 0x30) == 32)
			{
				v20 = v13 + v12 + 1;
				if (v20 < 0 || v20 >= (int)v3)
					return 0i64;
				if (v20 > 0)
				{
					v21 = 0;
					v22 = 0i64;
					v23 = (_BYTE*)(*(_QWORD*)(a1 + 24) - 4i64 + 4i64 * v20);
					do
					{
						if ((*v23 & 0x3F) != 34)
							break;
						if ((*(_DWORD*)v23 & 0x7FC000) != 0)
							break;
						++v22;
						++v21;
						v23 -= 4;
					} while (v22 < v20);
					if ((v21 & 1) != 0)
						return 0i64;
					v9 = v38;
					goto LABEL_33;
				}
			}
			break;
		}
		if ((v19 & 0x40) != 0 && v18 == a3)
			v6 = v12;
		if ((v19 & 0x80u) != 0 && (v12 + 2 >= (int)v3 || (v15[1] & 0x3F) != 22))
			return 0i64;
		switch (v17)
		{
		case 2u:
			if (v14 == 1 && (v12 + 2 >= (int)v3 || (v15[1] & 0x3F) == 34 && (v15[1] & 0x7FC000) == 0))
				return 0i64;
			goto LABEL_98;
		case 3u:
			if (v18 <= a3 && a3 <= v13)
				v6 = v12;
			goto LABEL_98;
		case 4u:
		case 8u:
			v25 = v13 < *(unsigned __int8*)(a1 + 112);
			goto LABEL_97;
		case 5u:
		case 7u:
			if (*(_DWORD*)(*(_QWORD*)(a1 + 16) + 16i64 * v13 + 8) != 4)
				return 0i64;
			goto LABEL_98;
		case 0xBu:
			if (v18 + 1 >= v9)
				return 0i64;
			if (a3 == v18 + 1)
				v6 = v12;
			goto LABEL_98;
		case 0x15u:
			v25 = v13 < v14;
			goto LABEL_97;
		case 0x16u:
			goto LABEL_61;
		case 0x1Cu:
		case 0x1Du:
			if (v13 && v13 + v18 - 1 >= v9)
				return 0i64;
			v27 = v14 - 1;
			if (v27 == -1)
			{
				v28 = v15[1] & 0x3F;
				if ((unsigned int)(v28 - 28) > 2 && v28 != 34 || (v15[1] & 0xFF800000) != 0)
					return 0i64;
			}
			else if (v27 && v27 + v18 - 1 >= v9)
			{
				return 0i64;
			}
			if (a3 >= v18)
				v6 = v12;
		LABEL_98:
			if (++v12 < a2)
			{
				LODWORD(v3) = *(_DWORD*)(a1 + 80);
				v11 = *(_QWORD*)(a1 + 24);
				continue;
			}
			v11 = v34;
			return *(unsigned int*)(v11 + 4i64 * v6);
		case 0x1Eu:
			v29 = v13 - 1;
			if (v29 > 0)
				goto LABEL_96;
			goto LABEL_98;
		case 0x1Fu:
		case 0x20u:
			if (v18 + 3 >= v9)
				return 0i64;
		LABEL_61:
			v26 = v13 + v12 + 1;
			if (a3 != 255 && v12 < v26 && v26 <= a2)
				v12 += v13;
			goto LABEL_98;
		case 0x21u:
			if (v14 < 1 || v14 + v18 + 2 >= v9)
				return 0i64;
			if (a3 >= v18 + 2)
				v6 = v12;
			goto LABEL_98;
		case 0x22u:
			if (v13 > 0 && v13 + v18 >= v9)
				return 0i64;
			if (v14)
				goto LABEL_98;
			v25 = ++v12 < (int)v3 - 1;
		LABEL_97:
			if (v25)
				goto LABEL_98;
			return 0i64;
		case 0x24u:
			if (v13 >= *(_DWORD*)(a1 + 88))
				return 0i64;
			v30 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 8i64 * v13) + 112i64);
			if (v30 + v12 >= (int)v3)
				return 0i64;
			v31 = 1i64;
			if (!*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 8i64 * v13) + 112i64))
				goto LABEL_88;
			v32 = v15 + 1;
			do
			{
				if ((*v32 & 0x3B) != 0)
					return 0i64;
				++v31;
				++v32;
			} while (v31 <= *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 8i64 * v13) + 112i64));
		LABEL_88:
			if (a3 != 255)
				v12 += v30;
			goto LABEL_98;
		case 0x25u:
			if ((*(_BYTE*)(a1 + 114) & 2) == 0 || v35)
				return 0i64;
			v29 = v13 - 1;
			if (v29 == -1)
			{
				v33 = v15[1] & 0x3F;
				if ((unsigned int)(v33 - 28) > 2 && v33 != 34)
					return 0i64;
				if ((v15[1] & 0xFF800000) != 0)
					return 0i64;
			}
		LABEL_96:
			v25 = v29 + v18 - 1 < v9;
			goto LABEL_97;
		default:
			goto LABEL_98;
		}
	}
}
// 14005A1B3: conditional instruction was optimized away because eax.4>=1
// 14005A14B: variable 'v9' is possibly undefined
// 14005A321: variable 'v13' is possibly undefined

