#include "../winhttp.h"

//----- (00000001404CB140) ----------------------------------------------------
__int64* __fastcall sub_1404CB140(__int64 a1, __int64* a2, __int64 a3, __int64* a4)
{
	__int64 v4; // rdi
	__int64 v7; // rax
	__int64 v8; // rsi
	__int64* v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rbx
	bool v12; // zf
	__int64 v13; // rcx
	__int64 v14; // rax
	__int64 v16; // [rsp+20h] [rbp-38h] BYREF
	__int64 v17; // [rsp+28h] [rbp-30h]
	__int64 v18[2]; // [rsp+30h] [rbp-28h] BYREF
	__int64 v19; // [rsp+40h] [rbp-18h]

	v4 = 0i64;
	LODWORD(v16) = 0;
	v17 = 0i64;
	*a4 = 0i64;
	if (a3)
	{
		v7 = 0i64;
		v8 = qword_140C659F8;
		v9 = &v16;
		v18[1] = a3;
		v19 = 0i64;
		v18[0] = (__int64)&v16;
		if (*(_QWORD*)(qword_140C659F8 + 40))
		{
			while (1)
			{
				v10 = *(_QWORD*)(*(_QWORD*)(v8 + 48) + 8 * v4);
				if (v10)
					break;
			LABEL_6:
				if ((unsigned __int64)++v4 >= *(_QWORD*)(v8 + 40))
					goto LABEL_7;
			}
			while (1)
			{
				v11 = *(_QWORD*)(v10 + 8);
				if (!(unsigned int)sub_1404C8580((__int64*)(v10 + 24), (__int64)v18))
					break;
				v10 = v11;
				if (!v11)
					goto LABEL_6;
			}
		LABEL_7:
			v4 = v17;
			v7 = v19;
			v9 = (__int64*)v18[0];
		}
		v12 = v9[1] == 0;
		*a4 = v7;
		if (!v12 || v7)
		{
			*a2 = *v9;
			a2[1] = v9[1];
			return a2;
		}
		v13 = qword_140C7DFE0;
		if (qword_140C7DFE0)
		{
			v14 = *(_QWORD*)(qword_140C7DFE0 + 280);
			*a4 = v14;
			if (v14)
			{
				*a2 = *(_QWORD*)(v13 + 8);
				a2[1] = *(_QWORD*)(v13 + 16);
				return a2;
			}
		}
	}
	*a2 = v16;
	a2[1] = v4;
	return a2;
}
// 140C659F8: using guessed type __int64 qword_140C659F8;
// 140C7DFE0: using guessed type __int64 qword_140C7DFE0;

