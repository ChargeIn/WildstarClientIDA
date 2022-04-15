#include "../winhttp.h"

//----- (0000000140723060) ----------------------------------------------------
__int64 __fastcall sub_140723060(_QWORD* a1, __int64 a2)
{
	__int64 v2; // r8
	__int64 v6; // r12
	unsigned int v7; // ebp
	__int64 v8; // rsi
	__int64 v9; // r14
	__int64 v10; // rbx
	__int64 v11; // rdi
	int v12; // eax
	__int64 v13; // rcx
	__int64 v14; // rdx
	__int64 v15; // r8
	unsigned int v16; // edi
	__int64 v17; // r9
	__int64 v18; // r8
	__int64 v19; // rdx
	__int64 v20; // rcx
	__int64 v21; // rax
	__int64* v22; // rbx
	__int64 v23; // rbx
	__int64 i; // rax
	__int64* v25; // rbx
	__int64 v26; // r8
	__int64 v27; // [rsp+30h] [rbp-48h] BYREF
	__int64 v28; // [rsp+88h] [rbp+10h] BYREF
	__int64 v29; // [rsp+90h] [rbp+18h] BYREF
	__int64 v30; // [rsp+98h] [rbp+20h] BYREF

	v2 = *(_QWORD*)(a2 + 24);
	if (!v2)
		return 0i64;
	v6 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v6)
		return 0i64;
	v7 = *(_DWORD*)(v2 + 224);
	v8 = a1[5];
	v9 = a1[6];
	if (v8 != v9)
	{
		v10 = v8 + 4;
		if (v8 + 4 != v9)
		{
			v11 = 4i64;
			do
			{
				v12 = sub_1407DDB28();
				v10 += 4i64;
				v13 = v11 >> 2;
				v11 += 4i64;
				v14 = v12 % (v13 + 1);
				LODWORD(v13) = *(_DWORD*)(v10 - 4);
				*(_DWORD*)(v10 - 4) = *(_DWORD*)(v8 + 4 * v14);
				*(_DWORD*)(v8 + 4 * v14) = v13;
			} while (v10 != v9);
		}
	}
	v15 = a1[1];
	v16 = 0;
	if (!((a1[2] - v15) / 40))
		return 0i64;
	v17 = 0i64;
	while (1)
	{
		v18 = *(_QWORD*)(v15 + 40i64 * *(unsigned int*)(a1[5] + 4 * v17) + 8);
		v19 = v18;
		v20 = *(_QWORD*)(v18 + 8);
		v21 = v20;
		while (v21)
		{
			if (*(_DWORD*)(v21 + 32) < v7)
			{
				v21 = *(_QWORD*)(v21 + 24);
			}
			else
			{
				v19 = v21;
				v21 = *(_QWORD*)(v21 + 16);
			}
		}
		if (v19 == v18 || v7 < *(_DWORD*)(v19 + 32))
		{
			v29 = v18;
			v22 = &v29;
		}
		else
		{
			v28 = v19;
			v22 = &v28;
		}
		v23 = *v22;
		if (!v7 || v23 != v18)
			goto LABEL_37;
		for (i = v18; v20; v20 = *(_QWORD*)(v20 + 16))
			i = v20;
		if (i == v18 || *(_DWORD*)(i + 32))
		{
			v27 = v18;
			v25 = &v27;
		}
		else
		{
			v30 = i;
			v25 = &v30;
		}
		v23 = *v25;
		if (v23 != v18)
		{
		LABEL_37:
			v26 = *(unsigned int*)(*(_QWORD*)(v23 + 40) + 16i64);
			if (!(_DWORD)v26
				|| (*(unsigned int(__fastcall**)(__int64, __int64, __int64, __int64, _QWORD, _DWORD, __int64))(*(_QWORD*)qword_140C659A0 + 24i64))(
					qword_140C659A0,
					v6,
					v26,
					a2,
					0i64,
					0,
					v27))
			{
				return *(unsigned int*)(*(_QWORD*)(v23 + 40) + 12i64);
			}
		}
		v15 = a1[1];
		v17 = ++v16;
		if (v16 >= (unsigned __int64)((a1[2] - v15) / 40))
			return 0i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;

