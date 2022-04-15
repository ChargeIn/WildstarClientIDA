#include "../winhttp.h"

//----- (00000001407A1EB0) ----------------------------------------------------
void __fastcall sub_1407A1EB0(int a1, float a2, __int64 a3)
{
	int* v4; // rax
	int* v5; // rdx
	int* v6; // rax
	int* v7; // rdx
	int* v8; // rax
	int* v9; // rdx
	int* v10; // rax
	int* v11; // rdx
	int v12; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-58h] BYREF
	__int128 v14; // [rsp+28h] [rbp-50h]
	__int64(__fastcall * *v15)(); // [rsp+40h] [rbp-38h] BYREF
	__int128 v16; // [rsp+48h] [rbp-30h]
	__int64 v17; // [rsp+98h] [rbp+20h] BYREF

	switch (a1)
	{
	case 0:
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 28i64) = (int)a2;
		break;
	case 1:
		*(float*)(*(_QWORD*)(a3 + 112) + 108i64) = a2;
		break;
	case 2:
		*(float*)(*(_QWORD*)(a3 + 112) + 112i64) = a2;
		break;
	case 3:
		if (*(_QWORD*)(a3 + 56))
		{
			if ((*(_BYTE*)(a3 + 128) & 1) == 0)
			{
				v4 = sub_14018B280(16i64, 0);
				v5 = *(int**)(a3 + 56);
				*v4 = *v5;
				v4[1] = v5[1];
				v4[2] = v5[2];
				v4[3] = v5[3];
				*(_DWORD*)(a3 + 128) |= 1u;
				*(_QWORD*)(a3 + 56) = v4;
			}
		}
		**(_DWORD**)(a3 + 56) = (int)a2;
		break;
	case 4:
		sub_1403D8950(a3);
		*(_DWORD*)(*(_QWORD*)(a3 + 64) + 8i64) = (int)a2;
		break;
	case 5:
		sub_1403D8950(a3);
		*(_DWORD*)(*(_QWORD*)(a3 + 64) + 16i64) = (int)a2;
		break;
	case 6:
		sub_1403D8950(a3);
		*(_DWORD*)(*(_QWORD*)(a3 + 64) + 20i64) = (int)a2;
		break;
	case 7:
		sub_1403D8950(a3);
		*(_DWORD*)(*(_QWORD*)(a3 + 64) + 28i64) = (int)a2;
		break;
	case 8:
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 176i64) = (int)a2;
		break;
	case 9:
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 180i64) = (int)a2;
		break;
	case 10:
		if (*(_QWORD*)(a3 + 80) && (*(_BYTE*)(a3 + 128) & 4) == 0)
		{
			v6 = sub_14018B280(16i64, 0);
			v7 = *(int**)(a3 + 80);
			*v6 = *v7;
			v6[1] = v7[1];
			v6[2] = v7[2];
			v6[3] = v7[3];
			*(_DWORD*)(a3 + 128) |= 4u;
			*(_QWORD*)(a3 + 80) = v6;
		}
		**(_DWORD**)(a3 + 80) = (int)a2;
		break;
	case 11:
		if (*(_QWORD*)(a3 + 80) && (*(_BYTE*)(a3 + 128) & 4) == 0)
		{
			v8 = sub_14018B280(16i64, 0);
			v9 = *(int**)(a3 + 80);
			*v8 = *v9;
			v8[1] = v9[1];
			v8[2] = v9[2];
			v8[3] = v9[3];
			*(_DWORD*)(a3 + 128) |= 4u;
			*(_QWORD*)(a3 + 80) = v8;
		}
		*(_DWORD*)(*(_QWORD*)(a3 + 80) + 4i64) = (int)a2;
		break;
	case 12:
		if (*(_QWORD*)(a3 + 80) && (*(_BYTE*)(a3 + 128) & 4) == 0)
		{
			v10 = sub_14018B280(16i64, 0);
			v11 = *(int**)(a3 + 80);
			*v10 = *v11;
			v10[1] = v11[1];
			v10[2] = v11[2];
			v10[3] = v11[3];
			*(_DWORD*)(a3 + 128) |= 4u;
			*(_QWORD*)(a3 + 80) = v10;
		}
		*(_DWORD*)(*(_QWORD*)(a3 + 80) + 8i64) = (int)a2;
		break;
	case 13:
		return;
	case 14:
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^ ((unsigned int)(int)a2 >> 1)) & 1;
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^ (4 * (int)a2)) & 4;
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^ (8 * ((unsigned int)(int)a2 >> 4))) & 8;
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^ (16 * ((unsigned int)(int)a2 >> 8))) & 0x10;
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^ (32 * ((unsigned int)(int)a2 >> 6))) & 0x20;
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^ ((unsigned int)(int)a2 >> 9 << 6)) & 0x40;
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^ ((unsigned int)(int)a2 >> 10 << 7)) & 0x80;
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^ ((unsigned int)(int)a2 >> 11 << 8)) & 0x100;
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^ ((unsigned int)(int)a2 >> 12 << 9)) & 0x200;
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^ ((unsigned int)(int)a2 >> 3 << 10)) & 0x400;
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^ ((unsigned int)(int)a2 >> 5 << 11)) & 0x800;
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^ ((unsigned int)(int)a2 >> 15 << 12)) & 0x1000;
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^ ((unsigned int)(int)a2 >> 17 << 13)) & 0x2000;
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^ ((unsigned int)(int)a2 >> 18 << 14)) & 0x4000;
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^ ((unsigned int)(int)a2 >> 20 << 16)) & 0x10000;
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^ ((unsigned int)(int)a2 >> 21 << 17)) & 0x20000;
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^ ((unsigned int)(int)a2 >> 22 << 18)) & 0x40000;
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^ ((unsigned int)(int)a2 >> 23 << 19)) & 0x80000;
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^ ((unsigned int)(int)a2 >> 24 << 20)) & 0x100000;
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^ ((unsigned int)(int)a2 >> 25 << 21)) & 0x200000;
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^ ((unsigned int)(int)a2 >> 26 << 22)) & 0x400000;
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^ ((unsigned int)(int)a2 >> 27 << 23)) & 0x800000;
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^ ((unsigned int)(int)a2 >> 28 << 24)) & 0x1000000;
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^ ((unsigned int)(int)a2 >> 29 << 25)) & 0x2000000;
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^ ((unsigned int)(int)a2 >> 30 << 26)) & 0x4000000;
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^ ((unsigned int)(int)a2 >> 7 << 27)) & 0x8000000;
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^= (*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) ^ ((unsigned int)(int)a2 >> 13 << 28)) & 0x10000000;
		*(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) = *(_DWORD*)(*(_QWORD*)(a3 + 112) + 264i64) & 0xDFFFFFFF | ((unsigned int)(int)a2 >> 31 << 29);
		break;
	case 15:
		*(float*)(*(_QWORD*)(a3 + 112) + 144i64) = a2;
		break;
	case 16:
		*(float*)(*(_QWORD*)(a3 + 112) + 148i64) = a2;
		break;
	case 17:
		sub_1405684A0(a3, (int)a2);
		break;
	case 18:
		sub_1405684F0(a3, (int)a2);
		break;
	case 19:
		sub_1403D8950(a3);
		*(_DWORD*)(*(_QWORD*)(a3 + 64) + 12i64) = (int)a2;
		break;
	case 20:
		sub_1403D8950(a3);
		*(_DWORD*)(*(_QWORD*)(a3 + 64) + 32i64) = (int)a2;
		break;
	case 21:
		*(float*)(*(_QWORD*)(a3 + 112) + 276i64) = a2;
		break;
	default:
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v14 = 0i64;
		*((_QWORD*)&v14 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v15 = TlsValue;
		v17 = 0x141E4C390i64;
		v16 = v14;
		v12 = sub_1401971E0(&dword_140C8B16C, 24, &v17, &v15);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v14 + 1));
		if (v12)
			DebugBreak();
		break;
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8B16C: using guessed type _DWORD dword_140C8B16C;

