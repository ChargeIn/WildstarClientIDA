#include "../winhttp.h"

//----- (00000001408380A0) ----------------------------------------------------
__int64 __fastcall sub_1408380A0(__int64 a1, unsigned int a2, float a3, unsigned __int64 a4, int* a5, int a6)
{
	__int64 v7; // rdi
	float v10; // xmm6_4
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13; // rcx

	v7 = 0i64;
	v10 = a3;
	v11 = *(_QWORD*)(a1 + 8i64 * (a2 % 0xC1));
	if (v11)
	{
		while (*(_DWORD*)v11 != a2)
		{
			v11 = *(_QWORD*)(v11 + 8);
			if (!v11)
				goto LABEL_4;
		}
	}
	else
	{
	LABEL_4:
		v11 = 0i64;
	}
	if (v11)
	{
		v7 = sub_140834F40((__int64*)(v11 + 24), a4);
	}
	else
	{
		v12 = sub_1408819F0(dword_140C10F20, 80i64);
		v11 = v12;
		if (!v12)
			return 2i64;
		*(_DWORD*)v12 = a2;
		*(_DWORD*)(v12 + 16) = 0;
		*(_QWORD*)(v12 + 24) = 0i64;
		*(_QWORD*)(v12 + 32) = 0i64;
		*(_DWORD*)(v12 + 40) = 0;
		*(_QWORD*)(v12 + 48) = 0i64;
		*(_QWORD*)(v12 + 56) = 0i64;
		*(_QWORD*)(v12 + 64) = 0i64;
		*(_DWORD*)(v12 + 72) = 0;
		v13 = *(_DWORD*)v12 % 0xC1u;
		*(_QWORD*)(v12 + 8) = *(_QWORD*)(a1 + 8 * v13);
		*(_QWORD*)(a1 + 8 * v13) = v12;
		++* (_DWORD*)(a1 + 1544);
	}
	if (a6 == 2)
		v10 = a3 + sub_140836260(v11, v7);
	return sub_140837F20(v11, v7, v10, a4, a5, 0);
}
// 140C10F20: using guessed type int dword_140C10F20;

