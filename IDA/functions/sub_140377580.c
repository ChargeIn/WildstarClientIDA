#include "../winhttp.h"

//----- (0000000140377580) ----------------------------------------------------
__int64 __fastcall sub_140377580(__int64 a1)
{
	unsigned int v2; // edi
	__int64 v3; // rbp
	_OWORD* v4; // rsi
	_OWORD* v5; // rax
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 result; // rax
	char v9[40]; // [rsp+20h] [rbp-28h] BYREF

	v2 = 0;
	v3 = a1 + 400;
	v4 = (_OWORD*)(a1 + 368);
	do
	{
		v5 = (_OWORD*)(*(__int64(__fastcall**)(_QWORD, char*, _QWORD))(**(_QWORD**)(a1 + 48) + 104i64))(
			*(_QWORD*)(a1 + 48),
			v9,
			v2);
		*v4 = *v5;
		v4[1] = v5[1];
		v6 = (*(__int64(__fastcall**)(_QWORD, char*, _QWORD))(**(_QWORD**)(a1 + 48) + 112i64))(
			*(_QWORD*)(a1 + 48),
			v9,
			v2++);
		v3 += 64i64;
		v4 += 4;
		*(_OWORD*)(v3 - 64) = *(_OWORD*)v6;
		*(_DWORD*)(v3 - 48) = *(_DWORD*)(v6 + 16);
	} while (v2 < 4);
	v7 = (*(__int64(__fastcall**)(_QWORD, char*))(**(_QWORD**)(a1 + 48) + 120i64))(*(_QWORD*)(a1 + 48), v9);
	*(_OWORD*)(a1 + 880) = *(_OWORD*)v7;
	result = *(unsigned int*)(v7 + 16);
	*(_DWORD*)(a1 + 896) = result;
	return result;
}

