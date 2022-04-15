#include "../winhttp.h"

//----- (00000001408972B0) ----------------------------------------------------
__int16 __fastcall sub_1408972B0(__int64 a1)
{
	__int64 v1; // rax
	__int64 v2; // rdi
	__int64 v3; // rax
	__int64 v4; // rdx
	__int64 v5; // rbx
	__int64 v6; // rdx
	__int64 v7; // r8
	__int64 v8; // rax
	__int64* v9; // rdx
	int v10; // ecx
	unsigned __int16 v11; // ax
	__int64 v12; // rcx
	__int64 v13; // rbx
	__int64 v14; // rcx
	char v16; // [rsp+30h] [rbp+8h] BYREF

	LOWORD(v1) = *(_WORD*)(a1 + 74);
	v2 = a1;
	if ((__int16)v1 <= 1)
	{
		if (!(_WORD)v1)
			return v1;
		if (!*(_DWORD*)(a1 + 32))
		{
			*(_BYTE*)(a1 + 40) = 0;
			return v1;
		}
		*(_BYTE*)(a1 + 40) = 1;
		*(_DWORD*)(a1 + 32) = 0;
		v1 = *(_QWORD*)(a1 + 8);
		if (*(_QWORD*)(a1 + 16) == v1)
			return v1;
		v3 = *(_QWORD*)(a1 + 16);
		v16 = 1;
		v4 = *(_QWORD*)(v3 - 24);
	LABEL_8:
		v1 = sub_140897850(a1, v4);
		v5 = v1;
		while (1)
		{
			if (!v5)
				return v1;
			v6 = *(_QWORD*)(v2 + 16);
			v7 = 0i64;
			v8 = *(_QWORD*)(v6 - 24);
			v9 = (__int64*)(v6 - 24);
			v10 = *(_DWORD*)(v8 + 56);
			if (v10 >= 0)
			{
				if (v10 <= 1)
				{
					v11 = sub_140897BF0(v2, (__int64)v9, &v16);
				}
				else
				{
					if (v10 > 3)
						goto LABEL_16;
					v11 = sub_1408979D0(v2, v9, &v16);
				}
				v7 = v11;
			}
		LABEL_16:
			if (v16)
			{
				v12 = *(_QWORD*)(v2 + 16);
				v13 = *(_QWORD*)(v5 + 8);
				if ((*(_DWORD*)(*(_QWORD*)(v12 - 24) + 56i64) & 0xFFFFFFFD) == 0)
				{
					v14 = *(_QWORD*)(v12 - 8);
					if (v14)
						(*(void(__fastcall**)(__int64, __int64*, __int64))(*(_QWORD*)v14 + 8i64))(v14, v9, v7);
				}
				*(_QWORD*)(v2 + 16) -= 24i64;
				v4 = v13;
				a1 = v2;
				goto LABEL_8;
			}
			v5 = *(_QWORD*)(*(_QWORD*)(v5 + 32) + 8i64 * (unsigned __int16)v7);
			if ((*(unsigned __int8(__fastcall**)(__int64, __int64*))(*(_QWORD*)v5 + 8i64))(v5, v9))
			{
				LODWORD(v1) = *(_DWORD*)(v5 + 32);
				*(_DWORD*)(v2 + 32) = v1;
				*(_BYTE*)(v2 + 40) = (_DWORD)v1 != 0;
				*(_DWORD*)(v2 + 36) = *(_DWORD*)(v5 + 16);
				LOWORD(v1) = *(_WORD*)(v5 + 20);
				*(_WORD*)(v2 + 74) = v1;
				return v1;
			}
			v1 = (__int64)(*(_QWORD*)(v5 + 40) - *(_QWORD*)(v5 + 32)) >> 3;
			if ((_DWORD)v1 && *(_BYTE*)(v5 + 74))
			{
				LODWORD(v1) = sub_140897D50(v2, v5);
				if ((_DWORD)v1 != 1)
				{
					LOWORD(v1) = sub_140897DE0(v2);
					return v1;
				}
			}
			else
			{
				v5 = *(_QWORD*)(v5 + 8);
			}
			v16 = 1;
		}
	}
	LOWORD(v1) = v1 - 1;
	*(_WORD*)(a1 + 74) = v1;
	return v1;
}
// 140897383: variable 'v9' is possibly undefined

