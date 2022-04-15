#include "../winhttp.h"

//----- (00000001400FABF0) ----------------------------------------------------
__int64 __fastcall sub_1400FABF0(__int64 a1, unsigned __int16* a2, _QWORD* a3)
{
	__int64 result; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	char* v8; // rdx
	__int64 v9; // rcx
	_QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

	result = sub_1400FB720(a1, a2, 4);
	if ((int)result < 0)
		return result;
	v6 = *(_QWORD*)(a1 + 16);
	v7 = *(_QWORD*)(v6 + 16) - 16i64;
	if (*(_DWORD*)(v7 + 8) == 4)
		goto LABEL_8;
	if ((unsigned int)sub_14005E620(*(_QWORD*)(a1 + 16), *(_QWORD*)(v6 + 16) - 16i64))
	{
		if (*(_QWORD*)(*(_QWORD*)(v6 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v6 + 32) + 112i64))
			sub_14005E2C0(v6);
		v7 = *(_QWORD*)(v6 + 16) - 16i64;
	LABEL_8:
		v8 = (char*)(*(_QWORD*)v7 + 32i64);
		goto LABEL_9;
	}
	v8 = 0i64;
LABEL_9:
	sub_14018F2D0(v10, v8);
	v9 = a3[1];
	a3[1] = v10[1];
	a3[2] = v10[2];
	a3[3] = v10[3];
	if (v9)
		sub_14018B900(v9, 0);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 32i64;
	return 0i64;
}

