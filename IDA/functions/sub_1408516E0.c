#include "../winhttp.h"

//----- (00000001408516E0) ----------------------------------------------------
__int64 __fastcall sub_1408516E0(__int64* a1, unsigned int a2, int a3, char a4)
{
	__int64 v8; // rax
	_DWORD* v9; // rdi
	__int64 v10; // r14
	_DWORD* v11; // rax
	__int64* v12; // rdi
	_DWORD* v14; // rdi
	_DWORD* v15; // rax
	_DWORD* v16; // rax
	_DWORD* v17; // rcx
	__int64* v18; // rcx
	_DWORD* v19; // rax
	__int64 v20; // [rsp+28h] [rbp-30h]

	v8 = sub_14083EDE0((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 3184), a2);
	v9 = (_DWORD*)a1[6];
	v10 = v8;
	v11 = (_DWORD*)a1[5];
	if (v11 != v9)
	{
		do
		{
			if (*v11 == a3)
				break;
			v11 += 6;
		} while (v11 != v9);
		if (v11 != v9)
		{
			v12 = (__int64*)(v11 + 2);
			if (v11 != (_DWORD*)-8i64)
			{
				if (v10 == *v12)
				{
					if (v10)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 16i64))(v10);
					return 1i64;
				}
				sub_140869260(*v12);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)*v12 + 16i64))(*v12);
				v14 = (_DWORD*)a1[5];
				v15 = (_DWORD*)a1[6];
				if (v14 != v15)
				{
					do
					{
						if (*v14 == a3)
							break;
						v14 += 6;
					} while (v14 != v15);
					if (v14 != v15)
					{
						if (v14 < v15 - 6)
							qmemcpy(v14, v14 + 6, 24 * (((char*)(v15 - 6) - (char*)v14 - 1) / 0x18ui64 + 1));
						a1[6] -= 24i64;
					}
				}
			}
		}
	}
	if (!v10)
		return 16i64;
	v16 = (_DWORD*)a1[5];
	v17 = (_DWORD*)a1[6];
	LODWORD(v20) = a2;
	if (v16 == v17)
		goto LABEL_24;
	do
	{
		if (*v16 == a3)
			break;
		v16 += 6;
	} while (v16 != v17);
	if (v16 == v17 || (v18 = (__int64*)(v16 + 2), v16 == (_DWORD*)-8i64))
	{
	LABEL_24:
		v19 = (_DWORD*)sub_14084CB00((__int64)(a1 + 5));
		if (!v19)
		{
		LABEL_29:
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 16i64))(v10);
			return 52i64;
		}
		*v19 = a3;
		v18 = (__int64*)(v19 + 2);
	}
	*v18 = v10;
	v18[1] = v20;
	if (!v18)
		goto LABEL_29;
	sub_140869120(v10, a1[3]);
	if (!a4)
		return 1i64;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a1[3] + 416i64))(a1[3]);
	return 1i64;
}
// 14085183E: variable 'v20' is possibly undefined

