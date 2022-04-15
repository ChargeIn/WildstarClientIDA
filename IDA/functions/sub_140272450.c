#include "../winhttp.h"

//----- (0000000140272450) ----------------------------------------------------
__int64 __fastcall sub_140272450(__int64 a1)
{
	int* v2; // rbx
	__int64(__fastcall * **v3)(_QWORD); // rcx
	int v4; // r8d
	int v5; // edx
	__int64 result; // rax
	int** v7; // rdi

	v2 = sub_14018B280(40i64, 0);
	if (v2)
	{
		*((_QWORD*)v2 + 3) = 0i64;
		*((_QWORD*)v2 + 4) = 0i64;
		*((_QWORD*)v2 + 1) = 0i64;
	}
	else
	{
		v2 = 0i64;
	}
	v3 = *(__int64(__fastcall****)(_QWORD))(a1 + 7688);
	v4 = *(_DWORD*)(a1 + 7700);
	v5 = *(_DWORD*)(a1 + 7696);
	result = *(unsigned int*)(a1 + 7684);
	*((_QWORD*)v2 + 1) = v3;
	v2[4] = v5;
	v2[5] = v4;
	*v2 = result;
	if (v3)
		result = (**v3)(v3);
	v7 = (int**)(a1 + 7736);
	if (!*((_QWORD*)v2 + 3))
	{
		*((_QWORD*)v2 + 3) = v7;
		*((_QWORD*)v2 + 4) = *v7;
		*v7 = v2;
		result = *((_QWORD*)v2 + 4);
		if (result)
			*(_QWORD*)(result + 24) = v2 + 8;
	}
	return result;
}

