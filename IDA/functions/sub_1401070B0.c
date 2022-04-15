#include "../winhttp.h"

//----- (00000001401070B0) ----------------------------------------------------
char __fastcall sub_1401070B0(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	int* v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rax
	int* v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rax
	_WORD* v11; // rax
	__int64 v12; // rax
	_WORD* v13; // rax
	__int64 v14; // rax
	_WORD* v15; // rax
	__int64 v16; // rax
	_WORD* v17; // rax
	int v19; // [rsp+40h] [rbp+18h] BYREF
	int v20; // [rsp+44h] [rbp+1Ch] BYREF

	v4 = sub_1401A6B80(a2, L"Name");
	if (!v4)
		return 0;
	v5 = (int*)sub_1401A4F40(v4 + 32);
	if (!v5)
		return 0;
	v6 = 0i64;
	if (*(_WORD*)v5)
	{
		do
			++v6;
		while (*((_WORD*)v5 + v6));
	}
	sub_14001C480(a1 + 88, v5, (int*)((char*)v5 + 2 * v6));
	v7 = sub_1401A6B80(a2, L"Path");
	if (!v7)
		return 0;
	v8 = (int*)sub_1401A4F40(v7 + 32);
	if (!v8)
		return 0;
	v9 = 0i64;
	if (*(_WORD*)v8)
	{
		do
			++v9;
		while (*((_WORD*)v8 + v9));
	}
	sub_14001C480(a1 + 56, v8, (int*)((char*)v8 + 2 * v9));
	v19 = 64;
	v20 = 64;
	*(_DWORD*)(a1 + 120) = 64;
	*(_DWORD*)(a1 + 124) = 64;
	v10 = sub_1401A6B80(a2, L"Width");
	if (v10)
	{
		v11 = (_WORD*)sub_1401A4F40(v10 + 32);
		if ((unsigned int)sub_1407DF428(v11, (__int64)L"%d", &v19) == 1)
		{
			v12 = sub_1401A6B80(a2, L"Height");
			if (v12)
			{
				v13 = (_WORD*)sub_1401A4F40(v12 + 32);
				if ((unsigned int)sub_1407DF428(v13, (__int64)L"%d", &v20) == 1)
				{
					*(_DWORD*)(a1 + 120) = v19;
					*(_DWORD*)(a1 + 124) = v20;
				}
			}
		}
	}
	*(_QWORD*)(a1 + 128) = 0i64;
	v14 = sub_1401A6B80(a2, L"HotspotX");
	if (v14)
	{
		v15 = (_WORD*)sub_1401A4F40(v14 + 32);
		sub_1407DF428(v15, (__int64)L"%d", a1 + 128);
	}
	v16 = sub_1401A6B80(a2, L"HotspotY");
	if (v16)
	{
		v17 = (_WORD*)sub_1401A4F40(v16 + 32);
		sub_1407DF428(v17, (__int64)L"%d", a1 + 132);
	}
	return 1;
}
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140A1A968: using guessed type wchar_t aPath_1[5];
// 140A31790: using guessed type wchar_t aName_6[5];
// 140A31888: using guessed type wchar_t aHeight[7];
// 140A31898: using guessed type wchar_t aWidth[6];
// 140A32B28: using guessed type wchar_t aHotspoty[9];
// 140A32B40: using guessed type wchar_t aHotspotx[9];

