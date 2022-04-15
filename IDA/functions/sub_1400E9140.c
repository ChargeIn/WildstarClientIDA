#include "../winhttp.h"

//----- (00000001400E9140) ----------------------------------------------------
__int64 __fastcall sub_1400E9140(__int64 a1, unsigned int a2)
{
	unsigned __int64 v2; // rbp
	__int64 v3; // rsi
	unsigned int v4; // r11d
	__int64* i; // r14
	__int64 v6; // rdi
	_QWORD* v7; // rbx
	_QWORD* j; // r9
	__int64 result; // rax
	_QWORD* v10; // r10
	_QWORD* v11; // r8
	_QWORD* v12; // r8
	_QWORD* v13; // r10
	_QWORD* v14; // rbx
	_QWORD* v15; // r9
	_QWORD* v16; // r10
	_QWORD* v17; // r8
	_QWORD* v18; // r8
	_QWORD* v19; // r10

	v2 = *(_QWORD*)(a1 + 3208);
	v3 = 0i64;
	v4 = a2;
	if (!v2)
		return 0i64;
	for (i = *(__int64**)(a1 + 3200); ; ++i)
	{
		v6 = *i;
		v7 = *(_QWORD**)(*i + 56);
		for (j = (_QWORD*)*v7; j != v7; j = (_QWORD*)*j)
		{
			result = j[2];
			if (*(_DWORD*)(result + 24) == v4)
			{
				if (result)
					return result;
			}
			else
			{
				v10 = *(_QWORD**)(result + 560);
				v11 = (_QWORD*)*v10;
				if ((_QWORD*)*v10 != v10)
				{
					do
					{
						result = sub_1400D3BC0(v11[2], v4);
						if (result)
							return result;
						v11 = (_QWORD*)*v12;
					} while (v11 != v13);
				}
			}
		}
		v14 = *(_QWORD**)(v6 + 88);
		v15 = (_QWORD*)*v14;
		if ((_QWORD*)*v14 != v14)
			break;
	LABEL_19:
		if (++v3 >= v2)
			return 0i64;
	}
	while (1)
	{
		result = v15[2];
		if (*(_DWORD*)(result + 24) == v4)
		{
			if (result)
				return result;
			goto LABEL_18;
		}
		v16 = *(_QWORD**)(result + 560);
		v17 = (_QWORD*)*v16;
		if ((_QWORD*)*v16 != v16)
			break;
	LABEL_18:
		v15 = (_QWORD*)*v15;
		if (v15 == v14)
			goto LABEL_19;
	}
	while (1)
	{
		result = sub_1400D3BC0(v17[2], v4);
		if (result)
			return result;
		v17 = (_QWORD*)*v18;
		if (v17 == v19)
			goto LABEL_18;
	}
}
// 1400E9198: variable 'v4' is possibly undefined
// 1400E91C1: variable 'v12' is possibly undefined
// 1400E91C7: variable 'v13' is possibly undefined
// 1400E91D0: variable 'j' is possibly undefined
// 1400E9211: variable 'v18' is possibly undefined
// 1400E9217: variable 'v19' is possibly undefined
// 1400E9220: variable 'v15' is possibly undefined

