#include "../winhttp.h"

//----- (0000000140024C10) ----------------------------------------------------
__int64 __fastcall sub_140024C10(_QWORD* a1)
{
	__int64 v1; // rbx
	__int64 v2; // rdi
	__int64 v3; // rbx
	int v4; // eax
	__int64 v5; // r9
	__int64 v6; // rax
	__int64 v7; // rdx
	__int64 v9; // [rsp+38h] [rbp+10h] BYREF
	__int64 v10; // [rsp+40h] [rbp+18h] BYREF
	__int64 v11; // [rsp+48h] [rbp+20h] BYREF

	v1 = qword_140C66DA8;
	if (!*(_DWORD*)(qword_140C66DA8 + 540) && !*(_DWORD*)(qword_140C66DA8 + 368))
	{
		*(_QWORD*)(v1 + 504) = (int)sub_140056D60(a1, 1u) - 1i64;
		if (*(_QWORD*)(qword_140C66DA8 + 504) < *(_QWORD*)(qword_140C66DA8 + 272))
		{
			v10 = 0i64;
			v10 = *(_QWORD*)(816i64 * *(_QWORD*)(qword_140C66DA8 + 504) + *(_QWORD*)(qword_140C66DA8 + 264));
			v2 = *(_QWORD*)(qword_140C66DA8 + 184);
			v9 = *(_QWORD*)(qword_140C635F0 + 280);
			if (!(*(unsigned int(__fastcall**)(__int64, __int64*, __int64, __int64*))(*(_QWORD*)qword_140C65808 + 264i64))(
				qword_140C65808,
				&v9,
				850i64,
				&v10))
			{
				v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9);
				v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 32i64))(v9);
				v5 = *(_QWORD*)(v2 + 16);
				if (v5)
					(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(v5 + 16))(
						*(_QWORD*)(v5 + 8),
						v3 + 4,
						(unsigned int)(v4 - 4));
				v11 = 0i64;
				v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9);
				v7 = *(unsigned int*)(v2 + 152);
				v11 = v6;
				(*(void(__fastcall**)(__int64, __int64, __int64, __int64*))(*(_QWORD*)qword_140C65808 + 240i64))(
					qword_140C65808,
					v7,
					580i64,
					&v11);
			}
			*(_DWORD*)(qword_140C66DA8 + 368) = 2;
		}
	}
	return 0i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65808: using guessed type __int64 qword_140C65808;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

