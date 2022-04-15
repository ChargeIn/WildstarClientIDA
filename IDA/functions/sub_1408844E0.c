#include "../winhttp.h"

//----- (00000001408844E0) ----------------------------------------------------
void __fastcall sub_1408844E0(__int64 a1, char a2, char a3)
{
	_BYTE* v6; // r14
	__int128 v7; // rdi
	char v8; // cl
	__int64 v9; // rax
	__int128 v10; // [rsp+30h] [rbp-28h]

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
	v6 = 0i64;
	v7 = *(unsigned __int64*)(a1 + 120);
	if (!(_QWORD)v7)
		goto LABEL_20;
	do
	{
		v8 = *(_BYTE*)(v7 + 117);
		if ((v8 & 8) == 0)
		{
			if (a2 && (!v6 || *(_BYTE*)(v7 + 116) < v6[116]) && *(char*)(v7 + 116) < a3 && (v8 & 0x40) != 0)
				v6 = (_BYTE*)v7;
		LABEL_16:
			*((_QWORD*)&v7 + 1) = v7;
			*(_QWORD*)&v7 = *(_QWORD*)(v7 + 24);
			continue;
		}
		if (!(*(unsigned __int8(__fastcall**)(_QWORD))(*(_QWORD*)v7 + 8i64))(v7))
			goto LABEL_16;
		v9 = *(_QWORD*)(v7 + 24);
		*((_QWORD*)&v10 + 1) = *((_QWORD*)&v7 + 1);
		*(_QWORD*)&v10 = v9;
		if ((_QWORD)v7 == *(_QWORD*)(a1 + 120))
			*(_QWORD*)(a1 + 120) = v9;
		else
			*(_QWORD*)(*((_QWORD*)&v7 + 1) + 24i64) = v9;
		DWORD2(v7) = dword_140C111C0;
		(**(void(__fastcall***)(_QWORD, _QWORD))v7)(v7, 0i64);
		sub_140881720(SDWORD2(v7), v7);
		v7 = v10;
	} while ((_QWORD)v7);
	if (v6)
		(*(void(__fastcall**)(_BYTE*))(*(_QWORD*)v6 + 16i64))(v6);
LABEL_20:
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
}
// 14088456E: conditional instruction was optimized away because rdi.8!=0
// 140C111C0: using guessed type int dword_140C111C0;

