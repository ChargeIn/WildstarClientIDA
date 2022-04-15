#include "../winhttp.h"

//----- (0000000140063010) ----------------------------------------------------
__int64 __fastcall sub_140063010(__int64 a1)
{
	_QWORD* v2; // rdx
	__int64 v4; // rdx
	int v5; // ecx
	__int64 result; // rax
	__int64 v7; // rdi
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rax
	int v11; // ecx
	__int64 v12; // [rsp+30h] [rbp+8h] BYREF

	sub_140062AA0(a1, *(_DWORD*)a1);
	v2 = *(_QWORD**)(a1 + 64);
	if ((*v2)--)
	{
		v4 = *(_QWORD*)(a1 + 64);
		v5 = *(unsigned __int8*)(*(_QWORD*)(v4 + 8))++;
		result = 1i64;
		*(_DWORD*)a1 = v5;
	}
	else
	{
		v7 = *(_QWORD*)(a1 + 64);
		v8 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v7 + 16))(
			*(_QWORD*)(v7 + 32),
			*(_QWORD*)(v7 + 24),
			&v12);
		if (v8 && (v9 = v12) != 0)
		{
			*(_QWORD*)(v7 + 8) = v8;
			v10 = v8 + 1;
			*(_QWORD*)v7 = v9 - 1;
			v11 = *(unsigned __int8*)(v10 - 1);
			*(_QWORD*)(v7 + 8) = v10;
			result = 1i64;
			*(_DWORD*)a1 = v11;
		}
		else
		{
			*(_DWORD*)a1 = -1;
			return 1i64;
		}
	}
	return result;
}

