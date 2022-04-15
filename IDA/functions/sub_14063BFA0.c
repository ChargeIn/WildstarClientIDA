//----- (000000014063BFA0) ----------------------------------------------------
void __fastcall sub_14063BFA0(__int64 a1)
{
	unsigned __int16* v1; // rdi
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64 v4; // [rsp+20h] [rbp-88h] BYREF
	__int64 v5; // [rsp+28h] [rbp-80h]
	unsigned __int16* v6; // [rsp+48h] [rbp-60h]
	unsigned __int16* v7; // [rsp+50h] [rbp-58h]
	__int64 v8; // [rsp+68h] [rbp-40h]
	__int64 v9; // [rsp+88h] [rbp-20h]

	sub_14040B680(&v4, a1, 0);
	v1 = v6;
	if (v6 != v7)
	{
		v2 = qword_140C65898;
		v3 = sub_140605380(qword_140C65898 + 27664, v6);
		sub_140601B80(v2 + 27664, v3);
	}
	if (v9)
		sub_14018B900(v9, 0);
	if (v8)
		sub_14018B900(v8, 0);
	if (v1)
		sub_14018B900((__int64)v1, 0);
	if (v5)
		sub_14018B900(v5, 0);
}
// 140C65898: using guessed type __int64 qword_140C65898;

