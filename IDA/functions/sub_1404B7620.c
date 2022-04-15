#include "../winhttp.h"

//----- (00000001404B7620) ----------------------------------------------------
void __fastcall sub_1404B7620(__int64 a1, unsigned int a2)
{
	__int64 v2; // rdi
	unsigned __int64 v3; // rsi
	__int64 v4; // rbx
	unsigned int v5; // edi
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // r14
	__int64 v10; // rbp
	__int128 v11; // xmm0
	char* v12; // rbx
	unsigned int* v13; // rdi
	unsigned int v14; // esi
	__int64 v15; // rax
	__int128 v16; // [rsp+20h] [rbp-B8h] BYREF
	unsigned int v17; // [rsp+30h] [rbp-A8h]
	int v18; // [rsp+40h] [rbp-98h]
	char v19; // [rsp+44h] [rbp-94h] BYREF

	v2 = qword_140C659F0;
	v3 = a2;
	v4 = sub_1405B1510(&qword_140C7DFB0);
	if (v4)
	{
		v5 = sub_1404BC060(v2, v3);
		if (!sub_1404B7020(v6, v5) || (unsigned int)sub_1404B7130(v7, v5))
		{
			if (v3 < (__int64)(*(_QWORD*)(v4 + 256) - *(_QWORD*)(v4 + 248)) >> 3
				&& (v8 = *(_QWORD*)(*(_QWORD*)(v4 + 248) + 8 * v3)) != 0)
			{
				v9 = sub_140206C60(*(_DWORD*)(v8 + 4));
			}
			else
			{
				v9 = 0i64;
			}
			sub_1407E4830((int*)&v16, 0i64, 0x88ui64);
			v18 = 4;
			v10 = 5i64;
			v11 = *(_OWORD*)(v4 + 8);
			v17 = v5;
			v12 = &v19;
			v13 = (unsigned int*)(v9 + 72);
			v16 = v11;
			while (1)
			{
				*(_QWORD*)v12 = 0i64;
				*((_QWORD*)v12 + 1) = 0i64;
				*((_DWORD*)v12 + 4) = 0;
				if (v9)
				{
					v14 = *v13;
					if (qword_140C63840)
					{
						v15 = qword_140C63840(off_140A6A7F8, v14, qword_140C63858);
					}
					else
					{
						if (dword_140C63E00 || (int)sub_140204C40() < 0)
							goto LABEL_17;
						v15 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64C88 + 24i64))(
							qword_140C64C88,
							v14);
					}
					if (v15)
						*(_DWORD*)v12 = *(_DWORD*)(v15 + 8);
				}
			LABEL_17:
				++v13;
				v12 += 20;
				if (!--v10)
				{
					sub_1403F4900(qword_140C65898, 0x510u, (__int64)&v16);
					return;
				}
			}
		}
	}
}
// 1404B766C: variable 'v6' is possibly undefined
// 1404B7677: variable 'v7' is possibly undefined
// 140A6A7F8: using guessed type wchar_t *off_140A6A7F8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63E00: using guessed type int dword_140C63E00;
// 140C64C88: using guessed type __int64 qword_140C64C88;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

