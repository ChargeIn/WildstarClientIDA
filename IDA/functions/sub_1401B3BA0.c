#include "../winhttp.h"

//----- (00000001401B3BA0) ----------------------------------------------------
__int64 __fastcall sub_1401B3BA0(__int64 a1)
{
	const WCHAR* CommandLineW; // rax
	LPWSTR* v3; // rax
	int v4; // r9d
	LPWSTR* v5; // rsi
	LPWSTR* v6; // r11
	LPWSTR v7; // r10
	int v8; // ecx
	__int64 v9; // r8
	int v10; // eax
	int v11; // ecx
	__int16* v12; // rsi
	__int64 v13; // rbp
	__int64 i; // rbx
	int* v15; // rax
	int* v16; // rdi
	unsigned __int64 v17; // rbx
	unsigned __int64 j; // rbx
	__int64 v19; // rdi
	__int64 v20; // rbp
	__int64 v21; // rax
	int** v22; // r12
	__int64 v23; // rbp
	__int64 v24; // r15
	__int64 v25; // rbx
	__int64 v26; // rdi
	const __m128i* v27; // rax
	__int64 v28; // r8
	_WORD* v29; // rax
	DWORD CurrentDirectoryW; // eax
	unsigned __int64 v31; // r8
	__int64 v32; // rdx
	LPWSTR* hMem; // [rsp+30h] [rbp-98h]
	int pNumArgs; // [rsp+38h] [rbp-90h] BYREF
	const char* v36; // [rsp+40h] [rbp-88h] BYREF
	int v37; // [rsp+48h] [rbp-80h]
	int v38; // [rsp+4Ch] [rbp-7Ch]
	__int64 v39; // [rsp+50h] [rbp-78h]
	__int64(__fastcall * v40)(void**); // [rsp+58h] [rbp-70h]
	__int64 v41; // [rsp+60h] [rbp-68h]
	DWORD dwNumberOfProcessors; // [rsp+68h] [rbp-60h]
	struct _SYSTEM_INFO SystemInfo; // [rsp+70h] [rbp-58h] BYREF
	int* v44; // [rsp+D0h] [rbp+8h] BYREF

	*(_QWORD*)(a1 + 2136) = 0i64;
	*(_QWORD*)(a1 + 2128) = 0i64;
	*(_QWORD*)(a1 + 2152) = 0i64;
	*(_QWORD*)(a1 + 2144) = 0i64;
	*(_QWORD*)(a1 + 4856) = 0i64;
	*(_QWORD*)(a1 + 4864) = 0i64;
	*(_QWORD*)(a1 + 4872) = 0i64;
	*(_QWORD*)(a1 + 4880) = 0i64;
	*(_QWORD*)(a1 + 4896) = 0i64;
	*(_QWORD*)(a1 + 4904) = 0i64;
	pNumArgs = 0;
	CommandLineW = GetCommandLineW();
	v3 = CommandLineToArgvW(CommandLineW, &pNumArgs);
	v4 = 0;
	v5 = v3;
	hMem = v3;
	if (pNumArgs <= 0)
	{
	LABEL_10:
		v12 = L"WildStar";
	}
	else
	{
		v6 = v3;
		while (1)
		{
			v7 = *v6;
			v8 = **v6;
			if (((v8 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v8 - 150) <= 1)
			{
				v9 = 0i64;
				if (v7[1] == 83)
					break;
			}
		LABEL_9:
			++v4;
			++v6;
			if (v4 >= pNumArgs)
				goto LABEL_10;
		}
		LOWORD(v10) = v7[1];
		while ((_WORD)v10)
		{
			v10 = v7[v9 + 2];
			v11 = aSettingskey[++v9];
			if (v10 != v11)
				goto LABEL_9;
		}
		if (v4 + 1 >= pNumArgs)
			v12 = 0i64;
		else
			v12 = (__int16*)v5[v4 + 1];
	}
	v13 = *(_QWORD*)(a1 + 4896);
	for (i = 0i64; Caption[i]; ++i)
		;
	v15 = sub_14018B280(2 * i + 18, 0);
	if (v15)
	{
		*((_QWORD*)v15 + 1) = i;
		*(_QWORD*)v15 = off_140B55060;
	}
	else
	{
		v15 = 0i64;
	}
	v16 = v15 + 4;
	v17 = 2 * i;
	sub_1407DB590(v15 + 4, (int*)L"WildStar", v17);
	*(_WORD*)((char*)v16 + v17) = 0;
	*(_QWORD*)(a1 + 4896) = v16;
	if (v13)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
	for (j = 0i64; Caption[j]; ++j)
		;
	if ((unsigned int)sub_14018E3E0((__int64)v12, L"WildStar", j))
	{
		v19 = *(_QWORD*)(a1 + 4896);
		if (v19)
			v20 = *(_QWORD*)(v19 - 8);
		else
			v20 = 0i64;
		v21 = sub_14018D140(*(int**)(a1 + 4896), v20 + 1);
		*(_DWORD*)(v21 + 2 * v20) = 95;
		*(_QWORD*)(a1 + 4896) = v21;
		if (v19 != v21 && v19)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v19 - 16) + 8i64))(v19 - 16);
	}
	else
	{
		v12 += j;
	}
	v22 = sub_1401B3AB0(&v44, v12);
	if (*v22)
	{
		v23 = *(_QWORD*)(a1 + 4896);
		v24 = v23 ? *(_QWORD*)(v23 - 8) : 0i64;
		v25 = *((_QWORD*)*v22 - 1);
		v26 = sub_14018D140(*(int**)(a1 + 4896), v25 + v24);
		sub_1407DB590((int*)(v26 + 2 * v24), *v22, 2 * v25);
		*(_WORD*)(v26 + 2 * (v25 + v24)) = 0;
		*(_QWORD*)(a1 + 4896) = v26;
		if (v23 != v26)
		{
			if (v23)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v23 - 16) + 8i64))(v23 - 16);
		}
	}
	if (v44)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v44 - 2) + 8i64))(v44 - 4);
	sub_14019E4A0();
	GetModuleFileNameW(0i64, (LPWSTR)(a1 + 16), 0x104u);
	v27 = sub_1407DD8D8((const __m128i*)(a1 + 16), 0x5Cu);
	if (v27)
		v27->m128i_i16[0] = 0;
	v28 = 0i64;
	if (*(_WORD*)(a1 + 16))
	{
		v29 = (_WORD*)(a1 + 16);
		do
		{
			++v29;
			++v28;
		} while (*v29);
	}
	*(_QWORD*)(a1 + 536) = v28;
	CurrentDirectoryW = GetCurrentDirectoryW(0x104u, (LPWSTR)(a1 + 544));
	v31 = 2i64 * *(_QWORD*)(a1 + 536) + 2;
	*(_QWORD*)(a1 + 1064) = CurrentDirectoryW;
	sub_1407DB590((int*)(a1 + 1072), (int*)(a1 + 16), v31);
	*(_QWORD*)(a1 + 1592) = *(_QWORD*)(a1 + 536);
	*(_WORD*)(a1 + 1600) = 0;
	*(_QWORD*)(a1 + 2120) = 0i64;
	*(_DWORD*)(a1 + 4764) = 0;
	*(_QWORD*)(a1 + 4768) = 0i64;
	*(_DWORD*)(a1 + 4840) = 1;
	sub_1401A1070((__int64*)(a1 + 4848), 1, 1, 0i64, 0);
	*(_QWORD*)(a1 + 4776) = 0i64;
	*(_QWORD*)(a1 + 4784) = 0i64;
	*(_QWORD*)(a1 + 4792) = 0i64;
	*(_QWORD*)(a1 + 4800) = 0i64;
	*(_QWORD*)(a1 + 4808) = 0i64;
	*(_QWORD*)(a1 + 4816) = 0i64;
	*(_QWORD*)(a1 + 4824) = 0i64;
	*(_QWORD*)(a1 + 4832) = 0i64;
	*(_QWORD*)(a1 + 4888) = 0i64;
	*(_QWORD*)a1 = CreateIoCompletionPort((HANDLE)0xFFFFFFFFFFFFFFFFi64, 0i64, 0i64, 0);
	GetSystemInfo(&SystemInfo);
	v36 = "Asset";
	v40 = sub_1401B74F0;
	v37 = 1;
	v38 = 6;
	v39 = a1;
	dwNumberOfProcessors = SystemInfo.dwNumberOfProcessors;
	v41 = 0i64;
	sub_1401A0EB0((__int64)&v36, v32, (__int64*)(a1 + 8));
	LocalFree(hMem);
	return a1;
}
// 1401B3FC9: variable 'v32' is possibly undefined
// 140A44F50: using guessed type wchar_t aWildstar_0[9];
// 140A46F08: using guessed type wchar_t aSettingskey[12];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

