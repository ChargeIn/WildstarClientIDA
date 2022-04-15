#include "../winhttp.h"

//----- (0000000140862F90) ----------------------------------------------------
__int64 __fastcall sub_140862F90(__int64 a1, int a2, unsigned __int16 a3, __int64 a4)
{
	int v7; // eax
	bool v8; // al
	__int64 v9; // rcx
	__int64 result; // rax
	int v11; // ecx
	int i; // edx
	__int64 v13; // rdx
	int* v14; // rax
	int* v15; // rsi

	*(_QWORD*)(a1 + 1056) = a4;
	v7 = sub_14085CF90((__int64*)(a1 + 1056));
	*(_DWORD*)(a1 + 772) = v7;
	v8 = sub_14083B280(qword_140C61B88, v7);
	*(_BYTE*)(a1 + 776) &= ~2u;
	*(_BYTE*)(a1 + 1072) = 0;
	*(_BYTE*)(a1 + 776) |= 2 * v8;
	sub_140863130(a1, a4, a2);
	sub_14087ACD0(a1 + 840, a3);
	v9 = *(_QWORD*)(a1 + 1056);
	if (v9)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		if (!(*(unsigned __int8(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 1056) + 304i64))(
			*(_QWORD*)(a1 + 1056),
			3i64))
			return 2i64;
	}
	*(_DWORD*)(a1 + 1064) = 4;
	*(_DWORD*)(a1 + 784) = 1065353216;
	*(_DWORD*)(a1 + 780) = 1065353216;
	v11 = a2;
	*(_QWORD*)(a1 + 788) = 0i64;
	for (i = 0; v11; v11 &= v11 - 1)
		++i;
	*(_DWORD*)(a1 + 1068) = 0;
	*(_DWORD*)(a1 + 880) = 4 * i * a3;
	*(_QWORD*)(a1 + 848) = 0i64;
	*(_QWORD*)(a1 + 860) = 43i64;
	v13 = *(unsigned int*)(a1 + 880);
	*(_DWORD*)(a1 + 860) = 17;
	v14 = (int*)sub_140881960(dword_140C10F28, v13, 0x10u);
	v15 = v14;
	if (!v14)
		return 52i64;
	sub_1407E4830(v14, 0i64, *(unsigned int*)(a1 + 880));
	*(_QWORD*)(a1 + 848) = v15;
	*(_WORD*)(a1 + 864) = a3;
	*(_WORD*)(a1 + 866) = 0;
	*(_DWORD*)(a1 + 856) = a2;
	result = 1i64;
	*(_QWORD*)(a1 + 872) = 0i64;
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C61B88: using guessed type __int64 qword_140C61B88;

