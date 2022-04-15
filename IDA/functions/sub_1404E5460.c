#include "../winhttp.h"

//----- (00000001404E5460) ----------------------------------------------------
__int64 __fastcall sub_1404E5460(__int64 a1)
{
	__int64 v1; // r8
	int v2; // ebp
	int v4; // r12d
	unsigned __int64 v5; // r14
	unsigned __int64 v6; // rbx
	__int64(__fastcall * v7)(wchar_t**, _QWORD, __int64); // r9
	__int64 v8; // rsi
	__int64 v9; // rax
	__int64 v10; // rcx
	unsigned int v11; // edi
	__int64 v12; // rax
	_DWORD* v13; // rcx
	__int64 result; // rax

	v1 = qword_140C635F0;
	v2 = 0;
	v4 = 0;
	if (!*(_DWORD*)(qword_140C635F0 + 5896))
	{
		v5 = *(_QWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 128i64);
		v6 = 0i64;
		if (v5)
		{
			v7 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
			v8 = 0i64;
			while (1)
			{
				v9 = *(_QWORD*)(v1 + 5584);
				if (v6 >= *(_QWORD*)(v9 + 128))
					goto LABEL_14;
				v10 = v8 + *(_QWORD*)(v9 + 120);
				if (!v10)
					goto LABEL_14;
				v11 = *(_DWORD*)(v10 + 8);
				if (v7)
					break;
				if (!dword_140C64170)
				{
					if ((int)sub_1401E89C0() >= 0)
					{
						v12 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C652D0 + 24i64))(
							qword_140C652D0,
							v11);
					LABEL_11:
						if (v12 && !*(_DWORD*)(v12 + 28))
						{
							v4 = 1;
							goto LABEL_17;
						}
					}
					v1 = qword_140C635F0;
					v7 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
				}
			LABEL_14:
				++v6;
				v8 += 64i64;
				if (v6 >= v5)
					goto LABEL_17;
			}
			v12 = v7(off_140A690C8, v11, qword_140C63858);
			goto LABEL_11;
		}
	}
LABEL_17:
	v13 = *(_DWORD**)(a1 + 16);
	result = 1i64;
	LOBYTE(v2) = v4 != 0;
	v13[2] = 1;
	*v13 = v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140A690C8: using guessed type wchar_t *off_140A690C8[2];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64170: using guessed type int dword_140C64170;
// 140C652D0: using guessed type __int64 qword_140C652D0;

