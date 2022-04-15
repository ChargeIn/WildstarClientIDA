//----- (00000001401B7D40) ----------------------------------------------------
__int64 __fastcall sub_1401B7D40(__int64 a1)
{
	unsigned int v2; // esi
	HANDLE FileW; // rax
	signed int LastError; // eax
	unsigned int v5; // ebx
	__int64 v6; // r9
	signed int v8; // eax
	bool v9; // sf
	__int64 v10; // r9
	int v11; // eax
	unsigned __int64 v12; // r9
	__int64 dwCreationDisposition; // [rsp+20h] [rbp-38h]
	__int64 v14; // [rsp+40h] [rbp-18h] BYREF
	LARGE_INTEGER FileSize; // [rsp+48h] [rbp-10h] BYREF

	v2 = 0;
	FileW = CreateFileW(*(LPCWSTR*)(a1 + 8), 0xC0000000, 0, 0i64, 4u, 0x10000080u, 0i64);
	*(_QWORD*)(a1 + 32) = FileW;
	if (FileW == (HANDLE)-1i64)
	{
		LastError = GetLastError();
		v5 = LastError;
		if (LastError > 0)
			v5 = (unsigned __int16)LastError | 0x80070000;
		v6 = *(_QWORD*)(a1 + 8);
		LODWORD(dwCreationDisposition) = v5;
		v14 = 0x141D41BE0i64;
		sub_1401A3130(3, 0, &v14, v6, dwCreationDisposition);
		return v5;
	}
	if (GetFileSizeEx(FileW, &FileSize))
	{
		if (FileSize.QuadPart >= 0x230ui64)
		{
			v8 = sub_1401BC1A0(a1, 0i64, (int*)(a1 + 56), 0x230ui64);
			if (v8 >= 0)
			{
				v8 = sub_1401BA550(a1);
				if (v8 >= 0)
				{
					if (*(_QWORD*)(a1 + 576) <= FileSize.QuadPart)
					{
						sub_1401BC800((__int64*)(a1 + 616), *(unsigned int*)(a1 + 600));
						v12 = 16i64 * *(unsigned int*)(a1 + 600);
						if (!v12 || (v8 = sub_1401BC1A0(a1, *(LARGE_INTEGER*)(a1 + 592), *(int**)(a1 + 616), v12), v8 >= 0))
						{
							v8 = sub_1401BA600((_QWORD*)a1);
							if (v8 >= 0)
							{
								*(_DWORD*)(a1 + 664) = 0;
								return 0i64;
							}
						}
					}
					else
					{
						v8 = -1610416127;
					}
				}
			}
			goto LABEL_12;
		}
		v8 = FileSize.QuadPart != 0 ? 0xA0030001 : 0;
	}
	else
	{
		v8 = GetLastError();
		v9 = v8 < 0;
		if (v8 <= 0)
			goto LABEL_11;
		v8 = (unsigned __int16)v8 | 0x80070000;
	}
	v9 = v8 < 0;
LABEL_11:
	if (v9)
	{
	LABEL_12:
		v10 = *(_QWORD*)(a1 + 8);
		v14 = 0x141D41B70i64;
		LODWORD(dwCreationDisposition) = v8;
		sub_1401A3130(3, 0, &v14, v10, dwCreationDisposition);
	}
	v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 160i64))(a1);
	if (v11 < 0)
		return (unsigned int)v11;
	return v2;
}
// 1401B7DBB: variable 'dwCreationDisposition' is possibly undefined

