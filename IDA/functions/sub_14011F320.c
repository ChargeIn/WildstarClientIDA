#include "../winhttp.h"

//----- (000000014011F320) ----------------------------------------------------
__int64 __fastcall sub_14011F320(_QWORD* a1)
{
	char* v2; // rax
	unsigned int v3; // ebx
	FILETIME v4; // rsi
	signed int v5; // edi
	signed int LastError; // eax
	int* v7; // rax
	signed int v8; // eax
	unsigned __int16* v9; // rdi
	unsigned __int64* v10; // rdx
	unsigned __int64 v11; // r8
	FILETIME FileTime; // [rsp+30h] [rbp-78h] BYREF
	struct _FILETIME LocalFileTime; // [rsp+38h] [rbp-70h] BYREF
	__int64 v15; // [rsp+40h] [rbp-68h] BYREF
	unsigned __int16* v16; // [rsp+48h] [rbp-60h]
	int* v17; // [rsp+50h] [rbp-58h]
	int* v18; // [rsp+58h] [rbp-50h]
	__int64 v19; // [rsp+60h] [rbp-48h] BYREF
	const __m128i* v20; // [rsp+68h] [rbp-40h]
	struct _SYSTEMTIME SystemTime; // [rsp+80h] [rbp-28h] BYREF

	v2 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v19, v2);
	v3 = 0;
	if (sub_1401B5B50(*(__int64*)&qword_140C63788, v20, 1i64, 3, &FileTime) >= 0)
	{
		v4 = FileTime;
		FileTime = (FILETIME)(*(__int64(__fastcall**)(FILETIME))(**(_QWORD**)&FileTime + 32i64))(FileTime);
		if (FileTimeToLocalFileTime(&FileTime, &LocalFileTime) && FileTimeToSystemTime(&LocalFileTime, &SystemTime))
		{
			v5 = 0;
		}
		else
		{
			LastError = GetLastError();
			v5 = LastError;
			if (LastError > 0)
				v5 = (unsigned __int16)LastError | 0x80070000;
		}
		(*(void(__fastcall**)(FILETIME))(**(_QWORD**)&v4 + 8i64))(v4);
		if (v5 >= 0)
		{
			v7 = sub_14018B280(16i64, 0);
			v16 = (unsigned __int16*)v7;
			v17 = v7;
			v18 = v7 + 4;
			if (v7)
				*(_WORD*)v7 = 0;
			v8 = sub_14018CF50(&SystemTime, (__int64)&v15);
			v9 = v16;
			if (v8 >= 0)
			{
				v10 = (unsigned __int64*)sub_14018F0E0(&v15, v16)[1];
				if (v10)
				{
					v11 = -1i64;
					do
						++v11;
					while (*((_BYTE*)v10 + v11));
					sub_140058710((__int64)a1, v10, v11);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v16)
					sub_14018B900((__int64)v16, 0);
				v3 = 1;
			}
			if (v9)
				sub_14018B900((__int64)v9, 0);
		}
	}
	if (v20)
		sub_14018B900((__int64)v20, 0);
	return v3;
}

