#include "../winhttp.h"

//----- (0000000140496660) ----------------------------------------------------
__int64 sub_140496660()
{
	int* v1; // rax
	int* v2; // rbx
	int* v3; // rax
	__int64 v4; // rax
	int* v5; // rbx
	int* v6; // rax
	int* v7; // rax
	int(__fastcall * *v8)(int*, __int64, _QWORD); // rax

	if (qword_140C65988)
		return 0i64;
	v1 = sub_14018B280(240i64, 0);
	v2 = v1;
	if (v1)
	{
		sub_140496870(v1);
		*(_QWORD*)v2 = off_140B673B8;
		v3 = sub_14018B280(40i64, 0);
		*((_QWORD*)v2 + 27) = v3;
		*((_QWORD*)v2 + 28) = 0i64;
		*(_BYTE*)v3 = 0;
		*(_QWORD*)(*((_QWORD*)v2 + 27) + 8i64) = 0i64;
		*(_QWORD*)(*((_QWORD*)v2 + 27) + 16i64) = *((_QWORD*)v2 + 27);
		*(_QWORD*)(*((_QWORD*)v2 + 27) + 24i64) = *((_QWORD*)v2 + 27);
	}
	else
	{
		v2 = 0i64;
	}
	v4 = *(_QWORD*)v2;
	qword_140C65988 = (__int64)v2;
	if ((*(int(__fastcall**)(int*))(v4 + 8))(v2) >= 0)
	{
		v5 = sub_14018B280(72i64, 0);
		if (v5)
		{
			*(_QWORD*)v5 = off_140B674F0;
			v6 = sub_14018B280(48i64, 0);
			*((_QWORD*)v5 + 3) = 0i64;
			*((_QWORD*)v5 + 2) = v6;
			*(_BYTE*)v6 = 0;
			*(_QWORD*)(*((_QWORD*)v5 + 2) + 8i64) = 0i64;
			*(_QWORD*)(*((_QWORD*)v5 + 2) + 16i64) = *((_QWORD*)v5 + 2);
			*(_QWORD*)(*((_QWORD*)v5 + 2) + 24i64) = *((_QWORD*)v5 + 2);
			*(_QWORD*)v5 = off_140B67420;
			v7 = sub_14018B280(24i64, 0);
			*((_QWORD*)v5 + 6) = v7;
			*(_QWORD*)v7 = v7;
			*(_QWORD*)(*((_QWORD*)v5 + 6) + 8i64) = *((_QWORD*)v5 + 6);
		}
		else
		{
			v5 = 0i64;
		}
		v8 = *(int(__fastcall***)(int*, __int64, _QWORD))v5;
		qword_140C65980 = (__int64)v5;
		if ((*v8)(v5, qword_140C65988 + 8, 0i64) >= 0)
		{
			return 0i64;
		}
		else
		{
			sub_140496AA0();
			return 2147500037i64;
		}
	}
	else
	{
		if (qword_140C65980)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65980 + 16i64))(qword_140C65980, 1i64);
		if (qword_140C65988)
			(**(void(__fastcall***)(__int64, __int64))qword_140C65988)(qword_140C65988, 1i64);
		qword_140C65980 = 0i64;
		qword_140C65988 = 0i64;
		return 2147500037i64;
	}
}
// 140B673B8: using guessed type __int64 (__fastcall *off_140B673B8[8])();
// 140B67420: using guessed type __int64 (__fastcall *off_140B67420[25])();
// 140B674F0: using guessed type __int64 (__fastcall *off_140B674F0[22])();
// 140C65980: using guessed type __int64 qword_140C65980;
// 140C65988: using guessed type __int64 qword_140C65988;

