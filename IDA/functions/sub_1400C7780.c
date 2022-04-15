#include "../winhttp.h"

//----- (00000001400C7780) ----------------------------------------------------
void __fastcall sub_1400C7780(__int64 a1, __int64 a2)
{
	__int16* v4; // rcx
	_QWORD* v5; // rax
	_QWORD* v6; // rbx
	unsigned __int16* v7; // rdx
	__int16* v8; // rcx
	__int16* v9; // rax
	__int16* v10; // r9
	int v11; // esi
	__int64 v12; // rbx
	int* v13; // rax
	__int64 v14; // rbx
	int* v15; // rax
	__int64 v16; // rcx
	int* v17; // rbx
	int* v18; // rax
	__int64 v19; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-68h] BYREF
	__int64 v21; // [rsp+38h] [rbp-60h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-58h]
	__int64 v23[4]; // [rsp+50h] [rbp-48h] BYREF
	__int64 v24; // [rsp+A0h] [rbp+8h] BYREF

	v4 = &word_140B7B704;
	if (*(_QWORD*)(a2 + 536))
		v4 = *(__int16**)(a2 + 536);
	if ((unsigned int)sub_14018E2C0((__int64)v4, word_1409D2CD4))
	{
		v5 = *(_QWORD**)(a1 + 560);
		v6 = (_QWORD*)*v5;
		if ((_QWORD*)*v5 != v5)
		{
			do
			{
				v7 = (unsigned __int16*)&word_140B7B704;
				if (*(_QWORD*)(v6[2] + 536i64))
					v7 = *(unsigned __int16**)(v6[2] + 536i64);
				v8 = &word_140B7B704;
				if (*(_QWORD*)(a2 + 536))
					v8 = *(__int16**)(a2 + 536);
				if (!(unsigned int)sub_14018E2C0((__int64)v8, v7))
				{
					TlsValue = &off_140B5E648;
					v21 = 0i64;
					lpTlsValue = TlsGetValue(dwTlsIndex);
					TlsSetValue(dwTlsIndex, &TlsValue);
					v9 = *(__int16**)(a2 + 536);
					v23[0] = (__int64)TlsValue;
					v23[1] = v21;
					v10 = &word_140B7B704;
					v23[2] = (__int64)lpTlsValue;
					if (v9)
						v10 = v9;
					v24 = 0x141D0FA30i64;
					v11 = sub_1401971E0(&dword_140C8A078, 13, &v24, v10, v23);
					TlsValue = &off_140B5E648;
					TlsSetValue(dwTlsIndex, lpTlsValue);
					if (v11)
						DebugBreak();
				}
				v6 = (_QWORD*)*v6;
			} while (v6 != *(_QWORD**)(a1 + 560));
		}
	}
	(**(void(__fastcall***)(__int64))a2)(a2);
	v12 = *(_QWORD*)(a1 + 560);
	v13 = sub_14018B280(24i64, 0);
	if (v13 != (int*)-16i64)
		*((_QWORD*)v13 + 2) = a2;
	*(_QWORD*)v13 = v12;
	*((_QWORD*)v13 + 1) = *(_QWORD*)(v12 + 8);
	**(_QWORD**)(v12 + 8) = v13;
	*(_QWORD*)(v12 + 8) = v13;
	v14 = *(_QWORD*)(a1 + 576);
	v15 = sub_14018B280(24i64, 0);
	if (v15 != (int*)-16i64)
		*((_QWORD*)v15 + 2) = a2;
	*(_QWORD*)v15 = v14;
	*((_QWORD*)v15 + 1) = *(_QWORD*)(v14 + 8);
	**(_QWORD**)(v14 + 8) = v15;
	*(_QWORD*)(v14 + 8) = v15;
	v16 = *(_QWORD*)(a1 + 16);
	*(_BYTE*)(a1 + 29) |= 1u;
	if (v16)
		sub_1400C8870(v16);
	if (!*(_QWORD*)(a1 + 528))
	{
		v17 = sub_14018B280(40i64, 0);
		if (v17)
		{
			v18 = sub_14018B280(72i64, 0);
			*((_QWORD*)v17 + 2) = 0i64;
			*((_QWORD*)v17 + 1) = v18;
			*(_BYTE*)v18 = 0;
			*(_QWORD*)(*((_QWORD*)v17 + 1) + 8i64) = 0i64;
			*(_QWORD*)(*((_QWORD*)v17 + 1) + 16i64) = *((_QWORD*)v17 + 1);
			*(_QWORD*)(*((_QWORD*)v17 + 1) + 24i64) = *((_QWORD*)v17 + 1);
			*((_QWORD*)v17 + 4) = a1;
		}
		else
		{
			v17 = 0i64;
		}
		*(_QWORD*)(a1 + 528) = v17;
	}
	++* (_DWORD*)(a1 + 40);
	sub_1400C7600(a1);
	v19 = *(_QWORD*)(a1 + 16);
	*(_BYTE*)(a1 + 30) &= ~1u;
	if (v19)
	{
		if ((*(_BYTE*)(v19 + 30) & 1) != 0)
			sub_1400CB660(v19);
	}
}
// 1409D2CD4: using guessed type unsigned __int16 word_1409D2CD4[68];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C8A078: using guessed type _DWORD dword_140C8A078;

