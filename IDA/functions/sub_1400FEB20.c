#include "../winhttp.h"

//----- (00000001400FEB20) ----------------------------------------------------
__int64 __fastcall sub_1400FEB20(__int64 a1, __int64 a2)
{
	__int64 v2; // rbp
	unsigned int* v3; // r14
	unsigned int* v4; // r15
	__int64 v5; // r9
	_DWORD* v8; // r8
	char* v9; // r11
	__int64 v10; // rcx
	__int64 v11; // rdx
	int v12; // eax
	__int64 v13; // rdx
	_DWORD* v14; // rcx
	int v15; // eax
	void(__fastcall * **v16)(_QWORD, __int64, _DWORD*); // rcx
	unsigned __int64 v17; // rax
	__int64 v18; // r8
	__int64 v19; // rdx
	__int64 v20; // rcx
	int v21; // r9d
	unsigned __int64 v22; // rax
	__int64 v23; // rdx
	__int64 v24; // rdx
	__int64 v25; // rcx
	int v26; // r8d

	v2 = a1 + 112;
	v3 = (unsigned int*)(a1 + 88);
	v4 = (unsigned int*)(a1 + 92);
	*(_DWORD*)(a1 + 88) = 0;
	v5 = 4i64;
	*(_DWORD*)(a1 + 92) = 0;
	v8 = (_DWORD*)(a1 + 176);
	*(_DWORD*)(a1 + 192) = 0;
	v9 = (char*)&unk_140A1B148 - a1 - 112;
	v10 = a1 + 128;
	v11 = 4i64;
	do
	{
		v12 = *(_DWORD*)((char*)v8 + (_QWORD)v9 - 64);
		*v8 = 0;
		v10 += 8i64;
		*(v8 - 4) = v12;
		*(_QWORD*)(v10 - 8) = 0i64;
		++v8;
		--v11;
	} while (v11);
	*(_DWORD*)(a1 + 288) = 0;
	v13 = a1 + 224;
	v14 = (_DWORD*)(a1 + 272);
	do
	{
		v15 = *(_DWORD*)((char*)v14 + (_QWORD)((char*)&unk_140A1B148 - a1 - 208) - 64);
		*v14 = 0;
		v13 += 8i64;
		*(v14 - 4) = v15;
		*(_QWORD*)(v13 - 8) = 0i64;
		++v14;
		--v5;
	} while (v5);
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a2 + 8);
	*(_DWORD*)(a1 + 12) = *(_DWORD*)(a2 + 12);
	*(_DWORD*)(a1 + 16) = *(_DWORD*)(a2 + 16);
	*(_DWORD*)(a1 + 20) = *(_DWORD*)(a2 + 20);
	*(_DWORD*)(a1 + 24) = *(_DWORD*)(a2 + 24);
	*(_DWORD*)(a1 + 28) = *(_DWORD*)(a2 + 28);
	*(_DWORD*)(a1 + 32) = *(_DWORD*)(a2 + 32);
	*(_DWORD*)(a1 + 36) = *(_DWORD*)(a2 + 36);
	*(_DWORD*)(a1 + 40) = *(_DWORD*)(a2 + 40);
	*(_DWORD*)(a1 + 44) = *(_DWORD*)(a2 + 44);
	*(_DWORD*)(a1 + 48) = *(_DWORD*)(a2 + 48);
	*(_DWORD*)(a1 + 52) = *(_DWORD*)(a2 + 52);
	*(_BYTE*)(a1 + 56) = *(_BYTE*)(a2 + 56);
	*(_BYTE*)(a1 + 57) = *(_BYTE*)(a2 + 57);
	*(_BYTE*)(a1 + 58) = *(_BYTE*)(a2 + 58);
	v16 = *(void(__fastcall****)(_QWORD, __int64, _DWORD*))a2;
	*(_QWORD*)a1 = *(_QWORD*)a2;
	if (v16)
		(**v16)(v16, v13, v8);
	*(_DWORD*)(a1 + 60) = *(_DWORD*)(a2 + 60);
	*(_DWORD*)(a1 + 64) = *(_DWORD*)(a2 + 64);
	*(_DWORD*)(a1 + 68) = *(_DWORD*)(a2 + 68);
	*(_DWORD*)(a1 + 72) = *(_DWORD*)(a2 + 72);
	*(_DWORD*)(a1 + 76) = *(_DWORD*)(a2 + 76);
	if (v3 == (unsigned int*)(a2 + 88))
	{
		v18 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v3);
		v17 = *(unsigned int*)(a2 + 88);
		v18 = qword_140C63678;
		*v3 = v17;
		if (v17 < *(_QWORD*)(v18 + 48))
		{
			v19 = *(_QWORD*)(v18 + 40);
			v20 = 32i64 * (unsigned int)v17;
			v21 = *(_DWORD*)(v20 + v19 + 16);
			if ((unsigned int)(v21 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v20 + v19 + 16) = v21 + 1;
		}
	}
	if (v4 != (unsigned int*)(a2 + 92))
	{
		sub_1401429A0(v18, *v4);
		v22 = *(unsigned int*)(a2 + 92);
		v23 = qword_140C63678;
		*v4 = v22;
		if (v22 < *(_QWORD*)(v23 + 48))
		{
			v24 = *(_QWORD*)(v23 + 40);
			v25 = 32i64 * (unsigned int)v22;
			v26 = *(_DWORD*)(v25 + v24 + 16);
			if ((unsigned int)(v26 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v25 + v24 + 16) = v26 + 1;
		}
	}
	*(_DWORD*)(a1 + 80) = *(_DWORD*)(a2 + 80);
	*(_DWORD*)(a1 + 84) = *(_DWORD*)(a2 + 84);
	*(_BYTE*)(a1 + 96) = *(_BYTE*)(a2 + 96);
	*(_OWORD*)v2 = *(_OWORD*)(a2 + 112);
	*(_QWORD*)(v2 + 16) = *(_QWORD*)(a2 + 128);
	*(_QWORD*)(v2 + 24) = *(_QWORD*)(a2 + 136);
	*(_QWORD*)(v2 + 32) = *(_QWORD*)(a2 + 144);
	*(_QWORD*)(v2 + 40) = *(_QWORD*)(a2 + 152);
	*(_DWORD*)(v2 + 48) = *(_DWORD*)(a2 + 160);
	*(_DWORD*)(v2 + 52) = *(_DWORD*)(a2 + 164);
	*(_DWORD*)(v2 + 56) = *(_DWORD*)(a2 + 168);
	*(_DWORD*)(v2 + 60) = *(_DWORD*)(a2 + 172);
	*(_DWORD*)(v2 + 64) = *(_DWORD*)(a2 + 176);
	*(_DWORD*)(v2 + 68) = *(_DWORD*)(a2 + 180);
	*(_DWORD*)(v2 + 72) = *(_DWORD*)(a2 + 184);
	*(_DWORD*)(v2 + 76) = *(_DWORD*)(a2 + 188);
	*(_DWORD*)(v2 + 80) = *(_DWORD*)(a2 + 192);
	*(_OWORD*)(a1 + 208) = *(_OWORD*)(a2 + 208);
	*(_QWORD*)(a1 + 224) = *(_QWORD*)(a2 + 224);
	*(_QWORD*)(a1 + 232) = *(_QWORD*)(a2 + 232);
	*(_QWORD*)(a1 + 240) = *(_QWORD*)(a2 + 240);
	*(_QWORD*)(a1 + 248) = *(_QWORD*)(a2 + 248);
	*(_DWORD*)(a1 + 256) = *(_DWORD*)(a2 + 256);
	*(_DWORD*)(a1 + 260) = *(_DWORD*)(a2 + 260);
	*(_DWORD*)(a1 + 264) = *(_DWORD*)(a2 + 264);
	*(_DWORD*)(a1 + 268) = *(_DWORD*)(a2 + 268);
	*(_DWORD*)(a1 + 272) = *(_DWORD*)(a2 + 272);
	*(_DWORD*)(a1 + 276) = *(_DWORD*)(a2 + 276);
	*(_DWORD*)(a1 + 280) = *(_DWORD*)(a2 + 280);
	*(_DWORD*)(a1 + 284) = *(_DWORD*)(a2 + 284);
	*(_DWORD*)(a1 + 288) = *(_DWORD*)(a2 + 288);
	return a1;
}
// 140C63678: using guessed type __int64 qword_140C63678;

