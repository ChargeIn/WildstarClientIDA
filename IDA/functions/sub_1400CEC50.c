#include "../winhttp.h"

//----- (00000001400CEC50) ----------------------------------------------------
char __fastcall sub_1400CEC50(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64* v6; // rax
	__int64 v7; // rcx
	_QWORD* v8; // rax
	_QWORD* v9; // rbx
	__int64 v10; // rcx

	v3 = *(_QWORD*)(a1 + 48);
	if (v3 && !sub_14010D7F0(v3, a2))
		return 0;
	v6 = *(__int64**)(a1 + 792);
	if (v6)
	{
		if (*v6 && !sub_140100DA0(*v6, a2))
			return 0;
	}
	v7 = *(_QWORD*)(a1 + 688);
	if (v7)
	{
		if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v7 + 216i64))(v7, a2))
			return 0;
	}
	if (!(*(unsigned __int8(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 272i64))(a1, a2))
		return 0;
	v8 = *(_QWORD**)(a1 + 560);
	v9 = (_QWORD*)*v8;
	if ((_QWORD*)*v8 == v8)
	{
	LABEL_14:
		*(_BYTE*)(a1 + 28) |= 4u;
		return 1;
	}
	else
	{
		while (1)
		{
			v10 = v9[2];
			if ((*(_BYTE*)(v10 + 28) & 4) == 0 && !(unsigned __int8)sub_1400CEC50(v10, a2))
				return 0;
			v9 = (_QWORD*)*v9;
			if (v9 == *(_QWORD**)(a1 + 560))
				goto LABEL_14;
		}
	}
}

