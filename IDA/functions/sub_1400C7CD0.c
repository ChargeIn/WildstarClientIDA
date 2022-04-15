#include "../winhttp.h"

//----- (00000001400C7CD0) ----------------------------------------------------
bool __fastcall sub_1400C7CD0(__int64 a1, __int64 a2)
{
	_QWORD** v5; // rax
	_QWORD* v6; // rbx
	_QWORD* i; // rcx
	bool v8; // bp
	_QWORD* v9; // rdx
	_QWORD* v10; // rax
	__int64 v11; // rbx
	int* v12; // rcx
	_QWORD* v13; // rcx
	_QWORD* v14; // rax
	__int64 v15; // rdi

	if ((*(_DWORD*)(a2 + 656) & 0x40000i64) != 0)
		return 0;
	v5 = *(_QWORD***)(a1 + 560);
	v6 = *v5;
	for (i = *v5; i != v5; i = (_QWORD*)*i)
	{
		if (i[2] == a2)
			break;
	}
	v8 = i != v5;
	if (i != v5)
	{
		v9 = (_QWORD*)*i;
		v10 = (_QWORD*)i[1];
		*v10 = *i;
		v9[1] = v10;
		sub_14018B900((__int64)i, 0);
		v11 = *(_QWORD*)(a1 + 560);
		v12 = sub_14018B280(24i64, 0);
		if (v12 != (int*)-16i64)
			*((_QWORD*)v12 + 2) = a2;
	LABEL_16:
		*(_QWORD*)v12 = v11;
		*((_QWORD*)v12 + 1) = *(_QWORD*)(v11 + 8);
		**(_QWORD**)(v11 + 8) = v12;
		*(_QWORD*)(v11 + 8) = v12;
		return v8;
	}
	if (v6 != v5)
	{
		while (!(unsigned __int8)sub_1400C7CD0(v6[2], a2))
		{
			v6 = (_QWORD*)*v6;
			if (v6 == *(_QWORD**)(a1 + 560))
				return v8;
		}
		v13 = (_QWORD*)*v6;
		v14 = (_QWORD*)v6[1];
		v15 = v6[2];
		*v14 = *v6;
		v13[1] = v14;
		sub_14018B900((__int64)v6, 0);
		v11 = *(_QWORD*)(a1 + 560);
		v12 = sub_14018B280(24i64, 0);
		if (v12 != (int*)-16i64)
			*((_QWORD*)v12 + 2) = v15;
		v8 = 1;
		goto LABEL_16;
	}
	return v8;
}

