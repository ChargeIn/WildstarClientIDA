#include "../winhttp.h"

//----- (00000001407234A0) ----------------------------------------------------
__int64 __fastcall sub_1407234A0(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	__int64 v6; // rcx
	__int64 v7; // r14
	unsigned int v8; // edi
	__int64 v9; // rdx
	__int64 v10; // r8
	__int64 v11; // rcx
	__int64 v12; // rax
	__int64* v13; // rax
	__int64 v14; // rax
	__int64 i; // rax
	__int64* v16; // rax
	__int64 v17; // r8
	__int64 v18; // [rsp+30h] [rbp-38h] BYREF
	__int64 v19; // [rsp+70h] [rbp+8h] BYREF
	__int64 v20; // [rsp+80h] [rbp+18h] BYREF
	__int64 v21; // [rsp+88h] [rbp+20h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	if (v2 == *(_QWORD*)(a1 + 16))
		return 0i64;
	v6 = *(_QWORD*)(a2 + 24);
	if (!v6)
		return 0i64;
	v7 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v7)
		return 0i64;
	v8 = *(_DWORD*)(v6 + 224);
	while (1)
	{
		v9 = *(_QWORD*)(v2 + 8);
		v10 = v9;
		v11 = *(_QWORD*)(v9 + 8);
		v12 = v11;
		while (v12)
		{
			if (*(_DWORD*)(v12 + 32) < v8)
			{
				v12 = *(_QWORD*)(v12 + 24);
			}
			else
			{
				v10 = v12;
				v12 = *(_QWORD*)(v12 + 16);
			}
		}
		if (v10 == v9 || v8 < *(_DWORD*)(v10 + 32))
		{
			v20 = *(_QWORD*)(v2 + 8);
			v13 = &v20;
		}
		else
		{
			v19 = v10;
			v13 = &v19;
		}
		v14 = *v13;
		if (v14 != v9)
			goto LABEL_31;
		for (i = v9; v11; v11 = *(_QWORD*)(v11 + 16))
			i = v11;
		if (i == v9 || *(_DWORD*)(i + 32))
		{
			v18 = v9;
			v16 = &v18;
		}
		else
		{
			v21 = i;
			v16 = &v21;
		}
		v14 = *v16;
		if (v14 != v9)
		{
		LABEL_31:
			v17 = *(unsigned int*)(*(_QWORD*)(v14 + 40) + 16i64);
			if (!(_DWORD)v17
				|| (*(unsigned int(__fastcall**)(__int64, __int64, __int64, __int64, _QWORD, _DWORD, __int64))(*(_QWORD*)qword_140C659A0 + 24i64))(
					qword_140C659A0,
					v7,
					v17,
					a2,
					0i64,
					0,
					v18))
			{
				return 1i64;
			}
		}
		v2 += 40i64;
		if (v2 == *(_QWORD*)(a1 + 16))
			return 0i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;

