#include "../winhttp.h"

//----- (000000014014FEA0) ----------------------------------------------------
__int64 __fastcall sub_14014FEA0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
	__int64 v4; // rbx
	__int64 v5; // r14
	unsigned int* v6; // r12
	unsigned int* v7; // r13
	__int64 v11; // r8
	char* v12; // r9
	_DWORD* v13; // rcx
	__int64 v14; // rdx
	int v15; // eax
	_QWORD* v16; // rsi
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
	__int64 v27; // rax
	void(__fastcall * **v28)(_QWORD); // r14
	__int64 v29; // rcx
	bool v30; // zf
	void(__fastcall * **v31)(_QWORD); // rbp

	v4 = 0i64;
	*(_DWORD*)(a1 + 4) = a3;
	v5 = a1 + 32;
	*(_BYTE*)a1 = 1;
	v6 = (unsigned int*)(a1 + 12);
	v7 = (unsigned int*)(a1 + 16);
	*(_DWORD*)(a1 + 12) = 0;
	*(_DWORD*)(a1 + 16) = 0;
	v11 = a1 + 48;
	v12 = (char*)&unk_140A2EFD8 - a1 - 32;
	*(_DWORD*)(a1 + 112) = 0;
	v13 = (_DWORD*)(a1 + 96);
	v14 = 4i64;
	do
	{
		v15 = *(_DWORD*)((char*)v13 + (_QWORD)v12 - 64);
		*v13 = 0;
		v11 += 8i64;
		*(v13 - 4) = v15;
		*(_QWORD*)(v11 - 8) = 0i64;
		++v13;
		--v14;
	} while (v14);
	v16 = (_QWORD*)(a1 + 136);
	sub_1401095E0(a1 + 136);
	*(_QWORD*)(a1 + 184) = 0i64;
	*(_QWORD*)(a1 + 200) = 0i64;
	*(_QWORD*)(a1 + 208) = 0i64;
	*(_OWORD*)v5 = *(_OWORD*)(a4 + 48);
	*(_QWORD*)(v5 + 16) = *(_QWORD*)(a4 + 64);
	*(_QWORD*)(v5 + 24) = *(_QWORD*)(a4 + 72);
	*(_QWORD*)(v5 + 32) = *(_QWORD*)(a4 + 80);
	*(_QWORD*)(v5 + 40) = *(_QWORD*)(a4 + 88);
	*(_DWORD*)(v5 + 48) = *(_DWORD*)(a4 + 96);
	*(_DWORD*)(v5 + 52) = *(_DWORD*)(a4 + 100);
	*(_DWORD*)(v5 + 56) = *(_DWORD*)(a4 + 104);
	*(_DWORD*)(v5 + 60) = *(_DWORD*)(a4 + 108);
	*(_DWORD*)(v5 + 64) = *(_DWORD*)(a4 + 112);
	*(_DWORD*)(v5 + 68) = *(_DWORD*)(a4 + 116);
	*(_DWORD*)(v5 + 72) = *(_DWORD*)(a4 + 120);
	*(_DWORD*)(v5 + 76) = *(_DWORD*)(a4 + 124);
	*(_DWORD*)(v5 + 80) = *(_DWORD*)(a4 + 128);
	*(_BYTE*)(a1 + 8) = *(_BYTE*)a4;
	*(_BYTE*)(a1 + 9) = *(_BYTE*)(a4 + 1);
	if (v6 == (unsigned int*)(a4 + 40))
	{
		v18 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v6);
		v17 = *(unsigned int*)(a4 + 40);
		v18 = qword_140C63678;
		*v6 = v17;
		if (v17 < *(_QWORD*)(v18 + 48))
		{
			v19 = *(_QWORD*)(v18 + 40);
			v20 = 32i64 * (unsigned int)v17;
			v21 = *(_DWORD*)(v20 + v19 + 16);
			if ((unsigned int)(v21 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v20 + v19 + 16) = v21 + 1;
		}
	}
	if (v7 != (unsigned int*)(a4 + 44))
	{
		sub_1401429A0(v18, *v7);
		v22 = *(unsigned int*)(a4 + 44);
		v23 = qword_140C63678;
		*v7 = v22;
		if (v22 < *(_QWORD*)(v23 + 48))
		{
			v24 = *(_QWORD*)(v23 + 40);
			v25 = 32i64 * (unsigned int)v22;
			v26 = *(_DWORD*)(v25 + v24 + 16);
			if ((unsigned int)(v26 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v25 + v24 + 16) = v26 + 1;
		}
	}
	*(_OWORD*)v5 = *(_OWORD*)(a4 + 48);
	*(_QWORD*)(v5 + 16) = *(_QWORD*)(a4 + 64);
	*(_QWORD*)(v5 + 24) = *(_QWORD*)(a4 + 72);
	*(_QWORD*)(v5 + 32) = *(_QWORD*)(a4 + 80);
	*(_QWORD*)(v5 + 40) = *(_QWORD*)(a4 + 88);
	*(_DWORD*)(v5 + 48) = *(_DWORD*)(a4 + 96);
	*(_DWORD*)(v5 + 52) = *(_DWORD*)(a4 + 100);
	*(_DWORD*)(v5 + 56) = *(_DWORD*)(a4 + 104);
	*(_DWORD*)(v5 + 60) = *(_DWORD*)(a4 + 108);
	*(_DWORD*)(v5 + 64) = *(_DWORD*)(a4 + 112);
	*(_DWORD*)(v5 + 68) = *(_DWORD*)(a4 + 116);
	*(_DWORD*)(v5 + 72) = *(_DWORD*)(a4 + 120);
	*(_DWORD*)(v5 + 76) = *(_DWORD*)(a4 + 124);
	*(_DWORD*)(v5 + 80) = *(_DWORD*)(a4 + 128);
	*(_DWORD*)(a1 + 128) = *(_DWORD*)(a4 + 144);
	*(_DWORD*)(a1 + 132) = *(_DWORD*)(a4 + 148);
	v27 = sub_1400E58C0(a2, *(int**)(a4 + 192));
	sub_1401507C0(a1, *(_WORD**)(a4 + 160), v27, *(_DWORD*)(a4 + 216));
	if (*(_BYTE*)(a1 + 9))
	{
		if (a2 && (!*v16 || !sub_14002C740(a1 + 152, L"LineFill")))
		{
			v28 = (void(__fastcall***)(_QWORD))sub_140108E80(a2 + 240, (const __m128i*)L"LineFill");
			if (v28)
			{
				v29 = 0i64;
				do
					v30 = aLinefill[++v29] == 0;
				while (!v30);
				sub_14001C480(a1 + 152, (int*)L"LineFill", (int*)&aLinefill[v29]);
			}
			sub_1401097F0((_QWORD*)(a1 + 136), v28);
		}
		if (!*v16 && a2)
		{
			v31 = (void(__fastcall***)(_QWORD))sub_140108E80(a2 + 240, (const __m128i*)L"WhiteFill");
			if (v31)
			{
				do
					v30 = aWhitefill_12[++v4] == 0;
				while (!v30);
				sub_14001C480(a1 + 152, (int*)L"WhiteFill", (int*)&aWhitefill_12[v4]);
			}
			sub_1401097F0((_QWORD*)(a1 + 136), v31);
		}
	}
	else if (a2)
	{
		sub_140109710((__int64*)(a1 + 136), a2 + 240, *(__m128i**)(a4 + 16), 0);
	}
	return a1;
}
// 140A2F400: using guessed type wchar_t aLinefill[9];
// 140A2F418: using guessed type wchar_t aWhitefill_12[10];
// 140C63678: using guessed type __int64 qword_140C63678;

