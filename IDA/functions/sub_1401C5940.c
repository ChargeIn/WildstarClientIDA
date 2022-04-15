//----- (00000001401C5940) ----------------------------------------------------
signed int __fastcall sub_1401C5940(__int64 a1, _BYTE* a2, __int64 a3, SIZE_T a4)
{
	int v4; // ebx
	SIZE_T RegionSize; // rsi
	__int64 v7; // rax
	int v8; // edi
	__int64 v9; // rdx
	char* v10; // r8
	char v11; // al
	char v12; // cl
	unsigned int v13; // eax
	char* v14; // rcx
	unsigned __int64 v15; // rdx
	__int64 v16; // rdi
	__int64 dwMaximumSizeLow; // rax
	HANDLE FileMappingW; // rax
	signed int result; // eax
	const void* v20; // rax
	__int64 v21; // [rsp+38h] [rbp-D0h]
	unsigned __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
	char* v23; // [rsp+50h] [rbp-B8h] BYREF
	struct _MEMORY_BASIC_INFORMATION Buffer; // [rsp+58h] [rbp-B0h] BYREF
	int v25[5]; // [rsp+88h] [rbp-80h] BYREF
	__int64 v26; // [rsp+9Ch] [rbp-6Ch]
	__int16 v27; // [rsp+A4h] [rbp-64h]
	char v28[64]; // [rsp+A6h] [rbp-62h] BYREF
	__int64 v29; // [rsp+E8h] [rbp-20h]
	char v30[32]; // [rsp+F8h] [rbp-10h] BYREF
	char v31[96]; // [rsp+118h] [rbp+10h] BYREF
	WCHAR Name[128]; // [rsp+178h] [rbp+70h] BYREF

	v4 = 0;
	RegionSize = a4;
	if (!a4)
		goto LABEL_27;
	v7 = 0i64;
	if (a4 == -1i64)
		RegionSize = 0i64;
	v26 = 0i64;
	v27 = 0;
	v25[0] = 1732584193;
	v25[1] = -271733879;
	v25[2] = -1732584194;
	v25[3] = 271733878;
	v25[4] = -1009589776;
	v29 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v7;
		while (*(_WORD*)&a2[2 * v7]);
	}
	if (!(2 * v7))
		goto LABEL_9;
	sub_1401C8C20((__int64)v25, a2, 2 * v7);
	if (HIDWORD(v29))
		goto LABEL_12;
	if (!(_DWORD)v29)
	{
	LABEL_9:
		sub_1401C8F20((__int64)v25);
		memset(v28, 0, sizeof(v28));
		v26 = 0i64;
		LODWORD(v29) = 1;
	}
	v8 = 0;
	v9 = 0i64;
	v10 = v30;
	do
	{
		v11 = v8++;
		++v10;
		v12 = 3 - (v11 & 3);
		v13 = v25[v9 >> 2];
		v9 = v8;
		*(v10 - 1) = v13 >> (8 * v12);
	} while ((unsigned __int64)v8 < 0x14);
LABEL_12:
	v14 = v31;
	v15 = 41i64;
	v16 = 0i64;
	v23 = v31;
	v22 = 41i64;
	while (1)
	{
		LODWORD(v21) = (unsigned __int8)v30[v16];
		if ((int)sub_1401A3210((int*)v14, v15, (__int64*)&v23, &v22, 0, L"%0.2x", v21) < 0)
			break;
		if ((unsigned __int64)++v16 >= 0x14)
			break;
		v15 = v22;
		v14 = v23;
	}
	sub_14001B370(Name, 128i64, L"%s\\%s.Buffer.%s", L"Local", L"NCSOFT", v31);
	dwMaximumSizeLow = 1i64;
	if (RegionSize)
		dwMaximumSizeLow = RegionSize;
	FileMappingW = CreateFileMappingW(
		(HANDLE)0xFFFFFFFFFFFFFFFFi64,
		0i64,
		4u,
		HIDWORD(dwMaximumSizeLow),
		dwMaximumSizeLow,
		Name);
	*(_QWORD*)(a1 + 24) = FileMappingW;
	if (FileMappingW)
	{
		if (GetLastError() == 183)
		{
			v4 = 1;
		}
		else if (!RegionSize)
		{
			return -2147467259;
		}
		v20 = MapViewOfFile(*(HANDLE*)(a1 + 24), 6u, 0, 0, RegionSize);
		*(_QWORD*)(a1 + 32) = v20;
		if (v20)
		{
			if (RegionSize)
			{
			LABEL_27:
				*(_QWORD*)(a1 + 16) = RegionSize;
				return v4;
			}
			if (VirtualQuery(v20, &Buffer, 0x30ui64))
			{
				RegionSize = Buffer.RegionSize;
				goto LABEL_27;
			}
		}
	}
	result = GetLastError();
	if (result > 0)
		return (unsigned __int16)result | 0x80070000;
	return result;
}
// 1401C5A7D: variable 'v21' is possibly undefined
// 140A44EF0: using guessed type wchar_t aNcsoft[7];
// 140A47918: using guessed type wchar_t aSSBufferS[16];
// 140A47A58: using guessed type wchar_t aLocal_1[6];
// 140A47D08: using guessed type wchar_t a02x_0[6];
// 1401C5940: using guessed type char var_1B0[32];

