#include "../winhttp.h"

//----- (00000001401048D0) ----------------------------------------------------
__int64 __fastcall sub_1401048D0(_QWORD* a1, __int64 a2, __m128i* a3)
{
	int* v6; // rax
	int* v7; // rsi
	_WORD* v8; // rdi
	__int64 v9; // rax
	bool v10; // zf
	int* v11; // rdx
	__int64 v12; // rax
	int v13; // ebx
	unsigned int v14; // edi
	__int64 i; // rax
	int* v16; // rax
	__int64 v17; // r15
	char v18; // al
	__int64 v19; // rbx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-50h] BYREF
	__int128 v22; // [rsp+28h] [rbp-48h]
	__int64(__fastcall * *v23)(); // [rsp+40h] [rbp-30h] BYREF
	__int128 v24; // [rsp+48h] [rbp-28h]
	int* v25; // [rsp+58h] [rbp-18h]
	__int64 v26; // [rsp+90h] [rbp+20h] BYREF

	v6 = sub_14018B280(16i64, 0);
	v7 = v6;
	*(_QWORD*)&v24 = v6;
	*((_QWORD*)&v24 + 1) = v6;
	v25 = v6 + 4;
	if (v6)
		*(_WORD*)v6 = 0;
	v8 = *(_WORD**)(qword_140C63650 + 784);
	if (v8 && *v8)
	{
		v9 = 0i64;
		do
			v10 = v8[++v9] == 0;
		while (!v10);
		v11 = *(int**)(qword_140C63650 + 784);
		if ((2 * v9) >> 1)
			sub_14001C310(&v23, v11, (int*)&v8[v9]);
		else
			sub_1407DB590(v7, v11, 0i64);
		v12 = 0i64;
		do
			v10 = *((_WORD*)&unk_1409D4D34 + ++v12) == 0;
		while (!v10);
		sub_14001C310(&v23, (int*)&unk_1409D4D34, (int*)((char*)&unk_1409D4D34 + 2 * v12));
		v7 = (int*)v24;
	}
	if (a3)
	{
		if (sub_1400FE590(a3->m128i_i32))
			goto LABEL_24;
		if (!v8 || !*v8)
			goto LABEL_23;
		for (i = 0i64; a3->m128i_i16[i]; ++i)
			;
		sub_14001C310(&v23, a3->m128i_i32, (int*)((char*)a3->m128i_i32 + 2 * i));
		v7 = (int*)v24;
		a3 = (__m128i*)v24;
		if (sub_1400FE590((int*)v24))
		{
		LABEL_24:
			v16 = sub_14018B280(16i64, 0);
			v17 = (__int64)v16;
			if (v16)
				*(_WORD*)v16 = 0;
			v26 = 0i64;
			v18 = sub_1400E27B0(qword_140C63650, a3, &v26);
			v19 = v26;
			if (v18)
				v14 = sub_1401045A0(a1, a2, v26);
			else
				v14 = -2147467259;
			if (v19)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
			if (v17)
				sub_14018B900(v17, 0);
		}
		else
		{
		LABEL_23:
			v14 = -2147467259;
		}
	}
	else
	{
		*(_QWORD*)&v22 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v22 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v23 = TlsValue;
		v26 = 0x141D15090i64;
		v24 = v22;
		v13 = sub_1401971E0(&dword_140C8A104, 13, &v26, &v23);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v22 + 1));
		if (v13)
			DebugBreak();
		v14 = -2147024809;
	}
	if (v7)
		sub_14018B900((__int64)v7, 0);
	return v14;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C8A104: using guessed type _DWORD dword_140C8A104;

