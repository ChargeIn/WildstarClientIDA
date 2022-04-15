#include "../winhttp.h"

//----- (00000001403A0C50) ----------------------------------------------------
void __fastcall sub_1403A0C50(__int64 a1)
{
	__int64 v2; // rdx
	_QWORD* v3; // rcx
	__int64 v4; // rcx
	bool v5; // zf
	int* v6; // rax
	_DWORD* v7; // rbx
	_QWORD* v8; // rax

	if (*(_DWORD*)(a1 + 26672))
	{
		v2 = *(_QWORD*)(a1 + 26664);
		if (v2)
		{
			v3 = *(_QWORD**)(v2 + 40);
			if (v3)
				*v3 = *(_QWORD*)(v2 + 48);
			v4 = *(_QWORD*)(v2 + 48);
			if (v4)
				*(_QWORD*)(v4 + 40) = *(_QWORD*)(v2 + 40);
			v5 = qword_140C65B88 == 0;
			*(_QWORD*)(v2 + 40) = 0i64;
			*(_QWORD*)(v2 + 48) = 0i64;
			if (!v5)
				goto LABEL_10;
			v6 = sub_14018B280(72i64, 0);
			if (!v6)
			{
				qword_140C65B88 = 0i64;
				*(_DWORD*)(a1 + 26672) = 0;
				return;
			}
			qword_140C65B88 = (__int64)sub_1405B92D0(v6);
			if (qword_140C65B88)
			{
			LABEL_10:
				v7 = *(_DWORD**)(a1 + 26664);
				v8 = sub_1405BBBB0();
				sub_1405BBEF0((__int64)v8, v7[21], v7);
			}
		}
		*(_DWORD*)(a1 + 26672) = 0;
	}
}
// 140C65B88: using guessed type __int64 qword_140C65B88;

