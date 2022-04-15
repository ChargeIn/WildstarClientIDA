#include "../winhttp.h"

//----- (000000014084E460) ----------------------------------------------------
__int64 __fastcall sub_14084E460(__int64 a1, unsigned __int64 a2)
{
	float v2; // xmm0_4
	__int64 v5; // rcx
	__int64 result; // rax
	bool v7; // dl
	__int64 v8; // rcx
	_QWORD* v9; // rax
	_QWORD* v10; // rcx
	_QWORD* v11; // rax
	__int64 v12; // rax

	if ((*(_BYTE*)(a1 + 91) & 0x40) == 0)
	{
		v5 = *(_QWORD*)(a1 + 64);
		if (v5)
			return (*(__int64(__fastcall**)(__int64, unsigned __int64, unsigned __int64))(*(_QWORD*)v5 + 464i64))(
				v5,
				a2,
				a2);
	}
	result = *(_QWORD*)(a1 + 48);
	if (result)
	{
		v7 = (*(_BYTE*)(result + 32) & 0x10) != 0;
		if ((*(_DWORD*)(a1 + 96) & 0x10000000) != 0)
		{
			sub_140836340(qword_140C61BB0, a1, 28, a2);
			return v2 != 0.0;
		}
		else
		{
			v8 = *(_QWORD*)(a1 + 112);
			if (!v8)
				goto LABEL_14;
			v9 = *(_QWORD**)v8;
			v10 = *(_QWORD**)(v8 + 8);
			if (v9 == v10)
				goto LABEL_14;
			do
			{
				if (*v9 == a2)
					break;
				v9 += 2;
			} while (v9 != v10);
			if (v9 == v10 || (v11 = v9 + 1) == 0i64)
			{
			LABEL_14:
				v12 = *(_QWORD*)(a1 + 40);
				if (v12)
					return (*(_BYTE*)(v12 + 32) & 0x10) != 0;
				return v7;
			}
			else
			{
				return (*(_BYTE*)(*v11 + 32i64) & 0x10) != 0;
			}
		}
	}
	return result;
}
// 14084E4C9: variable 'v2' is possibly undefined
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

