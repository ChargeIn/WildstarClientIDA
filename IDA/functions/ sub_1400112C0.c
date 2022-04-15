#include "../winhttp.h"

//----- (00000001400112C0) ----------------------------------------------------
void __fastcall __noreturn sub_1400112C0(__int64 a1)
{
	const __m128i* v2; // rax
	unsigned __int64 v3; // rsi
	const __m128i* v4; // rax
	__int64 v5; // rcx
	__m128i* v6; // rax
	char* v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rcx
	signed __int64 v10; // r8
	__int16 v11; // dx
	_QWORD* v12; // rdi
	int v13; // ebp
	__int64 v14; // r14
	int v15; // ebx
	int v16; // ecx
	__int64 v17; // rdi
	int* v18; // rax
	int* v19; // rbx
	unsigned __int64 v20; // rdi
	int* v21; // rax
	__m128i Filename[33]; // [rsp+20h] [rbp-228h] BYREF

	GetModuleFileNameW(0i64, (LPWSTR)Filename, 0x104u);
	v2 = sub_1407DD8D8(Filename, 0x5Cu);
	v3 = 0i64;
	if (v2)
	{
		v2->m128i_i16[0] = 0;
		v4 = sub_1407DD8D8(Filename, 0x5Cu);
		if (v4)
			v4->m128i_i16[0] = 0;
	}
	v5 = 260i64;
	v6 = Filename;
	while (v6->m128i_i16[0])
	{
		v6 = (__m128i*)((char*)v6 + 2);
		if (!--v5)
			goto LABEL_14;
	}
	v7 = &Filename[0].m128i_i8[2 * (260 - v5)];
	v8 = v5;
	v9 = 2147483646i64;
	v10 = (char*)L"\\WildStar.exe" - v7;
	do
	{
		if (!v9)
			goto LABEL_13;
		v11 = *(_WORD*)&v7[v10];
		if (!v11)
			goto LABEL_13;
		*(_WORD*)v7 = v11;
		v7 += 2;
		--v9;
		--v8;
	} while (v8);
	v7 -= 2;
LABEL_13:
	*(_WORD*)v7 = 0;
LABEL_14:
	v12 = *(_QWORD**)(a1 + 288);
	v13 = *(_DWORD*)(a1 + 296);
	v14 = 0i64;
	v15 = 0;
	if (v13 > 0)
	{
		while (1)
		{
			v16 = *(unsigned __int16*)*v12;
			if ((((v16 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v16 - 150) <= 1)
				&& !(unsigned int)sub_14018E2C0(*v12 + 2i64, L"steam"))
			{
				break;
			}
			++v15;
			++v12;
			if (v15 >= v13)
				goto LABEL_29;
		}
		v17 = 0i64;
		do
			++v17;
		while (aSteam_1[v17]);
		v18 = sub_14018B280(2 * v17 + 18, 0);
		if (v18)
		{
			*((_QWORD*)v18 + 1) = v17;
			*(_QWORD*)v18 = off_140B55060;
		}
		else
		{
			v18 = 0i64;
		}
		v19 = v18 + 4;
		v20 = 2 * v17;
		sub_1407DB590(v18 + 4, (int*)L"/steam", v20);
		*(_WORD*)((char*)v19 + v20) = 0;
		v21 = sub_14018DB00(0i64, 1ui64, 8i64);
		if (v21)
		{
			*(_QWORD*)v21 = v19;
			v14 = (__int64)v21;
			v19 = 0i64;
		}
		v3 = 1i64;
		if (v19)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v19 - 2) + 8i64))(v19 - 4);
	}
LABEL_29:
	if ((int)sub_140010EF0(Filename, v14, v3) < 0)
		MessageBoxW(0i64, L"Failed to start WildStar.exe", L"Error", 0x10u);
	ExitProcess(0);
}
// 140011353: conditional instruction was optimized away because rcx.8!=0
// 140011367: conditional instruction was optimized away because rcx.8!=0
// 1400113A3: conditional instruction was optimized away because rbx.8!=0
// 1409DFAC8: using guessed type wchar_t aWildstarExe[14];
// 1409DFAE8: using guessed type wchar_t aSteam_0[6];
// 1409DFAF8: using guessed type wchar_t aSteam_1[7];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 1400112C0: using guessed type __m128i Filename[33];

