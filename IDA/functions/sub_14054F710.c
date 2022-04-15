#include "../winhttp.h"

//----- (000000014054F710) ----------------------------------------------------
__int64 __fastcall sub_14054F710(__int64 a1)
{
	__int64 v1; // rsi
	__int64 v2; // rcx
	unsigned int v3; // ebx
	int* v4; // rdx
	__int64 v5; // r15
	int* v6; // rdi
	unsigned int v7; // r12d
	__int64 v8; // r14
	__int64 v9; // rax
	int v10; // r13d
	__int64 v11; // r8
	__int64* v12; // rax
	__int64 v13; // rsi
	__int64 v14; // rax
	int v15; // r8d
	int* v16; // rax
	int* v17; // rsi
	__int64 v18; // rax
	int* v20; // [rsp+40h] [rbp-48h] BYREF
	__int64 v21; // [rsp+48h] [rbp-40h]
	unsigned int v23; // [rsp+98h] [rbp+10h] BYREF

	v1 = a1;
	v2 = qword_140C65898;
	if (!qword_140C65898 || !*(_QWORD*)(qword_140C65898 + 25744))
		return 0i64;
	v3 = 0;
	v4 = (int*)(*(_QWORD*)(v1 + 8) + 232i64);
	v21 = 0i64;
	v23 = 0;
	v5 = 0i64;
	v6 = 0i64;
	v20 = 0i64;
	if (*v4)
	{
		sub_140003460((__int64*)&v20, v4);
		v5 = v21;
		v6 = v20;
	}
	v7 = 0;
	v8 = 248i64;
	do
	{
		v9 = *(_QWORD*)(v1 + 8);
		v10 = *(_DWORD*)(v8 + v9 - 12);
		if (!v10)
			goto LABEL_26;
		v11 = *(unsigned int*)(v8 + v9);
		if ((_DWORD)v11)
		{
			if (!(*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
				+ 24i64))(
					qword_140C659A0,
					*(_QWORD*)(qword_140C65898 + 120),
					v11,
					0i64,
					0i64,
					0))
				goto LABEL_26;
		}
		v12 = (__int64*)sub_140487750(v2, *(_DWORD*)(v8 + *(_QWORD*)(v1 + 8) + 12), 1);
		v13 = (__int64)v12;
		if (v12)
		{
			v14 = *v12;
			v3 = 0;
			v23 = 0;
			if (v14)
			{
				v15 = *(_DWORD*)(v14 + 72);
				if (v15 && (unsigned int)sub_1403C9450(qword_140C65898, *(_DWORD*)(qword_140C65898 + 29008), v15))
				{
					if (*(_QWORD*)(qword_140C65898 + 120))
					{
						sub_1403F7E50(qword_140C65898, 0i64, 0, &v23, 0i64, 0, 0i64);
						v3 = v23;
					}
				LABEL_20:
					v23 = v3;
					if (v3)
						goto LABEL_31;
					goto LABEL_21;
				}
				if ((*(_BYTE*)(*(_QWORD*)v13 + 4i64) & 1) != 0)
				{
					v3 = sub_1404880F0(v13, 0, 0);
					if (v3)
						goto LABEL_20;
				}
				else
				{
					v3 = sub_140487F50(v13, 0, 0i64);
					if (v3)
						goto LABEL_20;
				}
			}
			v3 = 0;
			goto LABEL_20;
		}
	LABEL_21:
		v16 = sub_14018DB00((__int64)v6, v5 + 1, 4i64);
		v16[v5] = v10;
		v17 = v16;
		if (v6 != v16)
		{
			sub_1407DB590(v16, v6, 4 * v5);
			if (v6)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v6 - 2) + 8i64))(v6 - 4);
			v6 = v17;
		}
		v1 = a1;
		++v5;
	LABEL_26:
		++v7;
		v8 += 4i64;
	} while (v7 < 3);
	v18 = sub_140487750(v2, *(_DWORD*)(*(_QWORD*)(v1 + 8) + 400i64), 1);
	if (!v18 || (v3 = sub_140487E40(v18, 0, (unsigned int*)v6, v5, 0, 0, 0i64), (v23 = v3) == 0))
	{
		if (*(_QWORD*)(qword_140C65898 + 120))
		{
			sub_1403F7E50(qword_140C65898, (unsigned int*)v6, v5, &v23, 0i64, 0, 0i64);
			v3 = v23;
		}
	}
LABEL_31:
	if (v6)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v6 - 2) + 8i64))(v6 - 4);
	return v3;
}
// 14054F7F7: variable 'v2' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;

