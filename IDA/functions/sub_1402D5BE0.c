#include "../winhttp.h"

//----- (00000001402D5BE0) ----------------------------------------------------
int* __fastcall sub_1402D5BE0(__int64 a1)
{
	__int64 v2; // rbx
	unsigned __int64 v3; // rbp
	int** v4; // rsi
	int* result; // rax
	int* v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // [rsp+30h] [rbp+8h] BYREF

	v2 = qword_140C657F0 + 136;
	v8 = *(_QWORD*)(a1 + 16);
	if (*(_QWORD*)(qword_140C657F0 + 136) == *(_QWORD*)(qword_140C657F0 + 144))
		sub_1400290D0(qword_140C657F0 + 136);
	v3 = (*(__int64(__fastcall**)(__int64*))(v2 + 24))(&v8);
	v4 = (int**)(*(_QWORD*)(v2 + 16) + 8 * (v3 % *(_QWORD*)(v2 + 8)));
	result = sub_14018B280(32i64, 0);
	if (result)
	{
		v6 = *v4;
		*(_QWORD*)result = v3;
		*((_QWORD*)result + 1) = v6;
		v7 = v8;
		*((_QWORD*)result + 3) = a1;
		*((_QWORD*)result + 2) = v7;
	}
	*v4 = result;
	++* (_QWORD*)v2;
	*(_DWORD*)(a1 + 56) = 1;
	return result;
}
// 140C657F0: using guessed type __int64 qword_140C657F0;

