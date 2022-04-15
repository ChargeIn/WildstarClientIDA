//----- (000000014050CF00) ----------------------------------------------------
__int64 __fastcall sub_14050CF00(_QWORD* a1)
{
	unsigned int v1; // edx
	unsigned __int64 v2; // r8
	__int64 v3; // rax
	__int16 v4; // ax
	__int64 v5; // rsi
	bool v6; // zf
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rdi
	__int64 v10; // rcx
	__int64 v11; // r8
	unsigned __int64 v12; // rbx
	__int64 v13; // rax
	__int64 v15; // [rsp+20h] [rbp-28h] BYREF
	__int64 v16; // [rsp+28h] [rbp-20h]
	__int64 v17; // [rsp+30h] [rbp-18h]
	int v18; // [rsp+58h] [rbp+10h] BYREF
	int v19; // [rsp+5Ch] [rbp+14h]

	v1 = 0;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	if (v2)
	{
		v3 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v3) + 400i64) == a1)
				break;
			v3 = ++v1;
		} while (v1 < v2);
	}
	v4 = sub_140056D60(a1, 1u);
	v5 = qword_140C65898;
	v6 = *(_DWORD*)(qword_140C65898 + 26180) == 49;
	v18 = HIBYTE(v4);
	v19 = (unsigned __int8)v4;
	if (!v6)
		return 0i64;
	v7 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(qword_140C65898 + 26176));
	if (!v7 || !*(_DWORD*)(v7 + 14040))
		return 0i64;
	v8 = sub_1403AC780(qword_140C65898 + 160, &v18);
	v9 = v8;
	if (v8 && (unsigned int)sub_140569F10(v8))
	{
		v11 = *(_QWORD*)(v9 + 72);
		if (!v11)
			v11 = *(_QWORD*)(v9 + 64) + 8i64;
		v12 = *(_QWORD*)(v5 + 5624);
		if (sub_1403B54A0(v10, *(_QWORD*)(v9 + 64), v11, *(float*)(v9 + 132)) < v12)
		{
			v15 = 0i64;
			v16 = 0i64;
			v17 = 0i64;
			v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 48i64))(v9);
			v16 = 0i64;
			v17 = 0i64;
			v15 = v13;
			sub_1403F4900(v5, 0x14Cu, (__int64)&v15);
		}
	}
	return 0i64;
}
// 14050CFFE: variable 'v10' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

