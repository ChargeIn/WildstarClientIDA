//----- (0000000140567AF0) ----------------------------------------------------
__int64 __fastcall sub_140567AF0(__int64 a1, unsigned int a2)
{
	float* v3; // rbx
	__int64 v4; // rax
	int v5; // edx
	unsigned int v7; // r8d
	unsigned int v8; // eax
	unsigned int v9; // ecx
	__int64 v10; // rax
	__int64 v11; // rax
	int v12; // r8d
	int v13; // edx
	int v14; // r11d
	int v15; // r10d
	int v16; // r9d
	float* v17; // rax
	unsigned __int64 v18; // rcx
	int v19; // edx
	int v20; // ecx
	float v21; // xmm1_4
	float v22; // xmm2_4
	int v23; // edx
	int v24; // edx
	__int64 v25; // rax
	_DWORD* v26; // rcx
	int v27; // ecx
	float v28; // xmm1_4
	float v29; // xmm1_4

	v3 = (float*)sub_140238780(a2);
	v4 = sub_14023E0C0(*((_DWORD*)v3 + 3));
	if (!v4)
		return 103i64;
	v5 = *(_DWORD*)(v4 + 4);
	if ((v5 & 1) == 0)
		return 103i64;
	if (!*((_DWORD*)v3 + 2))
		return 7i64;
	v7 = *((_DWORD*)v3 + 5);
	if (v7 > 0x36EE80)
		return 8i64;
	v8 = *((_DWORD*)v3 + 7);
	if (v8 > 0x240C8400)
		return 11i64;
	v9 = *((_DWORD*)v3 + 6);
	if (v9 && (v5 & 4) == 0)
		return 105i64;
	if (((_DWORD)v3[8] & 2) != 0)
	{
		if ((v5 & 0x10) == 0)
			return 107i64;
		if (v8)
			return 11i64;
	}
	else
	{
		if (v8 && (v5 & 8) == 0 && !v9)
			return 106i64;
		if (v9 > v8)
			return 9i64;
	}
	if (v7 || v8 && *((_DWORD*)v3 + 3) != 4 || ((_DWORD)v3[8] & 2) != 0)
	{
		v10 = sub_1407A0FD0(a1, *((_DWORD*)v3 + 1));
		if (v10)
		{
			if (!*(_DWORD*)(*(_QWORD*)(v10 + 112) + 288i64))
				return 12i64;
		}
	}
	if ((unsigned int)(*((_DWORD*)v3 + 6) - 1) <= 0xF8 && *((_DWORD*)v3 + 7))
		return 9i64;
	if (*((_DWORD*)v3 + 21) && *((_DWORD*)v3 + 19) > 0x1Fu || *((_DWORD*)v3 + 22) && *((_DWORD*)v3 + 20) > 0x1Fu)
		return 10i64;
	switch (*((_DWORD*)v3 + 3))
	{
	case 1:
		if ((unsigned int)(*((_DWORD*)v3 + 9) - 1) > 0x1D)
			return 17i64;
		v12 = *((_DWORD*)v3 + 10);
		v13 = *((_DWORD*)v3 + 11);
		if (v12 > v13)
			return 18i64;
		v14 = *((_DWORD*)v3 + 12);
		v15 = *((_DWORD*)v3 + 13);
		if (v14 > v15)
			return 18i64;
		v16 = 0;
		v17 = v3 + 36;
		v18 = 0i64;
		break;
	case 2:
		if (*((_DWORD*)v3 + 12))
			return 0i64;
		return 16i64;
	case 3:
		v20 = *((_DWORD*)v3 + 9);
		v21 = v3[10];
		v22 = v3[11];
		if (v20 >= 16)
			return 22i64;
		if ((unsigned int)(v20 - 8) > 2 && v20 != 15)
		{
			v23 = *((_DWORD*)v3 + 10);
			if (v21 < 0.0)
				v23 = 0x80000000 - LODWORD(v21);
			if ((int)abs32(v23) <= 84)
			{
				v24 = *((_DWORD*)v3 + 11);
				if (v22 < 0.0)
					v24 = 0x80000000 - LODWORD(v22);
				if ((int)abs32(v24) <= 84)
					return 23i64;
			}
		}
		if (v21 <= v22)
			return 0i64;
		return 24i64;
	case 4:
		if (*((_DWORD*)v3 + 9) < 0x1Cu)
			return 0i64;
		return 36i64;
	case 5:
	case 8:
	case 0xC:
	case 0x21:
	case 0x8A:
		if ((unsigned int)(*((_DWORD*)v3 + 4) - 1) <= 2)
			return 0i64;
		return 21i64;
	case 7:
		v25 = sub_1407A0FD0(a1, *((_DWORD*)v3 + 1));
		if (!v25)
			return 0i64;
		v26 = *(_DWORD**)(v25 + 56);
		if (!v26)
			return 0i64;
		if (*v26 >= 0x3E8u)
			return 0i64;
		v27 = *(_DWORD*)(*(_QWORD*)(v25 + 112) + 124i64);
		if ((unsigned int)(v27 - 2) > 3 && (unsigned int)(v27 - 7) > 1)
			return 0i64;
		return 81i64;
	case 0xB:
		if (((_BYTE)v3[8] & 2) == 0 && *((_DWORD*)v3 + 7) < 0xC8u)
			return 13i64;
		v11 = sub_1402479C0(*((_DWORD*)v3 + 9));
		if (v11 && (*(_BYTE*)(v11 + 36) & 4) != 0)
			goto LABEL_42;
		return 14i64;
	case 0xE:
		if (*((_DWORD*)v3 + 9) > 0x10Au)
			return 31i64;
		if (*((_DWORD*)v3 + 10) == *((_DWORD*)v3 + 1))
			return 33i64;
		v28 = v3[11];
		if (v28 <= 0.0)
			return 29i64;
		if (v28 > 1.0)
			return 30i64;
		if (*((_DWORD*)v3 + 14) <= 0x3E8u)
			return 0i64;
		return 34i64;
	case 0xF:
		if (*((_DWORD*)v3 + 9) < 0x18u)
			return 0i64;
		return 35i64;
	case 0x12:
		if (v3[9] <= 0.0)
			return 84i64;
		if (*((int*)v3 + 10) > 0 && *((int*)v3 + 11) > 0
			|| ((_BYTE)v3[8] & 2) != 0
			|| *((_DWORD*)v3 + 7) != *((_DWORD*)v3 + 5))
		{
			return 0i64;
		}
		return 85i64;
	case 0x14:
		if (*((_BYTE*)v3 + 36) < 4u)
			return 0i64;
		return 101i64;
	case 0x18:
		if ((unsigned int)(*((_DWORD*)v3 + 10) + 1) > 0x3E8)
			return 92i64;
		v29 = v3[12];
		if (v29 < 0.0 || v29 > 1.0)
			return 93i64;
		return 0i64;
	case 0x1D:
		if (*((_DWORD*)v3 + 13))
			return 0i64;
		return 102i64;
	case 0x1E:
		if ((unsigned int)(*((_DWORD*)v3 + 9) - 1) <= 0x1D)
			return 0i64;
		return 20i64;
	case 0x26:
	case 0x2B:
	case 0x2C:
		if (*((_DWORD*)v3 + 9))
			return 0i64;
		return 16i64;
	case 0x2D:
		if (!*((_DWORD*)v3 + 9))
			return 16i64;
		if (*((_DWORD*)v3 + 10) <= 1u)
			return 0i64;
		return 16i64;
	case 0x32:
		if (((_BYTE)v3[8] & 2) == 0 && *((_DWORD*)v3 + 7) < 0xC8u)
			return 13i64;
		if (sub_14022F2C0(*((_DWORD*)v3 + 9)))
			return 0i64;
		return 14i64;
	case 0x34:
		if ((unsigned int)(*((_DWORD*)v3 + 9) - 1) <= 0x3E6)
			return 0i64;
		return 91i64;
	case 0x97:
		if (((_BYTE)v3[8] & 2) == 0 && *((_DWORD*)v3 + 7) < 0xC8u)
			return 13i64;
	LABEL_42:
		if (*((_DWORD*)v3 + 10))
			return 0i64;
		return 15i64;
	default:
		return 0i64;
	}
	while (!*((_DWORD*)v17 - 4) || *v17 == 0.0)
	{
		++v18;
		++v17;
		if (v18 >= 4)
			goto LABEL_60;
	}
	v16 = 1;
LABEL_60:
	if (v12 || v13 || v14 || v15)
		return 0i64;
	v19 = *((_DWORD*)v3 + 14);
	if (v19 < 0)
		v19 = 0x80000000 - v19;
	if ((int)abs32(v19) > 84 || v16)
		return 0i64;
	return 19i64;
}

