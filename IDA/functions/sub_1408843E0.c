#include "../winhttp.h"

//----- (00000001408843E0) ----------------------------------------------------
void __fastcall sub_1408843E0(__int64 a1)
{
	__int64 v2; // rax
	_QWORD* v3; // rbx
	_QWORD* v4; // rsi
	__int64 v5; // r14
	__int64 v6; // rbp
	_QWORD* v7; // [rsp+20h] [rbp-28h]

	(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 64i64))(a1);
	v2 = *(unsigned __int8*)(a1 + 192);
	if (*(_DWORD*)(a1 + 168) > (unsigned int)v2)
	{
		v3 = *(_QWORD**)(a1 + 176);
		v4 = 0i64;
		if (*(_BYTE*)(a1 + 192))
		{
			do
			{
				v4 = v3;
				v3 = (_QWORD*)*v3;
				--v2;
			} while (v2);
		}
		v5 = *(_QWORD*)(a1 + 96);
		EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 24));
		if (v3)
		{
			while (1)
			{
				v6 = *v3;
				v7 = (_QWORD*)*v3;
				if (v3 == *(_QWORD**)(a1 + 176))
					*(_QWORD*)(a1 + 176) = v6;
				else
					*v4 = v6;
				if (v3 == *(_QWORD**)(a1 + 184))
					*(_QWORD*)(a1 + 184) = v4;
				--* (_DWORD*)(a1 + 168);
				sub_140883FE0(a1, (__int64)v3);
				if (!v6)
					break;
				v3 = v7;
			}
		}
		sub_1408893C0(*(_QWORD*)(a1 + 96));
		LeaveCriticalSection((LPCRITICAL_SECTION)(v5 + 24));
	}
	sub_140885F10(a1);
}

