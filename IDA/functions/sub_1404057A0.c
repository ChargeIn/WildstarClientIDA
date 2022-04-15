#include "../winhttp.h"

//----- (00000001404057A0) ----------------------------------------------------
void __fastcall sub_1404057A0(__int64 a1, int a2)
{
	_QWORD* v2; // rsi
	__int64 v3; // r8
	__m128i* v4; // rax
	bool v5; // zf
	__int64 v6; // rdi
	__int64 v7; // r8
	WCHAR* v8; // rcx
	DWORD FileAttributesW; // eax
	__int64 v10; // rcx
	__m128i* v11; // rax
	__int16* v12; // rax
	__int64 v13; // rdx
	char* v14; // r9
	__int16 v15; // r8
	__int64 v16; // rcx
	__m128i* v17; // rax
	char* v18; // rax
	__int64 v19; // rbx
	__int64 v20; // rcx
	char* v21; // r8
	__int16 v22; // dx
	struct _SYSTEMTIME SystemTime; // [rsp+58h] [rbp-B0h] BYREF
	__m128i v24[33]; // [rsp+68h] [rbp-A0h] BYREF
	WCHAR FileName[264]; // [rsp+278h] [rbp+170h] BYREF
	WCHAR pszPath[264]; // [rsp+488h] [rbp+380h] BYREF
	char v27[528]; // [rsp+698h] [rbp+590h] BYREF
	WCHAR v28[264]; // [rsp+8A8h] [rbp+7A0h] BYREF
	char v29[528]; // [rsp+AB8h] [rbp+9B0h] BYREF

	v2 = (_QWORD*)(a1 + 88);
	if ((a2 == 0) == (*(_QWORD*)(a1 + 88) == 0i64))
		return;
	if (!a2)
	{
		sub_14040AC60(a1);
		if (*v2)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v2 + 8i64))(*v2);
			*v2 = 0i64;
		}
		return;
	}
	GetLocalTime(&SystemTime);
	sub_14001B370(
		v27,
		260i64,
		L"Chat %i.%i.%i %2ih%2im%02i.%03is.txt",
		SystemTime.wYear,
		SystemTime.wMonth,
		SystemTime.wDay,
		SystemTime.wHour,
		SystemTime.wMinute,
		SystemTime.wSecond,
		SystemTime.wMilliseconds);
	if ((int)sub_14001B370(
		v24,
		260i64,
		L"%s\\%s\\%s\\%s",
		*(_QWORD*)&qword_140C63788 + 3724i64,
		L"NCSOFT",
		*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
		L"ChatLogs") >= 0
		&& v24[0].m128i_i16[0])
	{
		v4 = v24;
		do
		{
			v5 = v4->m128i_i16[1] == 0;
			v4 = (__m128i*)((char*)v4 + 2);
		} while (!v5);
	}
	v6 = *(_QWORD*)&qword_140C63788;
	if (sub_1401B5110(*(__int64*)&qword_140C63788, v29, v3, (__int64)v24))
	{
		if (!*(_DWORD*)(v6 + 2160))
		{
		LABEL_13:
			sub_1401B5020(*(__int64*)&qword_140C63788, pszPath, v7, (const WCHAR*)v24);
			SHCreateDirectory(0i64, pszPath);
			goto LABEL_14;
		}
		sub_1401B5020(v6, v28, v7, (const WCHAR*)v24);
		v8 = v28;
	}
	else
	{
		sub_1401B5020(v6, FileName, v7, (const WCHAR*)v24);
		v8 = FileName;
	}
	FileAttributesW = GetFileAttributesW(v8);
	if (FileAttributesW == -1 || ((FileAttributesW >> 4) & 1) == 0)
		goto LABEL_13;
LABEL_14:
	v10 = 260i64;
	v11 = v24;
	while (v11->m128i_i16[0])
	{
		v11 = (__m128i*)((char*)v11 + 2);
		if (!--v10)
			goto LABEL_24;
	}
	v12 = &v24[0].m128i_i16[260 - v10];
	v13 = 2147483646i64;
	v14 = (char*)(&unk_1409E8564 - (_UNKNOWN*)v12);
	while (v13)
	{
		v15 = *(__int16*)((char*)v12 + (_QWORD)v14);
		if (!v15)
			break;
		*v12++ = v15;
		--v13;
		if (!--v10)
		{
			--v12;
			break;
		}
	}
	*v12 = 0;
LABEL_24:
	v16 = 260i64;
	v17 = v24;
	while (v17->m128i_i16[0])
	{
		v17 = (__m128i*)((char*)v17 + 2);
		if (!--v16)
			goto LABEL_34;
	}
	v18 = &v24[0].m128i_i8[2 * (260 - v16)];
	v19 = v16;
	v20 = 2147483646i64;
	v21 = (char*)(v27 - v18);
	while (v20)
	{
		v22 = *(_WORD*)&v18[(_QWORD)v21];
		if (!v22)
			break;
		*(_WORD*)v18 = v22;
		v18 += 2;
		--v20;
		if (!--v19)
		{
			v18 -= 2;
			break;
		}
	}
	*(_WORD*)v18 = 0;
LABEL_34:
	sub_1401B5B50(*(__int64*)&qword_140C63788, v24, 2i64, 0, v2);
}
// 14040598C: conditional instruction was optimized away because rcx.8!=0
// 1404059A3: conditional instruction was optimized away because rcx.8!=0
// 1404059E5: conditional instruction was optimized away because rcx.8!=0
// 140405A0B: conditional instruction was optimized away because rcx.8!=0
// 140405A1F: conditional instruction was optimized away because rcx.8!=0
// 140405A58: conditional instruction was optimized away because rbx.8!=0
// 1404058E1: variable 'v3' is possibly undefined
// 140405903: variable 'v7' is possibly undefined
// 140A44EF0: using guessed type wchar_t aNcsoft[7];
// 140A473F8: using guessed type wchar_t aSSSS_1[12];
// 140AF88B0: using guessed type wchar_t aChatlogs[9];
// 140AF8910: using guessed type wchar_t aChatIII2ih2im0[37];
// 1404057A0: using guessed type char var_230[528];
// 1404057A0: using guessed type WCHAR var_440[264];

