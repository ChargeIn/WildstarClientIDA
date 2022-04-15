#include "../winhttp.h"

//----- (000000014004DAD0) ----------------------------------------------------
__int64 __fastcall sub_14004DAD0(__int64 a1, __int64 a2)
{
	_QWORD* v5; // rdi
	_QWORD* v6; // rbx
	__int64 v7; // rsi
	__int64 v8; // rcx
	__int64 v9; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v12; // rcx
	__int64 v13; // rcx

	if (*(_DWORD*)(a1 + 380))
		return 1i64;
	v5 = *(_QWORD**)(a1 + 416);
	v6 = (_QWORD*)v5[2];
	while (v6 != v5)
	{
		v7 = v6[5];
		v8 = *(_QWORD*)(v7 + 16);
		if (v8)
		{
			if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v8 + 240i64))(v8, a2))
				return 0i64;
			sub_1400493B0(v7);
		}
		if (!(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v7 + 24) + 32i64))(*(_QWORD*)(v7 + 24), a2))
			return 0i64;
		v9 = v6[3];
		if (v9)
		{
			v6 = (_QWORD*)v6[3];
			for (i = *(_QWORD**)(v9 + 16); i; i = (_QWORD*)i[2])
				v6 = i;
		}
		else
		{
			for (j = v6[1]; v6 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
				v6 = (_QWORD*)j;
			if (v6[3] != j)
				v6 = (_QWORD*)j;
		}
	}
	v12 = *(_QWORD*)(a1 + 16);
	if (v12 && !(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v12 + 32i64))(v12, a2))
		return 0i64;
	v13 = *(_QWORD*)(a1 + 392);
	if (v13)
	{
		if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v13 + 144i64))(v13, a2))
			return 0i64;
	}
	*(_DWORD*)(a1 + 380) = 1;
	return 1i64;
}

