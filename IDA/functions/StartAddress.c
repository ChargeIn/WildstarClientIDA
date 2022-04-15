#include "../winhttp.h"

#include "../winhttp.h"

//----- (000000014019F950) ----------------------------------------------------
__int64 __fastcall StartAddress(_DWORD* lpThreadParameter)
{
	__int64 v1; // rbx
	_DWORD* StackBase; // rsi
	int v4; // ebp
	int v5; // eax
	__int64 v6; // rcx

	v1 = *(_QWORD*)lpThreadParameter;
	(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(*(_QWORD*)lpThreadParameter + 80i64) + 32i64))(
		*(_QWORD*)(*(_QWORD*)lpThreadParameter + 80i64),
		0xFFFFFFFFi64);
	StackBase = NtCurrentTeb()->NtTib.StackBase;
	v4 = *(StackBase - 1);
	*(StackBase - 1) = 1;
	if (*(_DWORD*)(v1 + 64) == 1)
	{
		switch (*(_DWORD*)(v1 + 28))
		{
		case 0:
			lpThreadParameter[2] = 0;
			break;
		case 1:
			(*(void(__fastcall**)(_QWORD, unsigned __int64))(v1 + 40))(*(_QWORD*)(v1 + 32), 0x140000000ui64);
			lpThreadParameter[2] = 0;
			break;
		case 2:
			v5 = (*(__int64 (**)(void))(v1 + 40))();
			goto LABEL_12;
		case 3:
			(*(void(__fastcall**)(_QWORD, _QWORD))(v1 + 40))(*(_QWORD*)(v1 + 32), *(_QWORD*)(v1 + 48));
			lpThreadParameter[2] = 0;
			break;
		case 4:
			v5 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(v1 + 40))(*(_QWORD*)(v1 + 32), *(_QWORD*)(v1 + 48));
			goto LABEL_12;
		case 5:
			(*(void(__fastcall**)(_QWORD, __int64))(v1 + 40))(
				*(_QWORD*)(v1 + 32),
				((__int64)lpThreadParameter - *(_QWORD*)(v1 + 72)) >> 4);
			lpThreadParameter[2] = 0;
			break;
		case 6:
			v5 = (*(__int64(__fastcall**)(_QWORD, __int64))(v1 + 40))(
				*(_QWORD*)(v1 + 32),
				((__int64)lpThreadParameter - *(_QWORD*)(v1 + 72)) >> 4);
			goto LABEL_12;
		case 7:
			(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(v1 + 40))(
				*(_QWORD*)(v1 + 32),
				*(_QWORD*)(v1 + 48),
				((__int64)lpThreadParameter - *(_QWORD*)(v1 + 72)) >> 4);
			lpThreadParameter[2] = 0;
			break;
		case 8:
			v5 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64))(v1 + 40))(
				*(_QWORD*)(v1 + 32),
				*(_QWORD*)(v1 + 48),
				((__int64)lpThreadParameter - *(_QWORD*)(v1 + 72)) >> 4);
		LABEL_12:
			lpThreadParameter[2] = v5;
			break;
		default:
			break;
		}
	}
	if (!_InterlockedDecrement((volatile signed __int32*)(v1 + 68)))
	{
		v6 = *(_QWORD*)(v1 + 88);
		*(_DWORD*)(v1 + 64) = 2;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
	}
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v1 + 8i64))(v1);
	_InterlockedDecrement(&dword_140C884A4);
	*(StackBase - 1) = v4;
	return 0i64;
}
// 140C884A4: using guessed type int dword_140C884A4;

