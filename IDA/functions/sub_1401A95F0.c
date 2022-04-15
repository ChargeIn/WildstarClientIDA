#include "../winhttp.h"

//----- (00000001401A95F0) ----------------------------------------------------
__int64 __fastcall sub_1401A95F0(_QWORD* a1, unsigned int a2, __int64 a3, __int64 a4, int a5, int a6, _BYTE* a7)
{
	int v7; // esi
	__int64 v10; // rax
	__int64 v11; // rdi
	__int64 v12; // rax
	__int64 v13; // rdx
	__int64 v14; // rax
	__int64 v15; // rdx
	__int64 v16; // rax
	__int64 v17; // rdx
	unsigned __int64 v18; // rax
	unsigned int v19; // edi

	v7 = a2;
	if (!a7 || *a7 != 49)
		return 4294967290i64;
	if (!a1)
		return 4294967294i64;
	a1[4] = 0i64;
	if (!a1[6])
	{
		a1[8] = 0i64;
		a1[6] = sub_1401CD9D0;
	}
	if (!a1[7])
		a1[7] = sub_1401CD9E0;
	if (a2 == -1)
	{
		v7 = 6;
	}
	else if (a2 > 9)
	{
		return 4294967294i64;
	}
	v10 = ((__int64(__fastcall*)(_QWORD, __int64, __int64))a1[6])(a1[8], 1i64, 5920i64);
	v11 = v10;
	if (!v10)
		return 4294967292i64;
	a1[5] = v10;
	*(_QWORD*)v10 = a1;
	*(_DWORD*)(v10 + 44) = 1;
	*(_QWORD*)(v10 + 48) = 0i64;
	*(_DWORD*)(v10 + 72) = 15;
	*(_DWORD*)(v10 + 68) = 0x8000;
	*(_DWORD*)(v10 + 76) = 0x7FFF;
	*(_DWORD*)(v10 + 120) = 15;
	*(_DWORD*)(v10 + 116) = 0x8000;
	*(_DWORD*)(v10 + 124) = 0x7FFF;
	*(_DWORD*)(v10 + 128) = 5;
	v12 = ((__int64(__fastcall*)(_QWORD, __int64, __int64))a1[6])(a1[8], 0x8000i64, 2i64);
	v13 = *(unsigned int*)(v11 + 68);
	*(_QWORD*)(v11 + 80) = v12;
	v14 = ((__int64(__fastcall*)(_QWORD, __int64, __int64))a1[6])(a1[8], v13, 2i64);
	v15 = *(unsigned int*)(v11 + 116);
	*(_QWORD*)(v11 + 96) = v14;
	v16 = ((__int64(__fastcall*)(_QWORD, __int64, __int64))a1[6])(a1[8], v15, 2i64);
	*(_DWORD*)(v11 + 5912) = 0;
	*(_DWORD*)(v11 + 5872) = 0x4000;
	*(_QWORD*)(v11 + 104) = v16;
	v17 = ((__int64(__fastcall*)(_QWORD, __int64, __int64))a1[6])(a1[8], 0x4000i64, 4i64);
	*(_QWORD*)(v11 + 16) = v17;
	v18 = *(unsigned int*)(v11 + 5872);
	*(_DWORD*)(v11 + 24) = 4 * v18;
	if (!*(_QWORD*)(v11 + 80) || !*(_QWORD*)(v11 + 96) || !*(_QWORD*)(v11 + 104) || !v17)
	{
		*(_DWORD*)(v11 + 8) = 666;
		a1[4] = aInsufficientMe;
		sub_1401AA350((__int64)a1);
		return 4294967292i64;
	}
	*(_DWORD*)(v11 + 172) = v7;
	*(_DWORD*)(v11 + 176) = 0;
	*(_BYTE*)(v11 + 60) = 8;
	*(_QWORD*)(v11 + 5880) = v17 + 2 * (v18 >> 1);
	*(_QWORD*)(v11 + 5864) = v17 + 2i64 * (unsigned int)v18 + (unsigned int)v18;
	v19 = sub_1401A9810((__int64)a1);
	if (!v19)
		sub_1401AA4D0(a1[5]);
	return v19;
}

