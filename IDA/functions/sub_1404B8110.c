#include "../winhttp.h"

//----- (00000001404B8110) ----------------------------------------------------
void __fastcall sub_1404B8110(__int64 a1, int a2, int a3)
{
	__int64 v3; // rbp
	__int64* v5; // rcx
	__int64 v7; // rax
	int v8; // esi
	__int64 v9; // rcx
	unsigned __int64 v10; // rax
	unsigned __int64 i; // rbx
	_DWORD* v12; // r10
	unsigned int v13; // edx
	__int64 v14; // rbx
	__int64 v15; // rcx
	_QWORD* v16; // rax
	__int64 v17; // [rsp+20h] [rbp-18h] BYREF
	unsigned __int64 v18; // [rsp+28h] [rbp-10h]

	v3 = qword_140C659F0;
	v5 = *(__int64**)(qword_140C659F8 + 200);
	if (v5)
	{
		v7 = *v5;
		v8 = 0;
		v18 = 0i64;
		v17 = 0i64;
		if ((*(int(__fastcall**)(__int64*, __int64*))(v7 + 136))(v5, &v17) < 0)
			goto LABEL_13;
		v10 = v18;
		for (i = 0i64; i < v10; ++i)
		{
			v12 = *(_DWORD**)(v17 + 8 * i);
			if (v12)
			{
				if (a2)
				{
					v13 = v12[169];
					if (v12[168] != v13 && (!v13 || sub_1404CA4F0(v9, v13)))
					{
						v12[168] = v13;
						v12[62] = v13;
						sub_1404C6B10((__int64)v12);
					}
				}
				v8 |= (unsigned int)sub_1404B92A0(v3, *(_DWORD*)(*(_QWORD*)(v17 + 8 * i) + 496i64), 0, a3);
				v10 = v18;
			}
		}
		sub_1404B95D0(v3);
		if (!v8)
			LABEL_13:
		sub_1404B8050();
		v14 = qword_140C659F8;
		v15 = *(_QWORD*)(qword_140C659F8 + 200);
		if (v15)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
			*(_QWORD*)(v14 + 200) = 0i64;
		}
		v16 = (_QWORD*)sub_1405B1510(*(_QWORD**)(qword_140C659F0 + 824));
		if (v16)
			sub_1405AFE10(v16);
		if (v17)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v17 - 16) + 8i64))(v17 - 16);
	}
}
// 1404B81A6: variable 'v9' is possibly undefined
// 1404B81B3: variable 'v13' is possibly undefined
// 1404B81B3: variable 'v12' is possibly undefined
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C659F8: using guessed type __int64 qword_140C659F8;

