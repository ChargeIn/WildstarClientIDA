#include "../winhttp.h"

//----- (0000000140029F00) ----------------------------------------------------
__int64 __fastcall sub_140029F00(__int64 a1, int a2, __int64 a3)
{
	__int64 v5; // rcx
	__int64 v6; // rcx
	void(__fastcall * **v7)(_QWORD, __int64*, __int64); // rax
	int v8; // eax
	int v9; // ecx
	__int64 v11; // [rsp+30h] [rbp+8h] BYREF
	__int64 v12; // [rsp+48h] [rbp+20h] BYREF

	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 16) = 0i64;
	v5 = a1 + 24;
	*(_QWORD*)(v5 - 24) = off_140B55410;
	sub_140018930(v5, a3);
	v6 = qword_140C65808;
	*(_DWORD*)(a1 + 152) = -1;
	*(_DWORD*)(a1 + 156) = a2;
	v11 = 0i64;
	v7 = (void(__fastcall***)(_QWORD, __int64*, __int64))(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
	(**v7)(v7, &v11, a1 + 24);
	v12 = v11;
	if (v11)
		(**(void(__fastcall***)(__int64))v11)(v11);
	v8 = (*(__int64(__fastcall**)(__int64, __int64*, __int64))(*(_QWORD*)qword_140C65808 + 32i64))(
		qword_140C65808,
		&v12,
		qword_140C635F0);
	v9 = *(_DWORD*)(a1 + 156);
	*(_DWORD*)(a1 + 152) = v8;
	if (v9)
	{
		if (v9 == 1)
			*(_QWORD*)(qword_140C635F0 + 5928) = a1;
	}
	else
	{
		*(_QWORD*)(qword_140C635F0 + 5920) = a1;
	}
	if (v11)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B55410: using guessed type __int64 (__fastcall *off_140B55410[3])();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65808: using guessed type __int64 qword_140C65808;

