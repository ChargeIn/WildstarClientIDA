#include "../winhttp.h"

//----- (0000000140494E40) ----------------------------------------------------
_QWORD* __fastcall sub_140494E40(__int64 a1, __int64 a2)
{
	__int64 v3; // rdx
	__int64 v5; // rcx
	int v6; // r8d
	__int64 v7; // rax
	__int64 v8; // rbx
	int* v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rax
	_QWORD* result; // rax
	__int64 v13; // [rsp+20h] [rbp-18h]

	v3 = *(_QWORD*)(a2 + 24);
	if ((*(_BYTE*)(v3 + 8) & 1) != 0)
	{
		v5 = *(_QWORD*)(a1 + 72);
		v6 = *(_DWORD*)(v3 + 20);
		v7 = *(_QWORD*)(v5 + 8);
		LODWORD(v13) = v6;
		v8 = v5;
		while (v7)
		{
			v8 = v7;
			if (v6 >= *(_DWORD*)(v7 + 32))
				v7 = *(_QWORD*)(v7 + 24);
			else
				v7 = *(_QWORD*)(v7 + 16);
		}
		if (v8 == v5 || v6 < *(_DWORD*)(v8 + 32))
		{
			v9 = sub_14018B280(48i64, 0);
			if (v9 != (int*)-32i64)
			{
				*((_QWORD*)v9 + 4) = v13;
				*((_QWORD*)v9 + 5) = a2;
			}
			*(_QWORD*)(v8 + 16) = v9;
			v11 = *(_QWORD*)(a1 + 72);
			if (v8 == v11)
			{
				*(_QWORD*)(v11 + 8) = v9;
				*(_QWORD*)(*(_QWORD*)(a1 + 72) + 24i64) = v9;
			}
			else if (v8 == *(_QWORD*)(v11 + 16))
			{
				*(_QWORD*)(v11 + 16) = v9;
			}
		}
		else
		{
			v9 = sub_14018B280(48i64, 0);
			if (v9 != (int*)-32i64)
			{
				*((_QWORD*)v9 + 4) = v13;
				*((_QWORD*)v9 + 5) = a2;
			}
			*(_QWORD*)(v8 + 24) = v9;
			v10 = *(_QWORD*)(a1 + 72);
			if (v8 == *(_QWORD*)(v10 + 24))
				*(_QWORD*)(v10 + 24) = v9;
		}
		*((_QWORD*)v9 + 1) = v8;
		*((_QWORD*)v9 + 2) = 0i64;
		*((_QWORD*)v9 + 3) = 0i64;
		result = sub_1400081C0((__int64)v9, (_QWORD*)(*(_QWORD*)(a1 + 72) + 8i64));
		++* (_QWORD*)(a1 + 80);
	}
	else
	{
		result = sub_140055BE0(a1 + 16, (_DWORD*)v3);
		*result = a2;
	}
	return result;
}
// 140494EA0: conditional instruction was optimized away because rax.8==0
// 140494EC3: variable 'v13' is possibly undefined

