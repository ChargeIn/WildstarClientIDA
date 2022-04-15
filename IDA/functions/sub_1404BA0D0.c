//----- (00000001404BA0D0) ----------------------------------------------------
void __fastcall sub_1404BA0D0(__int64 a1)
{
	__int64 v1; // rdi
	WCHAR* v2; // rbx
	__int64 v3[4]; // [rsp+20h] [rbp-A8h] BYREF
	__int64 v4; // [rsp+40h] [rbp-88h] BYREF
	__int64 v5; // [rsp+48h] [rbp-80h]
	__int64 v6; // [rsp+68h] [rbp-60h]
	__int64 v7; // [rsp+70h] [rbp-58h]
	__int64 v8; // [rsp+88h] [rbp-40h]
	WCHAR* v9; // [rsp+A8h] [rbp-20h]
	WCHAR* v10; // [rsp+B0h] [rbp-18h]

	sub_14040B680(&v4, a1, 0);
	v1 = v6;
	v2 = v9;
	if (v6 != v7 && v9 != v10)
	{
		v3[0] = 0i64;
		v3[1] = 0i64;
		v3[2] = v6;
		v3[3] = (unsigned int)sub_14018E820(v9);
		sub_1403F4740(qword_140C65898, 0x518u, (__int64)v3);
	}
	if (v2)
		sub_14018B900((__int64)v2, 0);
	if (v8)
		sub_14018B900(v8, 0);
	if (v1)
		sub_14018B900(v1, 0);
	if (v5)
		sub_14018B900(v5, 0);
}
// 140C65898: using guessed type __int64 qword_140C65898;

