#include "../winhttp.h"

//----- (00000001405E0360) ----------------------------------------------------
__int64 __fastcall sub_1405E0360(__int64 a1, __int64 a2)
{
	unsigned __int64 v4; // rdi
	_QWORD* v5; // rbx
	__int64 v7; // r14
	int* v8; // rsi
	__int64 v9; // r15
	__int64 v10; // rbx
	int* v11; // rax
	int* v12; // rdi
	unsigned __int64 v13; // rbx

	v4 = (*(__int64(__fastcall**)(__int64))(a1 + 144))(a2);
	v5 = *(_QWORD**)(*(_QWORD*)(a1 + 136) + 8 * (v4 % *(_QWORD*)(a1 + 128)));
	if (!v5)
		return 0i64;
	while (v4 != *v5 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 152))(a2, v5 + 2))
	{
		v5 = (_QWORD*)v5[1];
		if (!v5)
			return 0i64;
	}
	if (v5 == (_QWORD*)-24i64)
		return 0i64;
	v7 = v5[3];
	v8 = *(int**)(a2 + 8);
	v9 = *(_QWORD*)(v7 + 216);
	if (v8)
	{
		v10 = 0i64;
		if (*(_WORD*)v8)
		{
			do
				++v10;
			while (*((_WORD*)v8 + v10));
		}
		v11 = sub_14018B280(2 * v10 + 18, 0);
		if (v11)
		{
			*((_QWORD*)v11 + 1) = v10;
			*(_QWORD*)v11 = off_140B55060;
		}
		else
		{
			v11 = 0i64;
		}
		v12 = v11 + 4;
		v13 = 2 * v10;
		sub_1407DB590(v11 + 4, v8, v13);
		*(_WORD*)((char*)v12 + v13) = 0;
		*(_QWORD*)(v7 + 216) = v12;
	}
	else
	{
		*(_QWORD*)(v7 + 216) = 0i64;
	}
	if (v9)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipUpdate", byte_1409EAC3C, *(unsigned int*)(v7 + 8));
	return 0i64;
}
// 1409EAC3C: using guessed type _BYTE byte_1409EAC3C[32];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;

