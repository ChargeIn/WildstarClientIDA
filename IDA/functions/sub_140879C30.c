#include "../winhttp.h"

//----- (0000000140879C30) ----------------------------------------------------
__int64 __fastcall sub_140879C30(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v5; // rax
	__int64 v6; // r14
	unsigned int v7; // edi
	unsigned int v8; // r12d
	int v9; // ecx
	unsigned __int16 v10; // bp
	_WORD* v11; // rsi
	unsigned __int16 v12; // dx
	__int16* v13; // rbp
	__int64 v14; // r15
	unsigned int v15; // ecx
	unsigned int v16; // ebp
	__int64 v17; // r15
	unsigned int v18; // r9d
	__int128 v19; // rax
	__int64 v20; // rdi
	unsigned __int64 v21; // r8
	int* v22; // rdx
	char v23; // al
	int* v24; // [rsp+30h] [rbp-48h]
	unsigned int v25; // [rsp+80h] [rbp+8h]
	int v26; // [rsp+90h] [rbp+18h]
	_WORD* v27; // [rsp+98h] [rbp+20h]

	if ((*(_BYTE*)(a1 + 32) & 2) != 0)
	{
		result = sub_1408790B0(*(_QWORD*)(a1 + 88), *(_DWORD*)(a1 + 104));
		if ((_DWORD)result != 45)
		{
		LABEL_10:
			*(_DWORD*)(a2 + 56) = result;
			return result;
		}
		*(_BYTE*)(a1 + 32) &= ~2u;
	}
	if (!*(_DWORD*)(a1 + 104))
	{
		result = sub_140880860(a1);
		if ((_DWORD)result != 45)
			goto LABEL_10;
	}
	v5 = *(_QWORD*)(a1 + 24);
	v24 = (int*)(v5 + 192);
	LODWORD(v5) = *(_DWORD*)(v5 + 196);
	v6 = 0i64;
	v7 = 0;
	v8 = BYTE3(v5) & 0x1F;
	v26 = v5 & 0x3FFFF;
	v9 = v5 & 0x3FFFF;
	if ((v5 & 0x3FFFF) != 0)
	{
		do
		{
			++v7;
			v9 &= v9 - 1;
		} while (v9);
	}
	v10 = 1024;
	result = sub_140832B30(v8 << 10);
	v11 = (_WORD*)result;
	v27 = (_WORD*)result;
	*(_QWORD*)(a1 + 136) = result;
	if (result)
	{
		v12 = *(_WORD*)(a1 + 360);
		v25 = v8 << 6;
		if (v12)
		{
			sub_1407DB590((int*)(v12 + a1 + 144), *(int**)(a1 + 96), *(_DWORD*)(a1 + 128) - (unsigned int)v12);
			if (v7)
			{
				v13 = (__int16*)(a1 + 144);
				v14 = v7;
				do
				{
					sub_140881150(v13, v11++, 1, *(_DWORD*)(a1 + 128), v7);
					v13 += 18;
					--v14;
				} while (v14);
				v11 = v27;
			}
			v10 = 960;
			v15 = *(_DWORD*)(a1 + 128) - *(unsigned __int16*)(a1 + 360);
			*(_WORD*)(a1 + 360) = 0;
			*(_DWORD*)(a1 + 104) -= v15;
			*(_QWORD*)(a1 + 96) += v15;
			v11 = (_WORD*)((char*)v11 + v25);
			v27 = v11;
		}
		v16 = v10 >> 6;
		if ((unsigned int)(*(_DWORD*)(a1 + 104) / *(_DWORD*)(a1 + 128)) < v16)
			v16 = *(_DWORD*)(a1 + 104) / *(_DWORD*)(a1 + 128);
		if (v7)
		{
			v17 = v7;
			do
			{
				sub_140881150((__int16*)(v6 + *(_QWORD*)(a1 + 96)), v11++, v16, *(_DWORD*)(a1 + 128), v7);
				v6 += 36i64;
				--v17;
			} while (v17);
			v11 = v27;
		}
		v18 = *(_DWORD*)(a1 + 128);
		v19 = (__int64)v11 + v25 * v16 - *(_QWORD*)(a1 + 136);
		*(_DWORD*)(a1 + 104) -= v16 * v18;
		*(_QWORD*)(a1 + 96) += v16 * v18;
		v20 = v19 / v8;
		if (*(_DWORD*)(a1 + 104) < v18)
		{
			v21 = *(unsigned __int16*)(a1 + 104);
			v22 = *(int**)(a1 + 96);
			*(_WORD*)(a1 + 360) = v21;
			sub_1407DB590((int*)(a1 + 144), v22, v21);
			*(_QWORD*)(a1 + 96) += *(unsigned int*)(a1 + 104);
			v23 = *(_BYTE*)(a1 + 126);
			*(_DWORD*)(a1 + 104) = 0;
			if ((v23 & 2) != 0)
				*(_BYTE*)(a1 + 126) = v23 & 0xFD;
			else
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 88) + 128i64))(*(_QWORD*)(a1 + 88));
		}
		return sub_1408803E0(a1, *(_QWORD*)(a1 + 136), v20, *v24, v26, a2);
	}
	else
	{
		*(_DWORD*)(a2 + 56) = 2;
	}
	return result;
}

