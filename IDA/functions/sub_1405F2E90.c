#include "../winhttp.h"

//----- (00000001405F2E90) ----------------------------------------------------
__int64 __fastcall sub_1405F2E90(__int64* a1, unsigned int* a2)
{
	unsigned int* v2; // rdi
	__int64 v5; // rax
	__int64 v6; // rbx
	unsigned __int64 v7; // rbp
	int* v8; // rsi
	unsigned __int64 v9; // r15
	int v10; // edi
	int* v11; // rax
	int* v12; // r14
	__int64 v13; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v16; // rax
	__int64 v17; // rbx
	__int64 v18; // rax
	_QWORD* v19; // rcx

	v2 = a2;
	if (!(*(unsigned int(__fastcall**)(__int64*))(*a1 + 104))(a1))
		return 2147500037i64;
	v5 = a1[12];
	v6 = *(_QWORD*)(v5 + 16);
	v7 = 0i64;
	v8 = 0i64;
	v9 = 0i64;
	if (v6 != v5)
	{
		do
		{
			if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v6 + 40) + 104i64))(*(_QWORD*)(v6 + 40)))
			{
				v10 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v6 + 40) + 344i64))(*(_QWORD*)(v6 + 40));
				v11 = sub_14018DB00((__int64)v8, v9 + 1, 4i64);
				v11[v9] = v10;
				v12 = v11;
				if (v8 != v11)
				{
					sub_1407DB590(v11, v8, 4 * v9);
					if (v8)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v8 - 2) + 8i64))(v8 - 4);
					v8 = v12;
				}
				++v9;
			}
			v13 = *(_QWORD*)(v6 + 24);
			if (v13)
			{
				v6 = *(_QWORD*)(v6 + 24);
				for (i = *(_QWORD*)(v13 + 16); i; i = *(_QWORD*)(i + 16))
					v6 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v6 + 8); v6 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v6 = j;
				if (*(_QWORD*)(v6 + 24) != j)
					v6 = j;
			}
		} while (v6 != a1[12]);
		v2 = a2;
	}
	v16 = *a1;
	*((_DWORD*)a1 + 117) = 1;
	if ((*(unsigned int(__fastcall**)(__int64*))(v16 + 176))(a1))
	{
		v17 = *(_QWORD*)(qword_140C65898 + 29504);
		v18 = (*(__int64(__fastcall**)(__int64*))(*a1 + 24))(a1);
		Apollo_LUAEvent(v17, "PublicEventLeave", byte_1409ED224, v18, v2[1]);
	}
	(*(void(__fastcall**)(__int64*))(*a1 + 184))(a1);
	v19 = (_QWORD*)qword_140C65BA8;
	*(_DWORD*)(qword_140C65898 + 28568) = 1;
	sub_1405F9E30(v19, (__int64)(v19 + 36), *v2);
	if (v9)
	{
		do
			sub_1405F9E30((_QWORD*)qword_140C65BA8, qword_140C65BA8 + 320, v8[v7++]);
		while (v7 < v9);
	}
	if (v8)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v8 - 2) + 8i64))(v8 - 4);
	return 0i64;
}
// 1409ED224: using guessed type _BYTE byte_1409ED224[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65BA8: using guessed type __int64 qword_140C65BA8;

