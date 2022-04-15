#include "../winhttp.h"

//----- (0000000140010EF0) ----------------------------------------------------
__int64 __fastcall sub_140010EF0(__m128i* lpApplicationName, __int64 a2, unsigned __int64 a3)
{
	unsigned __int64 v3; // rbp
	unsigned __int64 v4; // rdi
	__int64 v5; // rsi
	__m128i* v6; // r12
	__int64 v7; // r15
	__int64 i; // rdi
	int* v9; // rax
	int* v10; // rbx
	unsigned __int64 v11; // rdi
	unsigned __int64 v12; // r14
	int* v13; // rax
	unsigned __int64 v14; // r13
	int* v15; // rsi
	__int64 v16; // rdi
	int* v17; // rax
	int* v18; // rbx
	unsigned __int64 v19; // rdi
	unsigned __int64 v20; // rdi
	int* v21; // rax
	int* v22; // r12
	int* v23; // rcx
	_QWORD* v24; // rdi
	char* v25; // rsi
	int v26; // eax
	WCHAR* v27; // rdi
	unsigned int v28; // esi
	__int64 v29; // rcx
	unsigned __int64 j; // rbx
	__int64 v31; // rcx
	const WCHAR* lpCurrentDirectory; // rbx
	const __m128i* v33; // rax
	__int64 v34; // rsi
	int* v35; // rax
	unsigned __int64 v36; // rsi
	signed int LastError; // eax
	signed int v38; // eax
	unsigned __int64 v40; // [rsp+50h] [rbp-D8h]
	struct _PROCESS_INFORMATION ProcessInformation; // [rsp+58h] [rbp-D0h] BYREF
	struct _STARTUPINFOW StartupInfo; // [rsp+70h] [rbp-B8h] BYREF
	LPWSTR lpCommandLine; // [rsp+148h] [rbp+20h] BYREF

	v3 = 0i64;
	v4 = a3;
	v5 = a2;
	v6 = lpApplicationName;
	lpCommandLine = 0i64;
	v7 = 0i64;
	if (lpApplicationName)
	{
		for (i = 0i64; lpApplicationName->m128i_i16[i]; ++i)
			;
		v9 = sub_14018B280(2 * i + 18, 0);
		if (v9)
		{
			*(_QWORD*)v9 = off_140B55060;
			*((_QWORD*)v9 + 1) = i;
		}
		else
		{
			v9 = 0i64;
		}
		v10 = v9 + 4;
		v11 = 2 * i;
		sub_1407DB590(v9 + 4, v6->m128i_i32, v11);
		*(_WORD*)((char*)v10 + v11) = 0;
		v4 = a3;
	}
	else
	{
		v10 = 0i64;
	}
	v12 = 1i64;
	v13 = sub_14018DB00(0i64, 1ui64, 8i64);
	if (v13)
	{
		*(_QWORD*)v13 = v10;
		v7 = (__int64)v13;
		v10 = 0i64;
	}
	if (v10)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v10 - 2) + 8i64))(v10 - 4);
	v14 = 0i64;
	if (v4)
	{
		do
		{
			v15 = *(int**)(v5 + 8 * v14);
			if (v15)
			{
				v16 = 0i64;
				if (*(_WORD*)v15)
				{
					do
						++v16;
					while (*((_WORD*)v15 + v16));
				}
				v17 = sub_14018B280(2 * v16 + 18, 0);
				if (v17)
				{
					*((_QWORD*)v17 + 1) = v16;
					*(_QWORD*)v17 = off_140B55060;
				}
				else
				{
					v17 = 0i64;
				}
				v18 = v17 + 4;
				v19 = 2 * v16;
				sub_1407DB590(v17 + 4, v15, v19);
				*(_WORD*)((char*)v18 + v19) = 0;
			}
			else
			{
				v18 = 0i64;
			}
			v20 = v12 + 1;
			v40 = v12 + 1;
			v21 = sub_14018DB00(v7, v12 + 1, 8i64);
			v22 = v21;
			v23 = &v21[2 * v12];
			if (v23)
			{
				*(_QWORD*)v23 = v18;
				v18 = 0i64;
			}
			if ((int*)v7 != v21)
			{
				if (v12)
				{
					v24 = (_QWORD*)v7;
					v25 = (char*)v21 - v7;
					do
					{
						if ((_QWORD*)((char*)v24 + (_QWORD)v25))
						{
							*(_QWORD*)((char*)v24 + (_QWORD)v25) = *v24;
							*v24 = 0i64;
						}
						if (*v24)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v24 - 16i64) + 8i64))(*v24 - 16i64);
						++v24;
						--v12;
					} while (v12);
					v20 = v40;
				}
				if (v7)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
				v7 = (__int64)v22;
			}
			v12 = v20;
			if (v18)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v18 - 2) + 8i64))(v18 - 4);
			v5 = a2;
			++v14;
		} while (v14 < a3);
		v6 = lpApplicationName;
	}
	v26 = sub_140010CD0(v7, v12, (int**)&lpCommandLine);
	v27 = lpCommandLine;
	v28 = v26;
	if (v26 < 0)
	{
		if (v12)
		{
			do
			{
				v29 = *(_QWORD*)(v7 + 8 * v3);
				if (v29)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v29 - 16) + 8i64))(v29 - 16);
				++v3;
			} while (v3 < v12);
		}
		if (v7)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
		goto LABEL_71;
	}
	for (j = 0i64; j < v12; ++j)
	{
		v31 = *(_QWORD*)(v7 + 8 * j);
		if (v31)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v31 - 16) + 8i64))(v31 - 16);
	}
	if (v7)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
	lpCurrentDirectory = 0i64;
	v33 = sub_1407DD8D8(v6, 0x5Cu);
	if (v33)
	{
		if (v6)
		{
			v34 = ((char*)v33 - (char*)v6) >> 1;
			v35 = sub_14018B280(2 * v34 + 18, 0);
			if (v35)
			{
				*((_QWORD*)v35 + 1) = v34;
				*(_QWORD*)v35 = off_140B55060;
			}
			else
			{
				v35 = 0i64;
			}
			lpCurrentDirectory = (const WCHAR*)(v35 + 4);
			v36 = v34;
			sub_1407DB590(v35 + 4, v6->m128i_i32, v36 * 2);
			lpCurrentDirectory[v36] = 0;
		}
		sub_1407E4830((int*)&StartupInfo, 0i64, 0x68ui64);
		StartupInfo.cb = 104;
		if (!CreateProcessW(
			(LPCWSTR)v6,
			v27,
			0i64,
			0i64,
			0,
			0,
			0i64,
			lpCurrentDirectory,
			&StartupInfo,
			&ProcessInformation))
			goto LABEL_66;
		if (!CloseHandle(ProcessInformation.hThread))
		{
			LastError = GetLastError();
			v28 = LastError;
			if (LastError > 0)
				v28 = (unsigned __int16)LastError | 0x80070000;
			CloseHandle(ProcessInformation.hProcess);
			goto LABEL_69;
		}
		if (!CloseHandle(ProcessInformation.hProcess))
		{
		LABEL_66:
			v38 = GetLastError();
			v28 = v38;
			if (v38 > 0)
				v28 = (unsigned __int16)v38 | 0x80070000;
			goto LABEL_69;
		}
		v28 = 0;
	}
	else
	{
		v28 = -2147024809;
	}
LABEL_69:
	if (lpCurrentDirectory)
		(*(void(__fastcall**)(const WCHAR*))(*((_QWORD*)lpCurrentDirectory - 2) + 8i64))(lpCurrentDirectory - 8);
LABEL_71:
	if (v27)
		(*(void(__fastcall**)(WCHAR*))(*((_QWORD*)v27 - 2) + 8i64))(v27 - 8);
	return v28;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

