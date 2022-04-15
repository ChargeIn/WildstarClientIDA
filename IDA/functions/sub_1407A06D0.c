#include "../winhttp.h"

//----- (00000001407A06D0) ----------------------------------------------------
void __fastcall sub_1407A06D0(__int64 a1)
{
	_QWORD* v1; // rdx
	__int64 v2; // rdx
	__int64 v3; // rbx
	_QWORD* v4; // rcx
	_QWORD* v5; // rcx

	v1 = *(_QWORD**)(a1 + 96);
	if (v1)
		*v1 = *(_QWORD*)(a1 + 104);
	v2 = *(_QWORD*)(a1 + 104);
	if (v2)
		*(_QWORD*)(v2 + 96) = *(_QWORD*)(a1 + 96);
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	v3 = a1 + 24;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	sub_140195D70(a1 + 24);
	*(_DWORD*)v3 = 0;
	v4 = *(_QWORD**)(v3 + 16);
	if (v4)
		*v4 = *(_QWORD*)(v3 + 24);
	v5 = *(_QWORD**)(v3 + 24);
	if (v5)
		*v5 = *(_QWORD*)(v3 + 16);
	*(_QWORD*)(v3 + 24) = 0i64;
	*(_QWORD*)(v3 + 16) = 0i64;
}

