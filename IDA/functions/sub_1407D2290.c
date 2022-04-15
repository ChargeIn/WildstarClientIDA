#include "../winhttp.h"

//----- (00000001407D2290) ----------------------------------------------------
__int64 __fastcall sub_1407D2290(__int64* a1, __int64 a2)
{
	__int64 v5; // rcx
	unsigned int v6; // esi
	__int64* v7; // r15
	unsigned int* v8; // rdi
	unsigned int v9; // r8d
	__int64 v10; // rdx
	unsigned int i; // ebx
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // [rsp+28h] [rbp-50h]
	int v17; // [rsp+80h] [rbp+8h] BYREF
	__int64 v18; // [rsp+90h] [rbp+18h] BYREF

	if (!(*(unsigned int(__fastcall**)(__int64*))(*a1 + 16))(a1))
		return 0i64;
	v5 = a1[46];
	if (v5)
	{
		if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v5 + 32i64))(v5, a2))
			return 0i64;
		v6 = 0;
		v7 = a1 + 47;
		v8 = (unsigned int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1[46] + 24i64))(a1[46]);
		do
		{
			v9 = v8[6];
			v10 = v8[1];
			v18 = 0i64;
			LODWORD(v16) = 1;
			if ((*(int(__fastcall**)(__int64, __int64, _QWORD, _QWORD, unsigned int, __int64, int, _DWORD, _DWORD, __int64*))(*(_QWORD*)qword_140C65670 + 88i64))(
				qword_140C65670,
				v10,
				(unsigned int)v10,
				v8[5],
				v9,
				v16,
				1,
				0,
				0,
				&v18) >= 0)
			{
				for (i = 0; i < v8[5]; ++i)
				{
					v12 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, int*, int))(*(_QWORD*)a1[46] + 72i64))(
						a1[46],
						v6,
						i,
						&v17,
						1);
					if (v12)
					{
						(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int, _QWORD))(*(_QWORD*)v18 + 96i64))(
							v18,
							i,
							v8[6],
							v12,
							v17,
							0i64);
						(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1[46] + 80i64))(a1[46], v6, i);
					}
				}
			}
			v13 = v18;
			if (*v7 != v18)
			{
				if (v18)
				{
					(**(void (***)(void))v18)();
					v13 = v18;
				}
				if (*v7)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)*v7 + 8i64))(*v7);
					v13 = v18;
				}
				*v7 = v13;
			}
			if (v13)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
			++v6;
			++v7;
		} while (v6 < 6);
		v14 = a1[46];
		if (v14)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
			a1[46] = 0i64;
		}
	}
	v15 = a1[61];
	if (v15)
	{
		if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v15 + 32i64))(v15, a2))
		{
			if (*(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1[61] + 24i64))(a1[61]) + 12) != 16)
			{
				sub_1400035B0();
				(*(void(__fastcall**)(__int64))(*(_QWORD*)a1[61] + 8i64))(a1[61]);
			}
			return 1i64;
		}
		return 0i64;
	}
	return 1i64;
}
// 1407D235C: variable 'v16' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;

