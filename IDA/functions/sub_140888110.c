#include "../winhttp.h"

//----- (0000000140888110) ----------------------------------------------------
__int64 __fastcall sub_140888110(__int64 a1, _BYTE* a2, float a3)
{
	bool v5; // zf
	__int64 v6; // rax
	__int64 result; // rax
	__int64 v8; // rdx
	__int64 v9; // rdi
	char v10; // al
	__int64* v11; // rdx
	__int64 v12; // [rsp+30h] [rbp-28h] BYREF
	__int64 v13; // [rsp+38h] [rbp-20h] BYREF
	float v14; // [rsp+78h] [rbp+20h] BYREF
	char v15; // [rsp+7Ch] [rbp+24h]

	sub_140889250(a1);
	v5 = (unsigned int)sub_140884180((__int64)a2) == 1;
	v6 = *(_QWORD*)a2;
	if (!v5)
		return (*(__int64(__fastcall**)(_BYTE*, _QWORD, __int64))(v6 + 40))(a2, 0i64, 2i64);
	v8 = (*(__int64(__fastcall**)(_BYTE*, __int64*, __int64*, _QWORD))(v6 + 32))(a2, &v13, &v12, 0i64);
	if (!v8)
		return (*(__int64(__fastcall**)(_BYTE*, _QWORD, __int64, _QWORD))(*(_QWORD*)a2 + 40i64))(a2, 0i64, 53i64, 0i64);
	v9 = v12;
	if (!v12)
		return (*(__int64(__fastcall**)(_BYTE*, __int64, __int64))(*(_QWORD*)a2 + 40i64))(a2, v8, 1i64);
	v10 = a2[116];
	v11 = *(__int64**)(a1 + 256);
	v14 = a3;
	v15 = v10;
	result = sub_14088A060(v12, v11, v13, (__int64)&v14, (a2[117] & 2) != 0);
	if ((_DWORD)result != 1)
		return sub_14088A0D0(v9 + 8, result);
	return result;
}

