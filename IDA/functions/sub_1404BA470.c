//----- (00000001404BA470) ----------------------------------------------------
__int64 __fastcall sub_1404BA470(__int64 a1, __int64 a2)
{
	int* v3; // rax
	int* v4; // rbx
	unsigned int v6; // [rsp+20h] [rbp-18h] BYREF
	__int64 v7; // [rsp+28h] [rbp-10h]

	v6 = 0;
	v7 = 0i64;
	v3 = sub_1404BC890((_QWORD*)(qword_140C65898 + 30032), &v6);
	sub_14018B900(*((_QWORD*)v3 + 1), 0);
	v6 = 0;
	v7 = 0i64;
	v4 = sub_1404BC890((_QWORD*)(qword_140C65898 + 30032), &v6);
	*((_QWORD*)v4 + 1) = sub_14018E9C0(*(int**)(a2 + 24));
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

