#include "../winhttp.h"

//----- (000000014033F0A0) ----------------------------------------------------
__int64* __fastcall sub_14033F0A0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64* result; // rax
	__int64 v4; // r9
	__int64 v6; // rbx
	_QWORD** v7; // rdi
	__int64 v8; // rsi
	_QWORD* i; // rbx
	_QWORD** v10; // rdi
	__int64 v11; // rsi
	_QWORD* j; // rbx
	__int64 k; // rbx
	unsigned int v14; // eax

	result = *(__int64**)(a1 + 88);
	v4 = a2;
	*result = a2;
	v6 = qword_140C7A0C0;
	qword_140C65858 = a2;
	if (qword_140C7A0C0)
	{
		while (1)
		{
			result = (__int64*)(*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v4 + 176i64))(
				v4,
				*(_QWORD*)(v6 + 40),
				0i64);
			v6 = *(_QWORD*)(v6 + 56);
			if (!v6)
				break;
			v4 = qword_140C65858;
		}
	}
	v7 = (_QWORD**)&unk_140C7A100;
	v8 = 32i64;
	do
	{
		for (i = *v7; i; i = (_QWORD*)i[78])
			result = (__int64*)(*(__int64(__fastcall**)(_QWORD*, __int64, __int64, __int64))(*i + 40i64))(i, a2, a3, v4);
		++v7;
		--v8;
	} while (v8);
	v10 = (_QWORD**)&unk_140C7A230;
	v11 = 256i64;
	do
	{
		for (j = *v10; j; j = (_QWORD*)j[21])
			result = (__int64*)(*(__int64(__fastcall**)(_QWORD*, __int64, __int64, __int64))(*j + 40i64))(j, a2, a3, v4);
		++v10;
		--v11;
	} while (v11);
	for (k = *(_QWORD*)(a1 + 112); k; k = *(_QWORD*)(k + 24))
	{
		v14 = (**(__int64(__fastcall***)(__int64, __int64, __int64, __int64))qword_140C65858)(qword_140C65858, a2, a3, v4);
		result = (__int64*)(*(__int64(__fastcall**)(_QWORD, _QWORD))k)(v14, *(_QWORD*)(k + 8));
	}
	return result;
}
// 14033F126: variable 'a2' is possibly undefined
// 14033F126: variable 'a3' is possibly undefined
// 14033F126: variable 'v4' is possibly undefined
// 140C65858: using guessed type __int64 qword_140C65858;
// 140C7A0C0: using guessed type __int64 qword_140C7A0C0;

