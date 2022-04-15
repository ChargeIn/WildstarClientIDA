#include "../winhttp.h"

//----- (00000001404BFEE0) ----------------------------------------------------
void __fastcall sub_1404BFEE0(__int64* a1, __int64 a2)
{
	__int64 v2; // rbx
	__int64 v4; // rdi
	int* v5; // rax
	int* v6; // r14
	int* v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // rax
	int v10; // [rsp+20h] [rbp-48h] BYREF
	__int64 v11; // [rsp+28h] [rbp-40h]
	void(__fastcall * v12)(__int64*); // [rsp+30h] [rbp-38h]
	__int64 v13; // [rsp+38h] [rbp-30h]
	__int64 v14; // [rsp+78h] [rbp+10h] BYREF

	if (a2)
	{
		v2 = a2;
		do
		{
			v4 = a1[39];
			v5 = sub_14018DB00(a1[38], v4 + 1, 8i64);
			v6 = v5;
			*(_QWORD*)&v5[2 * v4] = v2;
			v7 = (int*)a1[38];
			if (v7 != v5)
			{
				sub_1407DB590(v5, v7, 8 * a1[39]);
				v8 = a1[38];
				if (v8)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
				a1[38] = (__int64)v6;
			}
			a1[39] = v4 + 1;
			if (!*(_QWORD*)(v2 + 704))
			{
				(**(void(__fastcall***)(__int64))v2)(v2);
				v10 = 0;
				v11 = v2;
				v12 = sub_1404C66D0;
				v13 = 0i64;
				sub_140195960(v2 + 688, 100, (__int64)&v10, 4);
				*(_DWORD*)(v2 + 760) = 0;
				*(_DWORD*)(v2 + 764) = 1;
			}
			v9 = sub_1405B1510(&qword_140C7DFB0);
			if (v9 && *(_DWORD*)(v9 + 192) == 3)
				(*(void(__fastcall**)(__int64*))(*a1 + 160))(a1);
			v14 = 0i64;
			if ((*(int(__fastcall**)(__int64, __int64*))(*(_QWORD*)v2 + 208i64))(v2, &v14) >= 0)
				(*(void(__fastcall**)(__int64*, __int64))(*a1 + 168))(a1, v14);
			v2 = *(_QWORD*)(v2 + 40);
		} while (v2);
	}
}
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

