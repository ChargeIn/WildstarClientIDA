#include "../winhttp.h"

//----- (00000001402B61B0) ----------------------------------------------------
char __fastcall sub_1402B61B0(
	__int64 a1,
	unsigned __int64 a2,
	int a3,
	__int64 a4,
	unsigned __int64 a5,
	int a6,
	__int64 a7,
	char a8)
{
	char* v8; // r11
	_BYTE* v10; // r8
	__int64 v11; // r9
	int v12; // eax
	int v13; // edx
	__int64 v15; // r10
	__int16 v16; // r8
	__int64 v17; // rdi
	unsigned int v18; // eax
	unsigned __int64 v19; // r8
	__int64 v20; // rsi
	unsigned int v21; // eax
	unsigned int v22; // edx
	__int64 v23; // r8
	__int64 v24; // r9
	__int64 v25; // rax
	unsigned __int64 v26; // r8
	__int64 v27; // r10
	unsigned __int16 v28; // r9
	unsigned int v29; // eax
	unsigned __int64 v30; // r8
	__int64 v31; // r10
	char v32; // dl
	__int16 v33; // r9
	__int16 v34; // dx
	unsigned __int64 v35; // r8
	__int64 v36; // rdi
	int v37; // eax
	unsigned int v38; // edx

	v8 = (char*)a4;
	switch (a6)
	{
	case 1:
		if (a3 != 28)
			return 0;
		if (a5)
		{
			v10 = (_BYTE*)(a4 + 2);
			v11 = -a1;
			do
			{
				if (v11 + a1 >= a2)
					break;
				v12 = (unsigned __int8)*(v10 - 1);
				v13 = (unsigned __int8)*(v10 - 2);
				v10 += 3;
				a1 += 4i64;
				*(_DWORD*)(a1 - 4) = (unsigned __int8)*(v10 - 3) | ((v12 | (v13 << 8)) << 8) | 0xFF000000;
			} while ((unsigned __int64)&v10[-2i64 - (_QWORD)v8] < a5);
		}
		return 1;
	case 2:
		if (a3 == 28)
		{
			if (!a5)
				return 1;
			v17 = -a1;
			do
			{
				if (v17 + a1 >= a2)
					return 1;
				v18 = (unsigned __int8)*v8++;
				a1 += 4i64;
				*(_DWORD*)(a1 - 4) = v18 & 0xE0 | (v18 << 22) | ((v18 & 0xE0 | (v18 >> 3)) >> 3) | (32
					* (v18 & 0x18 | (8 * (v18 & 0x1C | (8 * (v18 & 0x1C | (32 * (v18 & 3 | (4 * (v18 & 3 | (4 * (v18 & 3)))))))))))) | 0xFF000000;
			} while ((unsigned __int64)&v8[-a4] < a5);
			return 1;
		}
		else
		{
			if (a3 != 85)
				return 0;
			if (!a5)
				return 1;
			v15 = -a1;
			do
			{
				if (v15 + a1 >= a2)
					return 1;
				v16 = (unsigned __int8)*v8++;
				a1 += 2i64;
				*(_WORD*)(a1 - 2) = ((v16 & 2) != 0) | (unsigned __int16)(2
					* (v16 & 3 | (4
						* (v16 & 0x1F | (4
							* (v16 & 0xC0 | (2 * (v16 & 0x1C | (4 * (v16 & 0xFFE0))))))))));
			} while ((unsigned __int64)&v8[-a4] < a5);
			return 1;
		}
	case 3:
		if (a3 != 28)
			return 0;
		v19 = 0i64;
		if (!a5)
			return 1;
		v20 = -a1;
		while (v20 + a1 < a2)
		{
			v21 = *(unsigned __int16*)v8;
			v8 += 2;
			if ((a8 & 1) != 0)
				v22 = -16777216;
			else
				v22 = (v21 << 16) & 0xFF000000;
			v19 += 2i64;
			a1 += 4i64;
			*(_DWORD*)(a1 - 4) = v21 & 0xE0 | ((v21 & 0xE0 | (v21 >> 3) & 0x18) >> 3) | (32
				* (v21 & 0x18 | (8 * (v21 & 0x1C | (8 * (v21 & 0x1C)))))) | ((v21 & 3 | (4 * (v21 & 3 | (4 * (v21 & 3 | (4 * (v21 & 3))))))) << 16) | v22;
			if (v19 >= a5)
				return 1;
		}
		return 1;
	case 4:
		if (a3 != 28 || !a7)
			return 0;
		if (!a5)
			return 1;
		v23 = -a1;
		v24 = -a4;
		while (v23 + a1 < a2)
		{
			v25 = (unsigned __int8)*v8++;
			a1 += 4i64;
			*(_DWORD*)(a1 - 4) = *(_DWORD*)(a7 + 4 * v25);
			if ((unsigned __int64)&v8[v24] >= a5)
				return 1;
		}
		return 1;
	case 5:
		if (a3 != 28 || !a7)
			return 0;
		v26 = 0i64;
		if (!a5)
			return 1;
		v27 = -a1;
		break;
	case 6:
		if (a3 == 28)
		{
			v35 = 0i64;
			if (!a5)
				return 1;
			v36 = -a1;
			do
			{
				if (v36 + a1 >= a2)
					return 1;
				v37 = (unsigned __int8)*v8++;
				if ((a8 & 1) != 0)
					v38 = -16777216;
				else
					v38 = (v37 << 24) & 0xF0000000 | ((v37 & 0xF0) << 20);
				++v35;
				a1 += 4i64;
				*(_DWORD*)(a1 - 4) = v37 & 0xF | (16 * (v37 & 0xF)) | v38 | ((v37 & 0xF | (16 * (v37 & 0xF)) | ((v37 & 0xF | (16 * (v37 & 0xF))) << 8)) << 8);
			} while (v35 < a5);
			return 1;
		}
		else if (a3 == 115)
		{
			v30 = 0i64;
			if (!a5)
				return 1;
			v31 = -a1;
			do
			{
				if (v31 + a1 >= a2)
					return 1;
				v32 = *v8++;
				v33 = v32 & 0xF;
				if ((a8 & 1) != 0)
					v34 = -4096;
				else
					v34 = (v32 & 0xF0) << 8;
				++v30;
				a1 += 2i64;
				*(_WORD*)(a1 - 2) = v33 | v34 | (16 * (v33 | (16 * v33)));
			} while (v30 < a5);
			return 1;
		}
		else
		{
			return 0;
		}
	default:
		return 0;
	}
	do
	{
		if (v27 + a1 >= a2)
			return 1;
		v28 = *(_WORD*)v8;
		v8 += 2;
		if ((a8 & 1) != 0)
			v29 = -16777216;
		else
			v29 = (v28 << 16) & 0xFF000000;
		v26 += 2i64;
		a1 += 4i64;
		*(_DWORD*)(a1 - 4) = *(_DWORD*)(a7 + 4i64 * (unsigned __int8)v28) | v29;
	} while (v26 < a5);
	return 1;
}

