//----- (0000000140861600) ----------------------------------------------------
void __fastcall sub_140861600(__int64 a1, __int64 a2)
{
	__int64* v4; // r15
	__int64 v5; // rcx
	int v6; // ebx
	__int64 v7; // rax
	int v8; // ecx
	int v9; // edx
	__int16 v10; // bx
	unsigned int v11; // r13d
	int v12; // ebp
	int v13; // ecx
	int v14; // eax
	float v15; // xmm0_4
	bool v16; // zf
	int v17; // eax

	if (*(_DWORD*)(a2 + 56) == 17)
		*(_BYTE*)(a1 + 216) = 1;
	if (!*(_WORD*)(a1 + 106))
	{
		if (!*(_WORD*)(a2 + 18) && *(_DWORD*)(a2 + 56) == 45)
		{
			*(_DWORD*)(a2 + 56) = 43;
			return;
		}
		*(_QWORD*)(a1 + 88) = *(_QWORD*)a2;
		*(_QWORD*)(a1 + 96) = *(_QWORD*)(a2 + 8);
		*(_QWORD*)(a1 + 104) = *(_QWORD*)(a2 + 16);
		*(_QWORD*)(a1 + 112) = *(_QWORD*)(a2 + 24);
		*(_QWORD*)(a1 + 120) = *(_QWORD*)(a2 + 32);
		*(_QWORD*)(a1 + 128) = *(_QWORD*)(a2 + 40);
		*(_QWORD*)(a1 + 136) = *(_QWORD*)(a2 + 48);
	}
	v4 = (__int64*)(a1 + 144);
	if (!*(_QWORD*)(a1 + 144))
	{
		if ((unsigned int)sub_140868400(a1 + 144, *(_WORD*)(a1 + 68), *(_DWORD*)(a1 + 96)) != 1)
		{
			*(_DWORD*)(a2 + 56) = 2;
			return;
		}
		if (*(_BYTE*)(a1 + 218))
		{
			v5 = *(_QWORD*)(a1 + 208);
			if (*(char*)(v5 + 382) < 0)
				v6 = *(_DWORD*)(v5 + 408) + (unsigned __int16)(0x5DC00u / dword_140C110B4);
			else
				v6 = *(_DWORD*)(v5 + 408) + 1024;
			if (v6 > 0)
			{
				if (sub_140872740(a1 + 16))
					sub_140861FA0((__int64)v4, v6);
				else
					sub_140861F30(v4, v6);
				*(_DWORD*)(a1 + 44) = v6;
			}
			*(_BYTE*)(a1 + 218) = 0;
		}
	}
	v7 = *(_QWORD*)(a1 + 208);
	if ((*(_BYTE*)(v7 + 383) & 2) != 0 || (v8 = *(_DWORD*)(v7 + 372)) == 0)
	{
	LABEL_24:
		v10 = *(_WORD*)(a1 + 106);
		v11 = *(_DWORD*)(a1 + 40);
		v12 = sub_1408724D0(a1 + 16, a1 + 88, (__int64)v4);
		sub_140872B20(a1 + 88, (__int64)v4, v11, (unsigned __int16)(v10 - *(_WORD*)(a1 + 106)));
		v13 = *(_DWORD*)(a1 + 128);
		if (v13 != -1 && !*(_BYTE*)(a1 + 217))
		{
			v14 = *(_DWORD*)(a1 + 132);
			*(_BYTE*)(a1 + 217) = 1;
			*(_DWORD*)(a1 + 188) = v14;
			*(_DWORD*)(a1 + 192) = *(_DWORD*)(a1 + 136);
			*(_DWORD*)(a1 + 196) = *(_DWORD*)(a1 + 140);
			*(_DWORD*)(a1 + 184) = v13 + v11;
		}
		v15 = sub_140872580(a1 + 16);
		v16 = *(_WORD*)(a1 + 106) == 0;
		*(float*)(a1 + 188) = v15;
		if (v16)
		{
			sub_140861A30(a1, a2);
			if (*(_BYTE*)(a1 + 216) == 1)
			{
				if (!*(_QWORD*)(*(_QWORD*)(a1 + 200) + 24i64))
				{
					v12 = 17;
					goto LABEL_33;
				}
				v12 = sub_140861B40(a1);
			}
		}
		if (v12 != 45 && v12 != 17)
		{
		LABEL_36:
			*(_DWORD*)(a2 + 56) = v12;
			return;
		}
	LABEL_33:
		if (sub_140872740(a1 + 16))
			sub_140872430(a1 + 16, (__int64)v4);
		*(_QWORD*)a2 = *v4;
		*(_QWORD*)(a2 + 8) = v4[1];
		*(_QWORD*)(a2 + 16) = v4[2];
		*(_QWORD*)(a2 + 24) = v4[3];
		*(_QWORD*)(a2 + 32) = v4[4];
		*(_QWORD*)(a2 + 40) = v4[5];
		*(_QWORD*)(a2 + 48) = v4[6];
		goto LABEL_36;
	}
	v9 = *(unsigned __int16*)(a1 + 106);
	if (v9 > v8)
	{
		*(_DWORD*)(a1 + 40) = v8;
		*(_WORD*)(a1 + 106) = v9 - v8;
		*(_BYTE*)(v7 + 383) &= 0xF1u;
		*(_DWORD*)(v7 + 372) = 0;
		goto LABEL_24;
	}
	*(_BYTE*)(v7 + 383) &= 0xF1u;
	*(_DWORD*)(v7 + 372) = v8 - v9;
	*(_WORD*)(a1 + 106) = 0;
	*(_WORD*)(a2 + 18) = 0;
	sub_140861A30(a1, a2);
	v17 = 43;
	if (*(_BYTE*)(a1 + 216))
		v17 = 17;
	*(_DWORD*)(a2 + 56) = v17;
}
// 140C110B4: using guessed type int dword_140C110B4;

