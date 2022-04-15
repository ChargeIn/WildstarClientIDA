#include "../winhttp.h"

//----- (0000000140027C60) ----------------------------------------------------
__int64 __fastcall sub_140027C60(__int64 a1)
{
	_DWORD* v1; // rdx
	int v2; // ecx
	__int64 v3; // rdi
	__int64 v4; // rbx
	int v5; // eax
	__int64 v6; // r9
	__int64 v7; // rax
	__int64 v8; // rdx
	BOOL v10; // [rsp+38h] [rbp+10h] BYREF
	__int64 v11; // [rsp+40h] [rbp+18h] BYREF
	__int64 v12; // [rsp+48h] [rbp+20h] BYREF

	if (!*(_DWORD*)(qword_140C66DA8 + 540))
	{
		v1 = &unk_140A12138;
		v10 = 0;
		if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
			v1 = *(_DWORD**)(a1 + 24);
		v2 = v1[2];
		v10 = v2 && (v2 != 1 || *v1);
		v3 = *(_QWORD*)(qword_140C66DA8 + 184);
		v11 = *(_QWORD*)(qword_140C635F0 + 280);
		if (!(*(unsigned int(__fastcall**)(__int64, __int64*, __int64, BOOL*))(*(_QWORD*)qword_140C65808 + 264i64))(
			qword_140C65808,
			&v11,
			1006i64,
			&v10))
		{
			v4 = (*(__int64 (**)(void))(*(_QWORD*)v11 + 16i64))();
			v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 32i64))(v11);
			v6 = *(_QWORD*)(v3 + 16);
			if (v6)
				(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(v6 + 16))(*(_QWORD*)(v6 + 8), v4 + 4, (unsigned int)(v5 - 4));
			v12 = 0i64;
			v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 16i64))(v11);
			v8 = *(unsigned int*)(v3 + 152);
			v12 = v7;
			(*(void(__fastcall**)(__int64, __int64, __int64, __int64*))(*(_QWORD*)qword_140C65808 + 240i64))(
				qword_140C65808,
				v8,
				580i64,
				&v12);
		}
	}
	return 0i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65808: using guessed type __int64 qword_140C65808;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

