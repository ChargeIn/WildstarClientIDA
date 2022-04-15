#include "../winhttp.h"

//----- (000000014038FBF0) ----------------------------------------------------
void __fastcall sub_14038FBF0(_QWORD* a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	_QWORD* v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // r8
	_QWORD* v7; // rcx
	__int64 v8; // rax
	_QWORD* v9; // rcx
	__int64 v10; // rcx
	_QWORD* v11; // rcx
	__int64 v12; // rcx

	v2 = (_QWORD*)a1[2];
	if (v2)
		*v2 = a1[3];
	v3 = a1[3];
	if (v3)
		*(_QWORD*)(v3 + 16) = a1[2];
	v4 = (_QWORD*)a1[4];
	a1[2] = 0i64;
	a1[3] = 0i64;
	if (v4)
		*v4 = a1[5];
	v5 = a1[5];
	if (v5)
		*(_QWORD*)(v5 + 32) = a1[4];
	v6 = a1[1];
	a1[4] = 0i64;
	a1[5] = 0i64;
	if (v6 == *(_QWORD*)(v6 + 32))
	{
		if (*(_DWORD*)(v6 + 76))
		{
			if (!*(_QWORD*)(v6 + 1184))
			{
				v7 = (_QWORD*)(*(_QWORD*)(v6 + 16) + 5040i64);
				*(_QWORD*)(v6 + 1184) = v7;
				*(_QWORD*)(v6 + 1192) = *v7;
				*v7 = v6;
				v8 = *(_QWORD*)(v6 + 1192);
				if (v8)
					*(_QWORD*)(v8 + 1184) = v6 + 1192;
			}
		}
	}
	v9 = (_QWORD*)a1[4];
	if (v9)
		*v9 = a1[5];
	v10 = a1[5];
	if (v10)
		*(_QWORD*)(v10 + 32) = a1[4];
	a1[4] = 0i64;
	a1[5] = 0i64;
	v11 = (_QWORD*)a1[2];
	if (v11)
		*v11 = a1[3];
	v12 = a1[3];
	if (v12)
		*(_QWORD*)(v12 + 16) = a1[2];
	a1[3] = 0i64;
	a1[2] = 0i64;
}

