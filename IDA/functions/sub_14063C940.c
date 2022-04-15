//----- (000000014063C940) ----------------------------------------------------
void __fastcall sub_14063C940(__int64 a1)
{
	unsigned __int16* v1; // rsi
	__int64 v2; // rbp
	__int64 v3; // rdi
	int v4; // ebx
	__int64 v5; // rax
	__int64 v6; // [rsp+20h] [rbp-88h] BYREF
	__int64 v7; // [rsp+28h] [rbp-80h]
	unsigned __int16* v8; // [rsp+48h] [rbp-60h]
	unsigned __int16* v9; // [rsp+50h] [rbp-58h]
	__int64 v10; // [rsp+68h] [rbp-40h]
	__int64 v11; // [rsp+88h] [rbp-20h]
	__int64 v12; // [rsp+90h] [rbp-18h]

	sub_14040B680(&v6, a1, 0);
	v1 = v8;
	v2 = v11;
	if (v8 != v9)
	{
		v3 = qword_140C65898;
		v4 = v11 != v12;
		v5 = sub_140605380(qword_140C65898 + 27664, v8);
		sub_140601D20(v3 + 27664, v5, v4, 512);
	}
	if (v2)
		sub_14018B900(v2, 0);
	if (v10)
		sub_14018B900(v10, 0);
	if (v1)
		sub_14018B900((__int64)v1, 0);
	if (v7)
		sub_14018B900(v7, 0);
}
// 140C65898: using guessed type __int64 qword_140C65898;

