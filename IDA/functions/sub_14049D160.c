#include "../winhttp.h"

//----- (000000014049D160) ----------------------------------------------------
bool __fastcall sub_14049D160(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	__int64 v4; // rdi
	__int64 v6; // rax
	int v7; // eax
	int v8; // ecx
	int v9; // ebx
	bool result; // al

	v4 = qword_140C65898;
	v6 = sub_14020C160(a4);
	if (v6 && (v7 = *(_DWORD*)(v6 + 4)) != 0)
		v8 = v7 & *(_DWORD*)(v4 + 6976);
	else
		v8 = 1;
	v9 = a3 - 1;
	if (!v9)
		return v8;
	result = 0;
	if (v9 == 1)
		return v8 == 0;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

