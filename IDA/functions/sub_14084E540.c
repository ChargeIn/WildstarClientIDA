#include "../winhttp.h"

//----- (000000014084E540) ----------------------------------------------------
char __fastcall sub_14084E540(_QWORD* a1, unsigned int a2, unsigned __int64 a3)
{
	float v3; // xmm0_4
	__int64 v4; // r9
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rcx
	_QWORD* v9; // rax
	_QWORD* v10; // rcx
	__int64* v11; // rax

	v4 = a1[6];
	if (!v4)
		goto LABEL_6;
	if (*(_DWORD*)(v4 + 8i64 * a2 + 4))
	{
		v6 = a1[12];
		if (_bittest64(&v6, (unsigned __int8)(a2 + 24)))
		{
			sub_140836340(qword_140C61BB0, (__int64)a1, a2 + 24, a3);
			if (v3 != 0.0)
			{
				LOBYTE(v7) = 1;
				return v7;
			}
		LABEL_6:
			LOBYTE(v7) = 0;
			return v7;
		}
	}
	v8 = a1[14];
	if (!v8)
		goto LABEL_15;
	v9 = *(_QWORD**)v8;
	v10 = *(_QWORD**)(v8 + 8);
	if (v9 == v10)
		goto LABEL_15;
	do
	{
		if (*v9 == a3)
			break;
		v9 += 2;
	} while (v9 != v10);
	if (v9 == v10 || (v11 = v9 + 1) == 0i64)
	{
	LABEL_15:
		v7 = a1[5];
		if (!v7)
			return (*(_BYTE*)(v4 + 32) >> a2) & 1;
	}
	else
	{
		v7 = *v11;
	}
	LOBYTE(v7) = (*(_BYTE*)(v7 + 32) >> a2) & 1;
	return v7;
}
// 14084E587: variable 'v3' is possibly undefined
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

