#include "../winhttp.h"

//----- (0000000140714010) ----------------------------------------------------
__int64 __fastcall sub_140714010(__int64 a1, __int32 a2, unsigned int* a3, unsigned __int64 a4)
{
	int* v8; // rax
	__m128* v9; // rcx
	__int64 v10; // rcx
	int v11; // ebx
	__int64 v12; // r11
	_QWORD* i; // rax

	v8 = sub_14018B280(112i64, 0);
	v9 = (__m128*)v8;
	if (v8)
	{
		*((_QWORD*)v8 + 3) = 0i64;
		*((_QWORD*)v8 + 4) = 0i64;
		*((_QWORD*)v8 + 5) = 0i64;
		*((_QWORD*)v8 + 6) = 0i64;
		*(_QWORD*)v8 = off_140B73CB8;
	}
	else
	{
		v9 = 0i64;
	}
	v11 = sub_1407820A0(v9, a2, a3, a4, *(_DWORD*)(a1 + 112));
	if (v11 >= 0)
	{
		if (!*(_QWORD*)(v10 + 40))
		{
			for (i = (_QWORD*)(a1 + 136); *i; i = (_QWORD*)(*i + 48i64))
				;
			*(_QWORD*)(v10 + 40) = i;
			*(_QWORD*)(v10 + 48) = v12;
			*i = v10;
		}
		return 0i64;
	}
	else
	{
		if (v10)
			(**(void(__fastcall***)(__int64, __int64))v10)(v10, 1i64);
		return (unsigned int)v11;
	}
}
// 140714080: variable 'v10' is possibly undefined
// 1407140C1: variable 'v12' is possibly undefined
// 140B73CB8: using guessed type __int64 (__fastcall *off_140B73CB8[2])();

