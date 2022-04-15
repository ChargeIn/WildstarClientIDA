#include "../winhttp.h"

//----- (00000001403365E0) ----------------------------------------------------
__int64 __fastcall sub_1403365E0(__int64 a1, int* a2, int* a3)
{
	__int64 v6; // rax
	__int64 result; // rax
	__int64 v8; // rbp
	int* v9; // rcx
	signed __int64 v10; // r14
	unsigned __int64 v11; // rdi
	_QWORD* v12; // rax
	unsigned __int64 v13; // r15

	if (*(_QWORD*)(a1 + 16))
	{
		v6 = *(_QWORD*)(a1 + 8);
		*(_QWORD*)(a1 + 16) = 0i64;
		++* (_QWORD*)(v6 + 32);
	}
	if (*(_QWORD*)(a1 + 8))
		goto LABEL_7;
	if (!*(_QWORD*)(a1 + 32))
		return 2147500037i64;
	result = sub_140336330(a1);
	if (!(_DWORD)result)
	{
	LABEL_7:
		if (a2 != a3)
		{
			while (1)
			{
				v8 = *(_QWORD*)(a1 + 8);
				v9 = *(int**)(v8 + 32);
				v10 = (char*)a3 - (char*)a2;
				v11 = *(_QWORD*)(v8 + 24) - (_QWORD)v9;
				if ((char*)a3 - (char*)a2 <= v11)
					break;
				sub_1407DB590(v9, a2, *(_QWORD*)(v8 + 24) - *(_QWORD*)(v8 + 32));
				*(_QWORD*)(v8 + 32) += v11;
				a2 = (int*)((char*)a2 + v11);
				if (v10 && !*(_QWORD*)(a1 + 32))
					return 2147500037i64;
				if (!*(_QWORD*)(a1 + 32))
					return 2147500037i64;
				v12 = sub_140338550(*(__int64**)(a1 + 24));
				if (!v12)
					return 2147500037i64;
				sub_140337F20(*(_QWORD**)(a1 + 32), v12);
				*(_QWORD*)(a1 + 8) = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8i64);
				if (a2 == a3)
					return 0i64;
			}
			v13 = (char*)a3 - (char*)a2;
			sub_1407DB590(v9, a2, v13);
			*(_QWORD*)(v8 + 32) += v13;
		}
		return 0i64;
	}
	return result;
}

