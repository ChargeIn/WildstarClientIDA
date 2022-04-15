#include "../winhttp.h"

//----- (00000001400B20B0) ----------------------------------------------------
__int64 sub_1400B20B0()
{
	int v0; // esi
	__int64 result; // rax
	unsigned int v2; // ebp
	int* v3; // rbx
	int CurrentThreadId; // edx
	__int64 v5; // rcx
	__int64** v6; // r8
	__int64 v7; // rcx
	__int64 v8; // rbx
	_QWORD* v9; // rax
	__int64* v10; // rbx
	__int64 v11; // rcx
	_QWORD* v12; // rax
	__int64 v13; // rcx
	HANDLE EventW; // rcx
	HANDLE v15; // rcx
	int v16; // [rsp+20h] [rbp-58h] BYREF
	char v17[8]; // [rsp+28h] [rbp-50h] BYREF
	int* v18; // [rsp+30h] [rbp-48h]
	int* v19; // [rsp+38h] [rbp-40h]
	__int64 v20; // [rsp+40h] [rbp-38h]
	__int64 v21; // [rsp+48h] [rbp-30h]
	__int64 v22; // [rsp+50h] [rbp-28h]

	v0 = 1000;
	if (!*((_QWORD*)&xmmword_140C67080 + 1))
		return 2147500037i64;
	v2 = 0;
	while (1)
	{
		--v0;
		v16 = 0;
		v18 = 0i64;
		v19 = 0i64;
		v20 = 0i64;
		v3 = sub_14018B280(2i64, 0);
		v18 = v3;
		v19 = v3;
		v20 = (__int64)v3 + 2;
		sub_1407DB590(v3, dword_1409D181C, 0i64);
		v19 = v3;
		if (v3)
			*(_WORD*)v3 = 0;
		v21 = 0i64;
		v22 = 0i64;
		CurrentThreadId = GetCurrentThreadId();
		if ((_DWORD)qword_140C66F80 == CurrentThreadId)
		{
			++qword_140C66F88;
		}
		else
		{
			v5 = 0i64;
			while (_InterlockedCompareExchange64(&qword_140C66F88, 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v5 >= 0x400)
				{
					sub_14019FB60((__int64)&qword_140C66F80, CurrentThreadId);
					goto LABEL_13;
				}
			}
			LODWORD(qword_140C66F80) = CurrentThreadId;
		}
	LABEL_13:
		v6 = (__int64**)qword_140C66FA8;
		v7 = 0i64;
		v8 = *(_QWORD*)qword_140C66FA8;
		v9 = *(_QWORD**)qword_140C66FA8;
		if (*(_QWORD*)qword_140C66FA8 == qword_140C66FA8)
			break;
		do
		{
			v9 = (_QWORD*)*v9;
			++v7;
		} while (v9 != (_QWORD*)qword_140C66FA8);
		if (!v7)
			break;
		v16 = *(_DWORD*)(v8 + 16);
		if ((char*)(v8 + 24) != v17)
		{
			sub_14001C480((__int64)v17, *(int**)(v8 + 32), *(int**)(v8 + 40));
			v6 = (__int64**)qword_140C66FA8;
		}
		v21 = *(_QWORD*)(v8 + 56);
		v22 = *(_QWORD*)(v8 + 64);
		v11 = **v6;
		v12 = (_QWORD*)(*v6)[1];
		v10 = *v6;
		*v12 = v11;
		*(_QWORD*)(v11 + 8) = v12;
		v13 = v10[4];
		if (v13)
			sub_14018B900(v13, 0);
		sub_14018B900((__int64)v10, 0);
		if ((unsigned __int64)qword_140C66F88 <= 1)
		{
			LODWORD(qword_140C66F80) = 0;
			_InterlockedExchange64(&qword_140C66F88, 0i64);
			if (qword_140C66F90)
			{
				if (!qword_140C66F98)
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C66F98, (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(qword_140C66F98);
			}
		}
		else
		{
			--qword_140C66F88;
		}
		(***((void(__fastcall****)(_QWORD, __int64*, int*)) & xmmword_140C67080 + 1))(
			*((_QWORD*)&xmmword_140C67080 + 1),
			&qword_140C66F70,
			&v16);
		++v2;
		if (v18)
			sub_14018B900((__int64)v18, 0);
		if (!v0)
			goto LABEL_40;
	}
	if ((unsigned __int64)qword_140C66F88 <= 1)
	{
		LODWORD(qword_140C66F80) = 0;
		_InterlockedExchange64(&qword_140C66F88, 0i64);
		if (qword_140C66F90)
		{
			if (!qword_140C66F98)
			{
				v15 = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C66F98, (signed __int64)v15, 0i64))
					CloseHandle(v15);
			}
			SetEvent(qword_140C66F98);
		}
	}
	else
	{
		--qword_140C66F88;
	}
	if (v18)
		sub_14018B900((__int64)v18, 0);
LABEL_40:
	result = v2;
	qword_140C670F0 += v2;
	++dword_140C670E8;
	return result;
}
// 1409D181C: using guessed type int dword_1409D181C[8];
// 140C66F70: using guessed type __int64 qword_140C66F70;
// 140C66F80: using guessed type __int64 qword_140C66F80;
// 140C66F88: using guessed type __int64 qword_140C66F88;
// 140C66F90: using guessed type __int64 qword_140C66F90;
// 140C66FA8: using guessed type __int64 qword_140C66FA8;
// 140C67080: using guessed type __int128 xmmword_140C67080;
// 140C670E8: using guessed type int dword_140C670E8;
// 140C670F0: using guessed type __int64 qword_140C670F0;
// 1400B20B0: using guessed type char var_50[8];

