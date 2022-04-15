#include "../winhttp.h"

//----- (00000001403FA810) ----------------------------------------------------
void __fastcall sub_1403FA810(
	__int64 a1,
	int a2,
	int a3,
	__int64 a4,
	int a5,
	int a6,
	int a7,
	int a8,
	int a9,
	int a10,
	int a11,
	int a12,
	int a13,
	int a14,
	int a15,
	__int64 a16,
	__int64 a17,
	__int64 a18,
	__int64 a19,
	__int64 a20,
	__int64 a21,
	_WORD* a22)
{
	unsigned __int64 v22; // rdi
	_WORD* v26; // rsi
	int v27; // eax
	unsigned __int64 v28; // rbx
	__int64 v29; // rax
	_DWORD v30[2]; // [rsp+20h] [rbp-58h] BYREF
	__int64 v31; // [rsp+28h] [rbp-50h]
	__int64 v32; // [rsp+30h] [rbp-48h]
	__int64 v33; // [rsp+38h] [rbp-40h]
	__int64 v34; // [rsp+40h] [rbp-38h]
	__int64 v35; // [rsp+48h] [rbp-30h]
	__int64 v36; // [rsp+50h] [rbp-28h]
	_WORD* v37; // [rsp+58h] [rbp-20h]

	v22 = 0i64;
	v26 = 0i64;
	if (!a21)
		v26 = a22;
	if ((dword_140DC27EC & 1) != 0)
	{
		v27 = dword_140DC27F8;
	}
	else
	{
		dword_140DC27EC |= 1u;
		v27 = 0;
		dword_140DC27F8 = 0;
	}
	if (!v26)
		goto LABEL_15;
	v28 = 0i64;
	if (*v26)
	{
		do
			++v28;
		while (v26[v28]);
	}
	if (v27)
	{
		v22 = qword_140DC27F0;
	}
	else
	{
		dword_140DC27F8 = 1;
		v29 = sub_140200220(0x947u);
		if (v29)
			v22 = *(unsigned int*)(v29 + 12);
		qword_140DC27F0 = v22;
	}
	if (v28 <= v22)
	{
	LABEL_15:
		v31 = a16;
		v32 = a17;
		v30[0] = a2;
		v33 = a18;
		v30[1] = a3;
		v34 = a19;
		v36 = a21;
		v35 = a20;
		v37 = v26;
		sub_1403F4900(a1 - 72, 0x23Du, (__int64)v30);
	}
}
// 140DC27EC: using guessed type int dword_140DC27EC;
// 140DC27F0: using guessed type __int64 qword_140DC27F0;
// 140DC27F8: using guessed type int dword_140DC27F8;

