#include "../winhttp.h"

//----- (0000000140104FD0) ----------------------------------------------------
char __fastcall sub_140104FD0(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	_WORD* v5; // rax
	__int64 v6; // rax
	_WORD* v7; // rax
	int v8; // ecx
	__int64 v9; // rax
	int* v10; // rdx
	__int64 v11; // rax
	__int64 v12; // rax
	_WORD* v13; // rax
	_WORD* v14; // r9
	__int64 v15; // r8
	int v16; // edx
	int v17; // eax
	__int64 v18; // rax
	int* v19; // rdx
	__int64 v20; // rax
	int v21; // edi
	_DWORD* v22; // rbx
	__int64 v23; // r15
	__int64 v24; // r12
	bool v25; // bl
	bool v26; // di
	__int64 v27; // rax
	_WORD* v28; // rax
	__int64 v29; // rax
	_WORD* v30; // rax
	__int64 v31; // rax
	_WORD* v32; // rax
	__int64 v33; // rax
	_WORD* v34; // rax
	__int64 v35; // rax
	_WORD* v36; // rax
	__int64 v37; // rax
	_WORD* v38; // rax
	int v39; // r8d
	int v40; // r10d
	int v41; // r9d
	int v42; // edx
	__int64 v43; // rax
	_WORD* v44; // rax
	__int64 v45; // rax
	_WORD* v46; // rax
	bool v47; // al
	__int64 v48; // rax
	_WORD* v49; // rax
	__int64 v51; // [rsp+20h] [rbp-28h] BYREF
	__int64 v52; // [rsp+28h] [rbp-20h] BYREF
	int v53; // [rsp+70h] [rbp+28h] BYREF
	int v54; // [rsp+80h] [rbp+38h] BYREF
	__int64 v55; // [rsp+88h] [rbp+40h] BYREF

	*(_BYTE*)(a1 + 180) = 0;
	*(_DWORD*)(a1 + 56) = 0;
	v4 = sub_1401A6B80(a2, L"StateBits");
	if (!v4 || (v5 = (_WORD*)sub_1401A4F40(v4 + 32), (unsigned int)sub_1407DF428(v5, (__int64)L"%d", a1 + 56) != 1))
	{
		v6 = sub_1401A6B80(a2, L"SpriteBits");
		if (v6)
		{
			v7 = (_WORD*)sub_1401A4F40(v6 + 32);
			sub_1407DF428(v7, (__int64)L"%d", a1 + 56);
		}
	}
	v8 = *(_DWORD*)(a1 + 56);
	if ((unsigned int)(v8 - 1) > 0x3E || (v8 & 1) == 0)
		return 0;
	v9 = sub_1401A6B80(a2, L"Name");
	if (v9)
		v9 = sub_1401A4F40(v9 + 32);
	v10 = (int*)&unk_1409D4F34;
	if (v9)
		v10 = (int*)v9;
	v11 = 0i64;
	if (*(_WORD*)v10)
	{
		do
			++v11;
		while (*((_WORD*)v10 + v11));
	}
	sub_14001C480(a1 + 64, v10, (int*)((char*)v10 + 2 * v11));
	v12 = sub_1401A6B80(a2, L"Direction");
	if (v12)
	{
		v13 = (_WORD*)sub_1401A4F40(v12 + 32);
		v14 = v13;
		if (v13)
		{
			v15 = 0i64;
			if (*v13 == 65)
			{
				LOWORD(v16) = 65;
				while ((_WORD)v16)
				{
					v16 = (unsigned __int16)v14[v15 + 1];
					v17 = (unsigned __int16)word_140A1A8CA[v15++];
					if (v16 != v17)
						goto LABEL_21;
				}
				*(_BYTE*)(a1 + 180) = 1;
			}
		}
	}
LABEL_21:
	v18 = sub_1401A6B80(a2, L"Texture");
	if (v18)
		v18 = sub_1401A4F40(v18 + 32);
	v19 = (int*)&unk_1409D4F5C;
	if (v18)
		v19 = (int*)v18;
	v20 = 0i64;
	if (*(_WORD*)v19)
	{
		do
			++v20;
		while (*((_WORD*)v19 + v20));
	}
	sub_14001C480(a1 + 96, v19, (int*)((char*)v19 + 2 * v20));
	if (((*(_QWORD*)(a1 + 112) - *(_QWORD*)(a1 + 104)) & 0xFFFFFFFFFFFFFFFEui64) == 0)
		return 0;
	v21 = 0;
	v22 = (_DWORD*)(a1 + 132);
	v23 = a1 + 156;
	v24 = 0i64;
	do
	{
		sub_1400E1350(a2, off_140A1AC20[v24], v23 - 24);
		sub_1400E1350(a2, off_140A1ABD0[v24], v23);
		if (v21 > 0)
		{
			if (!*v22)
				*v22 = *(v22 - 1);
			if (!v22[6])
				v22[6] = v22[5];
		}
		++v21;
		v23 += 4i64;
		++v22;
		++v24;
	} while (v21 < 6);
	v25 = 0;
	v26 = 0;
	v55 = 0i64;
	v52 = 0i64;
	v51 = 0i64;
	v27 = sub_1401A6B80(a2, L"Left");
	if (v27)
	{
		v28 = (_WORD*)sub_1401A4F40(v27 + 32);
		if ((unsigned int)sub_1407DF428(v28, (__int64)L"%d", &v55) == 1)
		{
			v29 = sub_1401A6B80(a2, L"Top");
			if (v29)
			{
				v30 = (_WORD*)sub_1401A4F40(v29 + 32);
				v25 = (unsigned int)sub_1407DF428(v30, (__int64)L"%d", (char*)&v55 + 4) == 1;
			}
		}
	}
	v31 = sub_1401A6B80(a2, L"Right");
	if (v31)
	{
		v32 = (_WORD*)sub_1401A4F40(v31 + 32);
		if ((unsigned int)sub_1407DF428(v32, (__int64)L"%d", &v52) == 1)
		{
			v33 = sub_1401A6B80(a2, L"Bottom");
			if (v33)
			{
				v34 = (_WORD*)sub_1401A4F40(v33 + 32);
				sub_1407DF428(v34, (__int64)L"%d", (char*)&v52 + 4);
			}
		}
	}
	v35 = sub_1401A6B80(a2, L"Width");
	if (v35)
	{
		v36 = (_WORD*)sub_1401A4F40(v35 + 32);
		if ((unsigned int)sub_1407DF428(v36, (__int64)L"%d", &v51) == 1)
		{
			v37 = sub_1401A6B80(a2, L"Height");
			if (v37)
			{
				v38 = (_WORD*)sub_1401A4F40(v37 + 32);
				v26 = (unsigned int)sub_1407DF428(v38, (__int64)L"%d", (char*)&v51 + 4) == 1;
			}
		}
	}
	if (v25 && v26)
	{
		v39 = v55 + qword_140C77760;
		v40 = v55 + v51;
		v41 = HIDWORD(v55) + HIDWORD(v51);
		v42 = HIDWORD(v55) + HIDWORD(qword_140C77760);
		*(_DWORD*)(a1 + 148) = v55 + qword_140C77760;
		*(_DWORD*)(a1 + 172) = v42;
		*(_DWORD*)(a1 + 168) = v42;
		*(_DWORD*)(a1 + 164) = v42;
		*(_DWORD*)(a1 + 160) = v42;
		*(_DWORD*)(a1 + 156) = v42;
		*(_DWORD*)(a1 + 144) = v39;
		*(_DWORD*)(a1 + 140) = v39;
		*(_DWORD*)(a1 + 136) = v39;
		*(_DWORD*)(a1 + 132) = v39;
		*(_DWORD*)(a1 + 152) = v40;
		*(_DWORD*)(a1 + 176) = v41;
	}
	v53 = 0;
	v43 = sub_1401A6B80(a2, L"Stretchy");
	if (v43)
	{
		v44 = (_WORD*)sub_1401A4F40(v43 + 32);
		sub_1407DF428(v44, (__int64)L"%d", &v53);
	}
	v54 = 0;
	*(_BYTE*)(a1 + 128) = v53 != 0;
	v45 = sub_1401A6B80(a2, L"FlipX");
	if (v45)
	{
		v46 = (_WORD*)sub_1401A4F40(v45 + 32);
		sub_1407DF428(v46, (__int64)L"%d", &v54);
	}
	v47 = v54 != 0;
	v54 = 0;
	*(_BYTE*)(a1 + 129) = v47;
	v48 = sub_1401A6B80(a2, L"FlipX");
	if (v48)
	{
		v49 = (_WORD*)sub_1401A4F40(v48 + 32);
		sub_1407DF428(v49, (__int64)L"%d", &v54);
	}
	*(_BYTE*)(a1 + 130) = v54 != 0;
	return 1;
}
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140A1A828: using guessed type wchar_t aTexture[8];
// 140A1A8B0: using guessed type wchar_t aDirection[10];
// 140A1A8CA: using guessed type __int16 word_140A1A8CA[];
// 140A1A8F0: using guessed type wchar_t aStretchy[9];
// 140A1A908: using guessed type wchar_t aFlipx[6];
// 140A1A988: using guessed type wchar_t aSpritebits[11];
// 140A1A9A0: using guessed type wchar_t aStatebits[10];
// 140A1ABD0: using guessed type wchar_t *off_140A1ABD0[17];
// 140A1AC20: using guessed type wchar_t *off_140A1AC20[7];
// 140A31790: using guessed type wchar_t aName_6[5];
// 140A31888: using guessed type wchar_t aHeight[7];
// 140A31898: using guessed type wchar_t aWidth[6];
// 140A31D78: using guessed type wchar_t aLeft[5];
// 140A31D98: using guessed type wchar_t aRight[6];
// 140A31DA8: using guessed type wchar_t aTop_2[4];
// 140A31E90: using guessed type wchar_t aBottom[7];
// 140C77760: using guessed type __int64 qword_140C77760;

