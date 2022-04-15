#include "../winhttp.h"

//----- (00000001407E3FC4) ----------------------------------------------------
__int64 sub_1407E3FC4()
{
	LPVOID v0; // rax
	unsigned __int64 v1; // rcx
	LPBYTE v3; // r14
	HANDLE* v4; // rsi
	int v5; // r15d
	int i; // ebx
	LPVOID v7; // rax
	unsigned __int64 v8; // rcx
	int v9; // edi
	__int64 v10; // rbx
	int v11; // edi
	__int64 v12; // rbx
	DWORD v13; // ecx
	HANDLE StdHandle; // rax
	HANDLE v15; // rsi
	DWORD FileType; // eax
	char v17; // al
	_BYTE v18[32]; // [rsp+0h] [rbp-D8h] BYREF
	int v19; // [rsp+20h] [rbp-B8h]
	unsigned __int64 v20; // [rsp+28h] [rbp-B0h]
	int v21; // [rsp+30h] [rbp-A8h]
	LPBYTE v22; // [rsp+38h] [rbp-A0h]
	HANDLE* v23; // [rsp+40h] [rbp-98h]
	_BYTE* v24; // [rsp+48h] [rbp-90h]
	struct _STARTUPINFOW StartupInfo; // [rsp+50h] [rbp-88h] BYREF

	v24 = v18;
	sub_1407E2340(11);
	v0 = sub_1407E2BB0(0x20ui64, 0x58ui64);
	v1 = (unsigned __int64)v0;
	v20 = (unsigned __int64)v0;
	if (!v0)
	{
		sub_1407EED30(v18, &loc_1407E4028);
		return 0xFFFFFFFFi64;
	}
	qword_140C60410[0] = (__int64)v0;
	dword_140DC523C = 32;
	while (v1 < (unsigned __int64)v0 + 2816)
	{
		*(_WORD*)(v1 + 8) = 2560;
		*(_QWORD*)v1 = -1i64;
		*(_DWORD*)(v1 + 12) = 0;
		*(_BYTE*)(v1 + 56) &= 0x80u;
		*(_BYTE*)(v1 + 56) &= ~0x80u;
		*(_WORD*)(v1 + 57) = 2570;
		*(_DWORD*)(v1 + 80) = 0;
		*(_BYTE*)(v1 + 76) = 0;
		v1 += 88i64;
		v20 = v1;
		v0 = (LPVOID)qword_140C60410[0];
	}
	GetStartupInfoW(&StartupInfo);
	if (StartupInfo.cbReserved2 && StartupInfo.lpReserved2)
	{
		v3 = StartupInfo.lpReserved2 + 4;
		v22 = StartupInfo.lpReserved2 + 4;
		v4 = (HANDLE*)&StartupInfo.lpReserved2[*(_DWORD*)StartupInfo.lpReserved2 + 4];
		v23 = v4;
		v5 = 2048;
		if (*(int*)StartupInfo.lpReserved2 < 2048)
			v5 = *(_DWORD*)StartupInfo.lpReserved2;
		for (i = 1; ; ++i)
		{
			v21 = i;
			if (dword_140DC523C >= v5)
				break;
			v7 = sub_1407E2BB0(0x20ui64, 0x58ui64);
			v8 = (unsigned __int64)v7;
			v20 = (unsigned __int64)v7;
			if (!v7)
			{
				v5 = dword_140DC523C;
				break;
			}
			qword_140C60410[i] = (__int64)v7;
			dword_140DC523C += 32;
			while (v8 < qword_140C60410[i] + 2816)
			{
				*(_WORD*)(v8 + 8) = 2560;
				*(_QWORD*)v8 = -1i64;
				*(_DWORD*)(v8 + 12) = 0;
				*(_BYTE*)(v8 + 56) &= 0x80u;
				*(_WORD*)(v8 + 57) = 2570;
				*(_DWORD*)(v8 + 80) = 0;
				*(_BYTE*)(v8 + 76) = 0;
				v8 += 88i64;
				v20 = v8;
			}
		}
		v9 = 0;
		v19 = 0;
		while (v9 < v5)
		{
			if ((unsigned __int64)*v4 + 2 > 1 && (*v3 & 1) != 0 && ((*v3 & 8) != 0 || GetFileType(*v4)))
			{
				v10 = qword_140C60410[(__int64)v9 >> 5] + 88i64 * (v9 & 0x1F);
				v20 = v10;
				*(_QWORD*)v10 = *v4;
				*(_BYTE*)(v10 + 8) = *v3;
				InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(v10 + 16), 0xFA0u);
				++* (_DWORD*)(v10 + 12);
			}
			v19 = ++v9;
			v22 = ++v3;
			v23 = ++v4;
		}
	}
	v11 = 0;
	v19 = 0;
	while (v11 < 3)
	{
		v12 = qword_140C60410[0] + 88i64 * v11;
		v20 = v12;
		if (*(_QWORD*)v12 != -2i64 && *(_QWORD*)v12 != -1i64)
		{
			*(_BYTE*)(v12 + 8) |= 0x80u;
			goto LABEL_42;
		}
		*(_BYTE*)(v12 + 8) = -127;
		v13 = -(v11 != 1) - 11;
		if (!v11)
			v13 = -10;
		StdHandle = GetStdHandle(v13);
		v15 = StdHandle;
		if ((unsigned __int64)StdHandle + 1 > 1)
		{
			FileType = GetFileType(StdHandle);
			if (FileType)
			{
				*(_QWORD*)v12 = v15;
				if ((unsigned __int8)FileType == 2)
				{
					v17 = *(_BYTE*)(v12 + 8) | 0x40;
					goto LABEL_38;
				}
				if ((unsigned __int8)FileType == 3)
				{
					v17 = *(_BYTE*)(v12 + 8) | 8;
				LABEL_38:
					*(_BYTE*)(v12 + 8) = v17;
				}
				InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(v12 + 16), 0xFA0u);
				++* (_DWORD*)(v12 + 12);
				goto LABEL_42;
			}
		}
		*(_BYTE*)(v12 + 8) |= 0x40u;
		*(_QWORD*)v12 = -2i64;
		if (lpMem)
			*(_DWORD*)(*((_QWORD*)lpMem + v11) + 28i64) = -2;
	LABEL_42:
		v19 = ++v11;
	}
	sub_1407E2528(11);
	return 0i64;
}
// 140C60410: using guessed type __int64 qword_140C60410[64];
// 140DC523C: using guessed type int dword_140DC523C;

