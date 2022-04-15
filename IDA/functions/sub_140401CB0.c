#include "../winhttp.h"

//----- (0000000140401CB0) ----------------------------------------------------
__int64 __fastcall sub_140401CB0(__int64 a1)
{
	int* v1; // rax
	__int64 result; // rax
	int v4; // edx
	__int64 v5; // rcx
	unsigned int v6; // ebx
	int v7; // edi
	__int64 v8; // rax
	unsigned __int64 v9; // rcx
	unsigned __int64 v10; // rdx
	__int64 v11; // rcx

	v1 = *(int**)(a1 + 8);
	if ((v1[13] & 4) == 0)
		return 0i64;
	v4 = *v1;
	switch (*v1)
	{
	case 7:
		result = *(_QWORD*)(qword_140C65898 + 27728);
		if (result)
		{
			if ((*(_BYTE*)(result + 8) & 1) != 0)
				goto LABEL_21;
			result = *(_QWORD*)(qword_140C65898 + 27736) != 0i64;
		}
		break;
	case 15:
	case 16:
	case 17:
	case 29:
	case 30:
	case 47:
		if (v4 == 16 || (v5 = 11i64, v4 == 30))
			v5 = 12i64;
		v6 = 1;
		v7 = 1 << v5;
		v8 = sub_1405845F0(v5, *(_QWORD*)(a1 + 16));
		if (!v8
			|| (v9 = *(int*)(v8 + 772), v9 >= 0xA)
			|| (v10 = v8 + 8 * (v9 + 4 * v9 + 3)) == 0
			|| (v7 & *(_DWORD*)(v10 + 8)) == 0)
		{
			v6 = 0;
		}
		result = v6;
		break;
	case 18:
		result = (*(_BYTE*)a1 & 0xC) == 0;
		break;
	case 32:
		v11 = *(_QWORD*)(qword_140C65898 + 27728);
		result = v11 && (*(_BYTE*)(v11 + 8) & 1) == 0;
		break;
	default:
	LABEL_21:
		result = 1i64;
		break;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

