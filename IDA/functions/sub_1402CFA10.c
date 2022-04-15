#include "../winhttp.h"

//----- (00000001402CFA10) ----------------------------------------------------
__int64 __fastcall sub_1402CFA10(__int64 a1)
{
	_QWORD* v3; // rbx
	unsigned int v4; // r14d
	__int64 v5; // rbp
	unsigned int i; // r15d
	__int64 v7; // rbx
	__int64 v8; // rdi
	__int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rdi
	__int64 v12; // rax

	if (*(_DWORD*)(a1 + 224))
		return 1i64;
	v3 = *(_QWORD**)(a1 + 24);
	v4 = 0;
	if (*v3)
	{
		if (!(*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)*v3 + 32i64))(*v3))
			return 0i64;
		sub_1402D3300(v3);
		if (*v3)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v3 + 8i64))(*v3);
			*v3 = 0i64;
		}
	}
	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 24i64))(a1);
	sub_1402D1490(a1 + 232, *(unsigned int*)(v5 + 184));
	for (i = 0; i < *(_DWORD*)(v5 + 184); *(_QWORD*)(v7 + 8 * v8) = v9)
	{
		v7 = *(_QWORD*)(a1 + 240);
		v8 = i;
		v9 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 312i64))(
			*(_QWORD*)(a1 + 8),
			*(unsigned int*)(*(_QWORD*)(v5 + 192) + 4i64 * i++));
	}
	sub_1402D1490(a1 + 264, *(unsigned int*)(v5 + 200));
	if (*(_DWORD*)(v5 + 200))
	{
		do
		{
			v10 = *(_QWORD*)(a1 + 272);
			v11 = v4;
			v12 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 312i64))(
				*(_QWORD*)(a1 + 8),
				*(unsigned int*)(*(_QWORD*)(v5 + 208) + 4i64 * v4++));
			*(_QWORD*)(v10 + 8 * v11) = v12;
		} while (v4 < *(_DWORD*)(v5 + 200));
	}
	*(_DWORD*)(a1 + 224) = 1;
	return 1i64;
}

