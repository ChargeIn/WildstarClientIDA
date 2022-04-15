#include "../winhttp.h"

//----- (00000001408F3150) ----------------------------------------------------
__int64 __fastcall sub_1408F3150(__int64 a1, __int64 a2, _DWORD* a3)
{
	unsigned int v4; // ebx
	__int64 v5; // rcx
	int v8; // eax
	int v9; // eax
	__int64 v10; // rax
	int v11; // eax
	unsigned int v12; // r9d
	__int64 v13; // rax
	__int64 v14; // rcx
	_DWORD* v15; // r8
	__int64 i; // rsi

	v4 = 0;
	*(_QWORD*)a1 = off_1409C6130;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*a3 = 1;
	v5 = *(_QWORD*)(a2 + 216);
	*(_QWORD*)(a1 + 216) = v5;
	*(_DWORD*)(a1 + 120) = *(_DWORD*)(a2 + 120);
	*(_DWORD*)(a1 + 124) = *(_DWORD*)(a2 + 124);
	*(_DWORD*)(a1 + 128) = *(_DWORD*)(a2 + 128);
	*(_DWORD*)(a1 + 132) = *(_DWORD*)(a2 + 132);
	*(_DWORD*)(a1 + 136) = *(_DWORD*)(a2 + 136);
	*(_DWORD*)(a1 + 140) = *(_DWORD*)(a2 + 140);
	*(_DWORD*)(a1 + 144) = *(_DWORD*)(a2 + 144);
	*(_DWORD*)(a1 + 148) = *(_DWORD*)(a2 + 148);
	*(_DWORD*)(a1 + 152) = *(_DWORD*)(a2 + 152);
	*(_DWORD*)(a1 + 156) = *(_DWORD*)(a2 + 156);
	*(_DWORD*)(a1 + 160) = *(_DWORD*)(a2 + 160);
	*(_DWORD*)(a1 + 164) = *(_DWORD*)(a2 + 164);
	*(_DWORD*)(a1 + 168) = *(_DWORD*)(a2 + 168);
	*(_DWORD*)(a1 + 172) = *(_DWORD*)(a2 + 172);
	*(_DWORD*)(a1 + 176) = *(_DWORD*)(a2 + 176);
	*(_DWORD*)(a1 + 180) = *(_DWORD*)(a2 + 180);
	*(_DWORD*)(a1 + 184) = *(_DWORD*)(a2 + 184);
	*(_DWORD*)(a1 + 188) = *(_DWORD*)(a2 + 188);
	*(_DWORD*)(a1 + 192) = *(_DWORD*)(a2 + 192);
	*(_DWORD*)(a1 + 196) = *(_DWORD*)(a2 + 196);
	*(_DWORD*)(a1 + 200) = *(_DWORD*)(a2 + 200);
	*(_DWORD*)(a1 + 204) = *(_DWORD*)(a2 + 204);
	*(_DWORD*)(a1 + 208) = *(_DWORD*)(a2 + 208);
	v8 = *(_DWORD*)(a2 + 212);
	*(_QWORD*)(a1 + 232) = 63i64;
	*(_DWORD*)(a1 + 212) = v8;
	*(_QWORD*)(a1 + 224) = 0i64;
	if (*(_QWORD*)(a2 + 224))
	{
		v9 = *(_DWORD*)(a2 + 236);
		if (v9)
		{
			v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v5 + 8i64))(v5, (unsigned int)(20 * v9));
			*(_QWORD*)(a1 + 224) = v10;
			if (!v10)
				goto LABEL_10;
			v11 = *(_DWORD*)(a2 + 236);
			v12 = 0;
			for (*(_DWORD*)(a1 + 236) = v11; v12 < *(_DWORD*)(a1 + 236); v15[4] = *(_DWORD*)(20 * v13 + v14 + 16))
			{
				v13 = v12++;
				v14 = *(_QWORD*)(a2 + 224);
				v15 = (_DWORD*)(20 * v13 + *(_QWORD*)(a1 + 224));
				*v15 = *(_DWORD*)(20 * v13 + v14);
				v15[1] = *(_DWORD*)(20 * v13 + v14 + 4);
				v15[2] = *(_DWORD*)(20 * v13 + v14 + 8);
				v15[3] = *(_DWORD*)(20 * v13 + v14 + 12);
			}
		}
	}
	for (i = a2 + 8; (unsigned int)sub_140837E30(16i64 * v4 + a1 + 8, *(int**)i, *(_DWORD*)(i + 8), 0) != 52; i += 16i64)
	{
		if (++v4 >= 7)
			return a1;
	}
LABEL_10:
	*a3 = 52;
	return a1;
}
// 1409C6130: using guessed type __int64 (__fastcall *off_1409C6130[6])();

