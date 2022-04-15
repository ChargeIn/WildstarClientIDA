#include "../winhttp.h"

//----- (00000001404DE7D0) ----------------------------------------------------
int* __fastcall sub_1404DE7D0(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v4; // rax
	int* result; // rax
	int* v6; // [rsp+30h] [rbp+8h] BYREF

	(*(void(__fastcall**)(__int64, int**, _QWORD, _QWORD))(*(_QWORD*)qword_140C63648 + 40i64))(
		qword_140C63648,
		&v6,
		a2,
		a3);
	v4 = 0i64;
	if (*(_WORD*)v6)
	{
		do
			++v4;
		while (*((_WORD*)v6 + v4));
	}
	sub_14001C480(a1 + 184, v6, (int*)((char*)v6 + 2 * v4));
	result = v6;
	if (v6)
		return (int*)(*(__int64(__fastcall**)(int*))(*((_QWORD*)v6 - 2) + 8i64))(v6 - 4);
	return result;
}
// 140C63648: using guessed type __int64 qword_140C63648;

